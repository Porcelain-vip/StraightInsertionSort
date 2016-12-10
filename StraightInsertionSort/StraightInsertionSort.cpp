#include<iostream>
using std::cin; using std::cout; using std::endl;

template<typename Type>
void swap(Type & a, Type & b)
{
	Type c = b; b = a; a = c;
}

template<typename Type>
void StraightInserrtionSort0(Type a[], const int & n)
{
	for (int i = 1; i < n; ++i)
		for (int j = i - 1; j >= 0 && a[j] > a[j + 1]; --j) swap<Type>(a[j], a[j + 1]);
}

template<typename Type>
void StraightInserrtionSort1(Type a[], const int & n)
{
	for (int i = 1; i < n; ++i)
	{
		int j; Type data = a[i];
		for (j = i - 1; j >= 0 && a[j] > data; --j) a[j + 1] = a[j];
		a[j + 1] = data;
	}
}

int main()
{
	typedef unsigned Type;
	static const int MAX = 10;
	Type Zero[MAX], One[MAX];
	cout << "Please Enter 10 Numbers: ";
	for (int i = 0; i < MAX; ++i) cin >> Zero[i];
	StraightInserrtionSort0<Type>(Zero, MAX);
	for (int i = 0; i < MAX; ++i) cout << Zero[i] << " ";
	cout << endl;

	cout << "Please Enter Another 10 Numbers: ";
	for (int i = 0; i < MAX; ++i) cin >> One[i];
	StraightInserrtionSort1<Type>(One, MAX);
	for (int i = 0; i < MAX; ++i) cout << One[i] << " ";
	cout << endl;
	return 0;
}