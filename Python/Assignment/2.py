# Function to accept a matrix from the user
def matrix(rows, cols):
    matrix = []
    for i in range(rows):
        row = []
        for j in range(cols):
            element = int(input(f"Enter element at position ({i+1}, {j+1}): "))
            row.append(element)
        matrix.append(row)
    return matrix

# Function to display a matrix
def show(matrix):
    for row in matrix:
        print(row)

# Function to add two matrices
def add(mat1, mat2):
    result = []
    for i in range(len(mat1)):
        row = []
        for j in range(len(mat1[0])):
            element = mat1[i][j] + mat2[i][j]
            row.append(element)
        result.append(row)
    return result

# Function to multiply two matrices
def multiply(mat1, mat2):
    result = []
    for i in range(len(mat1)):
        row = []
        for j in range(len(mat2[0])):
            element = 0
            for k in range(len(mat2)):
                element += mat1[i][k] * mat2[k][j]
            row.append(element)
        result.append(row)
    return result

# mat1 from the user
print("Enter elements for the first matrix:")
mat1 = matrix(3, 4)

# mat2 from the user
print("Enter elements for the second matrix:")
mat2 = matrix(3, 4)

# show mat1
print("First matrix:")
show(mat1)

# show mat2
print("Second matrix:")
show(mat2)

# addition of the two matrices
add_result = add(mat1, mat2)

# show addition
print("Addition result:")
show(add_result)

# multiplication of the two matrices
multi_result = multiply(mat1, mat2)

# show multiplication
print("Multiplication result:")
show(multi_result)
