num1 = float(input(" First : "))
num2 = float(input(" Second : "))

a = num1
b = num2

while(num2 != 0):
    temp = num2
    num2 = num1 % num2
    num1 = temp

hcf = num1   
print("\n HCF of {0} and {1} = {2}".format(a, b, hcf))