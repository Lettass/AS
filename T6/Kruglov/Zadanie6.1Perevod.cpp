#include "stdafx.h"
#include <iostream>
#include <stack>

using namespace std;



////////////////////////////////////////////////////////////
int main()
{
	stack <int> stackk;
	int qq, n;
	n = 0;
	cout << "Vvedite chislo" << endl;
	cin >> qq;
	while (qq > 0) {
		stackk.push(qq % 2);
		qq /= 2;
	}
	/////
	n = stackk.size();
	for (int i = 0; i < n; i++) {
		cout << stackk.top();
		stackk.pop();
	}
	/////
	cin >> qq;
	system("pause");
	return 0;
}