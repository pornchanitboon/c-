#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int score[4], total = 0 , max = 0 , minS = 0;
	string name[4];
	
	for(int i = 0 ; i < 4 ; i++)
	{
		cout<<" Name ["<<i<<"] : ";
		cin>>name[i];
		cout<<" Score ["<<i<<"] : ";
		cin>>score[i];
		
	}
	cout<<setfill('-')<<setw(30)<<" "<<endl;
	cout<<"Name \t \t Score"<<endl;
	cout<<setfill('-')<<setw(30)<<" "<<endl;
	
	for(int i = 0 ; i < 4 ; i++)
	{
		cout<<name[i]<<"\t\t"<<score[i]<<endl;
		total = total+score[i];
		if(score[i] > max)
			max = score[i];
		
		minS = score[0];
		if(score[i] < minS)
			minS = score[i];

	}
	cout<<setfill('-')<<setw(30)<<""<<endl;
	cout<<"Max score = "<<max<<endl;
	cout<<"Min score = "<<minS<<endl;
	cout<<"Total     = "<<total<<endl;
	cout<<"Avg       = "<<(float)total/4<<endl;
	
	system("pause");
	return 0 ;
}
