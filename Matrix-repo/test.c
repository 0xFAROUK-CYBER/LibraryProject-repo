#include<stdio.h>
#include <windows.h>  // For Sleep() function
#include"matrixlibrary.h"




int main() {
    int choice;
        printf("Enter your choice (0-24): ");
        scanf("%d", &choice);


                      switch(choice)
                        {
                            case 1:
                            {
                                int rows,cols,value;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                printf("Enter the value to initialize: ");
                                scanf("%d",&value);
                                int matrix[rows][cols];
                                initializeMatrix(rows, cols, matrix, value);
                                printf("Initialized Matrix:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        printf("%d ",matrix[i][j]);
                                    }
                                    printf("\n");
                                }
                                printf("\n");
                                break;
                            }
                            case 2:
                            {
                                int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int matrix[rows][cols];
                                printf("Enter matrix elements:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                printf("The matrix is:\n");
                                printMatrix(rows,cols,matrix);
                                printf("\n");
                                break;
                            }
                            case 3:
                            {
                            
                               int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int matrix[rows][cols];
                                	inputMatrix(rows,cols,matrix);
                                break;
                            } 
                        
                        
                
                            case 4:
                            {
                                int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int mat1[rows][cols],mat2[rows][cols],result[rows][cols];
                                printf("Enter elements of the first matrix:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        scanf("%d",&mat1[i][j]);
                                    }
                                }
                                printf("Enter elements of the second matrix:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        scanf("%d",&mat2[i][j]);
                                    }
                                }
                                addMatrices(rows,cols,mat1,mat2,result);
                                printf("Resultant matrix after addition:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        printf("%d ",result[i][j]);
                                    }
                                    printf("\n");
                                }
                                printf("\n");
                                break;
                            }
                            case 5:
                            {
                                int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                int mat1[rows][cols],mat2[rows][cols],result[rows][cols];
                                printf("Enter elements of the first matrix:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        scanf("%d",&mat1[i][j]);
                                    }
                                }
                                printf("Enter elements of the second matrix:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        scanf("%d",&mat2[i][j]);
                                    }
                                }
                                subtractMatrices(rows,cols,mat1,mat2,result);
                                printf("Resultant matrix after subtraction:\n");
                                for(int i=0;i<rows;i++)
                                {
                                    for(int j=0;j<cols;j++)
                                    {
                                        printf("%d ",result[i][j]);
                                    }
                                    printf("\n");
                                }
                                printf("\n");
                                break;
                            }
                            case 6:
                            {
                            	int rows1,cols1,rows2,cols2;
                                printf("Enter number of rows1: ");
                                scanf("%d",&rows1);
                                printf("Enter number of columns1: ");
                                scanf("%d",&cols1);
                                printf("Enter number of rows2: ");
                                scanf("%d",&rows2);
                                printf("Enter number of columns2: ");
                                scanf("%d",&cols2);
                                int matrix1[rows1][cols1];
                                int matrix2[rows2][cols2];
                                int result[100][100];
                                printf("input matrix1: ");
                                	inputMatrix(rows1,cols1,matrix1);
                                printf("input matrix2: ");
									inputMatrix(rows2,cols2,matrix2);
multiplyMatrices(rows1, cols1,  rows2 ,cols2 , matrix1, matrix2, result);
                                break;
                            }
                            case 7:
                            {
                            	int rows1,cols1,scalar;
                                printf("Enter number of rows1: ");
                                scanf("%d",&rows1);
                                printf("Enter number of columns1: ");
                                scanf("%d",&cols1);
                                int matrix1[rows1][cols1];
                                printf("input matrix: ");
                                	inputMatrix(rows1,cols1,matrix1);
                                printf("Enter number: ");
                                scanf("%d",&scalar);
                            	
scalarMultiplyMatrix(rows1, cols1, matrix1,scalar);
                                break;
                            }
                        
                        break;
                            case 8:
                            {
                                int rows,cols;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                if(isSquareMatrix(rows,cols))
                                {
                                    printf("The matrix is a square matrix.\n");
                                } 
                                else 
                                {
                                    printf("The matrix is not a square matrix.\n");
                                } 
                                break;
                            }
                            case 9:
                            {
                                int size;
                                printf("Enter the size of the square matrix: ");
                                scanf("%d",&size);
                                int matrix[size][size];
                                printf("Enter elements of the matrix:\n");
                                for(int i=0;i<size;i++)
                                {
                                    for(int j=0;j<size;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                if(isIdentityMatrix(size,matrix))
                                {
                                    printf("The matrix is an identity matrix.\n");
                                } 
                                else 
                                {
                                    printf("The matrix is not an identity matrix.\n");
                                }
                                break;
                            }
                            case 10:
                            {
                                int size;
                                printf("Enter the size of the square matrix: ");
                                scanf("%d",&size);
                                int matrix[size][size];
                                printf("Enter elements of the matrix:\n");
                                for(int i=0;i<size;i++)
                                {
                                    for(int j=0;j<size;j++)
                                    {
                                        scanf("%d",&matrix[i][j]);
                                    }
                                }
                                if(isDiagonalMatrix(size,matrix))
                                {
                                    printf("The matrix is a diagonal matrix.\n");
                                } 
                                else
                                {
                                    printf("The matrix is not a diagonal matrix.\n");
                                }
                                break;
                            }
                            case 11:
                            {
                             int rows,cols,value;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                printf("Enter the value to initialize: ");
                                scanf("%d",&value);
                                int matrix[rows][cols];
                                initializeMatrix(rows,cols,matrix,value);

    if (isSymmetricMatrix(rows, cols, matrix)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
                                break;
                            }
                            case 12:
                            {
  int rows,cols,value;
                                printf("Enter number of rows: ");
                                scanf("%d",&rows);
                                printf("Enter number of columns: ");
                                scanf("%d",&cols);
                                printf("Enter the value to initialize: ");
                                scanf("%d",&value);
                                int matrix[rows][cols]; 
                                initializeMatrix(rows,cols,matrix,value);

    if (isUpperTriangular(rows, cols, matrix)) {
        printf("The matrix is upper triangular.\n");
    } else {
        printf("The matrix is not upper triangular.\n");
    }
                            }
                
   







            case 0:  
                printf("Exiting the program...\n");  
                break;  
            default:  
                printf("Invalid choice! Please try again.\n");  
                break;  
        }  
}