#include<stdio.h>
#include<stdbool.h>
#include<math.h>

                            //    Extra Numbers Functions

                                                //calculating the number of digits
// Counts and returns the number of digits in the given integer
int NumberOfDigits(int num){
int digits=0 ;  // Initialize the digit count to 0

        // Special case: If the number is 0, it has exactly 1 digit
if (num == 0){
    return 1;
}

  // Loop to count the digits
while(num!=0){
digits+=1 ; // Increment the digit counter
num/=10 ; // Remove the last digit by dividing the number by 10
}
return digits ; // Return the total count of digits

}



int absolute(int num){
  if(num<0){
    num=num*(-1);
  }
  return num;
}

                            //    Basic Numbers Functions

                                                //Calculate the sum of digits of a number
// Function to calculate the sum of digits of a given number
int SumOfDigits( int num){
                                 int sum=0;       // Initialize sum to store the sum of digits

                                                  // Loop to extract and sum each digit of the number
                                while(num!=0){
                                    sum+=num%10 ; // Extract the last digit and add it to sum
                                    num/=10 ;     // Remove the last digit from the number
                                }
                                return sum;       // Return the sum of digits
                         }

                                                //Reverse a number
// Function to reverse the digits of a given number
int ReverseNumber( int num){
                                 int digit=0 ,Reverse=0;
                                 if(num<0){
                                   return -1 ;       //as it is not cear what a reverse of a negative number means
                                 }
                                                     // Loop to extract digits and buildng the reversed number
                                 while(num>0){
                                 digit=num%10;      // Extract the last digit
                                 Reverse=Reverse*10+digit; // Append the digit to the reversed number
                                 num/=10;            // Remove the last digit from the number
                                 }

                                 return Reverse;     // Return the reversed number
                            }

                                                //Check if palindrome
// Function to check if a number is a palindrome
bool isPalindrome( int num){
                                           // A negative number cannot be a palindrome
                                  if (num < 0) return false;

                                            // Compare the number with its reversed version
                                  if (num == ReverseNumber(num)) {
                                  return true;  // If equal, it's a palindrome
                                  }
                                  else {
                                  return false; // If not equal, it's not a palindrome
                                  }
                            }

                                                //see if a number is prime or not
// Function to check if a number is prime
bool isPrime( int num){
                                     // A prime number must be greater than 1
                                  if (num < 2){
                                    return false;
                                  }
                                     // Loop from 2 to sqrt(num) to check for factors
                                  for (int i = 2; i <= sqrt(num); i++) {
                                                     // If num is divisible by any number in this range, it's not prime
                                  if (num % i == 0) {
                                  return false;  // Found a divisor, so return false
                                   }
                                  }

                                  return true; // If no divisors found, num is prime
                       }



                                                //Calculate the greatest common divisor
// Function to compute the Greatest Common Divisor (GCD) using the Euclidean algorithm
int gcd( int a, int b){
                                int GCD, t;
                               // Ensure that 'a' is always the smaller number for efficiency
                                   if (a > b) {
                                       t = a;
                                       a = b;
                                       b = t;
                                     }

                              // Apply the Euclidean algorithm to compute GCD
                                  while (b != 0) {
                                        if (a % b == 0) {
                                         return b;  // If 'a' is completely divisible by 'b', return 'b' as the GCD
                                          }

                                  GCD = a % b;  // Compute the remainder
                                  a = b;        // Assign 'b' to 'a'
                                  b = GCD;      // Assign remainder to 'b'
                                  }

                              // Return 'a' when 'b' becomes 0 (final GCD result)
                                        return a;
                        }

                                                //Calculate the least common multiple
// Function to compute the Least Common Multiple (LCM)
int lcm( int a, int b){
                                    // LCM formula: LCM(a, b) = (a * b) / GCD(a, b)
                                    return (a*b)/gcd(a,b);
}

                                                //Calculate the factorial
// Function to calculate the factorial of a given number using recursion
long Factorial( int num){
                                     // Initialize the factorial result to 1
                                    long Fact=1;
                                    // Base case: Factorial of 0 or 1 is 1
                                    if(num == 0  || num ==1){
                                        return 1;
                                    }
                                    // Handle invalid input: Factorial is undefined for negative numbers
                                    else if(num<0){
                                        return -1 ; // Return -1 to indicate an error
                                    }
                                      // Recursive case: Multiply the current number by the factorial of (num - 1)
                                    else{
                                        return num*Factorial(num-1);
                                    }
}
             //EXTRA FUNCTION                                //calculating the combination nCr
// Calculates the number of ways to choose r items from a set of n items
int Combination( int n ,int r){

// Check for invalid input:
// - r should not exceed n (r > n is invalid)
// - r and n should not be negative
if (r > n || r < 0 ) {
    return 0;
}

// Calculate the combination using the formula:
// C(n, r) = n! / (r! * (n - r)!)
return  Factorial(n)/(Factorial(r)*Factorial(n-r));
}

                                                //see if the number if even or not
// Function to check if a given number is even
bool isEven( int num){
                                 // Check if the number is divisible by 2
                                 if(num % 2 == 0){
                                 return true ; // Return true if the number is even
                                 }
                                  // If the number is not divisible by 2, it is odd
                                 return false ; // Return false for odd numbers
}


                            //    Intermediate Numbers Functions

                                                //prime factorization
// Function to find and print the prime factors of a given number
void primeFactors(int num){
                                 int i=2;                  // Start with the smallest prime number
                                 if (num <= 1) {
                                 printf("No prime factors for %d\n", num);
                                 }
                                 else{
                                 printf("Prime factors of %d: ", num);
                                 while(num>1){
                                   if(isPrime(i)){                     // Check if i is a prime number
                                        while(num%i == 0){              // If num is divisible by i, repeatedly divide num by i
                                       printf("%d ",i);       // Print the prime factor
                                        num/=i;   // Reduce num
                                       }
                                     }
                                     i+=1;                        // Move to the next number
                                   }
                                  printf("\n");
                                 }
}

                                                //armstrong number
// Function to check if a given number is an Armstrong number
bool isArmstrong(int num){
                                 int armstrong=0 ; // Variable to store the sum of the cubes of the digits
                                 int temp=num ;    // Store the original number to compare later
                                   // Loop to calculate the sum of the cubes of the digits
                                while(num!=0){
                                      // Add the cube of the last digit to the sum
                                     armstrong+=pow(num%10,3);
                                      // Remove the last digit from the number
                                     num/=10;
                                 }
                                 // Restore the original number from temp
                                 num=temp;
                                 // Check if the sum of the cubes equals the original number
                                 if(armstrong==num){
                                 return true ; // The number is an Armstrong number
                                 }
                                 return false ; // The number is not an Armstrong number
}

                                                //Fibonacci sequence
// Function to print the Fibonacci sequence up to a given number of terms
void fibonacciSeries(int num){
                                 long  fibonacci=0 ;  // Variable to store each Fibonacci number
                                 if(num<0){
                                    printf("ERROR !! invalid input");
                                   return;
                                 }
                                 printf("THE FIBONACCI SEQUENCE UNTIL %d :",num);
                                  // Loop through numbers from 0 to num to calculate and print each Fibonacci term
                                 for(int i=0;i<=num ;i++){
                                  // Use Binet's formula to calculate the Fibonacci number at position i
                                 fibonacci=(1/sqrt(5))*((pow(((1+sqrt(5))/2),i))-pow(((1-sqrt(5))/2),i));
                                    // Print the Fibonacci number for the current term
                                 printf("\n%d = %ld",i,fibonacci);
                                 }
                                 printf("\n");
}

                                                //Calculate te sum of divisors
// Function to calculate the sum of all divisors of a given number
int sumDivisors(int num){
                                 int sum=num; // Initialize sum with the value of the number itself
                                  // Loop through numbers from 1 to num/2
                                  // Divisors greater than num/2 (except for num itself) are not possible
                                 for(int i=1;i<=(num/2);i++){
                                  // Check if i is a divisor of num
                                 if( num%i == 0){
                                 sum+=i ; // Add the divisor to the sum
                                 }
                                 }
                                 // Return the total sum of divisors
                                 return sum;
}

                                                //perfect number
// Function to check if a given number is a perfect number
bool isPerfect(int num){
                                    // A number is perfect if the sum of its proper divisors equals the number itself
                                    // Proper divisors are all divisors except the number itself
                                 if( sumDivisors(num) -num == num ){
                                 return true ;  // The number is perfect
                                 }
                                 else {
                                 return false ; // The number is not perfect

                                 }
                       }

                                                //magic number
// Function to check if a given number is a magic number
bool isMagic(int number){
                                 // Repeat the process until the number is reduced to a single digit
                                 while(number>=10){
                                 // Calculate the sum of digits of the number
                                 number=SumOfDigits(number); //Assign the sum of digits to num
                                 }
                                // Check if the resulting single-digit number is 1
                                 if(number ==1){
                                 return true ; // The number is a magic number
                                 }
                                 else{
                                 return false ; // The number is not a magic number
                                 }
}

                                                // check if Automorphic
/* THIS FUNCTION CALCULATES THE NUMBER OF DIGITS OF A NUMBER BY MULTIPLYING (digit) by 10 ,then checks if the rest of division of the number squared by (digit) equals the number itself,if yes then it retuns true (wich means it is an automorphic number),if no then it retuns false (wich means it is not an automorphic number) */
bool isAutomorphic(int num){
                                 int square=num*num ; // Calculate the square of the given number
                                 int digit=1 ; // Initialize digit to 1, which will be used to calculate the power of 10

                                 // Determine the place value of the number (10, 100, 1000, etc.)
                                 do{
                                 digit*=10 ; // Move to the next power of 10
                                 }while(num/digit != 0) ; // Continue until all digits of 'num' are accounted for

                                  // Check if the last digits of the square match the number itself
                                 if(square%digit ==num){
                                 return true ;  // The number is Automorphic
                                 }
                                 else{
                                 return false ; // The number is not Automorphic
                                 }
}






                            //    Advanced Numbers Functions
                                                //from decimal to binary conversion
/*THIS FUNCTION CONTINUE TO DIVIDE A POSITIVE NUMBER BY 2 AND ADDS THE REST TO A NEW VARIABLE (Bin) AND MOVES THE NEXT REST TO THE LEFT (Bin) UNTIL THE REST IS 0 ,AND THEN PRINTS  THE RESULT (Bin), IF A NUMBER IS NEGATIVE :IT INFORMS AN ERROR*/
void toBinary(int num){
                                // Initialize variables
                                 int Bin=0 ; // To store the binary representation
                                 int i=1 ;  // Multiplier for constructing the binary number
                                 printf(" %d representation in Binary is :",num);

                                 // Check for negative input
                                 if(num<0){
                                 printf(" ERROR .\n") ; // Print error message for negative numbers
                                  return ; //To exit the function
                                 }

                                 while(num > 0){
                                 Bin=Bin+(num%2)*i ; // Extract the last binary digit and add it to 'Bin'
                                 num/=2 ;           // Divide the number by 2 to process the next bit
                                 i*=10 ;            // Update the multiplier for the next binary place
                                 }
                                 printf(" %d .\n",Bin);    // Print the binary representation

}

                                                //Narcissitic number
// Function to check if a number is Narcissistic
bool isNarcissistic(int num){
                                 int digit=NumberOfDigits(num) ; // Calculate the number of digits in the number
                                 int temp=0 ; // Store the original value of the number
                                 int Narcissistic=0 ; // Initialize variable to store the calculated Narcissistic value

                                 // Loop through each digit of the number
                                 while(num!=0){
                                 Narcissistic+=pow(num%10,digit) ; // Add the power of the current digit to Narcissistic
                                 num/=10 ;                         // Remove the last digit
                                 }
                                 num=temp; //restore the value of num
                                 // Compare the calculated Narcissistic value with the original number
                                 if(Narcissistic==num){
                                 return true ; // The number is Narcissistic
                                 }
                                 return false ; // The number is not Narcissistic
}

                                                //Calculating the Square root
// Function to approximate the square root of a number using the Newton-Raphson method
double sqrtApprox(int num){
                                 // Define precision tolerance for the approximation
                                 double epsilon = 0.0001 ;
                                 double x=0.0 ,xPrev=0.0;
                                 // Handle special cases for square roots of specific numbers
                                 if (num == 0){
                                 x = 0;                   //SQRT OF ZERO IS ZERO
                                 }
                                 else if (num == 1){
                                 x = 1;                   //SQRT OF ONE IS ONE
                                 }
                                 else if( num <0 ){
                                 x=-1;                    //SQRT OF A NEGATIVE NUMBER DOES NOT EXIST
                                 }

                                  //IF A NUMBER IS GREATER THAN 1
                                 else{
                                 x =num/2;                // initial guess OF A SQRT
                                 xPrev = 0;

                                  // Iteratively improve the guess until the difference between guesses is within epsilon
                                 do {
                                 xPrev = x;              // Store the previous guess
                                 x = (xPrev + num/xPrev)/2;          // Update the guess using the Newton-Raphson formula
                                 }while (absolute(x - xPrev) > epsilon);    // Continue until the difference is within tolerance
                                 }

                                 return  x ; // Return the approximated square root
}

                                                //Calculating the power
// Function to calculate the power of a base raised to an exponent
double power(int base, int exp) {
                                double pow = 1;  // Variable to store the result of the power calculation
                                int T = 1;       // Flag to mark if the exponent was initially negative

                               // Handle the case where the base is 0
                               if (base == 0) {
                               if (exp > 0) {
                               pow = 0;  // Any positive power of 0 is 0
                               }
                               else {
                               pow = -1;  // Return a special value to signify an undefined result (e.g., 0^0 or 0^negative)
                               }
                               }

                               else {
                              // If the exponent is negative, convert it to positive for calculation
                              if (exp < 0) {
                              exp = -exp;
                              T = 0;  // Mark that the exponent was initially negative
                              }

                             // Calculate the power for positive exponent
                             for (int i = 1; i <= exp; i++) {
                             pow *= base;  // Multiply the base 'exp' times
                             }

                            // If the exponent was negative, take the reciprocal of the result
                            if (T == 0) {
                            pow = 1 / pow;  // Compute the result for a negative exponent
                            }
                            }

                           return pow;  // Return the calculated power
                            }


                                                //Happy Number
// Function to determine if a number is a "happy number"
// A happy number is defined as a number that eventually reaches 1
// when replaced by the sum of the squares of its digits repeatedly.
bool isHappy(int num) {
                          int sum = 0;  // Variable to store the sum of the squares of the digits

                          // If the number is a single digit, square it
                          if (num < 10) {
                          num = power(num, 2);  // Reuse the power function to calculate the square of the number
                          }

                         // Repeat the process until the number becomes a single digit
                          while (num >= 10) {
                         sum = 0;  // Reset the sum for the next iteration

                         // Calculate the sum of the squares of the digits of the current number
                         while (num > 0) {
                         sum += power(num % 10, 2);  // Square the last digit and add it to the sum
                         num /= 10;                  // Remove the last digit
                         }

                        // Update the number with the calculated sum
                        num = sum;
                        }

                      // Check if the resulting single-digit number is 1
                      if (num == 1) {
                      return true;  // The number is happy
                      }
                      else {
                      return false;  // The number is not happy
                      }
                      }


                                                //Abundant NUMBER
// Function to check if a number is abundant
// A number is abundant if the sum of its proper divisors (excluding itself) is greater than the number itself
bool isAbundant(int num){
                                // Check if the sum of proper divisors (excluding the number itself) is greater than the number
                                 if( sumDivisors(num) -num  > num ){
                                 return true ; // The number is abundant
                                 }
                                 else {
                                 return false ;  // The number is not abundant
                                 }
}

                                                //DEFICIENT NUMBER
// Function to check if a number is deficient
// A number is deficient if the sum of its proper divisors (excluding itself) is less than the number
bool isDeficient(int num){
                                // Check if the sum of proper divisors (excluding the number itself) is less than or equal to the number
                                 if( sumDivisors(num)  <= 2*num  && num != 0 ){
                                 return true ;  //The number is deficient
                                 }
                                 else {
                                 return false ;  // The number is not deficient
                                 }
}

                                                //SUM OF EVEN FIBONACCI NUMBERS
// Function to calculate the sum of even Fibonacci numbers up to the nth Fibonacci number
long sumEvenFibonacci(int num){
                                 long  fibonacci=0,sumfib=-1;

                                // Check if the input is non-negative
                                 if(num>=0){
                                 sumfib =0 ; // Initialize the sum of even Fibonacci numbers

                                   // Iterate through Fibonacci numbers from 1 to num
                                 for(int i=1;i<=num ;i++){
                                   // Calculate the ith Fibonacci number using Binet's formula
                                 fibonacci=(1/sqrt(5))*((pow(((1+sqrt(5))/2),i))-pow(((1-sqrt(5))/2),i));

                                   // Check if the Fibonacci number is even
                                 if(fibonacci%2 ==0 ){
                                 sumfib+=fibonacci ; // Add the even Fibonacci number to the sum
                                 }
                                 }
                                 }
                                 return sumfib ; // Return the sum of even Fibonacci numbers
}

                                                //HARSHAD NUMBER
// Function to check if a number is a Harshad (or Niven) number
// A number is Harshad if it is divisible by the sum of its digits
bool isHarshad(int num){
                                 // Check if the number is divisible by the sum of its digits
                                 if((num % SumOfDigits(num) == 0 && num > 0) || num == 0 ){
                                 return true ; // The number is a Harshad number
                                 }
                                 else {
                                 return false ; // The number is not a Harshad number
                                 }
}

                                                //CATALAN NUMBER
// Computes the nth Catalan number, which appears in combinatorial structures
unsigned long catalanNumber(int n){

                              // Return 0 for invalid input
                              if (n < 0) {
                                 return 0;
                                 }

                                 // Calculate the Catalan using the formula
                                return Factorial(2 * n) / (Factorial(n + 1) * Factorial(n));
}


                                                //PASCAL TRIANGLE
// Prints the first n rows of Pascal's Triangle
void printPascalTriangle(int n) {
                                 for (int i = 0; i < n; i++) {
                                     // Print spaces for alignment
                                 for (int space = 0; space < n - i - 1; space++) {
                                 printf("  ");
                                 }
                                 // Print values in the row n
                                 for (int j = 0; j <= i; j++) {
                                 printf("%d", Combination(i, j)) ;  // Print each combination value
                                 }
                                 printf("\n") ; // Move to the next row
                                 }
}

                                                //BELL NUMBER
// Calculates the nth Bell number, representing the number of ways to partition a set of n elements
unsigned long bellNumber(int n){
                                 unsigned long sum=0;  // Initialize a variable to store the sum for the current Bell number

                                // Base case: If n is 0, the 0th Bell number is 1
                                 if( n==0){
                                 return 1;
                                 }
                                 else if(n < 0){
                                   return -1 ; //Error for invalid inputs
                                 }
                                   // Recursive calculation of the nth Bell number
                                 for(int k=0 ; k < n ; k++){
                                   // Use the formula:
                                   // B(n) = Σ (Combination(n-1, k) * B(k)) for k = 0 to n-1
                                 sum+=Combination(n-1 ,k)*bellNumber(k);
                                 }
                                 return sum ;  // Return the calculated Bell number for n

}

                                                //KAPREKAR NUMBER
// Checks if the given number is a Kaprekar number (splitting its square adds up to the number itself)
bool isKaprekar(int num){
                                 int NUM=power(num,2) ; // Calculate the square of the input number
                                 int K=NumberOfDigits(NUM)/2 ; // Calculate the number of digits in NUM and divide it by 2
                                 int i=1 ; // Initialize a variable to determine the divisor for splitting NUM
                                 if( NumberOfDigits(NUM)%2 !=0 ){
                                 return false;  //The number square can't be divided into two even numbers so it is not a Kaprekar number
                                 }

                                 // Create the divisor to split NUM based on the number of digits
                                 while(K>0){
                                 K-=1 ;  // Decrease K to process each digit
                                 i*=10 ; // Multiply i by 10 for each digit
                                 }

                                // Split NUM into two parts: (NUM / i) and the remainder (NUM % i)
                                // Check if their sum equals the original number
                                 if((NUM/i)+(NUM%i) ==num){
                                 return true ; // The number is a Kaprekar number
                                 }
                                 else{
                                 return false ;  // The number is not a Kaprekar number
                                 }
}

                                                //SMITH NUMBER
// Determines if the given number is a Smith number (non-prime with equal digit sum of prime factors and itself)
bool isSmith(int num){
                               // Initialize variables
                                int sumofprimefactors = 0; // Sum of the digits of the prime factors
                                int primefactors = 1;      // Product of prime factors
                                int i = 2;                 // Start checking for prime factors from 2


                                // Edge case: Smith numbers must be composite; handle 0, 1, and prime numbers
                                if (num <= 1 || isPrime(num)) {
                                    return false; // 0, 1,Negative and prime numbers cannot be Smith numbers
                                }

                                // Factorize the number and calculate the sum of the digits of the prime factors
                                while (primefactors != num) {
                                    if (isPrime(i) && num % i == 0) {
                                    sumofprimefactors += SumOfDigits(i); // Add the sum of digits of the prime factor
                                    primefactors *= i;                  // Multiply 'i' into the product of prime factors
                                    num /= i;                           // Divide 'num' by 'i' to continue factorization
                                     }
                                     else {
                                     i++; // Move to the next number
                                      }
                                     }
                                  // Check if the sum of the digits of the prime factors equals the sum of the digits of the original number
                                   return sumofprimefactors == SumOfDigits(primefactors);
                         }

                                                //SUM OF PRIMES
// Computes the sum of all prime numbers less than or equal to n
int sumOfPrimes(int n){
                                 int sum=0 ;  // Initialize the sum to 0

                                 // Iterate through all numbers from 2 to n
                                 for ( int i=2;i<=n;i++){

                                 // Check if the current number is a prime number
                                 if(isPrime( i )){
                                 sum+=i ; // Add the prime number to the sum
                                 }
                                 }

                                 return sum ; // Return the total sum of prime numbers
}



