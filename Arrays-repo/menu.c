#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include"numberslibrary.h"
#include"arrrayslibrary.h"
#include"matrixlibrary.h"
#include"stringlibrary.h"
int main()
{
    int lib,class,mod,num,a,b;
    do
    {
        printf("Welcome to the project menu, please select One of the choices above:\n 1- Number Operations Library .\n 2- Arrays Operations Library .\n 3- Matrices Operations Library .\n 4- Strings Operations Library .\n 5- Exit . \nPlease choose the number corresponding to your deed:\n ");
        scanf("%d",&lib);
        while(lib<1||lib>6)
        {
            printf("invalid choice,please select One of the Choices above:\n 2- Arrays Operations Library .\n 3- Matrices Operations Library .\n 5-Ciphers Library .\n 6- Exit .\nCHOICE:");
            scanf("%d",&lib);
        }
        switch(lib)
        {

            case 2:
                printf("please select One of the classes above:\n 1- Basic Arrays Operations .\n 2- Intermediate Arrays Operations .\n 3- Sorting Algorithms .\n 4- Advanced Arrays Operations .\nCLASS:");
                scanf("%d",&class);
                while(class<1||class>4)
                {
                    printf("invalid choice, please select One of the classes above:\n 1- Basic Arrays Operations .\n 2- Intermediate Arrays Operations .\n 3- Sorting Algorithms .\n 4- Advanced Arrays Operations .\nCLASS:");
                    scanf("%d",&class);
                }
                switch(class)
                {
                    case 1:
                        printf("please select One of the modules above:\n 1- Initialize Array  .\n 2- Print Array .\n 3- Find Maximum .\n 4- Find Minimum . \n 5- Calculate Sum .\n 6- Calculate Average .\n 7- Check if Sorted .\nMODULE:");
                            scanf("%d",&mod);
                        while(mod<1||mod>7)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Initialize Array  .\n 2- Print Array .\n 3- Find Maximum .\n 4- Find Minimum . \n 5- Calculate Sum .\n 6- Calculate Average .\n 7- Check if Sorted .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                                int size,value;
                                printf("Enter the size of the array: ");
                                scanf("%d",&size);
                                int arr[size];
                                printf("Enter the value to initialize the array with: ");
                                scanf("%d",&value);
                                initializeArray(arr,size,value);
                                printf("Initialized array: \n");
                                for(int i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
                            case 2:
                            {
                                int size,value;
                                printf("Enter the size of the array: ");
                                scanf("%d",&size);
                                int arr[size];
                                printf("Enter the value to initialize the array with: ");
                                scanf("%d",&value);
                                initializeArray(arr,size,value);
                                printf("Initialized array: \n");
                                printArray(arr,size);
                                break;
                            }
                            case 3:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                scanf("%d",&arr[i]);
                                }
                                printf("Maximum value is: %d\n",findMax(arr,size));
                                break;
                            }
                            case 4:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("Minimum value is: %d\n",findMin(arr,size));
                                break;
                            }
                            case 5:
                            {
                               int size,i;
                                printf("Enter the size of the array: ");
                                scanf("%d",&size);
                                int arr[size];
                                printf("entr the value of array");
                                for(int i=0;i<size;i++)
                                {
                                	scanf("%d",&arr[i]);
                                    
                                }
                                printf(" the sum of array is :%d",sumArray(arr, size));
                                break;
                            }
                            case 6:
                            {
                              int size,i;
                                printf("Enter the size of the array: ");
                                scanf("%d",&size);
                                int arr[size];
                                printf("entr the value of array");
                                for(int i=0;i<size;i++)
                                {
                                	scanf("%d",&arr[i]);
                                    
                                }
                                
                                printf(" the average of array is :%.2f",averageArray(arr,size));
                                break;
                            }
                            case 7:
                            { 
							int size, i;

  
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    if (isSorted(arr, size)) {
        printf("The array is sorted.\n");
    } else {
        printf("The array is not sorted.\n");
    }
							

                                break;
                            }
                        }
                        break;
                    case 2:
                        printf("please select One of the modules above:\n 1- Reverse Array  .\n 2- Count Even and Odd Numbers .\n 3- Find Second Largest .\n 4- Find Frequency of Elements . \n 5- Remove Duplicates .\n 6- Binary Search  .\n 7- Linear Search .\n 8- Left Shift Array .\n 9- Right Shift Array .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>9)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Reverse Array  .\n 2- Count Even and Odd Numbers .\n 3- Find Second Largest .\n 4- Find Frequency of Elements . \n 5- Remove Duplicates .\n 6- Binary Search  .\n 7- Linear Search .\n 8- Left Shift Array .\n 9- Right Shift Array .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                reverseArray(arr,size);
                                printf("Reversed array: ");
                                for(int i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                break;
                            }
                            case 2:
                            {
                                int arr[100],size,evenCount,oddCount;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                countEvenOdd(arr,size,&evenCount,&oddCount);
                                printf("Even numbers: %d\n",evenCount);
                                printf("Odd numbers: %d\n",oddCount);
                                break;
                            }
                            case 3:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("Second largest value is: %d\n",secondLargest(arr,size));
                                break;
                            }
                            case 4:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                elementFrequency(arr,size);
                                break;
                            }
                            case 5:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                size=removeDuplicates(arr,size);
                                printf("Array after removing duplicates: ");
                                for(int i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
                            case 6:
                            {
int size, target, i;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    
    printf("Enter the elements of the sorted array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the target element: ");
    scanf("%d", &target);

   
    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
                                break;
                            }
                            case 7:
                            {
                            	 int size, target, i;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the target element: ");
    scanf("%d", &target);

    
    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

                                break;
                            }
                            case 8:
                            {
                                 int size, rotations, i;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

 
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the number of rotations to the left: ");
    scanf("%d", &rotations);

   
    leftShift(arr, size, rotations);

   
    printf("Array after %d right rotations:\n", rotations);
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
                                break;
                            }
                            case 9:
                            {
            
    int size, rotations, i;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

 
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the number of rotations to the right: ");
    scanf("%d", &rotations);

   
    rightShift(arr, size, rotations);

   
    printf("Array after %d right rotations:\n", rotations);
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

                                break;
                            }
                            
                        }
                        break;
                    case 3:
                        printf("please select One of the modules above:\n 1- Bubble Sort  .\n 2- Selection Sort .\n 3- Insertion Sort .\n 4- Merge Sort . \n 5- Quick Sort .\nMODULE:");
                            scanf("%d",&mod);
                        while(mod<1||mod>5)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Bubble Sort  .\n 2- Selection Sort .\n 3- Insertion Sort .\n 4- Merge Sort . \n 5- Quick Sort .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                bubbleSort(arr,size);
                                printf("Sorted array: ");
                                for(int i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
                            case 2:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                selectionSort(arr,size);
                                printf("Sorted array: ");
                                for(int i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
                            case 3:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                insertionSort(arr,size);
                                printf("Sorted array: ");
                                for(int i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
                            case 4:
                            {

                                break;
                            }
                            case 5:
                            {

                                break;
                            }
                        }
                        break;
                    case 4:
                        printf("please select One of the modules above:\n 1- Find Missing Number .\n 2- Find Pairs with Given Sum .\n 3- Subarray with Given Sum .\n 4- Rearrange Positive and Negative Numbers  . \n 5- Find Majority Element .\n 6- Longest Increasing Subsequence .\n 7- Find Duplicates .\n 8- Find Intersection of Two Arrays .\n 9- Find Union of Two Arrays .\nMODULE:");
                            scanf("%d",&mod);
                        while(mod<1||mod>7)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Find Missing Number .\n 2- Find Pairs with Given Sum .\n 3- Subarray with Given Sum .\n 4- Rearrange Positive and Negative Numbers  . \n 5- Find Majority Element .\n 6- Longest Increasing Subsequence .\n 7- Find Duplicates .\n 8- Find Intersection of Two Arrays .\n 9- Find Union of Two Arrays .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
                            {
                                int arr[100], size;
                                printf("Enter array size (n-1): ");
                                scanf("%d", &size);
                                printf("Enter array elements (from 1 to n): ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d", &arr[i]);
                                }
                                printf("The missing number is: %d\n", findMissingNumber(arr, size));
                                break;
                            }
                            case 2:
                            {
                                int arr[100],size,sum;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("Enter the target sum: ");
                                scanf("%d",&sum);
                                findPairsWithSum(arr,size,sum);
                                break;
                            }
                            case 3:
                            {
                                int arr[100],size,sum;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                printf("Enter the target sum: ");
                                scanf("%d",&sum);
                                findSubArrayWithSum(arr,size,sum);
                                break;
                            }
                            case 4:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                rearrangeAlternatePositiveNegative(arr,size);
                                printf("Rearranged array: ");
                                for(int i=0;i<size;i++)
                                {
                                    printf("%d ",arr[i]);
                                }
                                printf("\n");
                                break;
                            }
                            case 5:
                            {
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                int result=findMajorityElement(arr,size);
                                if(result==-1) printf("No majority element found\n");
                                else printf("Majority element is: %d\n",result);
                               break; 
                            }
                            case 6:
                            { 
                                int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                            	
printf("the longest Increasing Subsequence of the array is %d",longestIncreasingSubsequence(arr,size));
                                break;
                            }
                            case 7:
                            {
                            	 int arr[100],size;
                                printf("Enter array size: ");
                                scanf("%d",&size);
                                printf("Enter array elements: ");
                                for(int i=0;i<size;i++)
                                {
                                    scanf("%d",&arr[i]);
                                }
                                findDuplicates(arr,size);
                                break;
                            }
                            case 8:
                            {
                            	 int arr1[100],size1,arr2[100],size2;
                                printf("Enter array size1: ");
                                scanf("%d",&size1);
                                printf("Enter array elements: ");
                                for(int i=0;i<size1;i++)
                                {
                                    scanf("%d",&arr1[i]);
                                }
                                 printf("Enter array size2: ");
                                scanf("%d",&size2);
                                printf("Enter array elements: ");
                                for(int i=0;i<size2;i++)
                                {
                                    scanf("%d",&arr2[i]);
                                }
                                findIntersection(arr1,size1,arr2,size2);

                                break;
                            }
                            case 9:
                            {
                            	 int arr1[100],size1,arr2[100],size2;
                                printf("Enter array size1: ");
                                scanf("%d",&size1);
                                printf("Enter array elements: ");
                                for(int i=0;i<size1;i++)
                                {
                                    scanf("%d",&arr1[i]);
                                }
                                 printf("Enter array size2: ");
                                scanf("%d",&size2);
                                printf("Enter array elements: ");
                                for(int i=0;i<size2;i++)
                                {
                                    scanf("%d",&arr2[i]);
                                }
                                
                            	findUnion(arr1, size1,arr2, size2);

                                break;
                            }
                        }
                        break;
                }
                break;
            case 3:
                printf("please select One of the classes above:\n 1- Basic Matrix Functions .\n 2- Matrix Arithmetic .\n 3- Matrix Properties and Checks .\n 4- Matrix Operations .\n 5- Advanced Matrix Functions .\n 6- Special Matrix Operations .\nCLASS:");
                scanf("%d",&class);
                while(class<1||class>6)
                {
                    printf("invalid choice, please select One of the classes above:\n 1- Basic Matrix Functions .\n 2- Matrix Arithmetic .\n 3- Matrix Properties and Checks .\n 4- Matrix Operations .\n 5- Advanced Matrix Functions .\n 6- Special Matrix Operations .\nCLASS:");
                    scanf("%d",&class);
                }
                switch(class)
                {
                    case 1:
                        printf("please select One of the modules above:\n 1- Initialize Matrix  .\n 2- Print Matrix .\n 3- Input Matrix .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>3)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Initialize Matrix  .\n 2- Print Matrix .\n 3- Input Matrix .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
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
                                initializeMatrix(rows,cols,matrix,value);
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
                        }
                        break;
                    case 2:
                        printf("please select One of the modules above:\n 1- Matrix Addition  .\n 2- Matrix Subtraction .\n 3- Matrix Multiplication .\n 4- Scalar Multiplication .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>4)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Matrix Addition  .\n 2- Matrix Subtraction .\n 3- Matrix Multiplication .\n 4- Scalar Multiplication .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
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
                            case 2:
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
                            case 3:
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
multiplyMatrices(rows1, cols1, matrix1,  rows2,cols2,matrix2, result);
                                break;
                            }
                            case 4:
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
                        }
                        break;
                    case 3:
                        printf("please select One of the modules above:\n 1- Check if Square Matrix .\n 2- Check if Identity Matrix .\n 3- Check if Diagonal Matrix .\n 4- Check if Symmetric Matrix .\n 5- Check if Upper Triangular Matrix .\nMODULE:");
                        scanf("%d",&mod);
                        while(mod<1||mod>5)
                        {
                            printf("invalid choice, please select One of the modules above:\n 1- Check if Square Matrix .\n 2- Check if Identity Matrix .\n 3- Check if Diagonal Matrix .\n 4- Check if Symmetric Matrix .\n 5- Check if Upper Triangular Matrix .\nMODULE:");
                            scanf("%d",&mod);
                        }
                        switch (mod)
                        {
                            case 1:
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
                            case 2:
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
                            case 3:
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
                            case 4:
                            {
                            int size;
                            printf("Enter the size of the matrix: ");
                            scanf("%d", &size);
                            int matrix[size][size];
                            printf("Enter the elements of the %dx%d matrix:\n", size, size);
                            for (int i = 0; i < size; i++) 
                            {
                                for (int j = 0; j < size; j++) 
                                {
                                    scanf("%d", &matrix[i][j]);
                                }
                            }

    if (isSymmetricMatrix(size, matrix)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
                                break;
                            }
                            case 5:
                            {
  int size;
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter the elements of the %dx%d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isUpperTriangular(size, matrix)) {
        printf("The matrix is upper triangular.\n");
    } else {
        printf("The matrix is not upper triangular.\n");
    }
                                break;
                            }
                        }
                        break;
                }
          
                }
                break;
            case 5:
                return 0;
                break;
                break;
        }
    
    while(1);  
}
   

