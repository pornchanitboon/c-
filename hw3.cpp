#include <iostream>
using namespace std;
int main()
{
	/*int number1,number2;
	cout << "program addition 2 values,"<<
	//input two number;
	cout << "enter first number : ";
	cin  >> number1;
	cout << "enter second two number : ";
	cin  >> number2;
	//display addition tow value
	cout >> endl;
	cout ,, "sum" << number1 << "+" << number2;
	cout << "=" << number1+number2 << endl;*/
	  float quizz1, quizz2, quizz3, mid, final, quizzTotal, total;
	  cout << "==========================QUIZZES=========================" << endl;
	  cout << "Enter first quizz (10) : ";
	  cin  >> quizz1;
	  cout << "Enter second quizz (10): ";
	  cin  >> quizz2;
	  cout << "Enter third quizz (10) : ";
	  cin  >> quizz3;

	  cout << "==========================MID-TERM=========================" << endl;
	  cout << "Enter mid-term(40): ";
	  cin  >> mid;

	  cout << "==========================FINAL=========================" << endl;
	  cout << "Enter final(50): ";
	  cin  >> final;

	  quizzTotal = (quizz1 + quizz2 +quizz3) / 3;
	  total = mid + final + quizzTotal;

	  cout << "Quizz Total: " <<quizzTotal << endl;
	  cout << "Mid Term: " << mid << endl;
	  cout << "Final: " << final << endl;
	  cout << "Total: " << total << endl;
	  cout << "You score " << ((total >= 50 )? "isPASS" : "isFAIL") <<endl;
	
    system ("pause");
	return(0);
}