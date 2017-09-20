
 38 #include <cmath>
 37 #include <iostream>
 36 
 35 using namespace std;
 34 
 33 int main()
 32 {
 31     float average = 0;
 30     float grade[50];
 29     float numOfGrades = 0;
 28     float sum = 0;
 27     int i = 0;
 26 
 25     cout << "Enter the grades (max of 50) followed by a -1: " << endl;
 24     cin >> grade[i];
 23 
 22     while(grade[i] > 0)
 21     {
 20         sum = sum + grade[i];
 19         i++;
 18         numOfGrades++;
 17         cin >> grade[i];
 16     }
 15 
 14     average = sum / numOfGrades;
 13 
 12     float squaredSum = 0;
 11     float squaredValue[50];
 10     i = 0;
  9 
  8     while(i < numOfGrades)
  7     {
  6         squaredValue[i] = pow((grade[i] - average), 2);
  5         squaredSum = squaredSum + squaredValue[i];
  4         i++;
  3     }
  2 
  1     float overallAverage = 0;
  0     overallAverage = squaredSum / (numOfGrades - 1);
  1 
  2     float standardDeviation = 0;
  3     standardDeviation = sqrt(overallAverage);
  4 
  5     cout << "The avereage is " << average << "." << endl;
  6     cout << "The Standard Deviation is " << standardDeviation << "." << endl;
  7 
  8     return 0;
  9 }
 10 
                                                                     39,2-5        All
