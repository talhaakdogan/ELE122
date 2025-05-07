#include <stdio.h>
#include <string.h>


int isPalindrome(char str[]);
void ReverseStr(char str[]);
void SanitizedStr(char str[]);


int main(){
    char input[100];
    while(1){
        printf("Enter a string: ");
        fgets(input, 100, stdin);
        input[strcspn(input, "\n")] = '\0';
        isPalindrome(input);


    }


    return 0;
}
//This function checks if the given string is Palindrome.
int isPalindrome(char str[]){
    char str2[100];
    strcpy(str2, str);
    SanitizedStr(str2);
    ReverseStr(str);
    int length1= strlen(str)-1;
    int length2= strlen(str2)-1;



    for(int i=0; i<length1 && i<length2 ; i++ ){
        if(str[i]!=str2[i]){
            printf("It is not Palindrome\n");
            return 0;
        }
    }
    printf("It is Palindrome\n");
    return 1;

}
//This function reverses the string.
void ReverseStr(char str[]){
    SanitizedStr(str);
    int j= strlen(str)-1; //last character of the string.
    char tempi;
    for(int i=0; i<j ;i++){
        tempi=str[i];
        str[i]=str[j];
        str[j]=tempi;
        j--;
    }

}
//This function removes unwanted characters from the string;
void SanitizedStr(char str[]){
    int length=strlen(str);
    int newindx=0;//New string will be written on this;
    for(int i=0; i<length; i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }

    for(int i=0; i<length; i++){
        if((str[i]<'a' || str[i]>'z') && (str[i]<'0' || str[i]>'9')){
            continue;

        }else{
            str[newindx]=str[i];
            newindx++;
        }
    }
    str[newindx]='\0';

}
