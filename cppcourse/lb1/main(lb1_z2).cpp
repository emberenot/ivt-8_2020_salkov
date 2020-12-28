/*
Сальков Эдуард Иванович
ИВТ-8
Лабораторная работа №1

Вариант №10

Задание №2:

Преобразование: 1D > 2D. Одномерный массив из 18 целых чисел необходимо 
отсортировать в порядке убывания и разложить по двумерной сетке 6х3 слева направо и 
сверху вниз по столбцам.
Инициализация: заполнить массив числами x[i] = i^2 – 1 и все элементы с нечетными 
индексами домножить на –1.
Вывод на экран: на каждый элемент массива отвести 5 позиций.

*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void processArraySozd(int*, int);
void processArraySort(int*, int, int);
void processArray2D(int*, int**);


int i = 0;
int j = 0;
int count = 0;
int n = 18;



int main()
{
	int* mas = new int[18];
	int **mas2d = new int* [6]; // две строки в массиве
    	for (int count1 = 0; count1 < 6; count1++)
    	{
    		mas2d[count1] = new int [3]; // и пять столбцов
		}
        
	
	setlocale(LC_ALL, "Russian");//устанавливаем русский язык
	
	processArraySozd(mas, i);//вызываем создание и вывод массива
	processArraySort(mas, i, j);//сортируем и выводим созданный массив
	processArray2D(mas, mas2d);//вызываем преобразование отсортированного массива в двухмерный массив
		for (int count1 = 0; count1 < 6; count1++)//очищаем память
		{
			delete [] mas2d[count];
		}
		delete [] mas2d;
	delete [] mas;

	system("pause");
	return 0;	
}

void processArraySozd(int* mas, int i){
cout << "[Вход]" << endl;
	for (i = 0; i < 18; ++i)
	{
		mas[i] = i * i - 1;
		if(i % 2 != 0)
		{
			mas[i] = mas[i] * -1;
		}
		cout << setw (5) << mas[i];
	}
	cout << endl;
}

void processArraySort(int* mas, int i, int j)
{
	int tmpmas;

	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (mas[j] < mas[j + 1])
			{
				tmpmas = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = tmpmas;
			}
		}
	}
	cout << "[Выход]" << endl;
	for (i = 0; i < n; ++i)
	{	
		cout << setw (5) << mas[i]/* << " "*/;
	}
	cout << endl;
	cout << endl;
}

void processArray2D(int* mas, int** mas2d)
{
	cout << "[Выход 2D массива]" << endl;
	for(int i=0;i<6;++i)
	{
		for(int j=0;j<3;++j)
		{
			*(*(mas2d + i)+j) = mas[count];
			count++;
			cout << setw (5) << *(*(mas2d + i)+j);
		} 
		cout << endl;
    }
}




