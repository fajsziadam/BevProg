#include "std_lib_facilities.h"	

void suspicious(int size, int x)
{
	int* p = new int[size];	//foglalunk memóriát inteknek-->size darabot
	
	if(x == 0) throw std::exception();	//ha x==0; dobunk egy kivételt így a delete nem fut le(van memoria szivárgás)
	
	delete[] p;
}

int main()			
try{
	suspicious(5, 1);		//(mekkora memorat foglalunk le, ), ha x != 0 akkor működik a delete
			
	return 0;			
}catch(std::exception& e){
	std::cerr << "Error!" << endl;
}
