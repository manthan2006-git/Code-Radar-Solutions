#include<stdio.h>
int main(){
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(x+y>z && x+z>y && z+y>x){
    printf("Equilateral");
}else if(x==y|| x==z|| z==y)
{
    printf("Isosceles");
}else{
    printf("Scalene");
}


    return 0;
}