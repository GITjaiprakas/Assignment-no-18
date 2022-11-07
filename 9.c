#include<stdio.h>
#include<string.h>
void wordrev(int ,char [],char []);
int main(){
    int i,j;
    char str[100]="My name is jaiprakas";
    char sts[100];
    i=strlen(str);
    wordrev(--i,str,sts);
    for(j=0;j<i+1;j++){
        printf("%c",sts[j]);
    }
    return 0;
}
void wordrev(int i,char str[],char sts[]){
    int x,j=0,n=i;
    while(i>=0){
        if((str[i]==' ')||(i==0)){
            if(i==n||i==0){
                x=i;
            }
            else{
                x=i+1;
            }
            while(str[x]){
                if(str[x]==' '){
                    break;
                }   
                sts[j]=str[x];
                j++;
                x++;
            }  
            if(str[x]=='\0'||str[x]==' '){
                sts[j]=' ';
                j++;
            }
        }
        i--;
    }
}
