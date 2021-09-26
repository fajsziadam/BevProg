#include "std_lib_facilities.h"	

int main(){
		
	cout << "Enter the name of the person you want to write to." << endl;
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << "," << endl;						  //1.
	
	
	cout <<"   How are you? I am fine. I miss you." << endl;
	cout << "Sorry, I worked a lot that's why I couldn't write to you until now." << endl; //2.
	
	
	cout << "Please enter another friend name" << endl;
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?" << endl; 			  //3.
	
	
	cout << "Please enter m if your friend is male and enter f if your friend is female!" 
	<< endl;
	char friend_sex = 0;
	cin >> friend_sex;
	if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me." << endl;
	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me." << endl; //4.
		
		
	cout << "Please enter your age." << endl;
	int age;
	string simple_error("you're kidding!");
	cin >> age;
	if (age <= 0 or  age >= 110)
		cout << simple_error << endl;
	else 
	   cout << "I hear you just had a birthday and you are" << age << " years old." << endl;  //5.
		
		
	if (age < 12 and age >= 1)
		cout << "Next year you will be " << age+1 << endl;
	if (age == 17)
		cout << "Next year you will be able to vote." << endl;
	if (age > 70 and age <= 109)
		cout << "I hope you are enjoying retirement." << endl; 			  //6.
		
		
	cout << "Yours sincerly," << endl;
	cout << "               " << endl;
	cout << "               " << endl;
	cout << " Fajszi Adam " << endl; 							  //7.
	
	
	return 0;			
}
