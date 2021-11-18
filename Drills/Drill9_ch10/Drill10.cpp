#include "std_lib_facilities.h"	

struct Point{

	double x;
	double y;
};


int main()			
{
	try{
		vector<Point> original_points;
		double x, y; 

		int a = 0;
		while (a != 7)
		{
			cin >> x >> y;
			original_points.push_back(Point{x,y});
			++a; 
}

	string ofname = "mydata.txt";
	ofstream ofile {ofname};
	if(!ofile) error("Can't open ofile", ofname);

	for(const auto& Point : original_points){
		ofile << Point.x << ' ' << Point.y << '\n';
	
} ofile.close();


	string ifname = "mydata.txt";
	ifstream ifile {ifname};
	if(!ifile) error("Can't open ifile", ifname);
	
	vector<Point> processed_points;


	while(ifile >> x >> y){
		processed_points.push_back(Point{x, y});
	}

	if(original_points.size() == processed_points.size()){
		for(int i = 0; i < original_points.size(); ++i){
			if(original_points[i].x != processed_points[i].x || original_points[i].y != processed_points[i].y){
				cout << "Something's wrong!" << endl;
			}
		}
	}
	
	else{
		cout << "Something's wrong!" << endl;
	}
	
	return 0;			
}
catch (exception& e){
	cerr << e.what() << endl;
	return 1;
}
catch (...){
	cerr << "Some error" << endl;
	return 2;
}}
