# Exp-8-Multidimensional-Arrays

## Aim: To study and implement C++ Multidimensional Array - Matrices

## Software Required : Visual Studio Code

## Theory:
A multi-dimensional array can be defined as an array that has more than one dimension. Having more than one dimension means that it can grow in multiple directions. Some popular multidimensional arrays include 2D arrays which grows in two dimensions, and 3D arrays which grows in three dimensions.

## 2D Array: A two-dimensional array in C++ is a collection of elements organized the form of rows and columns. It can be visualized as a table or a grid.

## A 3D array (or three-dimensional array) in C is a multi-dimensional array that contains multiple layers of two-dimensional arrays stacked on top of each other. It stores elements that can be accessed using three indices: the depth index, row index, and column index. In this article, we will learn how to pass a 3D array to a function in C.

<img width="930" height="515" alt="477910933-c7bd3fcf-b7af-4fab-9d45-977de7e00305" src="https://github.com/user-attachments/assets/a52d37f3-c3c1-49b6-8449-4b1f45558864" />

Like 1D arrays, 2D arrays can also be initialized using a list of values enclosed inside {} curly brackets, but as 2D arrays have two dimensions, the list is nested inside another list to initialize each dimension one by one. It means that each row values are nested inside one big list.

Implementation:
In this programs the usage of 2D arrays was implemented using several codes which are,

Displaying A matrix
Addition of Matrix
Multiplication of Matrices
Diagonal Addition of Matrix
Trnaspose of a Matrix
Algorithms:

# Code To Take a matrix input from the user and display it

1. Matrix Input and Display

# Algorithm:

Start

Input number of rows and columns

Declare 2D array of size [rows][columns]

Use nested loops to input elements

Use nested loops to display matrix elements

End

# Output:

<img width="372" height="351" alt="image" src="https://github.com/user-attachments/assets/11e49f61-ed29-4a89-bb22-daa4fe46c942" />

# Code for addition of two matrix.cpp

2. Addition of Two Matrices

# Algorithm:

Start

Input number of rows and columns

Declare 2D arrays: mat1, mat2, and result

Input elements of both matrices

Add corresponding elements and store in result[i][j]

Display result matrix

End

# Output:

<img width="427" height="408" alt="image" src="https://github.com/user-attachments/assets/dcab2cb9-da24-42d6-830d-0e1e74f7df5b" />

# Code for multiplication of two matrix.cpp

# Algorithm:

Start

Input dimensions of matrix 1 (m x n) and matrix 2 (x x y)

If n != x, display error and stop

Declare matrices mat1[m][n], mat2[x][y], and result[m][y]

Input elements for both matrices

Initialize all elements of result to 0

Use triple nested loop:

for i in 0 to m-1  
  for j in 0 to y-1  
    for k in 0 to n-1  
      result[i][j] += mat1[i][k] * mat2[k][j]
      
Display result matrix

End

# Output:

<img width="467" height="435" alt="image" src="https://github.com/user-attachments/assets/d0cdbbad-374b-4eb2-ad47-e03afd3b3513" />

# C++ Program to Add Diagonal Elements of a Matrix.cpp

Sum of Diagonal Elements

# Algorithm:

Start

Input matrix dimensions

If rows ≠ columns, display error and stop

Declare square matrix

Input matrix elements

Initialize diagsum = 0

Loop from i = 0 to n-1:
diagsum += mat[i][i]

Display diagsum

End

# Output:

<img width="481" height="311" alt="image" src="https://github.com/user-attachments/assets/22137091-88f8-419b-8b85-43d9914cdac8" />

# Code for transpose of two matrix.cpp

Transpose of a Matrix

# Algorithm:

Start

Input number of rows and columns

Declare original matrix and transpose matrix

Input matrix elements

Transpose logic: transpose[j][i] = mat[i][j]

Display transpose matrix

End

# Output: 
<img width="420" height="387" alt="image" src="https://github.com/user-attachments/assets/52046eba-f9b0-4a20-bb1c-0432f1790f8f" />

# Compare Elements of First Row and Second Row

Compare First and Second Rows of a Matrix

# Algorithm:

Start

Input number of rows and columns

Ensure matrix has at least 2 rows

Declare matrix and input elements

Loop through columns

Compare elements mat[0][j] and mat[1][j]

Display comparison result

End

# Output:

<img width="593" height="367" alt="image" src="https://github.com/user-attachments/assets/02b80bc3-8e7c-4053-ba0c-a8508c7d32a9" />

# Conclusion:
The implementation of Multidimensional arrays was done using the above codes.
