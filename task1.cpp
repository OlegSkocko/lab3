#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    double x=63.14;

int whole=(int)x;
int fractional=(int)((x-whole)*100);
cout <<"у бібліотеці є"  <<whole<<
" полиць з книгами"    <<fractional 
<<"з них рідкісних видання."<< endl;
return 0;

}
