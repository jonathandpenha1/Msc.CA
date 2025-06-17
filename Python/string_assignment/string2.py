text=input("Enter a string: ") #accepting user input
frequency={}
for char in text.lower():
    if char.isspace(): #condition to ignore spaces in the entered string
        continue
    elif char in frequency: #if the character is already stored in the dictionary, increment the value
        frequency[char]=frequency[char]+1
    else: #if this is the first occurrance of the character, set its frequency to 1
        frequency[char]=1
print("The frequency of each character in the entered string is as follows:")
for key, value in frequency.items(): #printing the key value pairs
    print(key,":",value)