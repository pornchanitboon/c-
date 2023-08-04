#include <iostream>
using namespace std;
int main()
{
	int age;
	float h , w , BMI;
	char sex;
    cout << "Enter Weight : " ;
    cin >>  w ;
    cout << "Enter Height : " ;
    cin >>  h;
	cout << "Enter Sex : " ;
    cin >>  sex;
    cout << "BMI = " << W / (H/100 * H/100) <<endl ;
    if(BMI <= 18.5) cout << "Underweight";
    else if(BMI <= 25) cout << "Normal";
    else if(BMI <= 35) cout << "Overweight";
	else if(BMI <= 40) cout << "Obesity";
    cout << "BMI = " << W / (H/100 * H/100) <<endl ;

 system ("pause");
 return(0);
}