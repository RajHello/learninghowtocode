let cards = [] 
let sum = 0
let hasBlackJack = false
let isAlive = false 
let message = ""

let messageEl = document.getElementById("message-el")
let sumEl = document.getElementById("sum-el")
let cardPull = document.getElementById("card-pull")

const getRandomCard = () => {
    let randomNumber = Math.floor(Math.random() * 13) + 1
    if (randomNumber > 10) return 10
    if (randomNumber === 1) return 11
    return randomNumber
}

const startGame = () => {
    isAlive = true
    hasBlackJack = false
    let firstCard = getRandomCard()
    let secondCard = getRandomCard()
    cards = [firstCard, secondCard]
    sum = firstCard + secondCard
    
    renderGame()
}

const renderGame = () => {
    sumEl.textContent = "Sum: " + sum
    cardPull.textContent = "Cards: "
    
    for (let i = 0; i < cards.length; i++) {
        cardPull.textContent += cards[i] + " "
    }
    
    if (sum <= 20) {
        message = "Do you wanna draw another card?"
    } else if (sum === 21) {
        message = "YOU GOT BLACKJACKKK YAYYY"
        hasBlackJack = true
    } else {
        message = "You lost"
        isAlive = false
    }
    
    messageEl.textContent = message
}

const newCard = () => {
    if (isAlive && !hasBlackJack) {
        let card = getRandomCard() 
        sum += card
        cards.push(card) 
        renderGame() 
    }
}