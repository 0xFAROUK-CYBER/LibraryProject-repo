#ifndef ARRAYSLIBRARY_H_INCLUDED
#define ARRAYSLIBRARY_H_INCLUDED
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
void initializeArray(int arr[], int size, int value);
void printArray(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
int sumArray(int arr[], int size);
double averrageArray(int arr[], int size);
bool isSorted(int arr[], int size);
void reverseArray(int arr[], int size);
void countEvenOdd(int arr[], int size, int *evenCount, int *oddCount);
int secondLargest(int arr[], int size);
void elementFrequency(int arr[], int size);
int removeDuplicates(int arr[], int size);
void leftShift(int arr[], int size, int rotations);
void rightShift(int arr[], int size, int rotations);
int binarySearch(int arr[], int size, int *target);
int linearSearch(int arr[], int size, int *target);
void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);
void insertionSort(int arr[], int size);
void merge(int arr[], int right, int left);
void mergeSort(int arr[], int size);
int partition(int arr[], int size);
void quickSort(int arr[], int size);
void deleteElement(int arr[], int size,int target);
int findMissingNumber(int arr[], int size);
int findMissingNumberSum(int arr[], int size);
void findParisWithSum(int arr[], int size);
void findSubArrayWithSum(int arr[], int size);
void rearrangeAlternatePositiveNegative(int arr[], int size);
int findMajorityElement(int arr[], int size);
void findDuplicates(int arr[], int size);
void findIntersection(int arr[], int size);
void findUnion(int arr[], int size);
#endif 