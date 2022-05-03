/*
Michael Hughes
CIS 1202 101
05/02/2022
*/

#include<iostream>
#include<algorithm>

using namespace std;

template<typename H>
H Half(H num)
{

	num = num / 2;

	return num;
}


int main()
{
	int a = 0;
	double b = 0;
	float c = 0;

	cout << "\nEnter an integer: ";
	cin >> a;

	cout << "\nEnter a deciaml number: ";
	cin >> b;

	cout << "\nEnter an deciaml number: ";
	cin >> c;

	cout << endl;
	cout << Half(a) << endl;
	cout << Half(b) << endl;
	cout << Half(c) << endl;
}