#include<iostream>
using namespace std;
void multiplesof3and5(long int, long int);
int main() {
	struct foo {
		long int	num[2] = { 0,0 };
	};
	foo b;
	cout << "==== Multiples of 3 and 5 ====" << endl;
	cout << "Enter Number : ";
	cin >> b.num[0];
	multiplesof3and5(b.num[0], b.num[1]);
}
void multiplesof3and5(long int num, long int sum) {
	if (num > 0 && num <= 200000) {
		for (long int x = 0; x <= num; x++) {
			if (x % 3 == 0.000|| x % 5 == 0.000)
			{
				sum = sum + x;
			}
			
		}
		cout << "The sum is " << sum << endl;
	}
	else {
		cout << endl;
		cout << endl;
		cout << "====================" << endl;
		cout << "========ERROR=======" << endl;
		cout << "====================" << endl;
	}

}