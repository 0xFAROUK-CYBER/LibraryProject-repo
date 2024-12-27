                            #include<stdio.h>
                            #include<stdbool.h>


                            //    Basic String Functions

                                                //stringLength
int stringLength( const char* str){
int Length=0;
while(str[Length] != '\0'){
Length++;
}
return Length;
}

                                                //Copy String 
void stringCopy(char* dest, const char* src){

while( *src != '\0' ){
*dest = *src;                                       // Copy the character from source to destination
src++;                                              // Move to the next character in the source string 
dest++;                                             // Move to the next character in the destination string
}
*dest = '\0';                                       // Null-terminate
}
                                   
                                                //  Concatenate Strings
void stringConcat(char* dest, const char* src) {
    // Move the destination pointer to the end of the current string
    while (*dest != '\0') {
        dest++;
    }
                       // Copy each character from the source string to the end of the destination string
    while (*src != '\0') {
        *dest = *src;          // Copy the character from source to destination
        dest++;                 // Move to the next character in the destination string
        src++;                  // Move to the next character in the source string
    }
    *dest = '\0';                
}
                            
                                                //Compare Strings
int stringCompare(const char* str1, const char* str2) {
    // Loop through both strings as long as characters are equal and neither string has reached the null terminator
    while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0') {
        str1++;  // Move to the next character in str1
        str2++;  // Move to the next character in str2
    }

    // Return the difference of ASCII values of the characters where the strings differ
    // If the strings are identical, this will return 0
    return (unsigned char)*str1 - (unsigned char)*str2;
}

                                                //Check if Empty
bool isEmpty(char* str){
return *str =='\0'||str == NULL;
}

                                                //Reverse a String
void reverseString(char* str){
int length=stringLength(str);
int temp;
for(int i=0;i<length/2;i++){
temp=str[i];
str[i]=str[length-1-i];
str[length-1-i]=temp;
}

}
                           
                                                //Convert to Uppercase
 void toUpperCase(char* str){
    while( *str!='\0'){
         if( *str>='a' &&  *str<='z'){
            *str= *str-32;    //The difference between the ASCII values of lowercase and uppercase letters is 32
         }
str++;
    }
 }
                           
                                                //Convert to Lowercase
 void toLowerCase(char* str){
    while( *str!='\0'){
         if( *str>='a' &&  *str<='z'){
            *str= *str+32;    //The difference between the ASCII values of lowercase and uppercase letters is 32
         }
str++;
    }
 }




                            //    Intermediate String Functions

                                                //Palindrome
bool isPalindrome(char* str){
  char strcopy[stringLength(str)+1]; //initialize a new string 
 stringCopy(strcopy,str);//copy the entered string on the new one
 reverseString(strcopy);//reverse the new string
 return stringCompare(str,strcopy) ==0;//compare the string and its reverse
 }

                                                //Count Vowels and Consonants
void countVowelsConsonants(char* str, int* vowels, int* consonants) {
    *vowels = 0;           // Initialize vowel count to 0
    *consonants = 0;       // Initialize consonant count to 0
    char STR[stringLength(str)]; 
    stringCopy(STR, str);    // Copy the original string to STR
    toUpperCase(STR);        // Convert the string to uppercase for easy counting

   for(int i=0;i<stringLength(str);i++)
        // Check if the character is a vowel
        if (STR[i]== 'A' || STR[i] == 'E' || STR[i] == 'I' || STR[i] == 'O' || STR[i] == 'U') {
            (*vowels)++; // Increment vowel count
        }
        // Check if the character is a consonant (alphabetic but not a vowel)
        else if (STR[i] >= 'A' && STR[i] <= 'Z') {
            (*consonants)++; // Increment consonant count
        }
    }

                                                //Find Substring
int findSubstring(const char* str, const char* sub){
int strLength = stringLength(str); // Get the length of the main string 
int subLength = stringLength(sub); // Get the length of the  Substring
int Marker=-1;
int i=0,j=0;
    if (subLength > strLength) {          //sybstring can't be longer than a string
        return -1;
    }
for (i = 0; i <= (strLength-subLength); i++){          //(strLength-subLength) to make sure that the second loop doesn't have a flow problem
   for (j = 0; j < subLength; j++) { // If characters don't match, break the inner loop if (str[i + j] != sub[j]) { break; }
   if(str[i+j] != sub[j]){
    j=subLength+1; 
   }
}
if( j == subLength){      //to check if the sub string was found
    Marker=i;   //to mark i
    i=strLength;//to quit the for loop
  }
}
return Marker;   //if i was found it would return i  ;  else it would return -1
}
                            
                                                //Remove Whitespaces
void removeWhitespaces(char* str){
int Length=stringLength(str);
if(str[Length-1] == ' '){
     str[Length-1]='\0';
     Length-=1;                //reduce the length of the function
}
for(int i=Length-1;i>=0;i--){
if(str[i] == ' '){
for(int j=i;j<Length;j++ ){
str[j]=str[j+1];  //to move the caracters after the space
}
Length-=1;           //reduce the length of the function
}
}
}
 
 
                                                 //Anagram
bool isAnagram(char* str1, char* str2){
int Length=stringLength(str1);
if(stringLength(str1) != stringLength(str2)){
    return false;
}
for(int i=0;i<Length;i++){
if(countChar(str1,str1[i])  != countChar(str2,str1[i])   &&  countChar(str2,str2[i])  != countChar(str1,str2[i])){             //if the frequency of a character in both strings isn't equal then they are not anagrams of each other
return false;
}
}
return true;













}
                   
                                                // Character Frequency
void charFrequency(char* str, int* freq){
for (int i = 0; i <= 255; i++)
{
    freq[i]=0;
}
for (int i = 0; i < stringLength(str); i++)
{
    freq[ (unsigned char)str[i] ]+=1;
}

}

                                                // Count Words
int countWords(char* str){
int Length=stringLength(str);
int Counter=0;
char STR[Length];
stringCopy(STR,str);
toLowerCase(STR);
for (int i = 0; i <Length ; i++)
{
if(STR[i]>='a' && STR[i]<='z'){
    if(STR[i]<='a' || STR[i]>='z'){
        Counter++;
    }
}
}
return Counter;

}

                                                //Remove Duplicate Characters 
void removeDuplicates(char* str){
int length =stringLength(str);
for (int i = 0; i < length-1; i++){
 
    if (str[i] ==str[i+1]){
       for (int j = i; j < length; j++){
        str[j]=str[j+1];
    }
    length--;   //since the lingth is reduced
    i--; //to recheck again for more duplicates 

}
}
str[length]='\0';
}



                            //    Advanced String Functions

                                                //String Compression 
void compressString(char* str, char* result){
int counter=1,i=0,j=0;
int length=stringLength(str);
while(i<length-1){
result[j]=str[i];          //add the character
while(str[i]==str[i+1]){
counter++;                //incrementing the counter
i++;                      //moving to the next index
}
if(counter != 1){
 j++;                  //moving to the next index
result[j]=counter;    //add the number of repititions
}
j++;     //move to the next index
i++;    //move to the next index
}
result[j]='\0';
}

                                                //Find Longest Word 
void longestWord(char* str, char* result) {
    char Currentword[100];
    char Longestword[100] = ""; // Initialize Longestword to an empty string
    int j = 0;

    int inputlength = stringLength(str);

    for (int i = 0; i < inputlength; i++) {
        j = 0;
        while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            Currentword[j] = str[i];
            i++;
            j++;
        }
        Currentword[j] = '\0';
        j = 0; // Setting index to 0

        if (stringLength(Currentword) > stringLength(Longestword)) {
            while (Currentword[j] != '\0') {
                Longestword[j] = Currentword[j];
                j++;
            }
            Longestword[j] = '\0';
        }

        j = 0; // Setting index to 0
        while (Currentword[j] != '\0') {
            Currentword[j] = '\0';
            j++;
        }
    }

    for (j = 0; j < stringLength(Longestword); j++) {
        result[j] = Longestword[j];
    }
    result[j] = '\0';
}

                                                //String Rotation Check 
bool isRotation(char* str1, char* str2){

int length1=stringLength(str1) ,    length2=stringLength(str2);
char strRotated[ 2*length1 +1 ];


if (length1 != length2) {
    return false;
}

//stringCopy and Concatenate 

 for(int i=0 ; i< length1 ;i++){
    strRotated[i] = str1[i];
    strRotated[i + length1] = str1[i];
                       }
strRotated[ 2*length1 ] ='\0';
 

 // checking if str2 is a rotation of str1
  return findSubstring(strRotated,str2) != -1;

}
                                          
                                                //Count Specific Character 
int countChar(const char* str, char ch){
        int COUNTER = 0;
    for (int i = 0; i < stringLength(str); i++) {
        if (str[i] == ch) {
            COUNTER++;
        }
    }
    return COUNTER;
}
                                      
                                                //Find and Replace 
void findAndReplace(char* str, char* find, char* replace){
int start=0, i=0;
if(stringLength(find) == stringLength(replace)){
while(findSubstring(str, find) != -1){
start=findSubstring(str, find) ;    i=0;
while(find[i] != '\0'){
    str[start]=replace[i];
    start++;  i++;
      
        }
      }
   }
}

                                                //Longest Palindromic Substring 
void longestPalindrome(char* str, char* result){
  char Currentword[100];
  char Longestword[100] = ""; // Initialize Longestword to an empty string

    int j = 0;

    int inputlength = stringLength(str);

    for (int i = 0; i < inputlength; i++) {
        j = 0;
        while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            Currentword[j] = str[i];
            i++;
            j++;
        }
        Currentword[j] = '\0';
        j = 0; // Setting index to 0
if(isPalindrome(Currentword))
        if (stringLength(Currentword) > stringLength(Longestword)) {
            while (Currentword[j] != '\0') {
                Longestword[j] = Currentword[j];
                j++;
            }
            Longestword[j] = '\0';
        }

        j = 0; // Setting index to 0
        while (Currentword[j] != '\0') {
            Currentword[j] = '\0';
            j++;
        }
    }

    for (j = 0; j < stringLength(Longestword); j++) {
        result[j] = Longestword[j];
    }
    result[j] = '\0';







}
            
                                                //String Permutations 
void printPermutations(char* str){
int length=stringLength(str);
char strcopy[100]={"\0"};
stringCopy(strcopy,str);

for(int i=1;i<=length;i++){
printf("  \n   rotation %d : \" %s\" ",i,strcopy);
stringRotation(strcopy);

}

}




                            //    Extra String Functions 
void stringRotation(char* str){
int length=stringLength(str);
char TEMP[2]={"\0"};
TEMP[0]=str[length-1];
for(int i=length-1;i>0;i--){
str[i]=str[i-1];
}
str[0]=TEMP[0];
}
