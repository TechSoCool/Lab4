// Sterling Gerard
// March 17, 2022
// Convert following program to use a loop and step through input the data for each division , also recive data from an input file that contains 4 row
// (for each division) and 4 column for each quarter sales

#include <iostream>

using namespace std;

int main()
{
	double sales[3][4];
	int numberOfDivisions = 3, numberOfQuarters = 4;
	for (int i = 0; i < numberOfDivisions; i++)
		for (int j = 0; j < numberOfQuarters; j++)
		{
			cout << "Enter the sales details for Division " << i + 1 << ", Quarter " << j + 1 << ": ";
			cin >> sales[i][j];
		}
	double totalSales = 0.0;
	for (int i = 0; i < numberOfDivisions; i++)
		for (int j = 0; j < numberOfQuarters; j++)
			totalSales += sales[i][j];
	cout << "The total sales amount is: " << totalSales << endl;
}