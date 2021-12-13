#include "std_lib_facilities.h"	

vector<int>* suspicious()
{
	vector<int>* p = new vector<int>;	
	
	for(int i; cin >> i; )	//vektor értékeit a std inputrol töltjük fel
	{
		if(i) p->push_back(i);	//if(i) egy intiger akkor igaz ha nem 0 amugy hamis
		else throw ::exception();
	}
		
	return p;
}

int main()			
try{
	vector<int>* p = suspicious();
	
	for(int i = 0; i <p->size(); ++i)
	cout << p->at(i) << ' ';
	cout << endl;
	
	delete p;
					
	return 0;			
}catch(std::exception& e){
	std::cerr << "Error!" << endl;
}
