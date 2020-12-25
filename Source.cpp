#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float x1, y1, x2, y2, x22, y22, x3, y3;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x22 >> y22 >> x3 >> y3)
	{
		cout << fixed << setprecision(3) << x1 + x3 - x2 << ' ' << y1 + y3 - y2 << endl; //setprecision(x):精準x位(含整數) + fixed ->精準至小數點下第x位
	}
}
