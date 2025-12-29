let todos = [];

function renderList() {
  const list = document.getElementById('todoList');
  list.innerHTML = '';
  
  for (let i = 0; i < todos.length; i++) {
    const li = document.createElement('li');
    
    // Create a span for the text
    const textSpan = document.createElement('span');
    textSpan.textContent = todos[i].text; // access the text property
    textSpan.className = 'todo-text';
    
    // If completed, add strikethrough
    if (todos[i].completed) {
      textSpan.style.textDecoration = 'line-through';
      textSpan.style.color = '#999';
    }
    
    // Click text to toggle complete
    textSpan.onclick = function() {
      todos[i].completed = !todos[i].completed; // toggle true/false
      renderList();
    };
    textSpan.style.cursor = 'pointer';
    
    // Create delete button
    const deleteBtn = document.createElement('button');
    deleteBtn.textContent = 'X';
    deleteBtn.className = 'delete-btn';
    deleteBtn.onclick = function() {
      todos.splice(i, 1);
      renderList();
    };
    
    li.appendChild(textSpan);
    li.appendChild(deleteBtn);
    list.appendChild(li);
  }
}

function addTodo() {
  const input = document.getElementById('todoInput');
  const text = input.value;
  
  if (text === '') return;
  
  // Store as object with text and completed status
  todos.push({ text: text, completed: false });
  input.value = '';
  renderList();
}

function resetAll() {
  todos = [];
  document.getElementById('todoList').innerHTML = '';
}

document.getElementById('addBtn').onclick = addTodo;
document.getElementById('resetBtn').onclick = resetAll;