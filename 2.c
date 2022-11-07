#include<stdio.h>
#include<string.h>
void rev(char []);
void swap(char [],int ,int );
int main(){
    char str[30]="string";
    rev(str);
    printf("%s",str);
    return 0;
}
void rev(char str[]){
    int i=0;
    int y;
    int x=strlen(str);
    while(i!=x/2){
        y=x-i-1;
        swap(str,i,y);
        i++;
    }
}
void swap(char str[],int i,int x){
    int temp;
    temp=str[i];
    str[i]=str[x];
    str[x]=temp;
}
