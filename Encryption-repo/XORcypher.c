void xorCipher(char *text, char key) {  
    while (*text != '\0') {  
        *text ^= key;  // XOR the current character with the key  
        text++;        // Move to the next character  
    }  
}  
