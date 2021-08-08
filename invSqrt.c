#include <stdio.h>


float invSqrt(float x){
    int i=*(int*)&x;
    i=1597463007-(i>>1);    //I don't know.
    x=*(float*)&i;
    return x;
}

int main(){
    float x=0,ans1=0,ans2=0;
    printf("Enter X:");
    scanf("%f",&x);
    ans1=invSqrt(x);
    printf("\ninvSqrt is %f\n",ans1);
    return 0;
    

}