/* 
travelcost.cpp
Jun 3, 2017
Jim Minutella
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// variables
	double mpg, distance, gallons, pricePerGallon, totalCost;

	// output using the insertion operator
	cout<<"Travel Cost Calculator"<<endl;
	cout<<""<<endl;
	cout<<"Enter MPG: "<<endl;

	// input using the extraction operator
	cin>>mpg;

	cout<<"Enter distance in miles: "<<endl;
	cin>>distance;
	cout<<"Enter price for one gallon of gas: "<<endl;
	cin>>pricePerGallon;

	// Calculate gallons needed
	gallons = (distance/mpg);

	// Calculate the total cost
	totalCost = (gallons * pricePerGallon);

	// Show the output
	cout<<"Total trip cost: $"<<fixed<<setprecision(2)<<totalCost<<endl;

	return 0;
}
