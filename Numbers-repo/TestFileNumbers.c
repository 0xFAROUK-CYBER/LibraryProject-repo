#include<stdio.h>
#include <windows.h>  // For Sleep() function
#include"numberslibrary.h"
void selector_of_basic();
void testFunctions(choice);



int main(){
    int choice;
     do{
     selector_of_basic();
        printf("Enter your choice (0-32): ");  
        scanf("%d", &choice);  
     testFunctions(choice) ;
         Sleep(13000);  // Wait for 13 seconds (Windows)
        system("cls"); // Clear the console screen (Windows)
     } while (choice != 0);

return 0;


}
void selector_of_basic() {  
    printf("            WELCOME TO THE NUMBERS LIBRARY TEST FILE            \n");  
    printf("                            MENU                                \n");  
    printf("----------------------------------------------------------------\n");  
    printf("| 0    TO EXIT THE MENU                                         |\n");  
    
    // Basic Functions  
    printf("| 1    TO TEST SumOfDigits                                      |\n");  
    printf("| 2    TO TEST ReverseNumber                                    |\n");  
    printf("| 3    TO TEST isPalindrome                                     |\n");  
    printf("| 4    TO TEST isPrime                                          |\n");  
    printf("| 5    TO TEST gcd                                              |\n");  
    printf("| 6    TO TEST lcm                                              |\n");  
    printf("| 7    TO TEST Factorial                                        |\n");  
    printf("| 8    TO TEST isEven                                           |\n");  

    // Intermediate Functions  
    printf("| 9    TO TEST primeFactors                                     |\n");  
    printf("| 10   TO TEST isArmstrong                                      |\n");  
    printf("| 11   TO TEST fibonacciSeries                                  |\n");  
    printf("| 12   TO TEST sumDivisors                                      |\n");  
    printf("| 13   TO TEST isPerfect                                        |\n");  
    printf("| 14   TO TEST isMagic                                          |\n");  
    printf("| 15   TO TEST isAutomorphic                                    |\n");  

    // Advanced Functions  
    printf("| 16   TO TEST toBinary                                         |\n");  
    printf("| 17   TO TEST isNarcissistic                                   |\n");  
    printf("| 18   TO TEST sqrtApprox                                       |\n");  
    printf("| 19   TO TEST power                                            |\n");  
    printf("| 20   TO TEST isHappy                                          |\n");  
    printf("| 21   TO TEST isAbundant                                       |\n");  
    printf("| 22   TO TEST isDeficient                                      |\n");  
    printf("| 23   TO TEST sumEvenFibonacci                                 |\n");  
    printf("| 24   TO TEST isHarshad                                        |\n");  
    printf("| 25   TO TEST catalanNumber                                    |\n");  
    printf("| 26   TO TEST printPascalTriangle                              |\n");  
    printf("| 27   TO TEST bellNumber                                       |\n");  
    printf("| 28   TO TEST isKaprekar                                       |\n");  
    printf("| 29   TO TEST isSmith                                          |\n");  
    printf("| 30   TO TEST sumOfPrimes                                      |\n");  

    // Extra Functions  
    printf("| 31   TO TEST NumberOfDigits                                   |\n");  
    printf("| 32   TO TEST Combination                                      |\n");  

    printf("----------------------------------------------------------------\n");  
}


void testFunctions(choice) {   

        int num, num1, num2, base, exp, r;  

        switch (choice) {  
            case 1:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Sum of digits: %d\n", SumOfDigits(num));  
                break;  
            case 2:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Reverse of number: %d\n", ReverseNumber(num));  
                break;  
            case 3:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is palindrome: %s\n", isPalindrome(num) ? "Yes" : "No");  
                break;  
            case 4:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is prime: %s\n", isPrime(num) ? "Yes" : "No");  
                break;  
            case 5:  
                printf("Enter two numbers (a b): ");  
                scanf("%d %d", &num1, &num2);  
                printf("GCD: %d\n", gcd(num1, num2));  
                break;  
            case 6:  
                printf("Enter two numbers (a b): ");  
                scanf("%d %d", &num1, &num2);  
                printf("LCM: %d\n", lcm(num1, num2));  
                break;  
            case 7:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Factorial: %ld\n", Factorial(num));  
                break;  
            case 8:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is even: %s\n", isEven(num) ? "Yes" : "No");  
                break;  
            case 9:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Prime factors: ");  
                primeFactors(num);  
                break;  
            case 10:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is Armstrong: %s\n", isArmstrong(num) ? "Yes" : "No");  
                break;  
            case 11:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Fibonacci series up to %d:\n", num);  
                fibonacciSeries(num);  
                break;  
            case 12:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Sum of divisors: %d\n", sumDivisors(num));  
                break;  
            case 13:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is perfect: %s\n", isPerfect(num) ? "Yes" : "No");  
                break;  
            case 14:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is magic: %s\n", isMagic(num) ? "Yes" : "No");  
                break;  
            case 15:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is automorphic: %s\n", isAutomorphic(num) ? "Yes" : "No");  
                break;  
            case 16:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                toBinary(num);  
                break;  
            case 17:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is narcissistic: %s\n", isNarcissistic(num) ? "Yes" : "No");  
                break;  
            case 18:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Square root approximation: %.2f\n", sqrtApprox(num));  
                break;  
            case 19:  
                printf("Enter base and exponent (base exp): ");  
                scanf("%d %d", &base, &exp);  
                printf("Power: %.2f\n", power(base, exp));  
                break;  
            case 20:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is happy: %s\n", isHappy(num) ? "Yes" : "No");  
                break;  
            case 21:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is abundant: %s\n", isAbundant(num) ? "Yes" : "No");  
                break;  
            case 22:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is deficient: %s\n", isDeficient(num) ? "Yes" : "No");  
                break;  
            case 23:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Sum of even Fibonacci numbers up to %d: %ld\n", num, sumEvenFibonacci(num));  
                break;  
            case 24:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is Harshad: %s\n", isHarshad(num) ? "Yes" : "No");  
                break;  
            case 25:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Catalan number for %d: %lu\n", num, catalanNumber(num));  
                break;  
            case 26:  
                printf("Enter n: ");  
                scanf("%d", &num);  
                printPascalTriangle(num);  
                break;  
            case 27:  
                printf("Enter n: ");  
                scanf("%d", &num);  
                printf("Bell number for %d: %lu\n", num, bellNumber(num));  
                break;  
            case 28:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is Kaprekar: %s\n", isKaprekar(num) ? "Yes" : "No");  
                break;  
            case 29:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Is Smith: %s\n", isSmith(num) ? "Yes" : "No");  
                break;  
            case 30:  
                printf("Enter n: ");  
                scanf("%d", &num);  
                printf("Sum of primes up to %d: %d\n", num, sumOfPrimes(num));  
                break;  
            case 31:  
                printf("Enter a number: ");  
                scanf("%d", &num);  
                printf("Number of digits: %d\n", NumberOfDigits(num));  
                break;  
            case 32:  
                printf("Enter n and r (n r): ");  
                scanf("%d %d", &num1, &r);  
                printf("Combination of %d and %d: %lu\n", num1, r, Combination(num1, r));  
                break;  
            case 0:  
                printf("Exiting the program...\n");  
                break;  
            default:  
                printf("Invalid choice! Please try again.\n");  
                break;  
        }  
}  


























