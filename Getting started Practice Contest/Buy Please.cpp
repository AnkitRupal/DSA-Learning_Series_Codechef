#include "bits/stdc++.h"
using namespace std;

/*
	BUY PLEASE
		Given,
			a = Number of Pens
			b = Number of Pencils
			x = Cost of one Pen
			x = Cost of one Pencil
		Thus,
			Total Price = (Number of Pens * Cost of one Pen) + (Number of Pencils * Cost of one Pencil)
			Total Price = (a * x) + (b * y)
*/

int main()
{
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	cout << (a * x) + (b * y) << "\n";
	return 0;
}