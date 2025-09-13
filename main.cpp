#include <iostream>
#include <cmath>
using namespace std;

double logn (double x, double y){
    return log (x) / log (y);
}

double raiz (double x, double y){
    return pow (x, 1/y);
}

double sec (double x){
    return 1/cos(x);
}

double cosec (double x){
    return 1/sin(x);
}

double cotg (double x){
    return 1/tan(x);
}

float teste1 (float x){
    
    return (1+x)/raiz(x, 2);
}

float teste2 (float x){
    
    return sin(x);
}

float teste3 (float x){
    
    return 3*pow(x, 2) - 2*x + 1;
}

float teste4 (float x){
    
    return pow (x, 7) + pow (x, 3) + x;
}

float teste5 (float x){

    return 1 / pow (x, 2) + x ;
}







float equacao (float x){
    
    return (1+x)/raiz(x, 2);
}

float soma_de_riemann_retangulo (float a,float z,int n)
{
    float base = (z-a)/n;
    float area = 0;

    for (int i=0; i<=n; i++){    
    float xi = a + base * i;
    area = area + teste2(xi); 
    
    }
    area = area * base;
    return area;
    
}


int main()
{
   
   float a = -M_PI;  //Limite inferior
   float z = M_PI;   //Limite superior
   int n = 10000;    //Número de subintervalos
   
   cout << "O resultado é: " << soma_de_riemann_retangulo (a, z, n) << endl;

}



