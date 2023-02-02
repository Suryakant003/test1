#include <iostream>
using namespace std;
int main()
{
	float last_week_sale = 0.0f;
	float commission = 0.0f;
	float total_earning = 0.0f;

	//last week sale--
		cout<<"Enter the total sale of last week:";
		cin>> last_week_sale;

		//commission--
		
		commission = 250 + last_week_sale * 0.07;
		cout << "Total Commission:" << commission << endl;

		//total earnings--
	
		cout << "Total earning of salesperson:" << last_week_sale + commission;

		return 0;

}