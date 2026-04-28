#include <stdio.h>

int main() {
    char name[50];
    int age;
    printf("Введите ваше имя: ");
    scanf("%s", name);
    printf("Введите ваш возраст: ");
    scanf("%d", &age);
    printf("\nПривет, %s! Тебе %d лет.\n", name, age);
    return 0;
}
