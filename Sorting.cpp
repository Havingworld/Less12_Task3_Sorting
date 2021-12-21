/*
Что нужно сделать
Пользователь вводит в консоль 15 дробных чисел. Необходимо прочитать их и вывести в консоль в порядке от большего к меньшему.
По возможности используйте минимум дополнительной памяти и проходов по массиву.

Пример:
Ввод: 1.2 2.3 1.11 3.4 5.5 5.4 5.3 5.1 1.5 1.25 5.41 5.31 5.11 1.51 1.251
Вывод: 1.11 1.2 1.25 1.251 1.5 1.51 2.3 3.4 5.1 5.11 5.3 5.31 5.4 5.41 5.5

Чек-лист для проверки задачи
Используется массив чисел с плавающей точкой для хранения данных.
В коде не используются библиотеки, кроме <iostream>.
Программа корректно использует обращения по индексам и выдаёт правильный ответ.
Асимптотическая сложность алгоритма не более O(n^2).
*/

#include <iostream>
using namespace std;

int main()
{
    float numbers[15];
    float fSupportVar;

    cout << "input 15 numbers" << endl;
    for (int n = 0; n < 15; n++) {
        float fVar;
        cin >> fVar;
        numbers[n] = fVar;
        for (int i = 0; i < n; i++) {
            if (numbers[n] < numbers[i]) {             //compare current with previos
                fSupportVar = numbers[i];
                numbers[i] = numbers[n];
                if (n > 1) {                           //move the row
                    for (int q = n; q > i; q--) {
                        numbers[q] = numbers[q - 1];
                    }
                }
                numbers[i+1] = fSupportVar;
            }
        }
    }
    for (int i = 0; i < 15; i++) {
        cout << numbers[i] << " "; //output all arrow
    }
}


// 4    5   3