
 41 #include <cmath>
 40 #include <iomanip>
 39 #include <iostream>
 38 #include <math.h>
 37 
 36 using namespace std;
 35 
 34 // function prototypes
 33 float polarRadius(float, float);
 32 float polarTheta(float, float);
 31 int quadFind(float, float);
 30 
 29 
 28 int main()
 27 {
 26     float x;
 25     float y;
 24     cout << "What is the x-coordinate? " << endl;
 23     cin >> x;
 22 
 21     cout << "What is the y-coordinate? " << endl;
 20     cin >> y;
 19 
 18     // call functions for radius and theta;
 17     float radius = polarRadius(x, y);
 16     float theta = polarTheta(x, y);
 15     cout << "The polar coordinates are (" << radius << ", " << fixed << setprecision(2) << theta << ")." << endl;
 14 
 13     // call function which determines the quadrant  
 12     int quad = quadFind(x, y);
 11     return 0;
 10 }
  9 
  8 // function that calculates radius from (x,y) coordinates
  7 float polarRadius(float x, float y)
  6 {
  5     float radius;
  4     radius = sqrt(pow(x, 2) + pow(y, 2));
  3 
  2     return radius;
  1 }
  0 
  1 // function which takes the (x,y) and finds theta
  2 float polarTheta(float x, float y)
  3 {
  4     float pi = 3.14159265;
  5     float theta;
  6     theta = atan2 (y, x) * 180 / pi;
  7 
  8     return theta;
  9 }
 19 
 18 int quadFind(float x, float y)
 17 {
 16     if(x == 0 && y == 0)
 15     {
 14         cout << "The point is on the origin." << endl;
 13     }
 12     else if(x == 0 && y != 0)
 11     {
 10         cout << "The point is on the x Axis." << endl;
  9     }
  8     else if(x != 0 && y == 0)
  7     {
  6         cout << "The point is on the y Axis." << endl;
  5     }
  4     else if(x > 0)
  3     {
  2         if(y > 0)
  1         {
  0             cout << "The point is in the first quadrant." << endl;
  1         }
  2         else if(y < 0)
  3         {
  4             cout << "The point is in the fourth quadrant." << endl;
  5         }
  6     }
  7     else if(x < 0)
  8     {
  9 
 10         if(y > 0)
 11         {
 12             cout << "The point is in the second quadrant." << endl;
 13         }
 14         else if(y < 0)
 15         {
 16             cout << "The point is in the third quadrant." << endl;
 17         }
 18     }
 19 
 20     return 0;
 21 }
 22 
~                                                                                                                                                                           
                                                                                                                                                          71,16-25      Bot
