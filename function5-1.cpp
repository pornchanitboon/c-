#include <iostream>
using namespace std;
void CalCircle();
int main()
{	char ch;
	do
	{	
		cout<<"program  calciulate of circle."<<endl;
		cout<<"**************************"<<endl;
		cout<<"1. Ciecle "<<endl;
		cout<<"2. Rectangle "<<endl;
		cout<<"3. Exit "<<endl;
		cout<<"choose menu : "<<endl;
		cin>>ch;
		if(ch == '1')CalCircle();
			else if (ch == '2')cout<<"Rectangle"<<endl;
				else cout << "wrong menu: "<<endl;
	
	}while(ch != 3);

	return 0;
}
void CalCircle()
{
	float Radius, Area, Circumference;
	cout << "Input radius : ";
	cin >> Radius;
	Area = 3.14f*Radius*Radius;
	Circumference = 2*3.14f*Radius;;
	cout << endl;
	cout << "Area of circle : " << Area << endl;
	cout << "Circumference of circle : " << Circumference << endl;
	cout << "Diameter of circle : " << (2*Radius) << endl;

}