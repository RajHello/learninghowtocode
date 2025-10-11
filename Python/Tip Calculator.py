print("Hello This Is A Tip Calculator")

bill=float(input("Your Total Bill was:$"))
tip=int(input("Amount To Be Tipped in % 10,15,20: "))
people=int(input("How Many People Are You Splitting The Bill With: "))

tip_total = tip/100
total_bill = (bill * tip_total)+ bill
final= total_bill/people
yes = round(final,2)

print("Your total per person is :$",yes)