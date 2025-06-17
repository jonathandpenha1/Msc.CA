import math;
def harmonic(n):
    if n <= 0:
        return "Invalid input. Please enter a positive integer!"
    
    result = 0
    for i in range(1, n+1):
        result += 1/math.pow(2,i)
    
    return result
n = int(input("Enter a positive integer: "))
result = harmonic(n)
print("The harmonic sum of", n, "is", result)