                            #include<stdio.h>
                            #include<stdbool.h>


                            //    Basic String Functions

                                                //stringLength
/*This function iterates through the characters of the string until it encounters 
 * the null terminator `\0`. It increments a counter to keep track of the number 
 * of characters, which is returned as the string's length */

int stringLength( const char* str){
int Length=0; // Initialize the length counter to 0
  // Iterate through the string until the null terminator is found
while(str[Length] != '\0'){
Length++; // Increment the counter for each character
}
return Length; // Return the total count as the string's length
}

                                                //Copy String 
/* This function iterates through each character of the source string (`src`) and copies
 * it into the destination string (`dest`) until the null terminator (`\0`) is encountered.
 * After copying all characters, the function appends the null terminator to the destination
 * string to properly terminate it*/
int countChar(const char* str, char ch){
    if(str == NULL){ // Check for NULL string 
        return 0; // Return 0 if the string is NULL
    }
        int counter = 0; // Initialize a counter to zero
   // Loop through each character in the string
    for (int i = 0; i < stringLength(str); i++) {
      // Check if the current character matches the specified character
        if (str[i] == ch) {
            counter++; // Increment the counter if there's a match  
        }
    }
    return counter;  // Return the final count 
}
void stringCopy(char* dest, const char* src){
// Loop until the null terminator in the source string is encountered
while( *src != '\0' ){
*dest = *src;                                       // Copy the character from source to destination
src++;                                              // Move to the next character in the source string 
dest++;                                             // Move to the next character in the destination string
}
*dest = '\0';                                       // Null-terminate
}
                                   
                                                //  Concatenate Strings
/* This function first moves the destination pointer (`dest`) to the end of the existing string
 * (where the null terminator `\0` is located). Then, it appends each character from the source
 * string (`src`) to the destination string. Finally, a null terminator is added to properly terminate
 * the concatenated string*/

void stringConcat(char* dest, const char* src) {
    // Move the destination pointer to the end of the current string
    while (*dest != '\0') {
        dest++;
    }
                       // Copy each character from the source string to the end of the destination string
    while (*src != '\0') {
        *dest = *src;          // Copy the character from source to destination
        dest++;                // Move to the next character in the destination string
        src++;                 // Move to the next character in the source string
    }
    *dest = '\0';              // Add a null terminator to the end of the concatenated string
}
                            
                                                //Compare Strings
/* This function iterates through both strings, comparing characters at each position.
 * If the strings differ, it returns the difference between the ASCII values of the first
 * differing characters. If the strings are identical, it returns 0*/
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
/* This function determines if the input string is empty by checking two conditions:
 * 1. If the string pointer is `NULL` (indicating no valid string exists).
 * 2. If the first character of the string is the null terminator (`\0`), indicating an empty string*/
bool isEmpty(char* str){
return str == NULL||*str =='\0';// Check if the string is null or starts with the null terminator(ADDED THEN NULL CHECK TO MAKE THE FUNCTION MORE ROBUST AS THE STRING CAN BE ENTERED Uninitialized)
}

                                                //Reverse a String
/* This function reverses the input string by swapping characters symmetrically from the 
 * start and end of the string, moving toward the center. It uses the `stringLength` 
 * function to determine the length of the string */
void reverseString(char* str){
int length=stringLength(str);// Get the length of the string
int temp;// Temporary variable for swapping
  // Swap characters symmetrically from start to center
for(int i=0;i<length/2;i++){
temp=str[i];// Store the current character
str[i]=str[length-1-i];// Replace with the corresponding character from the end
str[length-1-i]=temp;// Assign the stored character to the end position
}

}
                           
                                                //Convert to Uppercase
/* This function iterates through the string and checks each character. If a character 
 * is a lowercase letter (ASCII 'a' to 'z'), it converts it to its uppercase equivalent 
 * by subtracting 32 (the difference between the ASCII values of lowercase and uppercase letters*/
 void toUpperCase(char* str){
                // Iterate until the null terminator is reached
    while( *str!='\0'){
         if( *str>='a' &&  *str<='z'){
            *str= *str-32;   // Convert lowercase to uppercase by subtracting 32
         }
str++; // Move to the next character
    }
 }
                           
                                                //Convert to Lowercase
/* This function iterates through the string and checks each character. If a character 
 * is a uppercase letter (ASCII 'A' to 'Z'), it converts it to its lowercase equivalent 
 * by adding 32 (the difference between the ASCII values of lowercase and uppercase letters*/
 void toLowerCase(char* str){
            // Iterate until the null terminator is reached
    while( *str!='\0'){
         if( *str>='a' &&  *str<='z'){
            *str= *str+32;  // Convert uppercase to lowercase by adding 32
         }
str++; // Move to the next character
    }
 }




                            //    Intermediate String Functions

                                                //Palindrome
/* This function determines whether a given string reads the same backward as forward.
 * It creates a copy of the input string, reverses the copy, and compares the original
 * string with the reversed copy using the `stringCompare` function. If they are identical,
 * the function returns `true`; otherwise, it returns `false`*/
bool isPalindrome(char* str){
  char strcopy[stringLength(str)+1]; //initialize a new string 
 stringCopy(strcopy,str);//copy the entered string on the new one
 reverseString(strcopy);//reverse the new string
 return stringCompare(str,strcopy) == 0;//compare the string and its reverse
 }

                                                //Count Vowels and Consonants
/* This function iterates through the input string, counting the number of vowels
 * (A, E, I, O, U) and consonants (alphabetic characters that are not vowels).
 * To simplify comparisons, the string is converted to uppercase before processing.
 * Non-alphabetic characters are ignored*/
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
/* * This function uses a nested loop to compare the characters of the substring (`sub`)
 * with consecutive segments of the main string (`str`). If a match is found, the function
 * returns the starting index of the match. If no match is found, it returns `-1`*/
int findSubstring(const char* str, const char* sub){
int strLength = stringLength(str); // Get the length of the main string 
int subLength = stringLength(sub); // Get the length of the  Substring
int Marker=-1;                    // Initialize the result to -1 (not found)
int i=0,j=0;
                                 // If the substring is longer than the main string, return -1
    if (subLength > strLength) {
        return Marker;
    }
                                 //(strLength-subLength) to make sure that the second loop doesn't have a flow problem
for (i = 0; i <= (strLength-subLength); i++){ 
   for (j = 0; j < subLength; j++) { 
                                  // If characters don't match, break the inner loop 
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
/* This function iterates through the input string and removes all spaces by shifting subsequent 
 * characters forward. It handles leading, trailing, and intermediate spaces. The function also 
 * adjusts the string length dynamically to ensure proper null-termination*/
void removeWhitespaces(char* str) {
    int length = stringLength(str);
    int j = 0; // Index for the new position in the string
    for (int i = 0; i < length; i++) {
        if (str[i] != ' ') { // If the character is not a space
            str[j++] = str[i]; // Copy it to the new position
        }
    }
    str[j] = '\0'; // Null-terminate the modified string
}
 
 
                                                 //Anagram
/* Two strings are considered anagrams if they contain the same characters with the same 
 * frequencies, regardless of the order. This function compares the frequency of each character 
 * in both strings using the `countChar` function. If any character has a different frequency 
 * in the two strings, the function returns `false`*/
bool isAnagram(char* str1, char* str2){
int Length=stringLength(str1);
                                   // If the strings have different lengths, they cannot be anagrams
if(stringLength(str1) != stringLength(str2)){
    return false;
}
                                 // Check the frequency of each character in the strings
for(int i=0;i<Length;i++){
if(countChar(str1 ,str1[i])  != countChar(str2, str1[i])   ||
   countChar(str2, str2[i])  != countChar(str1, str2[i])){             // If the frequency doesn't match, they are not anagrams
return false;
}
}
return true;                   // If all characters match in frequency, the strings are anagrams
}
                   
                                                // Character Frequency
/* This function initializes a frequency string to store the count of each ASCII character in the input string. 
 * Each character in the string is treated as an unsigned char to handle extended ASCII values (0–255). 
 * The frequency array must be pre-allocated and have a size of at least 256*/
void charFrequency(char* str, int* freq){
          // Initialize the frequency string to 0
for (int i = 0; i <= 255; i++)
{
    freq[i]=0;
}
         // Traverse the string and update the frequency of each character
for (int i = 0; i < stringLength(str); i++)
{
    freq[ (unsigned char)str[i] ]+=1; // Increment frequency for the character
}

}

                                                // Count Words
/* This function traverses the input string to identify words, which are sequences of alphabetic characters
 * separated by non-alphabetic characters. Words are counted using a flag to detect transitions between
 * word boundaries*/

int countWords(char* str){
int Length=stringLength(str);
int WordCounter=0;
char STR[Length];
stringCopy(STR,str);
toLowerCase(STR);
for (int i = 0; i <Length ; i++)
{
  // Check if the current character is alphabetic
if(STR[i]>='a' && STR[i]<='z'){
           // Check if it's the last character or followed by a non-alphabetic character
    if(STR[i+1]<='a' || STR[i+1]>='z' || i + 1 == Length ){
        WordCounter++;  // Increment the word counter
    }
  }
}
return WordCounter; // Return the total word count
}

                                                //Remove Duplicate Characters 
/* This function iterates through the string and removes consecutive duplicate characters.
 * It shifts the characters leftward when duplicates are found and updates the string length dynamically*/
void removeDuplicates(char* str){
int length =stringLength(str); // Get the length of the input string
for (int i = 0; i < length-1; i++){
          // Check if the current character is the same as the next character
    if (str[i] ==str[i+1]){
          // Shift characters left to overwrite the duplicate
       for (int j = i; j < length; j++){
        str[j]=str[j+1];
    }
    length--;  // Decrease the length of the string
    i--;         //To recheck again for more duplicates 

}
}
str[length]='\0'; // Null-terminate the modified string
}



                            //    Advanced String Functions

                                                //String Compression 
/* This function iterates through the input string and compresses repeated characters.
 * For example, "aaabbc" becomes "a3b2c"*/
void compressString(char* str, char* result) {  
    int counter = 1; // Counter for consecutive characters  
    int i = 0, j = 0; // Indices for input and result strings  
    int length = stringLength(str); // Get the length of the input string  

      while (i < length) {  
        result[j++] = str[i]; // Add the current character to the result  

                            // Count occurrences of the current character  
        while (i < length - 1 && str[i] == str[i + 1]) {  
            counter++;      // Incrementing the counter for duplicates  
            i++;            // Moving to the next index  
        }  

        // If counter is greater than 1, add it to the result  
        if (counter > 1) {  
            if (counter < 10) { // Single digit  
                result[j++] = counter + '0'; // Convert to char and store  
            } else { // Two digits  
                result[j++] = (counter / 10) + '0'; // Tens place  
                result[j++] = (counter % 10) + '0'; // Units place  
            }  
        }  

        counter = 1; // Reset counter for the next character  
        i++; // Move to the next character  
    }  
    
    result[j] = '\0'; // Null-terminate the result string  
}  

                                                //Find Longest Word
/* This function iterates through the input string, extracting words composed of alphabetic characters.
 * For each word, it compares its length to the currently stored longest word.
 * If the new word is longer, it replaces the current longest word*/

void longestWord(char* str, char* result) {
    char Currentword[100];       // Temporary string to hold the current word
    char Longestword[100] = ""; // Initialize Longestword to an empty string
    int j = 0;                  // Index for building words
    int inputlength = stringLength(str);

            // Traverse the input string
    for (int i = 0; i < inputlength; i++) {
        j = 0;
               // Extract a word composed of alphabetic characters
        while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            Currentword[j] = str[i];
            i++;
            j++;
        }
        Currentword[j] = '\0';      // Null-terminate the current word
       
        // Update the longest word if the current word is longer
        if (stringLength(Currentword) > stringLength(Longestword)) {
               stringCopy(Longestword, Currentword); // Copy current word to Longestword
         }
            
        // Reset Currentword for the next word
        for (j = 0; j < stringLength(Currentword); j++) {
            Currentword[j] = '\0';
        }
    }

    // Copy the longest word found to the result
    stringCopy(result, Longestword);
}

                                                //String Rotation Check 
/* * Function to check if one string is a rotation of another.  
 * A string 'str2' is a rotation of 'str1' if it can be obtained   
 * by moving characters from the beginning of 'str1' to its end*/
bool isRotation(char* str1, char* str2){
   // Calculate the lengths of both strings
int length1=stringLength(str1) ,    length2=stringLength(str2);
char strRotated[ 2*length1 +1 ]; // Create a temporary string that is double the size of str1  

 // If the lengths of the two strings are not the same, they cannot be rotations
if (length1 != length2) {
    return false; // Return false if lengths are different 
}

//stringCopy and Concatenate 
  // Construct the rotated string by concatenating str1 with itself
 for(int i=0 ; i< length1 ;i++){
    strRotated[i] = str1[i]; // First half is str1
    strRotated[i + length1] = str1[i]; // Second half is str1  
                       }
strRotated[ 2*length1 ] ='\0';  // Null-terminate the concatenated string
 
   // Check if str2 is a substring of the concatenated string  
  return findSubstring(strRotated,str2) != -1;

}
                                          
                                                //Count Specific Character 
// Function to count the occurrences of a specified character in a string

                                      
                                                //Find and Replace 
/*This function finds all occurrences of the find substring in the input string str and replaces them 
 * with the replace substring*/
void findAndReplace(char* str, char* find, char* replace){
int start=0, i=0;
if(stringLength(find) == stringLength(replace)){
  
      // Continue searching for the `find` substring until no more matches are found
while(findSubstring(str, find) != -1){
start=findSubstring(str, find) ;    i=0;  // Get the starting index of the first occurrence of `find`
  
     // Replace the characters of the `find` substring with those of `replace`
while(find[i] != '\0'){
    str[start]=replace[i];
    start++;  i++;
      
        }
      }
   }
}

                                                //Longest Palindromic Substring 
/* This function iterates through the input string, extracting words composed of alphabetic characters.
 * For each word, it checks if the word is a palindrome using the `isPalindrome` function.
 * If the word is a palindrome and its length is greater than the current longest palindrome, 
 * the function updates the `result` with the new longest palindrome*/

void longestPalindrome(char* str, char* result){
  char Currentword[100];      // Temporary string to hold the current word
  char Longestword[100] = ""; // Initialize Longestword to an empty string
  int j = 0;                  // Index for building words
  int inputlength = stringLength(str);
                              // Traverse the input string
    for (int i = 0; i < inputlength; i++) {
        j = 0;

          // Extract a word composed of alphabetic characters
        while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            Currentword[j] = str[i];
            i++;
            j++;
        }
        Currentword[j] = '\0'; // Null-terminate the current word
        j = 0; // Setting index to 0
        // Check if the current word is a palindrome
if(isPalindrome(Currentword)){
            // Update the longest palindrome if this one is longer
        if (stringLength(Currentword) > stringLength(Longestword)) {
                stringCopy(Longestword, Currentword); // Copy current word to Longestword
        }
  
        // Reset Currentword
        for (j = 0; j < stringLength(Currentword); j++) {
            Currentword[j] = '\0';
        }
    }
     // Copy the longest palindrome found to the result
stringCopy( result, Longestword);
} 
}
            
                                                //String Permutations
/* This function generates and prints all cyclic permutations (rotations) of the input string.
 * Each permutation is created by repeatedly rotating the string one position to the right.
 * The original string is preserved, and a copy is used for the rotations*/

void stringRotation(char* str){
int length=stringLength(str);// Get the length of the string
char TEMP[2]={"\0"};         // Temporary storage for the last character
TEMP[0]=str[length-1];       // Store the last character of the string
    
  // If the string is empty or has only one character, no rotation is needed
    if (length <= 1) {
        return;
    }
  // Shift all characters one position to the right
for(int i=length-1;i>0;i--){
str[i]=str[i-1];
}
str[0]=TEMP[0];            // Move the last character to the start of the string
}
void printPermutations(char* str){
int length=stringLength(str); // Get the length of the string
char strcopy[100]={"\0"};     // Create a copy of the input string
stringCopy(strcopy,str);
if (length == 0) {
    printf("Empty string has no permutations.\n");
    return;
}
                              // Generate and print each rotation
for(int i=1;i<=length;i++){
printf("  \n   rotation %d : \" %s\" ",i,strcopy); // Print the current rotation
stringRotation(strcopy);      // Rotate the string to the right

}

}




                            //    Extra String Functions 
/* This function performs a right rotation on the input string by moving 
 * the last character to the beginning of the string and shifting all other 
 * characters one position to the right*/
