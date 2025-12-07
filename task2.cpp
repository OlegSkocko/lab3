#include <iostream>
#include<cmath>
using namespace std;
int main()
{float w = 200;
float h = 0.002;
float g = w+h;
float numerator_f = ( g * g) - (g * g); // має бути 0
    float denominator_f = 4.0f * w * h * (w * w + h * h);
    float result_f = numerator_f / denominator_f;

    double a = 200.0;
    double b = 0.002;
    double q = a+ b;
    double numerator_d = (q * q) - (q * q); // має бути 0
    double denominator_d = 4.0 * a * b * (a * a + b * b);
    double result_d = numerator_d / denominator_d;

    
    cout << "float result: " << result_f << endl;
    cout << "double result: " << result_d << endl;
    return 0;





}
