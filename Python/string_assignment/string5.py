text=input("Enter a string: ").lower() #accepting user input
frequency={}

for char in text:
    #condition to count the frequency of the vowels present
    if char == "a" or char=="e" or char == "i" or char=="o" or char=="u": 
        frequency[char]=text.count(char)

print("The vowels present in the entered string are as follows: ")
for key, value in frequency.items(): #printing the key value pairs
    print("Frequency of ",key,":",value)