text=input("Enter a string: ") #accepting user input
lower, upper, numeric, special = 0, 0, 0, 0
for char in text:
    if char.islower(): #condition to check if a character is lowercase 
        lower+=1
    elif char.isupper(): #condition to check if a character is uppercase
        upper+=1
    elif char.isnumeric(): #condition to check if a character is numeric 
        numeric+=1
    elif char.isspace():
        continue
    else: #condition to check if a character is special
        special+=1 

print("Uppercase character count", upper)
print("Lowercase character count:", lower)
print("Numeric character count:", numeric)
print("Special character count:", special)

