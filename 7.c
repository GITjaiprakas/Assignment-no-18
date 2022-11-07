#include<stdio.h>
void check(char s[],int c){
    int i;
    for(i=0;i<c;i++){
        if(s[c-1-i]!=s[i]){
            break;
        }
    }
    if(i==c){
        printf("the string is palindrome");
    }
    else{
        printf("the string is not palindrome");
    }
}
int main(){
    int c=0;
    char s[30];
    printf("Enter any string : ");
    fgets(s,30,stdin);
    while(s[c]){
        c++;
    }
    check(s,c-1);
    return 0;
}
