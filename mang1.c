#include<stdio.h>
int main (){
int A[5];
int sum = 0; 
for (int i = 0 ; i < 5 ; i ++){
    printf("Nhap phan tu thu %d của A: ", i + 1); 
    scanf("%d", &A[i]);  
    if ((A[i] % 3 == 0)&&(A[i]%5!=0)) {
        sum = sum + A[i];
    } 
}  
printf("%d", sum);
return 0;
}