#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
float vectormultiplic(){
    float a,b,c,numformult;
    puts("enter coordinates");
    scanf("%f %f %f",&a,&b,&c); //Ввод вектора
    puts("What number do you want to multiply the vector of?");
    scanf("%f",&numformult);// На какое число нам умножать вектора
    a = a * numformult;
    b = b * numformult;
    c = c * numformult;
    return printf("%f %f %f\t",a,b,c);
}

float vectoroperation() {
    int sizevector, vectorcommand; // C помощью переменной 'a' задаем длинну вектора, а с помощью переменной g команду для ветторов /сложение/вычитание/умнлжение

    float res; //Промежуточный контейнер для хранение результата операции над векторами. Нужен для удобства. Можно убрать при надобности. Убирать я его не хочу

    float *vector1 = NULL, *vector2 = NULL; //Два вектора незивестной длинны. Для них мы не освобождали память

    puts("V kakom n-mernom prostranstve budut vectora"); //Вычисление векторов может происходить в 2-х мерном пространстве, 3-х мерном и тд
    scanf("%i", &sizevector); //Пользователь задает длинну вектора

    if (sizevector > 0) {
        puts("Vvedite 1 vector");
        vector1 = malloc(sizevector * sizeof(float)); //Выделиние памяти для 3-х чисел типа "float
        for (int i = 0; i < sizevector; i++) {  //ввод каждого элемента вектора
            printf("vector1[%d]", i); //Просьба ввести вектор определенного номер
            scanf("%f", &vector1[i]); // Считывание вектора
        }

        puts("Vvedite 2 vector"); //Аналогичные операции и со 2 вектором
        puts("Vvedite 2 vector"); //Аналогичные операции и со 2 вектором
        vector2 = malloc(sizevector * sizeof(float));
        for (int i = 0; i < sizevector; i++) {
            printf("vector2[%d]", i);
            scanf("%f", &vector2[i]);
        }

        puts("What operation do you want to perform?\n"
             "1- Addition\n"
             "2-Subtraction\n"
             "3- Scalar product"); // Выбор операции с векторами
        scanf("%i", &vectorcommand); //Выбор операции над уже заданными векторами

        switch (vectorcommand) {
            case 1:
                printf("{"); // Скобка для красоты
                for (int i = 0; i < sizevector; i++) { //Операции с ветором и вывод их на экрна
                    res = vector1[i] + vector2[i];
                    printf("%.2f\t", res);
                }
                puts("\b}");
                free(vector1);
                free(vector2); //Освобождеение памяти
                break;
            case 2:
                printf("{"); // Или для удобства
                for (int i = 0; i < sizevector; i++) { //Операции с ветором и вывод их на экрна
                    res = vector1[i] - vector2[i];
                    printf("%.2f\t", res);
                }
                puts("\b}");
                free(vector1);
                free(vector2); //Освобождение памяти
                break;
            case 3:
                res = 0;
                for (int i = 0; i < sizevector; i++) {
                    res = res + (vector1[i] * vector2[i]);
                }
                printf("%.2f\t", res);
                free(vector1);
                free(vector2);  //Освобождение памяти
                break;
        }
    }
    else {
        puts("Vvedite polozhitelnoe znachenie");
    }
    return 0;
}

int main(void)
{   float i=0, a=0, b=0;
    int  n;
    int command, returntry; //Первая переменная это команда, а вторая переменная нужна нам для повторного запуска программы
    while(1) { //Обернули все в цикл. Потом для выхода из него используем break
        puts("1-Vichitanie\n2-Slozhenie\n3-Delenie\n4-Umnozhenie\n5-Vozvedenie v stepen\n6-Factorial\n7-vector operation\n8-multiply vector by number\ncommand:");
        scanf("%i", &command);
        if ((command >= 1) && (command <= 8)) { // Проверяем. Не ошибся ли пользователь с командой
            switch (command) { //Отдельно для других операций

                case 1:
                    puts("Operaciya 'Vichitanie'.");
                    puts("Vvedite pervoe znachenie.");
                    scanf("%f", &a);
                    puts("Vvedite vtoroe znachenie.");
                    scanf("%f", &b);
                    printf("X - Y = %f\n", a - b);
                    break;
                case 2:
                    puts("Oeraciya 'Slozhenie'.");
                    puts("Vvedite pervoe znachenie.");
                    scanf("%f", &a);
                    puts("Vvedite vtoroe znachenie.");
                    scanf("%f", &b);
                    printf("X + Y = %f\n", a + b);
                    break;
                case 3:
                    puts("Operaciya 'Delenie'.");
                    puts("Vvedite pervoe znachenie.");
                    scanf("%f", &a);
                    puts("Vvedite vtoroe znachenie.");
                    scanf("%f", &b);
                    if (b == 0)
                    {
                        printf("Error!\n");
                    } else
                    {
                        printf("X / Y = %f\n", a / b);
                    }
                    break;
                case 4:
                    puts("Operaciya 'Umnozhenie'.");
                    puts("Vvedite pervoe znachenie.");
                    scanf("%f", &a);
                    puts("Vvedite vtoroe znachenie.");
                    scanf("%f", &b);
                    printf("X * Y = %f\n", a * b);
                    break;
                case 5:
                    puts("Operaciya 'Vozvedenie v stepen'.");
                    puts("Vvedite znachenie.");
                    scanf("%f", &a);
                    puts("Vvedite stepen.");
                    scanf("%i", &n);
                    i = 1;
                    for (; n > 0; --n)
                    {
                        i = i * a;
                    }
                    printf("X ^ N = %f\n", i);
                    break;
                case 6:
                    puts("Operaciya'Factorial'.");
                    puts("Vvedite znachenie.");
                    scanf("%f", &a);
                    if (a == 0)
                    {
                        printf("X! = 1\n");
                    } else {
                        i = 1;
                        for (n = 1; n <= a; n++)
                        {
                            i = i * n;
                        }
                        printf("X! = %f\n", i);
                    }
                    break;
                case 7:
                    vectoroperation();
                    break;
                case 8:
                    vectormultiplic();
                    break;
            }

        } else {
            puts("Undefined command");
        }
        puts("Enter '1' if you want to continue or any other word to exit");
        scanf("%i", &returntry);
        if (returntry == 1) {
            continue;
        } else {
            puts("Program ended");
            break;
        }
    }
}
