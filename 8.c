#include<stdio.h>
int counter(char s[]){
    int c=0,n=0;
    while(s[c]){
        if(s[c]==' '){
            n++;
        }
        c++;
    }
    return n;
}
int main(){
    char s[40];
    printf("Enter any string : ");
    fgets(s,40,stdin);
    printf("%d words are there in the given string",counter(s));
    return 0;
}
