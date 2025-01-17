#include<stdio.h>
#include<stdbool.h>
#include<math.h>


                            //    Basic Numbers Functions                     
               
                                                //Calculate the sum of digits of a number   
/*this function works by adding 1 to the variable (sum) and extracting last digit in the number (num) until the number becomes 0 and then it returns (sum)*/
int SumOfDigits( int num){
                                 int sum=0;
                                while(num!=0){
                                    sum+=num%10;
                                    num/=10;
                                }
                                num=sum;
                                return num;
                                }    
                           
                                                //Reverse a number
/*this function works by taking the first digit (digit) of the number and adding it to (Reverse)  after multiplying (Reverse) by 10 then repeating the loop until (num) equals 0 then returning (Reverse) */
int ReverseNumber( int num){
                                 int digit=0 ,Reverse=0;
                                 while(num>0){
                                 digit=num%10;
                                 Reverse=Reverse*10+digit;
                                 num/=10;
                                 }

                                 return Reverse;
} 
                                                
                                                //Check if palindrome      
/*this function checks if a (num) equals its reverse (using the function ReverseNumber) then return true if yes and false if no */
bool isPalindrome( int num){
                                 if(num == ReverseNumber(num) ){
                                 return true;
                                 }
                                 else{
                                 return false;
                                 }
}
                         
                                                //see if a number is prime or not
/* this function checks if a number has a divisor between 2 and its square root , if yes then it returns false ,if no its returns true*/
bool isPrime( int num){
                                 for(int i=2;i<=sqrt(num);i++){
                                 if(num % i == 0){
                                 return false;
                                 }
                                 return true;
                                 }
}

                                                //Calculate the greatest common divisor
/* this function uses the Euclidean algorithm to find the greatest common divisors between two numbers (if a is bigger then b then it switch them ) , this function return (GCD).*/
int gcd( int a, int b){
                                            int GCD,t;
                                            if(a>b){
                                                t=a;
                                                a=b;
                                                b=t;
                                            }
                                            while(b != 0){
                                              if(a%b==0){
                                                return b;

                                            }
                                             GCD=a%b;
                                             a=b;
                                             b=GCD;

                                            }
                                            }
                        
                                                //Calculate the least common multiple
/*THIS FUNCTION RETURNS THE FORMULA THAT FINDS THE LEAST COMMON DIVISOR BETWEEN a AND b */
int lcm( int a, int b){
                                 return (a*b)/gcd(a,b);
}

                                                //Calculate the factorial
/*THIS FUNCTION USES RECURSION BY MULTIPLYING (num) BY THE FACTORIAL OF (num-1)[which means it calls itself] , this function has a base case (if num equals 1 or 0 it returns 1 ) . */
long Factorial( int num){
                                    long Fact=1;
                                    if(num == 0  || num ==1){
                                        return 1;
                                    }
                                    else if(num<0){
                                        return -1;
                                    }
                                    else{
                                        return num*Factorial(num-1);
                                    }
}
                         
                                                //see if the number if even or not
/*this function checks if a number is divisible by 2 , if yes it returns true,  if no it returns false */
bool isEven( int num){
                                 if(num % 2 == 0){
                                 return true;
                                 }
                                 return false;
}


                            //    Intermediate Numbers Functions
       
                                                //prime factorization
/*this function prints all the prime divisors of a number (if a number is divisible by a prime number multiple times then it will print it multiple times ,if the number given is less or equal to 1 then it will print a statement that there are no prime divisors)*/
void primeFactors(int num){
                                 int i=2;                  // Start with the smallest prime number
                                 if (num <= 1) {
                                 printf("No prime factors for %d\n", num);
                                 return;
                                 }
 
                                 printf("Prime factors of %d: ", num);
                                 while(num>1){
                                 if(isPrime(i)){                     // Check if i is a prime number
                                 while(num%i == 0){              // While num is divisible by i
                                 printf("%d ",i);       // Print the prime factor
                                 num/=i;   // Reduce num
                                 }
                                 }
                                 i+=1;                        // Move to the next number
                                 }
                                 printf("\n");
}

                                                //armstrong number
/*THIS FUNCTION ADDS EVERY DIGIT OF A NUMBER RAISED TO THE POWER OF 3 TO (armstrong) , THEN CHECKS IF THE PREVIOUS VARIABLE EQUALS THE ENTERED NUMBER , IF YES THEN TRUE , IF NO THEN FALSE*/
bool isArmstrong(int num){
                                 int armstrong=0;
                                 int temp=num;
                                 while(num!=0){
                                     armstrong+=pow(num%10,3);
                                     num/=10;
                                 }
                                 num=temp;
                                 if(armstrong==num){
                                 return true;
                                 }
                                 return false;
}

                                                //Fibonacci sequence
/*THIS PROCEDURE PRINTS (NUM)  NUMBERS IN THE FIBONACCI SEQUENCE USING THE FORMULA WRITTEN BELOW  */
void fibonacciSeries(int num){
                                 long  fibonacci=0;
                                 printf("THE FIBONACCI SEQUENCE UNTIL %d :",num);
                                 for(int i=0;i<=num ;i++){
                                 fibonacci=(1/sqrt(5))*((pow(((1+sqrt(5))/2),i))-pow(((1-sqrt(5))/2),i));
                                 printf("\nF%d = %ld",i,fibonacci);
                                 }
                                 printf("\n");
}
                  
                                                //Calculate te sum of divisors
/*THIS FUNCTION SUMS ALL THE DIVISORS OF THE ENTERED NUMBER  AND RETURNS  */
int sumDivisors(int num){
                                 int sum=num;

                                 for(int i=1;i<=(num/2);i++){
                                 if( num%i == 0){
                                 sum+=i;
                                 }
                                 }
                                 sum+=num;
                                 return sum;
}
               
                                                //perfect number
/*THIS FUNCTION CHECKS */
bool isPerfect(int num){
                                 if( sumDivisors(num) -num == num ){
                                 return true;
                                 }
                                 else {
                                 return false;

                                 }
}
               
                                                //magic number
bool isMagic(int num){
                                 int sum =0;
                                 while(num>=10){
                                 sum=0;
                                 while(num>0){
                                 sum+=num%10;
                                 num/=10;
                                 }
                                 num=sum;
                                 }
                                 if(num ==1){
                                 return true;
                                 }
                                 else{
                                 return false;
                                 }
}
          
                                                // check if Automorphic
bool isAutomorphic(int num){
                                 int square=num*num;
                                 int digit=1;

                                 do{
                                 digit*=10;
                                 }while(num/digit != 0);

                                 if(square%digit ==num){
                                 return true;
                                 }
                                 else{
                                 return false;
                                 }
}






                            //    Advanced Numbers Functions
                                                //from decimal to binary conversion
void toBinary(int num){
                                 int Bin=0;
                                 int i=1;
                                 printf(" %d representation in Binary is :",num);
                                 if(num<0){
                                 printf(" ERROR .\n");
                                 }
                                 else{
                                 while(num > 0){
                                 Bin=Bin+(num%2)*i;
                                 num/=2;
                                 i*=10;
                                 }
                                 printf(" %d .\n",Bin);
                                 }
}
       
                                                //Narcissitic number
bool isNarcissistic(int num){
                                 int digit=1;
                                 int armstrong=0;
                                 int temp=num;
                                 while(num/10!=0){
                                 digit+=1;
                                 num/=10;
                                 }
                                 num=temp;
                                 while(num!=0){
                                 armstrong+=pow(num%10,digit);
                                 num/=10;
                                 }
                                 num=temp;
                                 if(armstrong==num){
                                 return true;
                                 }
                                 return false;
}

                                                //Calculating the Square root
double sqrtApprox(int num){
                                 double epsilon = 0.0001 , x=0.0 ,xPrev=0.0;
                                 if (num == 0){
                                 x = 0;
                                 }
                                 else if (num == 1){
                                 x = 1;
                                 }

                                 else if (num>0){
                                 x =num/2;            /* initial guess */
                                 xPrev = 0;
                                 do {
                                 xPrev = x;
                                 x = (xPrev + num/xPrev)/2;
                                 }while (abs(x - xPrev) > epsilon);
                                 }
                                 else{
                                 x=-1111;
                                 }
                                 return  x ;
}

                                                //Calculating the power
double power(int base, int exp){
                                 double pow =1;
                                 int T=1;
                                 if(base == 0){                        //handling the base 0
                                 if(exp >0){
                                 pow = 0;
                                 }
                                 else{
                                 pow = -1111;
                                 }
                                 }
                                 else{
                                 if( exp < 0){
                                 exp=-exp;
                                 T=0;             //TO MARK THAT EXP WAS NEGATIVE
                                 }
                                 for(int i=1;i<=exp;i++){   //calculating the power
                                 pow*=(base);
                                 }
                                 if( T== 0){              //to calclulate the power if the exp was negative
                                 pow=1/pow;
                                 }
                                 }
                                 return pow ;
}

                                                //Happy Number
bool isHappy(int num){
                                 int sum=0;
                                 if(num<10){
                                 num=power(num,2);
                                 }
                                 while(num >=10){
                                 sum=0;
                                 while(num>0){
                                 sum+=power(num%10,2);
                                 num/=10;
                                 }
                                 num=sum;
                                 }
                                 if(num ==1){
                                 return true ;
                                 }
                                 else{
                                 return false;
                                 }
}
                                 
                                                //Abundant NUMBER
bool isAbundant(int num){
                                 if( sumDivisors(num) -num  > num ){
                                 return true;
                                 }
                                 else {
                                 return false;
                                 }
}                            
                           
                                                //DEFICIENT NUMBER
bool isDeficient(int num){
                                 if( sumDivisors(num)  <= 2*num ){
                                 return true;
                                 }
                                 else {
                                 return false;
                                 }
}
                                        
                                                //SUM OF EVEN FIBONACCI NUMBERS
long sumEvenFibonacci(int num){
                                 long  fibonacci=0,sumfib=-1111;
                                 if(num>=0){
                                 sumfib =0;
                                 for(int i=1;i<=num ;i++){
                                 fibonacci=(1/sqrt(5))*((pow(((1+sqrt(5))/2),i))-pow(((1-sqrt(5))/2),i));
                                 if(fibonacci%2 ==0 ){
                                 sumfib+=fibonacci;
                                 }
                                 }
                                 }
                                 return sumfib;
}
                                       
                                                //HARSHAD NUMBER
bool isHarshad(int num){
                                 if(num % SumOfDigits(num) == 0){
                                 return true;
                                 }
                                 else {
                                 return false;
                                 }
}

                                                //CATALAN NUMBER
unsigned long catalanNumber(int n){
                                 return Factorial(2*n)/Factorial(n+1);
}
                                        
                                                //PASCAL TRIANGLE
void printPascalTriangle(int n) {
                                 for (int i = 0; i < n; i++) {
                                 // Print spaces for alignment
                                 for (int space = 0; space < n - i - 1; space++) {
                                 printf("  ");
                                 }
                                 // Print values in the row n
                                 for (int j = 0; j <= i; j++) {
                                 printf("%4ld", combination(i, j));
                                 }
                                 printf("\n");
                                 }
}
                                           
                                                //BELL NUMBER
unsigned long bellNumber(int n){
                                 unsigned long sum=0;
                                 if( n==0){
                                 return 1;
                                 }
                                 else{
                                 for(int k=0 ; k < n ; k++){
                                 sum+=Combination(n-1 ,k)*bellNumber(k);
                                 }
                                 return sum;
                                 }
}

                                                //KAPREKAR NUMBER
bool isKaprekar(int num){
                                 int NUM=power(num,2);
                                 int K=NumberOfDigits(NUM)/2;
                                 int i=1;
                                 if(NumberOfDigits(NUM)%2 !=0 ){
                                 return false;
                                 }
                                 while(K>0){
                                 K-=1;
                                 i*=10;
                                 }
                                 if((NUM/i)+(NUM%i) ==num){
                                 return true;
                                 }
                                 else{
                                 return false;
                                 }
}

                                                //SMITH NUMBER
bool isSmith(int num){
                                 int sumofprimefactors=0;
                                 int primefactors=1;
                                 int i=2;
                                 while(primefactors !=num){
                                 if(isPrime(i)){
                                 if(num%i ==0){
                                 sumofprimefactors+=SumOfDigits(i);
                                 primefactors*=i;
                                 }
                                 else{
                                 i+=1;
                                 }
                                 }
                                 else{
                                 i+=1;
                                 }
                                 }
                                 if(sumofprimefactors == SumOfDigits(num)){
                                 return true;
                                 }
                                 else{
                                 return false;
                                 }
}
                              
                                                //SUM OF PRIMES
int sumOfPrimes(int n){
                                 int sum=0;
                                 for ( int i=2;i<=n;i++){
                                 if(isPrime( i )){
                                 sum+=i;
                                 }
                                 }
                                 return sum;
}

                            //    Extra Numbers Functions

                                                //calculating the number of digits
int NumberOfDigits(int num){
int digits=0;
if (num == 0){
    return 1;
}
while(num!=0){
digits+=1;
num/=10;
}
return digits;

}
                                                 
                                             //calculating the combination nCr
unsigned long  Combination( int n ,int r){
if (r > n || r < 0) {
    return 0;
}
return  Factorial(n)/(Factorial(r)*Factorial(n-r));
}

