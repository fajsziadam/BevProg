#include "std_lib_facilities.h"	

int main()			
{

try{
	cout << "1_Success!\n"; //(1.) Cout << "Success!\n";--> C nagy betu

	cout << "2_Success!\n"; //(2.) cout << "Success!\n; --> idezojel lemaradt

	cout << "3_Success!" << "\n"; // (3.)cout << "Success" << !\n" --> ! rossz helyen volt, lemaradt egy (")
	
	cout << "4_Success!" << '\n'; //(4.) cout << success << '\n'; --> "Success!" <<

	int res = 7; vector<int> v(10); v[5] = res; cout << "5_Success!\n"; //(5.) string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; string helyett int

	vector<int> v1(10); v1[5] = 7; if (v1[5] == 7) cout << "6_Success!\n"; //(6.)vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n"; --> v(10).. már szerepelt,() helyett [], !=-->==

	if (8 != 7) cout << "7_Success!\n"; else cout << "Fail!\n"; //(7.) if (cond) cout << "Success!\n"; else cout << "Fail!\n"; --> feltételt kell adni

	bool c = false; if (!c) cout << "8_Success!\n"; else cout << "Fail!\n"; //(8.)bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n"; --> ha nem c (!c)...

	string s = "ape"; bool c1 = "fool">s; if (c1) cout << "9_Success!\n"; //(9.) string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n"; --> bool, c mar letezik(c1)

	string s1 = "ape"; if (s1!="fool") cout << "10_Success!\n"; //(10.)string s = "ape"; if (s=="fool") cout << "Success!\n"; --> s mar letezett (s1), ha s1 nem egyenlo fool akkor irja ki

	string s2 = "ape"; if (s2!="fool") cout << "11_Success!\n"; //(11.)string s = "ape"; if (s=="fool") cout < "Success!\n"; --> s es s1 mar letezett (s2), ha s2 nem egyenlo fool akkor irja ki ,cout <<

	string s3 = "ape"; if (s3!="fool") cout << "12_Success!\n"; //(12.)string s = "ape"; if (s+"fool") cout < "Success!\n"; -->s3, + --> !=, cout << ,

	vector<char> v2(5); for (int i = 0; i < v2.size(); ++i) ; cout << "13_Success!\n"; //(13.) vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";-->	0 < v2.size helyett i size()

	vector<char> v3(5); for (int i = 0; i <= v3.size(); ++i) ; cout << "14_Success!\n"; //(14.) vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; -->v helyett v3;

	string s4 = "15_Success!\n"; for (int i=0; i<6; ++i) cout << s4; //(15.)string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i]; -->s4; s4[i]-->s4;

	if (true) cout << "16_Success!\n"; else cout << "Fail!\n"; //(16.)if (true) then cout << "Success!\n"; else cout << "Fail!\n"; --> nem kell a then

	int x = 2000; int c2 = x; if (c2 == 2000) cout << "17_Success!\n"; //(17.)int x = 2000; char c = x; if (c==2000) cout << "Success!\n";c helyett c2, int-->char helyett 

	string s5 = "18_Success!\n"; for (int i=0; i<10; ++i) cout << s5; //(18.) string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; -->s5; 

	vector<int> v4(5); for (int i=0; i<=v4.size(); ++i) ; cout << "19_Success!\n"; //(19.)vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";-->vector utan nem volt argument,(v4)

	int i1=0; int j = 9; while (i1<10) ++i1; if (j<=i1) cout << "20_Success!\n"; //(20.)int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";-->amig i1<10 hozzadjuk i1-et, ha (j(9)<=i1-el) << cout

	int x1=2; double d=5/(x1-1); if (d == 2*x1+1) cout << "21_Success!\n"; //(21.)int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n"; d=0-val volt egyenlo,rossz volt a (-) jel.

	string s6 = "22_Success!\n"; for (int i=0; i<=10; ++i) cout << s6; //(22.)string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];--> string<char> nem létezik, s6,

	int i2=0; int j1 = 0; while (i2<10) ++i2; if (j1<i2) cout << "23_Success!\n"; //(23.)int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";--> int j1, i2-t adunk hozza,

	int x2 = 4; double d1 = 5/(x2-3); if (d1==1*x2+1) cout << "24_Success!\n"; //(24.)int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";-->x2;d1;egyenletnek egyenlonek kell lennie

	cout << "25_Success!\n"; //(25.)cin << "Success!\n";--> cin helyett cout

keep_window_open();
	return 0;
}
catch(exception& e) {
	cerr<<"error: "<<e.what()<<'n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr<<"Oops:unknown exception!\n";
	keep_window_open();
	return 2;
}		
}
