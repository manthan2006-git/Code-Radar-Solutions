#include<stdio.h>
int main(){
char c;
scanf("%c",&c);
if( ('A'<=c)&&(c>='Z')){
    printf("Uppercaste");
}else if( ('a'<=c)&&(c>='z')){
    printf("Lowercaste");
}else{
    printf("Error");
}





    return 0;
}