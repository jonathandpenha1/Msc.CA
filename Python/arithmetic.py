num1 = int(input("Enter First Number:"))
num2 = int(input("Enter Second Number:"))

print(" 1.add\n 2.subract\n 3.multiply\n 4.divide ")

ch = int(input("Enter choice:"))

if ch==1:
    res = num1+num2
    print("Addition = ",res)
elif ch==2:
    res = num1-num2
    print("Subraction = ",res)
elif ch==3:
    res = num1*num2
    print("Multiplication = ",res)
elif ch==4:
    res = num1/num2
    print("Division = ",res)
else:
    print("Invalid choice")
    