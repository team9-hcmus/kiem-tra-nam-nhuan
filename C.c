#include <stdio.h>

int main() {
    int year;
    printf("Nhap nam can kiem tra: ");
    scanf_s("%d",&year);

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        printf("%d la nam nhuan", year);
    else
        printf("%d khong phai la nam nhuan", year);

    return 0;
}
