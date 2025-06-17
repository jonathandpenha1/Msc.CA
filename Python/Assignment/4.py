def check_duplicates(list):
    unique_elements = set()
    for element in list:
        if element in unique_elements:
            return True
        else:
            unique_elements.add(element)
    return False

my_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]
print(check_duplicates(my_list))  

my_list = [1, 2, 3, 4, 4, 5, 6, 7, 8, 9, 10, 1]
print(check_duplicates(my_list))  

my_list = ['apple', 'banana', 'orange', 'grapes', 'watermelon', 'grapes']
print(check_duplicates(my_list))  
