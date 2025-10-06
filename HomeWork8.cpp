#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

    const int SIZE = 10;
    const int HALF = SIZE / 2;
    int source[SIZE];
    int firstHalf[HALF];
    int secondHalf[HALF];


    srand(time(0));


    cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; ++i) {
        source[i] = rand() % 100; 
        cout << source[i] << " ";
    }
    cout << endl;


    for (int i = 0; i < HALF; ++i) {
        firstHalf[i] = source[i];
        secondHalf[i] = source[i + HALF];
    }

    cout << "Первый массив: ";
    for (int i = 0; i < HALF; ++i)
        cout << firstHalf[i] << " ";
    cout << endl;

    cout << "Второй массив: ";
    for (int i = 0; i < HALF; ++i)
        cout << secondHalf[i] << " ";
    cout << endl;

    return 0;






    const int SIZE = 5;
    int a[SIZE] = { 1, 2, 3, 4, 5 };     
    int b[SIZE] = { 10, 20, 30, 40, 50 }; 
    int sum[SIZE];                     


    for (int i = 0; i < SIZE; ++i) {
        sum[i] = a[i] + b[i];
    }


    cout << "Первый массив: ";
    for (int i = 0; i < SIZE; ++i)
        cout << a[i] << " ";
    cout << endl;

    cout << "Второй массив: ";
    for (int i = 0; i < SIZE; ++i)
        cout << b[i] << " ";
    cout << endl;

    cout << "Сумма элементов: ";
    for (int i = 0; i < SIZE; ++i)
        cout << sum[i] << " ";
    cout << endl;

    return 0;
}
