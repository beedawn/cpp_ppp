//#include "PPP.h"
#include <exception>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
try{
         //<<your code here>>
        //
       // cout << "Success!\n";
//cout << "Success!\n";
//cout << "Success" << "!\n";
//cout << "success" << "\n";
// int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
//vector<int> v(10); v[5] = 7; if (v[5]!=8) cout << "Success!\n";
//if (true) cout << "Success!\n"; else cout << "Fail!\n";

      //bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";

 //string s = "ape"; bool c = "fool">s; if (c) cout << "Success!\n";
//string s = "ape"; if (s!="fool") cout << "Success!\n";
//string s = "ape"; if (s!="fool") cout << "Success!\n";
//string s = "ape"; if (true) cout << "Success!\n";


//vector<char> v(1); for (int i = 0; i<v.size(); ++i)  cout << "Success!\n";

//vector<char> v(1); for (int i = 1; i<=v.size(); i++)  cout << "Success!\n";
//string s = "Success!\n"; for (int i = 0; i<s.size(); ++i) cout << s[i];

 //if (true) cout << "Success!\n"; else cout << "Fail!\n";
//int x = 2000; int c = x; if (c==2000) cout << "Success!\n";

//string s = "Success!\n"; for (int i = 0; i<s.size(); ++i) cout << s[i];

//vector<int> v(1); for (int i = 1; i<=v.size(); ++i) cout << "Success!\n";

//int i = 0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";
//int i = 2; double d = 5.0/(i-2.0); if (d==5.0/(i-2)) cout << "Success!\n";

//string s = "Success!\n"; for (int i = 0; i<=10; ++i) cout << s[i];

//int j=9;int i = 0; while (i<10) ++i; if (j<i) cout << "Success!\n";

// int x = 4; double d = 5.0/(x-2); if (d==5.0/(x-2)) cout << "Success!\n";

cout << "Success!\n";

         return 0;
}
catch (exception& e){
         cerr << "error: " << e.what() << '\n';
         return 1;
}
catch (...) {
         cerr << "Oops: unknown exception!\n";
         return 2;
}
