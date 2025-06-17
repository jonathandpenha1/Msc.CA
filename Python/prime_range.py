num = int(input("Enter Range of Number to print for prime: "))

print ("The Prime Numbers in the range are: ")  
for number in range (1, num + 1):  
    if number > 1:  
        for i in range (2, number):  
            if (number % i) == 0:  
                break  
        else:  
            print (number)  