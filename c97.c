#include<stdio.h>
int main(){
    int num, encrypt,passwd,key=2501;
    printf("input 3 numbers:"),scanf("%d",&num);
    encrypt=num^key;
    printf("encrypt:%d\n",encrypt);
    while(2){
    printf("password:"),scanf("%d",&passwd);
    printf("original data:%d\n",encrypt^passwd);
    }
    return 0;
}