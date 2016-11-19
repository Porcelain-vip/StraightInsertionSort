#include<iostream>

template<typename Type>
void swap(Type * A, Type * B)
{
	Type C = *B;
	*B = *A;
	*A = C;
}

template<typename Type>
void StraightInserrtionSortZero(Type a[], const int & n)
{
	for (int i = 1; i < n; ++i)
		for (int j = i - 1; j >= 0 && a[j] > a[j + 1]; --j) swap<Type>(a + j, a + j + 1);
}

template<typename Type>
void StraightInserrtionSortOne(Type a[], const int & n)
{
	for (int i = 1; i < n; ++i)
	{
		int j;
		Type E = a[i];
		for (j = i - 1; j >= 0 && a[j] > E; --j) a[j + 1] = a[j];
		a[j + 1] = E;
	}
}

int main()
{
	typedef unsigned Type;
	static const int MAX = 10;
	using namespace std;
	Type Zero[MAX], One[MAX];
	cout << "Please Enter 10 Numbers: ";
	for (int i = 0; i < MAX; ++i) cin >> Zero[i];
	StraightInserrtionSortZero<Type>(Zero, MAX);
	for (int i = 0; i < MAX; ++i) cout << Zero[i] << " ";
	cout << endl;

	cout << "Please Enter Another 10 Numbers: ";
	for (int i = 0; i < MAX; ++i) cin >> One[i];
	StraightInserrtionSortOne<Type>(One, MAX);
	for (int i = 0; i < MAX; ++i) cout << One[i] << " ";
	cout << endl;
	return 0;
}