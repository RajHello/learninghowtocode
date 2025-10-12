print("Welcome to Python Pizza Deliveries!")
print("The Cost Of The Pizzas Are As Follows:")
print("Small pizza (S): $15 \nMedium pizza (M): $20\nLarge pizza (L): $25\nAdd pepperoni for small pizza (Y or N): +$2\nAdd pepperoni for medium or large pizza (Y or N): +$3\nAdd extra cheese for any size pizza (Y or N): +$1\n")
size = input("What size pizza do you want? S, M or L: ")
pepperoni = input("Do you want pepperoni on your pizza? Y or N: ")
extra_cheese = input("Do you want extra cheese? Y or N: ")

if size =="S":
    bill=15
    if pepperoni =="Y":
        bill+=2

elif size =="M":
    bill=20
    if pepperoni =="Y":
        bill+=3

elif size=="L":
    bill=25
    if pepperoni =="Y":
        bill+=3


if extra_cheese=="Y":
    bill+=1


print(f"Your Total Bill Was:${bill}")
