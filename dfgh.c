#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    int max_number = 100;
    
    // Инициализация генератора случайных чисел
    srand(time(0));
    number = rand() % max_number + 1;
    
    printf(" Добро пожаловать в игру 'Угадай число'!\n");
    printf("Я загадал число от 1 до %d.\n", max_number);
    printf("Попробуй угадать!\n\n");
    
    do {
        printf("Введи число: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess > number) {
            printf(" Меньше! Попробуй ещё.\n");
        } else if (guess < number) {
            printf(" Больше! Попробуй ещё.\n");
        } else {
            printf("\n Поздравляю! Ты угадал число %d за %d попыток! \n", number, attempts);
        }
    } while (guess != number);
    
    return 0;
}
