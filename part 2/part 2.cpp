// part 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    int min, max, begin, finish;
    int money[12];


    for (int i = 0; i < 12; i++)
    {
        cout << "Введите доход за " << i + 1 << "  месяц:\n";
        cin >> money[i];
    }

    cout << "Введите месяц начала периода : ";
    cin >> begin;
    cout << "Введите месяц окончания периода : ";
    cin >> finish;

    min = begin-1;
    max = begin-1;

    for (int i = begin; i <= finish-1; i++)
    {
        if (money[i] > money[max])
        {
            max = i;
        }
        if (money[i] < money[min])
        {
            min = i;
        }

    }
    cout << "Максимальный доход был в месяце  " << max+1 << "\n";
    cout << "Минимальный доход был в месяце  " << min+1 << "\n";
}