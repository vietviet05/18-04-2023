#include<stdio.h>
void tinh_tong(float a, float b, floa){  
    float *tong;
    *tong = a + b; 
}
int main(){
    float a, b, sum ; 
    float *tong;
    printf("nhap 2 so a va b: "); 
    scanf("%f%f", &a, &b); 
    tinh_tong(a,b);
    printf("tong 2 so la: %g", sum);
}