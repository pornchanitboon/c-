#include <iostream>;
using namespace std;
int main()
{
	char a, b, c;
	int A = 0, B =0, C = 0;
	int T = 0 ;
	cout << "RUN: tase by type A, B, C," << endl;
	cout << "Enter char (A,B,C): ";
	cin  >> a;
	if (a == 'A')
	{	T += 10;
		A += 10;
	}
	else if (a == 'B')
	{	T += 20;
		B += 20;
	}
	else if (a == 'C')
	{	T += 30;
		C += 30;
	}
	cout << "Enter Character (A,B,C): ";
	cin  >> c;
	if (c == 'A')
	{	T += 10;
		A += 10;
	}
	else if (c == 'B')
	{	T += 20;
		B += 20;
	}
	else if (c == 'C')
	{	T += 30;
		T += 30;
	}
	//ex.A = 10 ,B = 20 ,C = 30
	cout << ((a == 'A') ? "A = 10" : (a == 'B') ? "B = 20" : "C = 30") << ",";
	cout << ((b == 'A') ? "A = 10" : (b == 'B') ? "B = 20" : "C = 30") << ",";
	cout << ((c == 'A') ? "A = 10" : (c == 'B') ? "B = 20" : "C = 30") << endl;

	//ex.A + A + A =
	cout << ((a == 'A') ? "A = 10" : (a == 'B') ? "B" : "C") << "+";
	cout << ((b == 'A') ? "A = 10" : (b == 'B') ? "B" : "C") << "+";
	cout << ((c == 'A') ? "A = 10" : (c == 'B') ? "B" : "C") << "=";

	//ex.10 + 10 + 10 = 3
	cout << ((a == 'A') ? "A = 10" : (a == 'B') ? "20" : "30") << "+";
	cout << ((b == 'A') ? "A = 10" : (b == 'B') ? "20" : "30") << "+";
	cout << ((c == 'A') ? "A = 10" : (c == 'B') ? "20" : "30") << "=" << T << endl;

	system ("pause");
	return (0);
}