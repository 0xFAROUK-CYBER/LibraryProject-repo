/*substitutes each letter with its reverse counterpart in the
alphabet (A, a with Z, z; B, b with Y, y; etc.)*/




void atbashCipher(char *text){
int length=stringLength(text),difference;
 char word_encrypted[2]={"\0"};
for(int  i=0;  i<length;  i++){
                                
        if(text[i]>= 'A' && text[i]<= 'Z'  ){
                                        difference = 'Z'- text[i];
                                        word_encrypted[0] =  'Z' - (25 - difference);
                                        text[i]=word_encrypted[0];

         }

         if(text[i]>= 'a' && text[i]<= 'z'  ){

                                        difference = 'z'- text[i];
                                        word_encrypted[0] =  'z' - (25 - difference);
                                        text[i]=word_encrypted[0];
        }

    }

}


int stringLength( const char* str){
int Length=0;
while(str[Length] != '\0'){
Length++;
}
return Length;
}