#include<iostream>
#include<math.h>
using namespace std;
void calculate(long int, long int, long int, long int);
int main() { 
	struct jo{
		
		long int num[5] = { 0,0,1,0,0 };
	};
	jo b;
	cout << "++++++++++++++++++++" <<endl;
	cout << "2 TO THE POWER OF : ";
	cin >> b.num[1];
	calculate(b.num[1],b.num[2],b.num[3],b.num[4]);

	}
void calculate(long int y,long int sum,long int u,long int j) {
	if (y > 0 && y < 30) {

		for (int i = 0; i <= y; i++) {
			sum = sum * 2;
		}
		cout << endl;
		cout << "TO THE POWER OF " << y << " = " << sum << endl;
		j = sum
			;
		cout << endl;
		while (sum != 0) {
			u = u + (sum % 10);
			if (sum == j) {
				cout << sum % 10;
			}
			else if (sum != j) {
				cout << " + " << sum % 10;
			}
			sum = sum / 10;

		}
		cout << " = " << u << endl;
	}
	else {
		cout << endl;
		cout  << endl;
		cout << "====================" << endl;
		cout << "========ERROR=======" << endl;
		cout << "====================" << endl;
	}

}


