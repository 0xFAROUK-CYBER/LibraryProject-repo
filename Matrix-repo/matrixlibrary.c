#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

// Basic Matrix Functions

void initializeMatris(int rows, int cols, int matrix[rows][cols], int value){ /*A simple for loop that will
Asign the value given to a the current matrix colomn*/
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            matrix[i][j] = value;
        }
    }
}
void printMatrix(int rows, int cols, int matrix[rows][cols]){ /* A for loop that goes into each element of
the matrix and prints it off, using nested loops to go through each row when being done with all of the 
colomns of the a certain row*/
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d", matrix[i][j]);
        }
    }
}
void inputMatrix(int rows, int cols, int matrix[rows][cols]){ /*Same approach as the initializing function, 
but instead of assigning a value, it asks for one */
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}
//Matrix Arithmetics
void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]){
/*Since both the matrices have the same rows and colomns number, we can use 2 nested loops as usual
that will sum up each of the matrices elements to each other to result in a new matrix added up*/
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void subtractMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]){
/*Same approach as the addition function, but instead of adding the elements, we subtract them*/
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}
void multiplyMatrices(int rows1, int cols1, int rows2, int cols2, int mat1[rows1][cols1], int mat2[rows2][cols2], int result[rows1][cols2]){

for(int i = 0; i < rows1; i++){
    for(int j = 0; j < cols2; j++){
        result[i][j] = 0;
        for(int k = 0; k < cols1; k++){
            result[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}
}

void scalarMultiplyMatrix(int rows, int cols, int matrix[rows][cols], int scalar){
/*Basically uses the same approach as for the addition and substraction but this time 
it multiplies each element by a given scalar*/
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            matrix[i][j] *= scalar;
        }
    }
}

//Matrix Proprities

bool isSquareMatrix(int rows, int cols){
    if(rows == cols){
        return true;
    }
    return false;
}
bool isIdentityMatrix(int size, int matrix[size][size]){ /*
Using 2 nested loops, we go through each element of the matrix, we check whether
the columns and rows position are equal, meaning it is diagonal (because all diagonal element 
have the rows and column position equal to each other) and is equal to 1, if not
, then it is not diagonal, returning false, also checks if every other element that is not diagonal 
is equal to 0
*/
    for(int i= 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i == j && matrix[i][j] != 1){
                return false;
            }
            if(i != j && matrix[i][j] != 0){
                return false;
            }
        }
    }
    return true;
}
bool isDiagonal(int size, int matrix[size][size]){
/*We have already used the same thing in the identity matrix, just using the second if statement*/
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i != j && matrix[i][j] != 0){
                return false;
            }
        }
    }
    return true;
}
bool isSymmetricMatrix(int rows, int cols, int matrix[rows][cols]){
/*We use 2 nested loops to go through each element of the matrix, and check if the element
is equal to the element that is in the same position but in the opposite row and column, if it's not
then it's not symmetric, i.e, matrix[i][j] == matrix[j][i]*/
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(matrix[i][j] != matrix[j][i]){
                return false;
            }
        }
    }
    return true;
}
bool isUpperTriangular(int rows, int cols, int matrix[rows][cols]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i > j && matrix[i][j] != 0){
                return false;
            }
        
        }
    }
return true;
}
// Matrix Operations (worst part)
void transposeMatrix(int rows, int cols, int matrix[rows][cols],int result[rows][cols]){

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            result[i][j] = matrix[j][i];
        }
    }
}

int determinantMatrix(int size, int matrix[size][size]){
    int det = 0;
    if (size == 1) {
        return matrix[0][0];
    } else if (size == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    } else {
        int temp[size][size];
        int sign = 1;
        for (int f = 0; f < size; f++) {
            int subi = 0;
            for (int i = 1; i < size; i++) {
                int subj = 0;
                for (int j = 0; j < size; j++) {
                    if (j == f) {
                        continue;
                    }
                    temp[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det += sign * matrix[0][f] * determinantMatrix(size - 1, temp);
            sign = -sign;
        }
    }
    return det;
}
void inverseMatrix(int size, double matrix[size][size], double result[size][size]) {
    if(determinantMatrix(size, matrix) == 0){ //meaning the determinant didn't change it's value 
    // after the operations of determinantMatrix, thus not being invertible
        printf("The matrix is not invertible, try with another matrix\n");
        return;
    }

    double identityMatrix[size][size*2]; // Create a temporary matrix to store the identity matrix
    for(int i = 0; i < size;i++){
        for(int j = 0; j < size; j++){
            identityMatrix[i][j] = matrix[i][j]; //storing the og matrix in the first half of the matrix
        }
        for(int j = size; j < size*2; j++){
            if(j == i + size){ //if the column is equal to the row + the size of the matrix (second half)
                identityMatrix[i][j] = 1; /*storing the identity matrix in the second half of the matrix
                instead of using if else statements, we can use a ternary operator like: 
                identityMatrix[i][j] = (j == i + size)  ; the ? checks if true, the
                : operator sets the value to 0 if not*/
            }else{
                identityMatrix[i][j] = 0;
            }
        }
        for(int i = 0; i < size; i++){
            double pivot = identityMatrix[i][i]; // this will store the pivot row elements
            // the pivot is the half part of the matrix
            // it is used to later divide the rows by the pivot
            for (int j = 0; j < size*2; j++) {
                identityMatrix[i][j] /= pivot; //dividing the row by the pivot
            }
            //after finding the pivot and dividing, we delete the other values that arent in the pivot row
            for(int o = 0; o < size; o++){
                if(o != i){
                    double valueNotPivot = identityMatrix[o][i];
                    for(int j = 0; j < size*2; j++){
                        identityMatrix[o][j] -= valueNotPivot*identityMatrix[i][j]; //deleting the values that are not pivots
                    }
                }
            }
        }

    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = identityMatrix[i][j + size];
        }
}
}
void matrixPower(int size, int matrix[size][size], int power, int result[size][size])
{
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            result[i][j] = pow(matrix[i][j], power);
        }
    }
}
//ADVANCED MATRIX FUNCTIONS

void cofactorMatrix(int size, int matrix[size][size], int cofactor[size][size]){
    /*We will create first Minor Matrixes, these are technically matrixes that are (size-1)x(size-1) 
    square matrices that take all the horizontal and vertical adjacent elements of a certain element
    in the matrix and deletes it
    Then we calculate the determinant of  that matrix
     */
    int Minor[size][size];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            int minori = 0;
            for(int k = 0; k < size; k++){
                int minorj = 0;
                for(int l = 0; l < size; l++){
                    if(k == i || l == j){
                        continue;
                    }
                    Minor[minori][minorj] = matrix[k][l];
                    minorj++;
                }
                minori++;
            }
            cofactor[i][j] = pow(-1, i + j) * determinantMatrix(size - 1, Minor);
        }
    }
}
void adjointMatrix(int size, int matrix[size][size], int adjoint[size][size]){ //the adjoint of a matrix
// is basically the transpose of the cofactor of that matrix, thus we can simply use 
// the 2 function calls here

int theCofactor[size][size] = cofactorMatrix(size, matrix, cofactor);
adjoint[size][size] = transposeMatrix(size, theCofactor, transpose);
}


int matrixRank(int size, int matrix[rows][cols], int rank){
    if(rows == cols){ //meaning the matrix is a square matrix, thus we can simply calculate
    /* the largest determinant for the square submatrices inside the og matrix*/

    
        return 0;
    }
}

// Special Matrix Operations
void swap(int *x, int *y){ //used fin the rotate matrix (which we have dealt with in the last td session)
    int temp = *x;
    *x = *y;
    *y= temp;
}

void rotateMatrix90(int size, int matrix[size][size]){
     for(int i = 0; i< size ; i++){
     for(int j = 0 ; j<size / 2; j++){
        swap(&mat[i][j], &mat[i][n-j-1]);
     }
   }
}

int traceMatrix(int size, int matrix[size][size]){
    int trace;
    for(int i = 0; i < size; i++){ 
        trace += matrix[i][i];
    }
    return trace;

}
