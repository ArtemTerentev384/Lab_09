#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#define ROW 9
#define COL 9

void TaskOne();
void TaskTwo();
void TaskThree();
void HomeWork();

double a, b, y;

void main() {
	setlocale(LC_ALL, "RUS");
	//TaskOne();
	//TaskTwo();
    //TaskThree();
	HomeWork();


}

void TaskOne()
{
    // а)
    /*int row, col;
    printf("\n");
    for (row = 1; row <= ROW; ++row) {
        for (col = 1; col <= COL; ++col)
            printf("%5d", col * row);
        printf("\n");
    }*/

    // б)
    /*int row, col;
    printf("\n");
    for (row = 1; row <= ROW; ++row) {
        for (col = 1; col <= row; ++col)
            printf("%5d", col * row);
        printf("\n");
    }*/

    // в)
    /*int row, col;
    for (row = 1; row <= 5; ++row) {
        for (col = 1; col <= row; ++col)
            printf("%3d", row * 10);
        printf("\n");
    }*/
}

void TaskTwo()
{
    /*int row, col;
    for (row = 1; row <= 5; ++row) {
        for (col = 1; col <= row; ++col)
        {
            printf("%3d", row * 10);
        }
        printf("\n");
    }

    printf("Произведения предпоследней и второй цифры числа\n");
    for (col = 1; col <= row; ++col)
    {
        puts("0");
    }*/
}

void TaskThree()
{
    char choice = 'n';
    int row, col;

    do {
        for (row = 1; row <= 5; ++row) {
            for (col = 1; col <= row; ++col) {
                printf("%3d", row * 10);
            }
            printf("\n");
        }

        printf("Произведения предпоследней и второй цифры числа\n");
        for (col = 1; col <= row; ++col) {
            puts("0");
        }

        printf("Продолжить? (Да - y, нет - n): ");
        scanf_s(" %c", &choice, 1);

    } while (choice == 'y' || choice == 'Y');

}

void HomeWork()
{
    char sym;
    int w1, h1;
    int w2, h2;
    int offset_x;
    int h3;
    char choice = 'n';


    do {
        printf("Введите символ для рисования фигуры: ");
        scanf_s(" %c", &sym);

        printf("Введите общую ширину и высоту верхнего прямоугольника (например, 15 6): ");
        scanf_s("%d %d", &w1, &h1);

        printf("Введите ширину и высоту внутреннего выреза (например, 5 4): ");
        scanf_s("%d %d", &w2, &h2);

        printf("Введите смещение выреза слева (например, 5): ");
        scanf_s("%d", &offset_x);

        printf("Введите высоту нижнего прямоугольника (например, 4): ");
        scanf_s("%d", &h3);

        if (h2 > h1 || (offset_x + w2) > w1 || offset_x < 0) {
            printf("\nОшибка: Вырез выходит за границы верхнего прямоугольника!\n");
            return 1;
        }

        printf("\nРезультирующая фигура:\n\n");

        for (int y = 0; y < h1; y++) {
            for (int x = 0; x < w1; x++) {
                if (y >= (h1 - h2) && x >= offset_x && x < (offset_x + w2)) {
                    printf(" ");
                }
                else {
                    printf("%c", sym);
                }
            }
            printf("\n");
        }

        for (int y = 0; y < h3; y++) {
            for (int x = 0; x < offset_x; x++) {
                printf(" ");
            }
            for (int x = 0; x < w2; x++) {
                printf("%c", sym);
            }
            printf("\n");
        }

        printf("Продолжить? (Да - y, нет - n): ");
        scanf_s(" %c", &choice, 1);

    } while (choice == 'y' || choice == 'Y');
}


