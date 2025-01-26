#include'stringslibrary.h'
/*
 * Function to apply the Caesar cipher to a given text with a specified shift.  
 * The function modifies the original text by shifting alphabetic characters.  
 *  
 * @param text The input text to be modified in place.  
 * @param shift The number of positions by which to shift each letter.  
 */  
void caesarCipher(char *text, int shift) {  
    int length = stringLength(text); // Get the length of the input text  
    int move = shift % 26;     // Normalize the shift to be within 0-25  
    char base;                 // Base character for shifting  

    // Adjust move to be non-negative  
    while (move < 0) {  
        move += 26; // Adjust negative shifts into the positive range  
    }  

    // Iterate over each character in the string until the null terminator  
    while (*text != '\0') {  
        // Check if the character is an uppercase or lowercase letter  
        if ((*text >= 'a' && *text <= 'z') || (*text >= 'A' && *text <= 'Z')) {  
            // Determine the base character according to the case of the letter  
            if (*text >= 'a') {  
                base = 'a'; // Set base for lowercase letters  
            } else {  
                base = 'A'; // Set base for uppercase letters  
            }  

            // Shift character within its respective bounds (lowercase or uppercase)  
            *text = ((*text - base + move) % 26) + base; // Shift and wrap around if necessary  
        }  
        text++; // Move to the next character in the string  
    }  
}  
