#include<stdio.h>
int len(char str[]){
    int d=0,i;
    for(i=0;str[i];i++){
        if(str[i]==' '){
            d++;
        }
    }
    return i-d;
}
int main(){
    char str[20]="jaiprakas juhota";
    // printf("Enter any string ");
    // fgets(str,20,stdin);
    printf("the length of the string is %d",len(str));
    return 0;
}
