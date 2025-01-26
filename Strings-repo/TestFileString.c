#include<stdio.h>
#include<stringslibrary.h>
void selector_of_string();
void testStringFunctions(choice);



int main(){
    int choice;
     do{
     selector_of_string() ;
        printf("Enter your choice (0-24): ");  
        scanf("%d", &choice);  
     testStringFunctions(choice);
     } while (choice != 0);

return 0;
}






void selector_of_string() {  
    printf("            WELCOME TO THE STRING LIBRARY TEST FILE            \n");  
    printf("                            MENU                                 \n");  
    printf("------------------------------------------------------------------\n");  
    printf("| 0    TO EXIT THE MENU                                         |\n");  
    
    // Basic String Functions  
    printf("| 1    TO TEST stringLength                                     |\n");  
    printf("| 2    TO TEST stringCopy                                       |\n");  
    printf("| 3    TO TEST stringConcat                                     |\n");  
    printf("| 4    TO TEST stringCompare                                    |\n");  
    printf("| 5    TO TEST isEmpty                                          |\n");  
    printf("| 6    TO TEST reverseString                                    |\n");  
    printf("| 7    TO TEST toUpperCase                                     |\n");  
    printf("| 8    TO TEST toLowerCase                                     |\n");  

    // Intermediate String Functions  
    printf("| 9    TO TEST isPalindrome                                     |\n");  
    printf("| 10   TO TEST countVowelsConsonants                           |\n");  
    printf("| 11   TO TEST findSubstring                                    |\n");  
    printf("| 12   TO TEST removeWhitespaces                               |\n");  
    printf("| 13   TO TEST isAnagram                                       |\n");  
    printf("| 14   TO TEST charFrequency                                    |\n");  
    printf("| 15   TO TEST countWords                                       |\n");  
    printf("| 16   TO TEST removeDuplicates                                  |\n");  

    // Advanced String Functions  
    printf("| 17   TO TEST compressString                                   |\n");  
    printf("| 18   TO TEST longestWord                                      |\n");  
    printf("| 19   TO TEST isRotation                                       |\n");  
    printf("| 20   TO TEST countChar                                        |\n");  
    printf("| 21   TO TEST findAndReplace                                   |\n");  
    printf("| 22   TO TEST longestPalindrome                                 |\n");  
    printf("| 23   TO TEST printPermutations                                |\n");  

    // Extra String Functions  
    printf("| 24   TO TEST stringRotation                                    |\n");  
    
    printf("------------------------------------------------------------------\n");  
}




void testStringFunctions(choice) {  
        char str[100], result[100], find[100], replace[100];  
        int vowels, consonants;  

        switch (choice) {  
            case 1:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                printf("Length of string: %d\n", stringLength(str));  
                break;  
            case 2:  
                printf("Enter source string: ");  
                scanf("%s", str);  
                char dest[100];       // ensure dest is large enough  
                stringCopy(dest, str);  
                printf("Copied string: %s\n", dest);  
                break;  
            case 3:  
                printf("Enter first string: ");  
                scanf("%s", str);  
                char concatStr[100];  // ensure concatStr is initialized  
                printf("Enter string to concatenate: ");  
                scanf("%s", concatStr);  
                stringConcat(str, concatStr);  
                printf("Concatenated string: %s\n", str);  
                break;  
            case 4:  
                printf("Enter first string: ");  
                scanf("%s", str);  
                char str2[100];  
                printf("Enter second string: ");  
                scanf("%s", str2);  
                printf("String comparison result: %d\n", stringCompare(str, str2));  
                break;  
            case 5:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                printf("Is the string empty: %s\n", isEmpty(str) ? "Yes" : "No");  
                break;  
            case 6:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                reverseString(str);  
                printf("Reversed string: %s\n", str);  
                break;  
            case 7:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                toUpperCase(str);  
                printf("Uppercase string: %s\n", str);  
                break;  
            case 8:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                toLowerCase(str);  
                printf("Lowercase string: %s\n", str);  
                break;  
            case 9:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                printf("Is palindrome: %s\n", isPalindrome(str) ? "Yes" : "No");  
                break;  
            case 10:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                countVowelsConsonants(str, &vowels, &consonants);  
                printf("Vowels: %d, Consonants: %d\n", vowels, consonants);  
                break;  
            case 11:  
                printf("Enter main string: ");  
                scanf("%s", str);  
                printf("Enter substring to find: ");  
                scanf("%s", find);  
                int index = findSubstring(str, find);  
                printf("Substring found at index: %d\n", index);  
                break;  
            case 12:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                removeWhitespaces(str);  
                printf("String after removing whitespaces: '%s'\n", str);  
                break;  
            case 13:  
                printf("Enter first string: ");  
                scanf("%s", str);  
                char str3[100];  
                printf("Enter second string: ");  
                scanf("%s", str3);  
                printf("Are anagrams: %s\n", isAnagram(str, str3) ? "Yes" : "No");  
                break;  
            case 14:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                int freq[256] = {0};  // assuming ASCII  
                charFrequency(str, freq);  
                printf("Character frequencies:\n");  
                for (int i = 0; i < 256; i++) {  
                    if (freq[i] > 0)  
                        printf("%c: %d\n", i, freq[i]);  
                }  
                break;  
            case 15:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                printf("Word count: %d\n", countWords(str));  
                break;  
            case 16:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                removeDuplicates(str);  
                printf("String after removing duplicates: %s\n", str);  
                break;  
            case 17:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                compressString(str, result);  
                printf("Compressed string: %s\n", result);  
                break;  
            case 18:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                longestWord(str, result);  
                printf("Longest word: %s\n", result);  
                break;  
            case 19:  
                printf("Enter first string: ");  
                scanf("%s", str);  
                printf("Enter second string: ");  
                char str4[100];  
                scanf("%s", str4);  
                printf("Is rotation: %s\n", isRotation(str, str4) ? "Yes" : "No");  
                break;  
            case 20:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                printf("Enter character to count: ");  
                char ch;  
                scanf(" %c", &ch);  
                printf("Count of '%c': %d\n", ch, countChar(str, ch));  
                break;  
            case 21:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                printf("Enter substring to find: ");  
                scanf("%s", find);  
                printf("String after find and replace: ");  
                printf("%s\n", findAndReplace(str, find, replace));  
                break;  
            case 22:  
                printf("Enter a string: ");  
                scanf("%s", str);  
                longestPalindrome(str, result);  
                printf("Longest palindromic substring: %s\n", result);  
                break;  
            case 23:  
                printf("Enter a string to find permutations: ");  
                scanf("%s", str);  
                printf("Permutations of the string:\n");  
                printPermutations(str);  
                break;  
            case 24:  
                printf("Enter a string for string rotation: ");  
                scanf("%s", str);  
                stringRotation(str);  
                printf("Rotated string: %s\n", str);  
                break; 
            case 0:  
                printf("Exiting the program...\n");  
                break;  
            default:  
                printf("Invalid choice! Please try again.\n");  
                break;  
        }  
}  
