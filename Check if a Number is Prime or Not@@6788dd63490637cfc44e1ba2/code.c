#include<stdio.h>
int main(){
int x,i,count=0;
scanf("%d",&x);
for(i=0,i<=x; i++){
    if(x%i==0){
        count++;
    }
}if(count==2){
printf("Prime");
}else{
    printf("Not Prime");
}
    return 0;
}