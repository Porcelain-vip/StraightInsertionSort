#include<iostream>
using namespace std;

template<typename Type>
void InsertSort(Type* a, const int& n)
{
	for (int i = 1; i != n; ++i)
		for (int j = i - 1; j >= 0 && a[j] > a[j + 1]; --j)
			swap(a[j], a[j + 1]);
}

int main()
{
	int a[10];
	cout << "Please Enter 10 Numbers: ";
	for (int i = 0; i != 10; ++i) cin >> a[i];
	InsertSort<int>(a, 10);
	cout << "Low-to-High: ";
	for (auto& val : a) cout << val << " "; cout << endl;
	return 0;
}