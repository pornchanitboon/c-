#include <iostream>
#include <string>
#include <time.h>
using namespace std;
int main()
{	int num,score,max=0,sum=0;
	float avg;
	srand(time(NULL));
	num = 1+rand()%10;
	cout<<"Random number of students(1-10):"<<num<<endl;
	cin>>num;
	for(int i=1; i<=num;i++)
	{	cout<<"Input score"<<i<<":";
		cin>>score;
		if(score>max) 
		{	max=score;
		}
		sum = sum+score;
	}
	avg = sum/num;
	cout<<"Max score="<<max<<endl;
	cout<<"Sum score="<<sum<<endl;
	cout<<"Avg score="<<fixed<<setprecision(2)<<avg<<endl;
	

	system ("pause");
	return(0);
}