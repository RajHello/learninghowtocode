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

choice=[rock,paper,scissors]

user=int(input("Choose 0:stone,1:paper,2:scissors:"))

if user>=0 and user<=2:
    print("You Choose:",choice[user])

bot=random.randint(0,2)
print("Computer Chose:")
print(choice[bot])

if user>2 or user<0:
    print("INVALID INPUT YOU LOSE")

if user==bot:
    print("Its A DRAW")
elif user==0 and bot==1:
    print("YOU LOSE")
elif user==1 and bot==0:
    print("YOU WIN")
elif user==2 and bot==1:
    print("YOU WIN")
elif user==1 and bot==2:
    print("YOU Lose")
elif user==0 and bot==2:
    print("YOU WIN")
elif user==2 and bot==0:
    print("YOU LOSE")