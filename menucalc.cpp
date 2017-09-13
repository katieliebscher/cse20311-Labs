
  7 #include <cmath>
  6 #include <iomanip>
  5 #include <iostream>
  4 
  3 using namespace std;
  2 
  1 
  0 
  1 // function prototypes
  2 
  3 float addition(float, float);
  4 float division(float, float);
  5 float multiplication(float, float);
  6 float subtraction(float, float);
  7 int userChoice(int);
  8 
  9 int main()
 10 {   
 11     int choice = 1;
 12     int turn = 0;
 13     while (choice !=5)
 14     {
 15     // have different greeting if program is just beginning 
 16         if(turn == 0)
 17         {
 18             cout << "Hi there! What do you need help with?" << endl;
 19             turn = 1;   
 20             
 21             int choice = userChoice(choice);
 22                 
 23             // quit program if user choice is 5
 24             if(choice == 5)
 25             {
 26                 cout << "I'll be here if you need help later!" << endl;
 27                 break;
 28             }
 29 
 30             // ask user for the values of two numbers
 31 
 32             cout << "What are your two numbers? ";
 33 
 34             // set precision 
 35             cout << fixed << setprecision(8);
 36 
 37             float x;
 38             float y;
 39             cin >> x;
 40             cin >> y; 
 41         
 42             cout << "Inputs:" << x << "\t" << y << endl;
 43 
 44             if(choice == 1)
 45             {
 46                     // addition
 47                     float sum = addition(x, y);
 48                     cout << "(" << x << ")" <<  " + " << "(" << y << ") = " << sum << endl;
 49             }
 50             else if(choice == 2)
 51             {
 52                 // subtraction
 53                 float difference = subtraction(x, y);
 54                 cout << "(" << x << ")" <<  " - " << "(" << y << ") = " << difference << endl;
 55             }   
 56             else if(choice == 3)
 57             {
 58                     // multiplication
 10                     float product = multiplication(x, y);
  9                     cout << "(" << x << ")" <<  " * " << "(" << y << ") = " << product << endl;
  8             }
  7             else if(choice == 4)
  6             {
  5                     // division
  4                     float dividend = division(x, y);
  3                     cout << "(" << x << ")" <<  " / " << "(" << y << ") = " << dividend << endl;
  2             }
  1         }
  0         // have greeting if program has already been run once
  1         else
  2         {
  3             cout << "Do you have any other questions?" << endl << "1 for yes" << endl
  4             << "2 for no" << endl;
  5 
  6             cout << "Your input: ";
  7             int again;
  8             cin >> again;
  9 
 10             // have option to quit if user doesn't have anymore questions
 11             if(again == 2)
 12             {
 13                 cout << "I'll be here if you need any help later!" << endl;
 14                 break;
 15             //  break;
 16             }
 17 
 18             // rerun program if user has more questions
 19             else
 20             {
 21                 cout << "What else can I help with? " << endl;
 22                 int choice = userChoice(choice);
 23 
 24                 // quit program if user choice is 5
 25                 if(choice == 5)
 26                 {
 27                     cout << "I'll be here if you need help later!" << endl;
 28                     break;
 29                 }
 30                 // ask user for the values of two numbers
 31 
 32                 cout << "What are your two numbers? ";
 33 
 34                 // set precision 
 35                 cout << fixed << setprecision(8);
 36 
 37                 float x;
 38                 float y;
 39                 cin >> x;
 40                 cin >> y;
 41 
 42                 cout << "Inputs:" << x << "\t" << y << endl;
 43 
 44                 if(choice == 1)
 45                 {
 46                     // addition
 47                     float sum = addition(x, y);
 48                     cout << "(" << x << ")" <<  " + " << "(" << y << ") = " << sum << endl;
 49                 }
 50                 else if(choice == 2)
 51                 {
 52                     // subtraction
 53                     float difference = subtraction(x, y);
 54                     cout << "(" << x << ")" <<  " - " << "(" << y << ") = " << difference << endl;
 55                 }
 10                 else if(choice == 3)
  9                 {
  8                     // multiplication
  7                     float product = multiplication(x, y);
  6                     cout << "(" << x << ")" <<  " * " << "(" << y << ") = " << product << endl;
  5                 }
  4                 else if(choice == 4)
  3                 {
  2                     // division
  1                     float dividend = division(x, y);
  0                     cout << "(" << x << ")" <<  " / " << "(" << y << ") = " << dividend << endl;
  1                 }
  2             }
  3         }
  4     }
  5     return 0;
  6 }
  7 
  8 
  9 // function to determine user choice
 10 int userChoice(int choice)
 11 {
 12     cout << "Press: " << endl << "1 for addition" << endl << "2 for subtraction" << endl << "3 for mulitplication" << endl << "4 for division" << endl  << "5 if you don    't need any help" << endl;
 13 
 14     cout << "Your choice is: ";
 15     cin >> choice;
 16 
 17     return choice;
 18 }
 19 
 20 // function to add inputs
 21 float addition(float x, float y)
 22 {
 23     // initialize sum variable
 24     float sum;
 25 
 26     // Calculate
 27     sum = x + y;
 28 
 29     return sum;
 30 }
 31 
 32 // function to subtract inputs
 33 float subtraction(float x, float y)
 34 {
 35     // initialize difference variable
 36     float difference;
 37 
 38     //Calculate
 39     difference = x - y;
 40 
 41     return difference;
 42 }
 43 
 44 // function to multiply inputs
 45 float multiplication(float x, float y)
 46 {
 47     // initialize multiplication variable
 48     float product;
 49 
 50     // multiply
 51     product = x * y;
 52 
 53     return product;
 54 }
 
 10 // function to divide inputs
  9 float division(float x, float y)
  8 {
  7     //initialize division variable
  6     float dividend;
  5 
  4     // divide
  3     dividend = x / y;
  2 
  1     return dividend;
  0 }
