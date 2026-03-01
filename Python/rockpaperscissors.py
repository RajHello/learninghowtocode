import random

rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

choices = [rock, paper, scissors]
names = ["Rock ", "Paper ", "Scissors "]

user_score = 0
bot_score = 0

print("First to 3 wins becomes the CHAMPION!\n")

while user_score < 3 and bot_score < 3:
    
    try:
        user = int(input("Choose 0: Rock, 1: Paper, 2: Scissors: "))
    except:
        print("Please enter a number (0, 1, or 2)\n")
        continue

    if user < 0 or user > 2:
        print("Invalid choice! Try again.\n")
        continue

    print(f"\nYou chose {names[user]}")
    print(choices[user])

    print("Computer is choosing...")


    bot = random.randint(0, 2)
    print(f"Computer chose {names[bot]}")
    print(choices[bot])

    if user == bot:
        print("It's a DRAW!\n")

    elif (user == 0 and bot == 2) or \
         (user == 1 and bot == 0) or \
         (user == 2 and bot == 1):
        print("You WIN this round!\n")
        user_score += 1

    else:
        print("You LOSE this round!\n")
        bot_score += 1

    print(f"Score -> You: {user_score} | Computer: {bot_score}")
    print("-" * 40)


if user_score == 3:
    print(" CONGRATULATIONS! YOU ARE THE CHAMPION! ")
else:
    print("BRO… uninstall the game. This isn’t for you 💀😂")
    print("That wasn’t a loss… that was a public humiliation 😭🔥")

