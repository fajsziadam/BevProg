#include "std_lib_facilities.h"

void f(vector<int> a)
{
	int length_of_a = 10;
		
	vector<int> lv(length_of_a);
	lv = a;
	
	for (int i = 0; i < length_of_a; ++i)
		cout << lv[i] << " ";
	cout << endl;
	
	
	vector<int> lv2 = a;
	for (int i = 0; i < length_of_a; ++i)
		cout << lv2[i] << " ";
	cout << endl;

}

int main(){

	vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	f(gv);
	
	vector<int> vv = {1, 2*1, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1*1, 				8*7*6*5*4*3*2*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1};
	f(vv);

	return 0;

}
