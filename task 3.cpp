
    #include <iostream>
using namespace std;

int main() {
    int a = 4, b = 6;

    
    int res1 = --a + b++;
    cout << "1. --a + b++ = " << res1 << endl;

   
    int res2 = ++b * a--; 
    cout << "2. ++b * a-- = " << res2 << endl;

    bool res3 = a < ++b;  
    cout << "3. a < ++b = " << res3 << endl;

    int res4 = b-- - a++; 
    cout << "4. b-- - a++ = " << res4 << endl;


    bool res5 = ++a >= b; 
    cout << "5. ++a >= b = " << res5 << endl;

    int res6 = a++ / --b; 
    cout << "6. a++ / --b = " << res6 << endl;

    return 0;
}