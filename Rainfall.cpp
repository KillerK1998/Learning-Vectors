#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

/*Print out year's total rainfall. It should be higher
than 20 inches in order for the crops to be healthy.
Input:
	nothing
Output:
	Week 1 rainfall: 1 inch
	Week 2 rainfall: 2 inch
	Week 42 rainfall: 25 inches
	Did crops survive? Yes
	...
	/*/
string toString(float number, int precision) {
	ostringstream stream; //include <sstream>
	stream << fixed;
	stream << setprecision(precision); //include <iomanip>
	stream << number;
	return stream.str();
}
// if you want 2.55, call toString(2.55, 2).
// if you want 2, call toString(2.55, 0).


int main() {
	string survival = "did the crops survive? ";
	string survived = "yes";
	string died = "no";
	string totals = "total rainfall is";
	int rainfall = 1;
	int totalrainfall = rainfall;
	vector<int>v = {};
	
	for (int count = 1; count < 43; count++) {
		
		rainfall = rand() % 4;
		cout << "Week" << " " << count << ":" << "rainfall:" << rainfall << "Inches" << "\n";
		v.push_back(rainfall);
	
	}
	for (int i = 0; i < v.size(); i++) {
		totalrainfall = totalrainfall + v[i];	// vector overloads the subscript operator
	}
	cout << totals << " " << totalrainfall;
	
	cout << survival;
	if (totalrainfall > 20)
		cout << " " << survived;
	else
		cout << died;

	return 0;


}
