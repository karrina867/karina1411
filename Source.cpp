//Karina Baslyk 14.11
#include<iostream>
using namespace std;
int main() {
	//2. напечатать все числа в диапозоне от a до b с шагом k.
	int a,b,k;
	cin >> a >> b >> k;
	for (int i = a; i <= b; i=i+k) { cout << i << ' '; }
	cout << endl;
	return 0;
}