#include<stdio.h>
int main(){
char c;
scanf("%c",&c);
if( ('A'<=c)&&(c>='Z')){
    printf("Uppercaste");
}else if( ('a'<=c)&&(c>='z')){
    printf("Lowercaste");
}else{
    printf("Not an alphabet");
}





    return 0;
}