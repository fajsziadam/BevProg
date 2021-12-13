#include <vector>
#include <iostream>
#include <memory>

std::vector<int>* suspicious()
{
	std::unique_ptr<std::vector<int>> p = std::make_unique<std::vector<int>>();
	//a vector pointert"becsomagoltuk" unique pointer objektumba
	//unique pointerfgv. készít egy pointert olyan típussal amit megadunk neki pl.:vector<int>
	
	for(int i; std::cin >> i; )
	{
		if(i) p->push_back(i);
		else throw std::exception();	//ha dobunk egy kivételt, minden lokális változónak implicit módon hívodik a felszabadítása, implicit módon hívódik a destruktor
		//felszabadítjuk a memória területet 
	}

	return p.release();	//visszaadja azt a pointert, ami belül van
}

int main()
try {

	std::vector<int>* p = suspicious();

	for(int i = 0; i < p->size(); ++i)
		std::cout << p->at(i) << ' ';
	std::cout << '\n';

	delete p;

	return 0;

} catch (std::exception& e){
	std::cerr << "Error!\n";
	return 1;
}
