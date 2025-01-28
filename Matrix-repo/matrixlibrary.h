#ifndef ARRAYSLIBRARY_H_INCLUDED
#define ARRAYSLIBRARY_H_INCLUDED
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void initializeMatris(int rows, int cols, int matrix[rows][cols], int value);
void printMatrix(int rows, int cols, int matrix[rows][cols]);
void inputMatrix(int rows, int cols, int matrix[rows][cols]);
void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]);
void subtractMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]);
void multiplyMatrices(int rows1, int cols1, int rows2, int cols2, int mat1[rows1][cols1], int mat2[rows2][cols2], int result[rows1][cols2]);
void scalarMultiplyMatrix(int rows, int cols, int matrix[rows][cols], int scalar);
bool isSquareMatrix(int rows, int cols);
bool isIdentityMatrix(int size, int matrix[size][size]);
bool isDiagonal(int size, int matrix[size][size]);
bool isSymmetricMatrix(int rows, int cols, int matrix[rows][cols]);
bool isUpperTriangular(int rows, int cols, int matrix[rows][cols]);
void transposeMatrix(int rows, int cols, int matrix[rows][cols],int result[rows][cols]);
int determinantMatrix(int size, int matrix[size][size]);
void inverseMatrix(int size, double matrix[size][size], double result[size][size]);
void matrixPower(int size, int matrix[size][size], int power, int result[size][size]);
void cofactorMatrix(int size, int matrix[size][size], int cofactor[size][size]);
void adjointMatrix(int size, int matrix[size][size], int adjoint[size][size]);
int matrixRank(int size, int matrix[rows][cols], int rank);
void swap(int *x, int *y);
void rotateMatrix90(int size, int matrix[size][size]);
int traceMatrix(int size, int matrix[size][size]);








#endif 