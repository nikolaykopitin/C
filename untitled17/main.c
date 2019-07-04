#include <stdio.h>

#include <locale.h>
#include <stdlib.h>


int main(void)
{

    char operation_type = 0;// Операции '+' '-' '*' '/' '^' '!'
    char data_type = 0; // в эту переменую считывается 's' либо 'v', использование отдельных чисел (s) или векторов (v)
    int i = 0; // переменная, которую будем использовать как счетчик, для операций

    FILE *in_file; // дескриптор входного файла
    FILE *out_file; // дескриптор выходного файла
    in_file = fopen("input.txt", "r");
    out_file = fopen("output.txt", "w");
    fscanf(in_file, "%c", &operation_type); // Прочитали тип операции
    fscanf(in_file, " %c", &data_type); //прочитали 's' либо 'v'


    if (data_type =='s')// работа с числами
    {
        int f_num;
        int s_num;
        float result; // в эту переменную сохраним результат операции.


        fscanf(in_file, " %d", &f_num); // читаем из файла первое число
        fscanf(in_file, " %d", &s_num); // читаем из файла второе число

        switch (operation_type)
        {
            case '-':
                result = f_num - s_num;
                fprintf(out_file, "Result: %d - %d = %f \n", f_num, s_num, result);
                break;
            case '+':
                result = f_num + s_num;
                fprintf(out_file, "Result: %d + %d = %f \n", f_num, s_num, result);
                break;
            case '*':
                result = f_num * s_num;
                fprintf(out_file, "Result: %d * %d = %f \n", f_num, s_num, result);
                break;
            case '/':
                result = f_num / s_num;
                fprintf(out_file, "Result: %d / %d = %f \n", f_num, s_num,
                        result);
                break;
            case '^':
                result = 1; // нужно задать значение result, чтобы не испортить первый шаг цикла

                for (i = 0; i < s_num; i++)
                {
                    result = result * f_num;
                }
                fprintf(out_file, "Result: %d ^ %d = %f \n", f_num, s_num,
                        result);
                break;
            case '!':
                if (f_num == 0)
                {
                    result = 1;
                }
                else
                {
                    result = 1;
                    for (i = 1; i <= f_num; i++)
                    {
                        result = result * i;
                    }
                }
                fprintf(out_file, "Result: %d! = %f \n", f_num, result);
                break;
            default:
                puts("Error - invalid operation character entered");
                break;
        }
    }
    else if (data_type == 'v') // работа с векторами
    {
        int *vector_1; // указатель на первый вектор.
        int *vector_2; // указатель на второй вектор
        float *vectorResult; // указатель на вектор, содержащий результат.
        int vectorSize = 0; //размер векторов, читается из файла

        fscanf(in_file, " %d", &vectorSize); // читаем из файла размер векторов

        // выделяем память под векторы
        vector_1 = calloc(vectorSize, sizeof(int)); // функция calloc выделяет память для вектора.
        vector_2 = calloc(vectorSize, sizeof(int));
        vectorResult = calloc(vectorSize, sizeof(float));
        for (i = 0; i < vectorSize; i++)// читаем значения 1 вектора
        {
            fscanf(in_file, " %d", &vector_1[i]);
        }
        // читаем значения 2 вектора
        for (i = 0; i < vectorSize; i++)
        {
            fscanf(in_file, " %d", &vector_2[i]);
        }
        switch (operation_type)//выбор операции
        {
            case '+':
                for (i = 0; i < vectorSize; i++)
                {
                    vectorResult[i] = vector_1[i] + vector_2[i];
                }
                fprintf(out_file, "(");
                for (i = 0; i < vectorSize; i++)
                {
                    if (i != vectorSize - 1)
                    {
                        fprintf(out_file, "%d ", vector_1[i]);
                    }
                    else
                    {
                        fprintf(out_file, "%d)", vector_1[i]);
                    }
                }
                fprintf(out_file, " + (");
                for (i = 0; i < vectorSize; i++)
                {
                    if (i != vectorSize - 1)
                    {
                        fprintf(out_file, "%d ", vector_2[i]);
                    }
                    else
                    {
                        fprintf(out_file, "%d)", vector_2[i]);
                    }
                }
                fprintf(out_file, " = (");
                for (i = 0; i < vectorSize; i++)
                {
                    if (i != vectorSize - 1)
                    {
                        fprintf(out_file, "%.2f ", vectorResult[i]);
                    }
                    else
                    {
                        fprintf(out_file, "%.2f)", vectorResult[i]);
                    }
                }
                break;
            case '-':
                for (i = 0; i < vectorSize; i++)
                {
                    vectorResult[i] = vector_1[i] - vector_2[i];
                }
                fprintf(out_file, "(");
                for (i = 0; i < vectorSize; i++)
                {
                    if (i != vectorSize - 1)
                    {
                        fprintf(out_file, "%d ", vector_1[i]);
                    }
                    else
                    {
                        fprintf(out_file, "%d)", vector_1[i]);
                    }
                }
                fprintf(out_file, " - (");
                for (i = 0; i < vectorSize; i++)
                {
                    if (i != vectorSize - 1)
                    {
                        fprintf(out_file, "%d ", vector_2[i]);
                    }
                    else
                    {
                        fprintf(out_file, "%d)", vector_2[i]);
                    }
                }
                fprintf(out_file, " = (");
                for (i = 0; i < vectorSize; i++)
                {
                    if (i != vectorSize - 1)
                    {
                        fprintf(out_file, "%.2f ", vectorResult[i]);
                    }
                    else
                    {
                        fprintf(out_file, "%.2f)", vectorResult[i]);
                    }
                }
                break;
            case '*':
                for (i = 0; i < vectorSize; i++)
                {
                    vectorResult[i] = vector_1[i] * vector_2[i];
                }
                fprintf(out_file, "(");
                for (i = 0; i < vectorSize; i++)
                {
                    if (i != vectorSize - 1)
                    {
                        fprintf(out_file, "%d ", vector_1[i]);
                    }
                    else
                    {
                        fprintf(out_file, "%d)", vector_1[i]);
                    }
                }
                fprintf(out_file, " * (");
                for (i = 0; i < vectorSize; i++)
                {
                    if (i != vectorSize - 1)
                    {
                        fprintf(out_file, "%d ", vector_2[i]);
                    }
                    else
                    {
                        fprintf(out_file, "%d)", vector_2[i]);
                    }
                }
                fprintf(out_file, " = (");
                for (i = 0; i < vectorSize; i++)
                {
                    if (i != vectorSize - 1)
                    {
                        fprintf(out_file, "%.2f ", vectorResult[i]);
                    }
                    else
                    {
                        fprintf(out_file, "%.2f)", vectorResult[i]);
                    }
                }
                break;
            default:
                puts("Error - invalid operation character entered.");
                break;
        }
        // free - освобождает память
        free(vector_1);
        free(vector_2);
        free(vectorResult);
    }
    fclose(in_file);//закрываем файлы
    fclose(out_file);
}