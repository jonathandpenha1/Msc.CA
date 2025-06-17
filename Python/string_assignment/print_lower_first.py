input = input("Enter String: ")
lower= []
upper = []
for char in input:
    if char.islower():
        lower.append(char)
    else:
        upper.append(char)
string = ''.join(lower+upper)
print("Lowercase is printed first: ",string)