#include'stringslibrary.h'
/*
 * Function to apply the Caesar cipher to a given text with a specified shift.  
 * The function modifies the original text by shifting alphabetic characters.  
 */
void caesarCipher(char *text, int shift) {  
    int length = stringLength(text); // Get the length of the input text  
    int move = shift % 26;     // Normalize the shift to be within 0-25  

    // Iterate over each character in the string until the null terminator  
    while (*text != '\0') {  
        // Check if the character is an uppercase or lowercase letter  
        if ((*text >= 'a' && *text <= 'z') || (*text >= 'A' && *text <= 'Z')) {  
            // For lowercase letters  
            if (*text >= 'a') {  
                *text = (*text + move); // Shift the character by the normalized move  

                // If the new character is before 'a', wrap it by adding 26  
                if (*text < 'a') {  
                    *text += 26;  
                }  
                // If the new character exceeds 'z', wrap it by subtracting 26  
                if (*text > 'z') {  
                    *text -= 26;  
                }  
            }  
            // For uppercase letters  
            else {  
                *text = (*text + move); // Shift the character by the normalized move  

                // If the new character is before 'A', wrap it by adding 26  
                if (*text < 'A') {  
                    *text += 26;  
                }  
                // If the new character exceeds 'Z', wrap it by subtracting 26  
                if (*text > 'Z') {  
                    *text -= 26;  
                }  
            }  
        }  
        text++; // Move to the next character in the string  
    }  
}
