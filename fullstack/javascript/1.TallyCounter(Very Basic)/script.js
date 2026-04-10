let countInc = document.getElementById("countinc")
let prevShow = document.getElementById("saves")
let count = 0
//arrow funcs.
const increment = () => {
    //increments
    count = count+1
    countInc.innerText = count
    
}
const saveAll = () => {
    //saves the entries
    countstr = count + " - "
    prevShow.innerText += countstr
    console.log(count)
}

const clearall = () => {
    count = 0
    //clears the previous entries
    document.getElementById("saves").textContent='';
    countInc.innerText = count
}
