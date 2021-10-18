#include <iostream>
#include <fstream>

using namespace std;
 int main ()
 {
     int a;
     int b;
     ifstream fin("aplusb.in");
     fin>> a;
     fin>> b;
     ofstream fout("aplusb.out");
     fout<<a+b;
     return 0;
 }