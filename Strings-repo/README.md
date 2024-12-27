# string library guide :

# 1. stringLength
## Analysis
The stringLength function calculates the length of a given string. It iterates through each character in the string until it reaches the null terminator ('\0'), counting the number of characters.

 ## Algorithm Design:
1 - Initialize a counter Length to 0 .
2 - Loop through each character in the string until the null terminator is encountered .
3 - Increment the counter for each character .
4 - Return the counter as the length of the string .


# 2. findSubstring
## Analysis
The findSubstring function searches for the first occurrence of a substring (sub) within a main string (str). It returns the starting index of the substring if found, or -1 if not found.

 ## Algorithm Design:
1-Calculate the lengths of the main string and the substring.
2-If the substring is longer than the main string, return -1.
3-Loop through the main string, checking each possible starting position for the substring.
4-For each starting position, compare the characters of the substring with the corresponding characters in the main string.
5-If a match is found, return the starting index.
6-If no match is found, return -1.
