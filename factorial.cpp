#include<iostream>
using namespace std;
void factorial(long long int, long long int, long long int);
int main()
{
	struct lol {
		long long int	num[4] = { 0,0,1 };
};
	lol f;
	
	cout << "===FACTORIAL==="<<endl;
	cout << "ENTER NUMBER : ";
	cin >> f.num[0];

	f.num[1] = f.num[0] + 1;
	factorial(f.num[0],f.num[1],f.num[2]);



}
void factorial(long long int k, long long int g, long long int sum)
{
	if (k > 0 && k <= 20) {
		if (k == 1) { cout << "SUMMARY :1 "; sum = 1; }
		else if(k>1){
			for (long long int i = 0; i < g; i++) {

				if (k == 0) { break; }

				if (k == (g - 1)) {
					sum = sum * k;
					cout << "SUMMARY : " << k;
					--k;

				}
				if (k < (g - 1)) {
					sum = sum * k;
					cout << " x " << k;
					--k;

				}
			}
	
		}	cout << " = " << sum << endl;
	}
	else {
		cout << " " << endl;
		cout << "***************" << endl;
		cout << "**** ERROR ****" << endl;
		cout << "***************" << endl;
	}



}
