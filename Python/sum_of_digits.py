num = int(input("Enter a Number to find sum of digits:"))

sum=0

while num != 0:
    last = num % 10
    sum = sum + last
    num = num // 10

print("The sum is: ",sum)
