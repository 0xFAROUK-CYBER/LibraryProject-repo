#ifndef NUMBERSLIBRARY_H_INCLUDED
#define NUMBERSLIBRARY_H_INCLUDED
#include<stdio.h>
#include<math.h>
#include <stdbool.h>

//Extra
int NumberOfDigits(int num);
int absolute(int num);


// Basic Functions

int SumOfDigits( int num);
int ReverseNumber( int num);
bool isPalindrome( int num);
bool isPrime( int num);
int gcd( int a, int b);
int lcm( int a, int b);
int Combination( int n ,int r); //EXTRA FUNCTION
long Factorial( int num);
bool isEven( int num);

// Intermediate Functions
void primeFactors(int num);
bool isArmstrong(int num);
void fibonacciSeries(int num);
int sumDivisors(int num);
bool isPerfect(int num);
bool isMagic(int number);
bool isAutomorphic(int num);



// Advanced Functions
void toBinary(int num);
bool isNarcissistic(int num);
double sqrtApprox(int num);
double power(int base, int exp);
bool isHappy(int num) ;
bool isAbundant(int num);
bool isDeficient(int num);
long sumEvenFibonacci(int num);
bool isHarshad(int num);
unsigned long catalanNumber(int n);
void printPascalTriangle(int n) ;
unsigned long bellNumber(int n);
bool isKaprekar(int num);
bool isSmith(int num);
int sumOfPrimes(int n);




#endif //  NUMBERSLIBRARY_H_INCLUDED
