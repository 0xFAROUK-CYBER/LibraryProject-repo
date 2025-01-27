#ifndef STRINGSLIBRARY_H_INCLUDED
#define STRINGSLIBRARY_H_INCLUDED
 #include<stdio.h>
 #include<stdbool.h>

                            
                            //    Basic String Functions

/*stringLength*/                                 int stringLength( const char* str);
/*Copy String*/                                  void stringCopy(char* dest, const char* src);                               
/*Concatenate String*/                           void stringConcat(char* dest, const char* src);
/*Compare Strings*/                              int stringCompare(const char* str1, const char* str2);
/*Check if Empty*/                               bool isEmpty(char* str);
/*Reverse a String*/                             void reverseString(char* str);                           
/*Convert to Uppercase*/                         void toUpperCase(char* str);                          
/*Convert to Lowercase*/                         void toLowerCase(char* str);

                            //    Intermediate String Functions

/*Palindrome*/                                   bool isPalindrome(char* str);
/*Count Vowels and Consonants*/                  void countVowelsConsonants(char* str, int* vowels, int* consonants);
/*Find Substring*/                               int findSubstring(const char* str, const char* sub);                   
/*Remove Whitespaces*/                           void removeWhitespaces(char* str);
/*Anagram*/                                      bool isAnagram(char* str1, char* str2);             
/*Character Frequency*/                          void charFrequency(char* str, int* freq);
/*Count Words*/                                  int countWords(char* str);
/*Remove Duplicate Characters*/                  void removeDuplicates(char* str);



                            //    Advanced String Functions

/*String Compression*/                          void compressString(char* str, char* result);
/*Find Longest Word*/                           void longestWord(char* str, char* result) ;
/*String Rotation Check*/                       bool isRotation(char* str1, char* str2);
/*Count Specific Character*/                    int countChar(const char* str, char ch);
/*Find and Replace*/                            void findAndReplace(char* str, char* find, char* replace);
/*Longest Palindromic Substring*/               void longestPalindrome(char* str, char* result);
/*String Permutations*/                         void printPermutations(char* str);

                            //    Extra String Functions
/*stringRotation*/                              void stringRotation(char* str);


#endif // STRINGSLIBRARY_H_INCLUDED
