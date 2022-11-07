// ChyrunSofialab5.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_05_4.cpp
// < Чирун Софія >
// Лабораторна робота № 5.4
// Обчислення сум та добутків за допомогою рекурсії  
// Варіант 18

#include <iostream>
#include <cmath>

using namespace std;

double S0(const int K)
{
	double s = 0;
	for (int i = K; i <= 15; i++)
		s += (cos(i)) / (1 + pow(sin(i), 2));
	return s;
}
double S1(const int K, const int, const int i)
{
	if (i > 15)
		return 0;
	else
		return (cos(i)) / (1 + pow(sin(i), 2)) + S1(K, 15, i + 1);
}
double S2(const int K, const int, const int i)
{
	if (i < K)
		return 0;
	else
		return (cos(i)) / (1 + pow(sin(i), 2)) + S2(K, 15, i - 1);
}
double S3(const int K, const int, const int i, double t)
{
	t = t + (cos(i)) / (1 + pow(sin(i), 2));
	if (i >= 15)
		return t;
	else
		return S3(K, 15, i + 1, t);
}
double S4(const int K, const int, const int i, double t)
{
	t = t + (cos(i)) / (1 + pow(sin(i), 2));
	if (i <= K)
		return t;
	else
		return S4(K, 15, i - 1, t);
}
int main()
{
	int K;
	cout << "K = "; cin >> K;
	cout << "(iter) S0 = " << S0(K) << endl;
	cout << "(rec up ++) S1 = " << S1(K, 15, K) << endl;
	cout << "(rec up --) S2 = " << S2(K, 15, 15) << endl;
	cout << "(rec down ++) S3 = " << S3(K, 15, K, 0) << endl;
	cout << "(rec down --) S4 = " << S4(K, 15, 15, 0) << endl;
	return 0;
}

