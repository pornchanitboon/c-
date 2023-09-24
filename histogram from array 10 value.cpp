#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	int num[10];
	srand(time(0));
	cout << "element value histogram " <<endl;
	cout <<endl;
	for(int n = 0; n < 10;n++)
	{
		num[n] = 1+rand()%29;
		cout<<"  "<<n<<"   "<<setw(2)<< num[n]<<" ";

		for(int i = 0 ; i < num[n] ;i++)
		{
			cout << "*" ;
		
		}
		cout<<endl;
	
	}
	return(0);
}