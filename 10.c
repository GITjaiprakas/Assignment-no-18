#include<stdio.h>
void counter(char s[]){
    int c=0,count,j,i;
    char temp;
    while(s[c]!='\n'){
        c++;
    }
    for(i=0;i<c-1;i++){
        count=0;
        for(j=i+1;j<c;j++){
            if(s[i]==s[j]){
                if(s[i]==temp){
                    break;
                }
                count++;
                if(count==1){
                    break;
                }
            }
        }
        if(count==1){
            temp=s[i];
            printf("%c ",s[i]);
        }
    }
}
int main(){
    char s[40];
    printf("Enter any string : ");
    fgets(s,40,stdin);
    counter(s);
    return 0;
}
