#include<stdio.h>
void check(char s[]){
    int ca=0,cn=0;
    for(int i=0;s[i];i++){
        if(s[i]>='0'&&s[i]<='9'){
            cn++;
        }
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]>='Z')){
            ca++;
        }
    }
    if(ca&&cn>=1){
        printf("the given string is alphanumeric");
    }
    else{
        printf("the given string is not alphanumeric");
    }
}
int main(){
    char s[40];
    printf("Enter a string : ");
    fgets(s,40,stdin);
    check(s);
    return 0;
}
