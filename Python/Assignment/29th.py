# Write a Python Program to calculate Sum of Series
#   1.   1²+2²+3²+….+n²
#   2   1/1! 2/2! 3/3! …1/n!
#   3. [1+(1+2)+(1+2+3)+–+(1+2+3+–+n)]
#   4. 1 + 1/2 + 1/3 + ... + 1/n. .    

def sum_of_squares(n): #1.   1²+2²+3²+….+n²
    return sum([i**2 for i in range(1, n+1)])

#2   1/1! 2/2! 3/3! …1/n!
def sum_of_fractions(n):
    factorial = 1
    sum_of_fractions = 0
    for i in range(1, n+1):
        factorial *= i
        sum_of_fractions += i/factorial
    return sum_of_fractions

#   3. [1+(1+2)+(1+2+3)+–+(1+2+3+–+n)]
def sum_of_consecutive_sums(n):
    sum_of_sums = 0
    for i in range(1, n+1):
        sum_of_sums += sum(range(1, i+1))
    return sum_of_sums

#   4. 1 + 1/2 + 1/3 + ... + 1/n. . 
def sum_of_reciprocals(n):
    return sum([1/i for i in range(1, n+1)])

n = input("Enter a Number: ")

print("Sum of squares:", sum_of_squares(n))
print("Sum of fractions:", sum_of_fractions(n))
print("Sum of consecutive sums:", sum_of_consecutive_sums(n))
print("Sum of reciprocals:", sum_of_reciprocals(n))