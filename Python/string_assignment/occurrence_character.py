str= str(input("Enter string: "))
c = 'a'

res = 0
     
for i in range(len(str)) :
    if (str[i] == c):
        res = res + 1

print("Number of occurence of character 'a': ", res)