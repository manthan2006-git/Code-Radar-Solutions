#include<stdio.h>
int main(){
char c;
scanf("%c",&c);
if( (c<='A')&&(c>='Z')){
    printf("Uppercaste");
}else if( (c<='a')&&(c>='z')){
    printf("Lowercaste");
}else{
    printf("Not an alphabet");
}





    return 0;
}