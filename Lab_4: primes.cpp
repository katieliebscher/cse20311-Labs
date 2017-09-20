 23 #include <cmath>
 22 #include <iomanip>
 21 #include <iostream>
 20 
 19 using namespace std;
 18 
 17 int main()
 16 {
 15     int numbers[1000];
 14 
 13     // create array of 1s, where a value of 1 in the array denotes a prime number
 12     for(int i = 0; i < 1000; i++)
 11     {
 10             numbers[i] = 1;
  9     }
  8 
  7     // initialize variables for determining prime numbers
  6     int primeNum = 2;
  5     int value = 0;
  4     int turn = 1;
  3 
  2     // while loop determines if all primes have been discovered
  1      while(primeNum * primeNum <= 1000)
  0      {
  1         // while loop determines if all multiples of prime have been found
  2         while(value < 999)
  3         {
  4             // find value of multiple of primes starting at original prime
  5             value = primeNum + (primeNum * turn) ;
  6 
  7             ++turn;
  8 
  9             // set that number value to false 
 10             numbers[value] = 0;
 11         }
 12 
 13         // increment prime number
 14         primeNum = primeNum + 1;
 15 
 16         // condition to skip even numbers
 17         while(numbers[primeNum] == 0)
 18         {
 19             primeNum = primeNum + 1;
 20         }
 21 
 22         // reset integers   
 23         turn = 1;
 24         value = 0;
 25     }
 26 
 27     // integer for displaying primes
 28     int columns = 0;
 29 
 30     // for loop displays primes in 10 columns
 31     for(int n = 2; n < 1000; n++)
 32     {
 33 
 34         if(numbers[n] == 1)
 35         {
 36             cout<< setw(5) << n;
 37             columns++;
 38 
 39             if(columns > 9)
 40             {
 41                 cout << endl;
 42                 columns = 0;
 43             }
 44         }
 45     }
        cout << endl;
        return 0;
    }
                                                                                                                  
