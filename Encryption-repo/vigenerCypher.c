void vigenereCipher(char *text, const char *key) {
    char keyy[500], drop[500];
    const char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    stringCopy(drop, text); // Copy original text
    int textLength = stringLength(text);
    int keyLength = stringLength(key);

    // Extend the key to match the length of the text
    int i = 0, j = 0;
    while (i < textLength) {
        keyy[i] = key[j];
        i++;
        j++;
        if (j == keyLength) {
            j = 0; // Restart key index
        }
    }
    keyy[i] = '\0'; // Null-terminate the extended key

    toLowerCase(keyy); // Convert key to lowercase
    toLowerCase(text); // Convert text to lowercase for processing

    printf("The extended key is: %s\n", keyy);

    // Encrypt the text
    for (int m = 0; text[m] != '\0'; m++) {
        if (text[m] >= 'a' && text[m] <= 'z') { // Process only alphabetic characters
            int n = (text[m] - 'a' + keyy[m] - 'a') % 26;
            text[m] = alpha[n]; // Encrypted character
            if (drop[m] >= 'A' && drop[m] <= 'Z') { // Check original character for case
                text[m] -= 32; // Convert back to uppercase
            }
        }
    }
}
