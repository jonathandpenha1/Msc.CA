num = int(input("Enter the integer number: "))  
  
reverse = 0  
  

while (num > 0):  
    remainder = num % 10  
    reverse = (reverse * 10) + remainder  
    num = num // 10  
  
print("The reverse number of number {0} is : {1}".format(num,reverse))  