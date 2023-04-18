#include<stdio.h> 
typedef struct{
 float S; 
 float p;
}chuvidientich; 

chuvidientich tinhchuvidientich (){
    float r; 
    chuvidientich a;   
    a.S = r * r * 3.14; 
    a.p = 2*3.14*r; 
    return a;
}
int main(){
chuvidientich a; 
float r; 
printf("Nhap gia tri r: ", r); 
scanf("%f",&r); 
a = tinhchuvidientich(); 
printf("Dien tich la %f ", a.S);
printf("Chu vi la %g", a.p);
return 0;

}