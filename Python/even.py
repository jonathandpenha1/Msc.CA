print("Print Even numbers")

print("Enter range")
num1 = int(input("Enter Start number:"))
num2 = int(input("Enter End number:"))

for i in range(num1, num2+1):
    if i % 2 == 0:
        print(i,"\n")
