#include "std_lib_facilities.h"	

int main()			
{
	double a = 0;
	double b = 0;
	
	cout << "Please enter two intigers, if you enter | the program will exit \n";

	while(cin >> a >> b ){
		cout << a << " " << b << endl;

	if (a > b)
			cout << "the smaller value is: " << b << " " << "the larger value is: " << a << endl;
			
	if (a < b)
			cout << "the smaller value is: " << a << " " << "the larger value is: " << b << endl;		

	if (a == b)
			cout << "the numbers are equal" << endl;

	if ( (a-b) > 0 && (a-b) < 1.0/100 || (a-b) < 0 && (a-b) > -1.0/100 )
		cout << "the numbers are almost equal" << endl;
}

	return 0;			
}
