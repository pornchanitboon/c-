#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void check_result(int x);
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
	cout<<setfill('-')<<setw(60)<<" "<<endl;
	cout<<"Name \t \t Score \t \t Result"<<endl;
	cout<<setfill('-')<<setw(60)<<" "<<endl;
	
	for(int i = 0 ; i < 4 ; i++)
	{
		cout<<name[i]<<"\t\t"<<score[i]<<"\t\t";
		check_result(score[i]);

		total = total+score[i];
		if(score[i] > max)
			max = score[i];
		
		minS = score[0];
		if(score[i] < minS)
			minS = score[i];

	}
	cout<<setfill('-')<<setw(60)<<""<<endl;
	cout<<"Max score = "<<max<<endl;
	cout<<"Min score = "<<minS<<endl;
	cout<<"Total     = "<<total<<endl;
	cout<<"Avg       = "<<(float)total/4<<endl;
	
	system("pause");
	return 0 ;
}
void check_result(int x)
{
	if(x >= 50)
		cout<<"Pass"<<endl;
	else
		cout<<"Fail"<<endl;
}