#include<stdio.h>
#include <windows.h>  // For Sleep() function
#include"arrayslibrary.h"




int main() {
    int choice;
        printf("Enter your choice (0-24): ");
        scanf("%d", &choice);


                      switch(choice)
                        {
                            case 1:
                            {
                                int size,value;
                                printf("Enter the size of the array: ");
                                scanf("%d", &size);
                                int arr[size];
                                printf("Enter the value to initialize the array with: ");
                                scanf("%d", &value);
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
                                
                                printf(" the average of array is :%.2f",averrageArray(arr,size));
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
                            case 8:
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
                            case 9:
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
                            case 10:
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
                            case 11:
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
                            case 12:
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
                            case 13:
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
                            case 14:
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
                            case 15:
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
                            case 16:
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
                            
                            case 17:
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
                            case 18:
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
                            case 19:
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
                            case 20:
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
                            case 21:
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
                            case 22:
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
                                findSubArrayWithSum(arr,size);
                                break;
                            }
                            case 23:
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
                            case 24:
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

                            
                            case 25:
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
                            case 26:
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
                            case 27:
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
                
   







            case 0:  
                printf("Exiting the program...\n");  
                break;  
            default:  
                printf("Invalid choice! Please try again.\n");  
                break;  
        }  
}
