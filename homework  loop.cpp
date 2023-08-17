#include <iostream>
using namespace std;
int main()
{
	char menu;
	int n;
	cout << "Select Menu" <<endl;
	cout << "********************" <<endl;
	cout << "1.Align Left" <<endl;
	cout << "2.Align Right" <<endl;
	cout << "3.Center" <<endl;
	cout << "4.Exit" <<endl;
	cout << "********************" <<endl;

	do{
		cout << "Select Menu No : ";
		cin >> menu;
		if (menu == '1')
		{
			cout << "Input number of line : " ;
			cin >> n ;
			for (int a = 1 ; a <= n ; a++)
			{
				for(int b = n ; b >= a ; b--)
					cout << " " ;
				for(int j = 1 ; j <= a ; j++ )
				{
					cout << "*";
				}
				cout <<endl;
			}
		
		}

		else if (menu == '2')
		{
			cout << "Input number of line : " ;
			cin >> n ;

			for (int a = 1 ; a <= n ; a++)
			{
				for (int b = 1 ; b <= a ; b++)
				{
					cout << "*" ;
				}
				cout <<endl;
			}
		
		}

		else if (menu == '3'){
			cout << "Input number of line : " ;
			cin >> n ;
			for (int a = 1 ; a <= n; a++){
				for (int b = 1 ; b <= n - a ; b++ ){
					cout << " ";

				}
				for (int j = 1 ; j <= 2 * a - 1 ; j++){
					cout << "*";
				}
				cout <<endl;
			}
		}

		else cout << "Invalid Menu!! Please choose again" <<endl;
	
	
	} while(menu != '4');



	
	system("pause");
	return(0);
}