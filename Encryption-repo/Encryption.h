#ifndef ENCRYPTION_H_INCLUDED
#define ENCRYPTION_H_INCLUDED
#include<stdio.h>
#include"Stringslibrary.h"
#include <stdbool.h>
void atbashCipher(char *text);
void caesarCipher(char *text, int shift) ;
void vigenereCipher(char *text, const char *key);
void xorCipher(char *text, char key) ;
#endif //  NUMBERSLIBRARY_H_INCLUDED
