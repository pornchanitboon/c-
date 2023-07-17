#include <iostream>
#include <string>
using namespace std;
int main()
{   
    string Name;
	float Salary,Sale,CommissionPercent;
	cout <<" Enter name  : ";
	cin  >>Name;
	cout <<" Enter salary  : ";
	cin  >>Salary;
    cout <<" Enter sale  : ";
	cin  >>Sale;
	cout <<" Enter Commission Percent  : ";
	cin  >>CommissionPercent;
	cout << "Your Name = Pornchanit Boonsaeng";
    cout <<"--------output--------------\n";
	cout <<"Total Revenue = " << Salary+(Sale*(CommissionPercent/100)) <<endl;
	system("pause");
	return 0;
}