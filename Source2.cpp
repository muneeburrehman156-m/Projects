#include<iostream>
#include<string>
using namespace std;
int discount(int a, int b);

int main()
{
	string list[10][4];
	char sold;
	int quan;
	list[0][0]="sr.no";
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			int c = 1;
			list[i][j] = c;
			c++;
		}
	}
	cout << "Input the headings of the table: " << endl;
	for (int i = 0; i < 1; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			cin >> list[i][j];
		}
	}
	cout << "Type the items for " << list[0][0] << " : " << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j < 2; j++)
		{
			cin >> list[i][j];
		}
	}
	cout << "Type the items for " << list[0][1] << " : " << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 2; j < 3; j++)
		{
			cin >> list[i][j];
		}
	}
	cout << "Type the items for " << list[0][2] << " : " << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 3; j < 4; j++)
		{
			cin >> list[i][j];
		}
	}
	cout << "Are any of the following items sold: " << endl;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j < 2; j++)
		{
			cout <<list[i-1][j-1] <<list[i][j];
		}
	}
	cin >> sold;
	if (sold == 'yes')
	{
		cout << "Input the quantity of the item sold: " << endl;
		cin >> quan;
	}
}
