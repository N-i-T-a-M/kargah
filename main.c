#include <stdio.h>
int taghsim (int x,int y){
    return x/y;
}
int zarb (int x){
    return 2*x;
}
int main(){
    int  a;
    scanf("%d",&a);
    int t = zarb(taghsim(a+a,3));
    printf("%d",t);
}