#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double x1(const double a, const double b, const double eps, int depth);
double f(const double a);

int main()
{
    double a;
    double b;
    double eps;
    double x;
    int depth = 0;
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;
    cout << "eps= "; cin >> eps;
    x = x1(a, b, eps, depth);
    cout << "x= " << x << endl;
    return 0;
}

double f( double a){
    return sin(a) - cos(a);
}
double x1(double a,double b, const double eps, int depth){
    double m;
    m = (a + b) / 2;
    depth++;
    if (f(m) == 0) {
        cout << "depth= " << depth << endl;
        return m;
   }
    if (fabs(b-a) <= 2 * eps) {
        cout << "depth= " << depth << endl;
        return m;
   }
   if((f(a) * f(m)) < 0){
       return x1(a, m, eps,depth);
   }
       
   if ((f(b) * f(m)) < 0) {
       return x1(m, b, eps,depth);
   }
}
