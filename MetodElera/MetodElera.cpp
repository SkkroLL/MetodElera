#include <iostream>
using namespace std;

double f(double x, double y) {
    return x + y; 

// Метод Эйлера
void EulerMethod(double x0, double y0, double h, double x_end) {
    double x = x0;
    double y = y0;
    cout << "x: " << x << ", y: " << y << endl;
    while (x < x_end) {
        y += h * f(x, y);
        x += h;           
        cout << "x: " << x << ", y: " << y << endl;
    }
}

int main() {
    double x0 = 0.0;   
    double y0 = 1.0;   
    double h = 0.1;    
    double x_end = 1.0; 
    EulerMethod(x0, y0, h, x_end);

    return 0;
}