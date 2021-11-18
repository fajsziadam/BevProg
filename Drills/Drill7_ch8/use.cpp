#include "my.h"
#include "my.cpp"
int foo;

void swap_v(int a,int b){
	int temp;
	temp = a;
	a=b;
	b=temp;
}
void swap_v2(double a,double b){
	double temp;
	temp = a;
	a=b;
	b=temp;
}

void swap_r(int& a,int& b){
	int temp;
	temp = a;
	a=b;
	b=temp;
}
void swap_r2(double& a,double& b){
	double temp;
	temp = a;
	a=b;
	b=temp;
}
/*
void swap_cr(const int& a,const int& b){
	int temp;
	temp = a;
	a=b;
	b=temp;
}
*/

namespace X{
	int var = 0;
	void print(){cout << var << endl;}
}
namespace Y{
	int var = 0;
	void print(){cout << var << endl;}
}
namespace Z{
	int var = 0;
	void print(){cout << var << endl;}
}

int main()			
{
	foo = 7;
	print_foo();
	print(99);

//int x = 7;
//int y =9;
//cout << x << ' ' << y << endl; 	//Eddig, kiíratom, x és y értékét,
//swap_r(x,y);					
//cout << x << ' ' << y << endl; //A swap_r függvényben megcserélem az értékeit
//swap_v(7,9);					
//cout << x << ' ' << y << endl; // ?

//const int cx = 7;
//const int cy = 9;
//swap_v(cx,cy);
//cout << cx << ' ' << cy << endl;  // konstans értékeket nem változtat, csak swap_v-vel ment
//swap_v2(7.7,9.9);

//double dx = 7.7;
//double dy = 9.9;
//cout << dx << ' ' << dy << endl;  //létrehoztam egy void double-t
//swap_r2(dx,dy);
//cout << dx << ' ' << dy << endl;  //double értékeket fordította meg
//swap_v(7.7,9.9);

X::var = 7;
X::print();		// print X’s var
using namespace Y;
var = 9;
print();		// print Y’s var
{

using Z::var;
using Z::print;

var = 11;

print();		// print Z’s var
}
print();		// print Y’s var
X::print();		// print X’s var


	return 0;
					
}
