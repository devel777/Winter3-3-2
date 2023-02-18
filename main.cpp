#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
setlocale(0,"");
cout << "Задан массив 10x3, состоящий из вещественных элементов. \n"
        "Найти количество элементов, абсолютное значение которых больше среднего арифметического." << endl;
cout << "\n";

float a[10][3],sum,average;
int kol,kol2,i,j;
srand(time(0));
cout << "Array a:" << endl;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
    {
        a[i][j] = float(rand()%901+100)/10;
        cout << setw(7) << a[i][j];
    }
    cout<<endl;
    }
    cout <<"\n"; // Софрмировали и вывели 2-мерный массив
    cout << "Коли-во элементов массива: " << i*j << endl;
    kol=i*j;
    kol2=0;
    sum=0;
    average=0;
        for (i = 0; i < 10; i++)
            for (j = 0; j < 3; j++)
                    sum+= a[i][j];
                average=sum/kol;
                cout << "Сумма элементов массива: " << sum << endl;
                cout << "Среднее арифм элементов массива: " << average << endl;
        for (i = 0; i < 10; i++)
            for (j = 0; j < 3; j++)
        if (abs(a[i][j]) > average) kol2++;
        cout<< "Количество элементов больше абсолютного среднего арифметического "  << kol2 << endl;
    return 0;
}
