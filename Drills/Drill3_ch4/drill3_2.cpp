#include "std_lib_facilities.h"

int main(){

	double number;
	double sum = 0;
	string unit;
	vector<double> vector;

while(unit != "|")
	{cout << "If you want to continue press any letter otherwise, press'|' button to quit!" << endl;
		cin >> unit;
			if (unit == "|")
				break;

	cout << "Please enter a number " << endl;
	cin >> number;
	cout << "Please enter the format (m;cm;ft;in)" << endl;
	cin >> unit;

	while (unit != "cm" && unit != "m" && unit != "ft" && unit != "in" && unit != "|")
			{
				cout << "Illegal format. Please write admissible (m,cm,ft,in) formats." << endl;
				cin >> unit;
			}
			 if (unit == "m")
		{
			number = number;
		}
		else
			if (unit == "cm")
		{
				number = number/100;
		}
		else
			if (unit == "ft")
		{
				number = number*0.254;
		}
		else
			if (unit == "in")
		{
				number = number*0.3048;
		}
			vector.push_back(number);
		sum += number;
}

double min = 0;
	for (int i = 1; i < vector.size(); i++)
{
			if (vector[i] < vector[min])
				{
					min = i;
				}
}	

double max = 0;
	for (int i = 1; i < vector.size(); i++)
{
			if(vector[i] > vector[max])
				{
					max = i;
				}
}

sort(vector);
	cout << "Sorted values: " << endl;

for (int i = 0; i < vector.size(); i++){
	cout << vector[i] << "m, " << endl;
}

	cout << "Sum of the value is: " << sum <<" m" << endl;

	cout << "The largest value is: " << vector[max] <<" m" << endl;

	cout << "The smallest value is:" << vector[min] <<" m" << endl;

	cout << "You gave " << vector.size() << " numbers." << endl;


	return 0;

}
