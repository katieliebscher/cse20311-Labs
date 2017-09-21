

 56 #include <cmath>
 55 #include <iomanip>
 54 #include <iostream>
 53 
 52 using namespace std;
 51 
 50 int main()
 49 {
 48     int size = 1000;
 47     int numbers[size];
 46 
 45     // create array of 1s, where a value of 1 in the array denotes a prime number
 44     for(int i = 0; i < size; i++)
 43     {
 42         numbers[i] = 1;
 41     }
 40 
 39     // initialize variables for determining prime numbers
 38     int primeNum = 2;
 37     int value = 0;
 36     int turn = 1;
 35 
 34     // while loop determines if all primes have been discovered
 33      while(primeNum * primeNum <= size)
 32      {
 31         // while loop determines if all multiples of prime have been found
 30         while(value < (size - 1))
 29         {
 28             // find value of multiple of primes starting at original prime
 27             value = primeNum + (primeNum * turn) ;
 26 
 25             ++turn;
 24 
 23             // set that number value to false 
 22             numbers[value] = 0;
 21         }
 20 
 19         // increment prime number
 18         primeNum = primeNum + 1;
 17 
 16         // condition to skip even numbers
 15         while(numbers[primeNum] == 0)
 14         {
 13             primeNum = primeNum + 1;
 12         }
 11 
 10         // reset integers   
  9         turn = 1;
  8         value = 0;
  7     }
  6 
  5     // integer for displaying primes
  4     int columns = 0;
  3 
  2     // for loop displays primes in 10 columns
  1     for(int n = 2; n < size; n++)
  0     {
  1         if(numbers[n] == 1)
  2         {
  3             cout<< setw(5) << n;
  4             columns++;
  5 
  6             if(columns > 9)
  7             {
  8                 cout << endl;
  9                 columns = 0;
 10             }
 11         }
 12     }
        
        cout << endl;
        return 0;
        
   }
                                                                                       57,2-5        Top
