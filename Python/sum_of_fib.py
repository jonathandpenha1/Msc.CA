Number = int(input("Enter the fibonacci number range: "))

n1 = 0
n2 = 1
Sum = 0

for Num in range(0, Number):
    print(n1, end = '  ')
    Sum = Sum + n1
    Next = n1 + n2
    n1 = n2
    n2 = Next

print("\nSum of Fibonacci Series Numbers: %d" %Sum)