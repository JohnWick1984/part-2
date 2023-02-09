// part2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()


{


    const int N=20;
    int min , max,  a, b;
    int sum = 0, proChet =1;
    long pro=1;
    int randomDigits[N] = {};
    srand(time(NULL));

    cout << "*****Диапазон случайных чисел будет от -а до b  ******* \n";

    cout << "Введите начало диапазона a =  ";
    cin >> a;
    cout << "Введите конец  диапазона b =  ";
    cin >> b;


   
    for (int i = 0; i < N; i++)
    {
        randomDigits[i] = -a + rand() % b;
        cout << randomDigits[i] << "\n";

        if (randomDigits[i] < 0)
        {
            sum += randomDigits[i];

        }
        if (i % 2 == 0)
        {
            proChet = proChet * randomDigits[i];
        }
    }
   
    min = 0;
    max = 0;
   
    for (  int i = 0; i < N; i++)
    {


        if (randomDigits[i] < randomDigits[min])
        {
            min = i;
            
        }
        if (randomDigits[i] > randomDigits[max])
        {
            
            max = i;
        }
        

    }
    if (max < min)
    {
        for (int i = max + 1; i < min; i++)
            pro = pro * randomDigits[i];
    }
    else if (min < max)
    {
        for (int i = min + 1; i < max; i++)
            pro = pro * randomDigits[i];
    }
        
   
    int first, last, sumOtr=0;
    for (first = 0; first < N; first++)
    {
        if (randomDigits[first] < 0) break;
    }
    for (last = N; last > first; last--)
    {
        if (randomDigits[last] < 0) break;
    }
    for (int i = first + 1; i < last; i++)
    {
        sumOtr += randomDigits[i];
    }


    cout << "\n" << "Сумма отрицательных чисел равна : " << sum << "\n";
    
    cout << "Произведение чисел между минимальным и максимальным числом = " << pro << "\n";

    cout << "Произведение четных элементов массива = " << proChet << "\n";

    cout << "Сумма между первым и последним отрицательным числом = " << sumOtr  << " \n";
}