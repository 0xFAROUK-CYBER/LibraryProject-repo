#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

void initializeArray(int arr[], int size, int value) {
    // Asking for the size of the Array, since for some reason we can't use arrSize yet... (weird if you ask me)
    //Will go inside a for loop depending on the size of the array that will ask for the array input by order
    for(int i = 0; i < size; i++) {
        scanf("%d\n", &value);
        arr[i] = value;
    }
}

void printArray(int arr[], int size) {
    printf("The elements for your array are: \n");
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
        
}   
int findMax(int arr[], int size) {
   int max = arr[0]; //We set the max to be the first element of the array
    for(int i = 1; i < size; i++){ /*We compare the first max which is set to element 0 to 
     the adjacent element of the array so we technically compare each element to each other */
        if (max < arr[i]){ 
            max = arr[i]; 
        }
    }
    return max;
}
int findMin(int arr[], int size) { /* We use the same method used for finding the max, but with different approach for the if statement */
    int min = arr[0];
    for(int i = 1; i < size; i++){
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}
int sumArray(int arr[], int size){  /*Basically a for loop that sums every element of the array to each other into an integer called sum
 that would be returned later */
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum+= arr[i];
    }
    return sum;
}
double avverageArray(int arr[], int size){ //uses the sum function, then divides the sum by the size of the array to calculate the avg
    int sum = sumArray(arr, size);
    return sum/size;
}
bool isSorted(int arr[], int size){ //Checks if each of the elements in the array is smaller than the adjacent element on the right
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
        return true;
    }
}
////////INTERMIDIATE LEVEL :
void reverseArray(int arr[],int size){
/*There's a for loop here that goes until the middle of the array, where each variable from the start 
is  saved into a temporary variable that saves the value of the element that will be swapped and replaces it in the
place of the actual variable*/
int tempVar;
for(int i = 0; i < size / 2; i++){ 
    tempVar = arr[size - 1 - i];
    arr[size - 1 - i] = arr[i];
    arr[i] = tempVar;
}
}

void countEvenOdd(int arr[], int size, int* evenCount, int* oddCount){ 
/*A for loop that goes through the entire array and checks if the element is even or odd,
if it's even, then a variable evenCount is to be incremented, we use pointers so the variables 
can be returned if the function is used later*/
    *evenCount = 0;
    *oddCount = 0;
for(int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0){
        (*evenCount)++;}
    else {
        (*oddCount)++;} 
    } 
}

int secondLargest(int arr[], int size){
    /*We can use here our function to find the Largest, then compare every element of the array and delete that one,
    reuse the same function to find the second largest after the deletion */
    int i = 0;
    int temp = findMax(arr, size);
    while(i < size) {
        if(arr[i] == temp){
            for(int j = i; j < size - 1; j++){
            arr[j] = arr[j+1];
            }
        }
        i++;
    }
    return findMax(arr, size - 1);
}

void elementFrequency(int arr[],int size) {
    int count;
    for(int i=0; i < size; i++ ){
        count = 1;
        for(int j= 0; j < size; j++) {
            if(arr[i] == arr[j]){
                count++;
            }
        }
    printf("The element %d's frequency is %d times", arr[i], count);
    }
}

int removeDuplicates(int arr[], int size){ /*Basically takes every element of the array and 
compares it to the whole array, if there is one duplicate it removes the element by shifting 
the array one element to the right, that results in a new array where the element is deleted 
(though we can avoid doing this step since we are only returning the number of the new array)
At the end, we return the size of the new array by using a certain integer that we used to track
the number of times where there is a duplicate*/
    int times = 0;
    for(int i = 0; i < size; i++) {

        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                times++;
                for(int k = j; k < size; k++) {
                    arr[k] = arr[k+1];
                }
            }
        }
    }
    return size - times;
}

void leftShift(int arr[], int size, int rotations){ /*Basically creates a temporary array to save
the values of the replaced first elements depending on the rotations, then goes through
multiple for loops to replace the elements on their places*/
rotations = rotations % size;
int tempArr[rotations];
for(int i = 0; i < rotations; i++){
    tempArr[i] = arr[i];
}
for(int j = 0; j < size - rotations; j++){
    arr[j] = arr[j + rotations];
}
for(int k = size - rotations, l = 0; k < size && l < rotations; k++, l++){
    arr[k] = tempArr[l];
}
}                             
void rightShift(int arr[], int size, int rotations){ /*Uses the same method as the 
left shifting, but in reverse, and only needing 2 for loops*/
    int tempArr[rotations];
    for(int i = size - rotations; i < size; i++){
        tempArr[i - size + rotations] = arr[i];
    }
    for(int j = 0; j < rotations; j++){
        arr[j + rotations] = arr[j];
        arr[j] = tempArr[j];
           }
}
int binarySearch(int arr[], int size,int target){
    !isSorted(arr, size) ? return -1: 
    int low = 0;
    int high = size - 1;
    while (high >= low) {
        int mid = low + (high - low)/2;
        if(target == arr[mid]){
            return mid;
        }
        else if(target > arr[mid]){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return -1; /*Indicates target non existant in the array, When using the library, the user
    can check if the function returns -1 */ 
} 
int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1; 
}

// SORTING ALGORITHMS 

void bubbleSort(int arr[], int size){
    int temp;
    bool isSorted;
    for(int j = 0; j < size - 1; j++){
        isSorted = true; 
    for(int i = 0; i < size - 1 - j; i++){
        if(arr[i + 1] < arr[i]){
            temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
            isSorted = false;
        }
    }
    if(isSorted){
    break; }
}
}
void selectionSort(int arr[], int size){
    int minIndex, i, tempInt; 
    for(i = 0; i < size - 1; i++)
        minIndex = i;
        for(int j = i; j < size; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;   
            }
            tempInt = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = tempInt;
        }
}
void insertionSort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int j = i -1;
        int temp = arr[i];
    while(j >= 0 && arr[j] > temp){
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = temp;
            
                 
            
        }
} 
void merge(int arr[], int right, int left, int mid){
    int number1 = mid - left + 1; 
    int number2 = right - mid;

    int leftArr[number1], rightArr[number2];
    for(int i = 0; i < number1; i++){
        leftArr[i] = arr[left + i];
    }
    for(int j = 0; j < number2; j++){
        rightArr[j] = arr[mid + 1 + j];
    } 
    int i = 0;
    int j = 0;
    int k = left;
    while(i < number1 && j < number2){
        if(leftArr[i] <= rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    while(i < number1){
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < number2){
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right){
    if(left < right){
        int mid = left + (right - left)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, right, mid);
    }
}  
void quickSort(int arr[], int low, int high){
    if(low < high){
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}
int findMissingNumber(int arr[], int size){ /* We will simply use a bruteforcing approach here,
where we will run a for loop into each element of the array to check whether all of the numbers inside 
the interval are inside the array, if it doesn't exist, then it is the missing number,
We can also use more optimal approaches, we can also use some sorting algorithm for the past functions
then apply a linear search and check if each arr[i+1] = arr[i] + 1;, or even more optimistic approches 
using sums, or hashing etc...*/

for(int i = 1; i < size - 1; i++){
    bool isFound = false;
    for(int j = 0; j < size; j++){
        if(arr[j] == i){
            isFound = true;
            break;
        }
    }
if (!isFound){
    return i;
}
}
    return -1; //Indicates that there is no missing number
}

//Alternative approach for the missing number:
int findMissingNumberSum(int arr[], int size){ /*We use our functions that we introduced before (sumArray)
to find the supposed sum of the array and the actual sum*/
    int supposedSum = (size + 1) * (size + 2) / 2;
    int sum = sumArray(arr, size);
    if(supposedSum == sum){
        return -1;
    }
    return supposedSum - sum;
}
void findPairsWithSum(int arr[], int size, int sum){ /*Basically takes each element of the 
array and sums it up to every other element and sees if it adds up to that sum, if it does 
then it will print out the pairs, there is also an if statement to check if the first element 
we take is already bigger than the given sum, if it is, then we skip this iteration of the loop 
and head to the next one, (using continue;)*/
    for(int i = 0; i < size; i++){
        if(arr[i] > sum){
            continue;
        }
        for(int j = i + 1; j < size; j++){
            if(arr[i] + arr[j] == sum){
                printf("The pair is %d and %d", arr[i], arr[j]);
            }
        }
    }
}
void findSubArrayWithSum(int arr[], int size, int sum){ 
    /*We use multiple for loops to take each element of the array and start adding it to
    every other element, if it's still smaller than the wanted sum than it adds another one, if it's
    bigger than it breaks the loop and goes into the next iteration of the bigger loop, if we find */
    for(int i = 0; i < size; i++){
        int subArray[i + 1];
        int subArraySum = 0;
        subArray[i] = arr[i];
        for(int j = i; j < size; j++){
            subArray[j] = arr[j];
            subArraySum = sumArray(subArray, j);
            if(subArraySum == sum){
                printArray(subArray, j);
            }
            if(subArraySum > sum){
                subArraySum -= arr[j];
                subArray[j] = NULL;
                continue;
            }
        }
        }
    }
void deleteElement(int arr[], int size, int *target){
        for(int i = 0; i < size; i++){
            if(arr[i] = *target){
                for(int j = i; j < size; j++){
                    arr[j] = arr[j + 1];
                }
                break;
            }
        }
}
void rearrangeAltenatePositiveNegative(int arr[], int size){
    int newArr[size];
        for(int i = 0; i < size; i++){
                if(i % 2 == 0){
                    for(int j = i; j < size; j++){
                        if(arr[j] > 0){ 
                            newArr[i] = arr[j];
                            deleteElement(arr, size, arr[j]);
                        }
                    }
                }
                if(i % 2 == 1){
                    for(int k = i; k < size; k++){
                        if(arr[k] < 0){
                            newArr[i] = arr[k];
                            deleteElement(arr, size, arr[k]); 
                        }
                    }
                }
        for(int i = 0; i < size; i++){
            if(newArr[i] == NULL){
                newArr[i] = newArr[i + 1];
            }
        }
        }
        printArray(newArr, size);
        
    }
int findMajorityElement(int arr[], int size){
    bool isThere = false;
    for(int i = 0; i < size; i++){
        int times = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                times++;
            }
        if (times > size/2){
            isThere = true;
            return arr[i];
        }
        }
    }
    if(!isThere){
        return -1;
    }
}
void findDuplicates(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(arr[i] = arr[j]){
                printf("Your duplicates are %d \n", arr[i]);
                continue;
            }
        }
    }
}
void findIntersection(int arr1[], int size1, int arr2[], int size2){
    if(size2 > size1){
        int tempArr[size1];
        }
    }

               
void findUnion(int arr1[], int size1, int arr2[], int size2){
    int unionArr[size1 + size2];
    for(int i = 0; i < size1; i++){
        unionArr[i] = arr1[i];
    }
    for(int j = 0; j < size2; j++){
        unionArr[size1 + j] = arr2[j];
    }
    for(int k = 0; k < size1 + size2; k++){
        for(int l = k; l < size1 + size2; l++){
            if(unionArr[k] == unionArr[l]){
                for(int m = l; m < size1 + size2; m++){
                    unionArr[m] = unionArr[m + 1];
                }
            }
        }
    }
    printArray(unionArr, size1 + size2);
}


