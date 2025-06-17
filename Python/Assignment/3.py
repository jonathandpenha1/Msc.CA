def string_operations(string):
    # Length
    length = len(string)
    print("Length of the string:", length)

    # Uppercase
    uppercase = string.upper()
    print("Uppercase string:", uppercase)

    # Lowercase
    lowercase = string.lower()
    print("Lowercase string:", lowercase)

    # number of vowels
    vowels = ['a', 'e', 'i', 'o', 'u']
    vowel_count = 0
    for char in string:
        if char.lower() in vowels:
            vowel_count += 1
    print("Number of vowels:", vowel_count)

    # number of consonants
    consonant_count = 0
    for char in string:
        if char.isalpha() and char.lower() not in vowels:
            consonant_count += 1
    print("Number of consonants:", consonant_count)

    # Reverse
    reverse = string[::-1]
    print("Reversed string:", reverse)

    # Total number of words in the string
    words = string.split()
    word_count = len(words)
    print("Total number of words:", word_count)

    # Capitalize the first letter of each word
    capitalized_string = string.title()
    print("Capitalized string:", capitalized_string)


# Test the program
string = input("Enter a string: ")
string_operations(string)
