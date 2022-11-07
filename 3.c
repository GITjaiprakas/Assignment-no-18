#include<stdio.h>
#include<string.h>
int cmp(char s1[],char s2[]){
    int i;
    for(i=0;s1[i];i++){
        if(s1[i]-s2[i]<0){
            return -1;
        }
        else if(s1[i]-s2[i]>0){
            return 1;
        }
        else{
            return 0;
        }

    }
}
void check(int value,char s1[],char s2[]){
    if(value=0){
        printf("%s is equal to %s",s1,s2);
    }
    else if(value>0){
        printf("%s is greater than %s",s1,s2);
    }
    else{
        printf("%s is greater than %s",s2,s1);
    }
}
int main(){
    int value;
    char s1[20],s2[20];
    printf("Enter first string : ");
    fgets(s1,20,stdin);
    printf("Enter second string : ");
    fgets(s2,20,stdin);
    value=cmp(s1,s2);
    check(value,s1,s2);
    return 0;
}
