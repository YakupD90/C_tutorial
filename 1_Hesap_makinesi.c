#include  <stdio.h>

int main(void){
    char operator;
    float sayi1, sayi2, sonuc;
    printf("1. sayiyi giriniz----->");
    scanf("%f",&sayi1);

    printf("Operator seçiniz (+, -, /, *)----->");
    scanf(" %c", &operator);// boşluğu scanf in newline yada boşluğu atlayıp sadece karekteri alması için

    printf("2. sayiyi giriniz----->");
    scanf("%f",&sayi2);

    switch (operator)
    {
    case '+':
        sonuc=sayi1+sayi2;
        break;
    case '-':
        sonuc=sayi1-sayi2;
        break;
    case '*':
        sonuc=sayi1*sayi2;
        break;
    case '/':
        sonuc=sayi1/sayi2;
        break;
    default:
        printf("işlemi doğru girdiğinizden emin olun");
        break;
    }//switch bitiş

    printf("\n");
    printf("sonuc = %f", sonuc);
    return 0; }// main bitiş

