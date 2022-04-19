# include <iostream>
# include <math.h>
using namespace std ;
// initial Function F(x,y)
float F ( float x , float y) {
return pow (x , 2) + 2 * y - 3; // Enter function F(x,y) here
}
float G ( float x , float y) {
return x + pow (y , 3) * x ; // Enter function G(x,y) here
}
float diffFx ( float x , float y ) {
return 2 * x + 2; // Enter diff F fowllow varible x
}
float diffFy ( float x , float y ) {
return 2; // Enter diff F fowllow varible y
}
float diffGx ( float x , float y ) {
return 1 + pow (y , 3); // Enter diff G fowllow varible x
}
float diffGy ( float x , float y ) {
return 3 * pow (y , 2) * x ; // Enter diff G fowllow varible y
}
void show ( float x [11] , float y [11]) {
cout << " ================= SHOW ================== " << endl ;
cout << " Variable Xn" << endl ;
for ( int i = 0; i <= 10; i ++) {
cout << "X[" << i << "] = " << x [ i ] << endl ;
}
cout << " variable Yn" << endl ;
for ( int i = 0; i <= 10; i ++) {
cout << "Y[" << i << "] = " << y [ i ] << endl ;
}
cout << " ================== END =================== " << endl ;
}
int main () {
float x [11] = { 20 ,0 ,0 ,0 ,0 ,0 };   // innit X(0)
float y [11] = { 20 ,0 ,0 ,0 ,0 ,0 };   // innit Y(0)
// ..................... initial array for variable x,y
for ( int i = 1; i <= 10; i ++) {
y [ i ] = y[ i - 1] + ( G( x [ i - 1] , y [ i - 1]) * diffFx ( x [ i - 1] , y[ i - 1])
- F ( x [ i - 1] , y [ i - 1]) * diffGx ( x [ i - 1] , y [ i - 1])) / ( diffFy ( x [ i - 1] ,
y [ i - 1]) * diffGx ( x [ i - 1] , y [ i - 1]) - diffGy ( x [ i - 1] , y [ i - 1]) *
diffFx ( x [ i - 1] , y [ i - 1]));
x [ i ] = x[ i - 1] + ( G( x [ i - 1] , y [ i - 1]) * diffFy ( x [ i - 1] , y[ i - 1]) -
F ( x [ i - 1] , y [ i - 1]) * diffGy ( x [ i - 1] , y [ i - 1])) / ( diffFx ( x [ i - 1] ,
y [ i - 1])* diffGy ( x [ i - 1] , y [ i - 1]) - diffGx ( x [ i - 1] , y [ i - 1]) *
diffFy ( x [ i - 1] , y [ i - 1]));
}
show (x , y );
system (" pause ");
return 0;
}
///////////////////////////////////////////////////////////////////////// CREATE BY NguyenThanhToan