

 36 #include <cmath>
 35 #include <iostream>
 34 
 33 using namespace std;
 32 
 31 // give function prototypes
 30 int getgcd(int, int);
 29 
 28 int main()
 27 {
 26     // prompt user for two integers
 25     cout << "Please enter two integers: ";
 24     int int1;
 23     int int2;
 22     cin >> int1;
 21     cin >> int2;
 20 
 19     // call function getgcd
 18     int gcd = getgcd(int1, int2);
 17     cout << "The gcd is: " << gcd << endl;
 16 
 15     return 0;
 14 }
 13 
 12 int getgcd(int int1, int int2)
 11 {
 10     int gcd;
  9     while(int2 != 0)
  8     {
  7         gcd = int1 % int2;
  6         int1 = int2;
  5         int2 = gcd;
  4 
  3     }
  2 
  1     return int1;
  0 }
