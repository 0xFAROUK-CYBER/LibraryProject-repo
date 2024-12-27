#ifndef NUMBERSLIBRARY_H_INCLUDED
#define NUMBERSLIBRARY_H_INCLUDED
#include<stdio.h>
#include<math.h>
#include <stdbool.h>


int SumOfDigits( int num);
int ReverseNumber( int num);
bool isPalindrome( int num);
bool isPrime( int num);
int gcd( int a, int b);
int lcm( int a, int b);
long Factorial( int num);
bool isEven( int num);
void primeFactors(int num);
bool isArmstrong(int num);
void fibonacciSeries(int num);
int sumDivisors(int num);
bool isPerfect(int num);
bool isMagic(int num);
bool isAutomorphic(int num);
void toBinary(int num);
bool isNarcissistic(int num);
double sqrtApprox(int num);
double power(int base, int exp);
bool isHappy(int num);
bool isAbundant(int num);
bool isDeficient(int num);
int sumEvenFibonacci(int n);


//intermediate

void primeFactors(int num);
bool isArmstrong(int num);
void fibonacciSeries(int num);
int sumDivisors(int num);
bool isPerfect(int num);
bool isMagic(int num);
bool isAutomorphic(int num);

//advanced
void toBinary(int num);
bool isNarcissistic(int num);
double sqrtApprox(int num);
double power(int base, int exp);
bool isHappy(int num);
bool isAbundant(int num);
bool isDeficient(int num);
int sumEvenFibonacci(int n);
bool isHarshad(int num);
unsigned long catalanNumber(int n);
void pascalTriangle(int n);
unsigned long bellNumber(int n);
bool isKaprekar(int num);
bool isSmith(int num);
int sumOfPrimes(int n);
int NumberOfDigits(int num);
unsigned long  Combination( int n ,int r);

#endif //  NUMBERSLIBRARY_H_INCLUDED
