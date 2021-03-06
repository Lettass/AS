
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>
#include <chrono>

using namespace std;



void cou(vector<int>&, int);
int fun(int X);



int main()
{
	int l = 1000000, b = 736;
	vector<int> arr{};
	for (int i = 0; i<l; i++)
	{
		b = fun(b) % 1000;
		arr.push_back(b);
	}
	auto start = chrono::high_resolution_clock::now();
	cou(arr, l);
	auto finish = chrono::high_resolution_clock::now();
	cout << "Sort arr\n";
	chrono::duration<double> elapsed = finish - start;
	cout << elapsed.count() << "\n";
	return 0;
}


void cou(vector<int>& arr, int m) {
	vector<int>::iterator max;
	max = std::max_element(arr.begin(), arr.end());
	int maxV = 0;
	maxV = *max;
	int count[maxV + 1] = { 0 };
	int chislo;
	for (int i = 0; i < m; i++) {
		chislo = arr[i];
		count[chislo]++;
	}
	int k = 0;
	for (int i = 0; i < maxV + 1; i++) {
		for (int j = 0; j < count[i]; j++, k++) {
			arr[k] = i;
		}
	}
}


int fun(int aX) {
	int m = 937342, a = 754297, c = 1000;
	aX = (a*aX + c) % m;
	return(aX);
}
