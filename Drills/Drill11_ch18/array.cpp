#include "std_lib_facilities.h"	

void f(int a[], int n)
{	
	int la[10];
	
	for(int i = 0; i < n; ++i)
	{
		la[i] = a[i];
	}
	for(int i = 0; i < n; ++i)
		cout << la[i] << " ";
	cout << endl;
		
	int* p = new int[n];	
	for(int i = 0; i < n; ++i)
	{
		p[i] = a[i];
	}
	for(int i = 0; i < n; ++i)
		cout << p[i] << " ";
	cout << endl;
	
	delete[] p;
	
	
}
int main()			
{	
	int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	f(ga, 10);
	
	int aa[10] = {1, 2*1, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1*1, 				8*7*6*5*4*3*2*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1};
	f(aa, 10);
			
	return 0;			
}
