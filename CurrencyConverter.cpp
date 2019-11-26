#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*Currency Converter for US Dollar/Euro/British Pound/Indian Rupee/Australian Dollar*/

	int firstCur;
	int secCur;
	float amount;

	//Exchange Rate as of 11/26/2019
	//Exchange Rates gotten from https://www.xe.com/currencyconverter/
	float changeRate[5][5] = {/*US Dollar*/{ 1.00000,0.90821,0.77534,71.6993,1.47623 },/*Euro*/{1.10107,1.00000,0.85370,78.9461,1.62544},/*British Pound*/{1.28976,1.17137,1.00000,92.4749,1.90399},
		/*Indian Rupee*/{0.01395,0.01267,0.01081,1.00000,0.02059},/*Australian Dollar*/{0.67740,0.61522,0.52521,48.5691,1.00000}};

    cout << "Please select your first kind of currency. \n1.US Dollar 2.Euro 3.British Pound 4.Indian Rupee 5.Australian Dollar\n";
	cin >> firstCur;
	cout << "Please select the kind of currency you wish to convert to. \n1.US Dollar 2.Euro 3.British Pound 4.Indian Rupee 5.Australian Dollar\n";
	cin >> secCur;
	cout << "Please enter the amount you want to convert.\n";
	cin >> amount;
	
	float divider = changeRate[secCur-1][firstCur-1];
	cout << amount / divider;
}
