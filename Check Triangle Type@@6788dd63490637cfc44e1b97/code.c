#include<stdio.h>
int main(){
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(x+y>z && x+z>y && z+y>x){
   if(x==y && y==z)
   printf("Equilateral");
else if(x==y|| y==z|| z==x)
    printf("Isosceles");
else
    printf("Scalene");
    }
else{
    printf("Eror")
}


    return 0;
}