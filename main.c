#include <stdio.h>
int taghsim (int x,int y){
    return x/y;
}
int main(){
    int  a;
    scanf("%d",&a);
    int t = taghsim(a+a,3);
    printf("%d",t);
}