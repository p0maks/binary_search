// binary.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
const int N = 10;

int BinarySearch(int A[], int key)
{
	int left = 0, right = N, mid;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (key < A[mid]) 
			right = mid - 1;
		else if (key > A[mid]) 
			left = mid + 1;
		else 
			return mid;
	}
	return -1;
}

void main()
{
	setlocale(LC_ALL, "Rus");
	int i, key;
	int A[N];
;
	cout << "Исходный массив: ";
	for (i = 0; i < N; i++)
	{
		A[i] = N * i; 
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "Искомый элемент > ";
	cin >> key;
	if (BinarySearch(A, key) == -1){
		cout << "\nЭлемент не найден";
			cout << endl;
	}
	else {
		cout << "\nНомер элемента: " << BinarySearch(A, key) + 1;
		cout << endl;
	}
		system("pause");
}

