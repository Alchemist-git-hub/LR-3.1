#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	double y;
	double A;
	double B;

	
	cout << "x = "; cin >> x;

	A = 2+(1/int((x+1))); //

	// 1.розгалуження в скороченій формі
	if (x < 1)
		B = sqrt(int(cos(x))+13);
	if (1<=x && x<=5)
		B = 3+cos((4+x) / (sqrt(2))) / sin((4 + x) / (sqrt(2)));
	if (x>5)
		B = 8+0.7*x;
		y = A - B;

	cout << endl;
	cout << "1)y= " << y << endl; 
	
	// спосіб 2: розгалуження в повній формі
	if (x < 1)
		B = sqrt(int(cos(x)) + 13);
	else
	if (1 <= x && x <= 5)
		B = 3 + cos((4 + x) / (sqrt(2))) / sin((4 + x) / (sqrt(2)));
	else
		B = 8 + 0.7 * x;
	y = A - B;

		cout << "2)y= " << y << endl;

	cin.get();
	return(0);
}