// main.c
// Author: Nikolay


#include <stdio.h>
#include <stdlib.h>
float vectormultiplic()
{
    float a,b,c,numformult;
    puts("enter coordinates");
    scanf("%f %f %f",&a,&b,&c);
    puts("Enter the number to multiply");
    scanf("%f",&numformult);//число на которое умножать вектора
    a = a * numformult;
    b = b * numformult;
    c = c * numformult;
    return printf("%f %f %f\t",a,b,c);
}

float vectoroperation()
{
    int sizevector, vectorcommand; // sizevector - длинна вектора, а с помощью переменной vectorcommand задаётся команда для векторов /сложение/вычитание/умножение
    float res; // Хранит результат операции над векторами
    float *vector1 = NULL, *vector2 = NULL; //Два вектора неизвестной длинны.

    puts("V kakom n-mernom prostranstve budut vectora");
    scanf("%i", &sizevector); //Ввод длины вектора

    if (sizevector > 0)
    {
        puts("Vvedite 1 vector");
        vector1 = malloc(sizevector * sizeof(float)); //Выделиние памяти для 3-х чисел типа "float
        for (int i = 0; i < sizevector; i++)
        {                              //ввод каждого элемента вектора
            printf("vector1[%d]", i); //Просьба ввести вектор определенного номера
            scanf("%f", &vector1[i]); // Считывание вектора
        }

        puts("Vvedite 2 vector"); //Аналогичные операции и со 2 вектором
        vector2 = malloc(sizevector * sizeof(float));
        for (int i = 0; i < sizevector; i++) {
            printf("vector2[%d]", i);
            scanf("%f", &vector2[i]);
        }

        puts("What operation do you want to perform?\n"
             "1- Addition\n"
             "2-Subtraction\n"
             "3- Scalar product");
        scanf("%i", &vectorcommand); //Выбор операции над уже заданными векторами

        switch (vectorcommand)
        {
            case 1:
                for (int i = 0; i < sizevector; i++)
                { //Операции с вектором и их вывод
                    res = vector1[i] + vector2[i];
                    printf("%.2f\t", res);
                }
                puts("\b}");
                break;
            case 2:
                for (int i = 0; i < sizevector; i++)
                {
                    res = vector1[i] - vector2[i];
                    printf("%.2f\t", res);
                }
                puts("\b}");
                break;
            case 3:
                res = 0;
                for (int i = 0; i < sizevector; i++)
                {
                    res = res + (vector1[i] * vector2[i]);
                }
                printf("%.2f\t", res);
                break;
        }
        free(vector1);//Освобождение памяти
        free(vector2);
    }
    else
    {
        puts("Vvedite polozhitelnoe znachenie");
    }
    return 0;
}

int main(void)
{   float i=0, a=0, b=0;
    int  n;
    int command, returntry; //Первая переменная это команда, а вторая переменная нужна для повторного запуска программы
    while(1)
    {
        puts("1-Vichitanie\n2-Slozhenie\n3-Delenie\n4-Umnozhenie\n5-Vozvedenie v stepen\n6-Factorial\n7-vector operation\n8-multiply vector by number\nСommand:");
        scanf("%i", &command);
        if ((command >= 1) && (command <= 8)) // Проверка выбора команды
        { 
            switch (command)
            {
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
                    }
                    else
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
                    }
                    else
                    {
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

        }
        else
        {
            puts("Undefined command");
        }
        puts("Enter '1' if you want to continue or any other word to exit");
        scanf("%i", &returntry);// Спрашиваем пользователя что делать дальше
        if (returntry == 1)
        {
            continue;
        }
        else
        {
            puts("Program ended");
            break;
        }
    }
}
