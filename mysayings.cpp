
  #include <iostream>
  #include <string>
  #include <vector>
  #include <fstream>
   
  using namespace std;
   
  // prototypes
 void menuOptions();
  
  int main()
  {
      ifstream ifs;
      string textFile;
       string saying;
       vector<string> sayings;
   
       // prompt user for file
       cout << "Welcome to your sayings manager!" << endl;
       cout << "Enter the name of the start up file : ";
       cin >> textFile;
  
      ifs.open(textFile);
 
      // make sure file entered exists, and if not display error and end progr    am
      if(!ifs)
     {
         cout << "Error!" << endl;
          return 1;
      }
  
      // create string vector with all strings from file
      getline(ifs, textFile);
      while(!ifs.eof())
      {
          sayings.push_back(textFile);
          getline(ifs, textFile);
      }
  
      // user actions 
      int choice = 1;
      while(choice != 5)
      {
          menuOptions();
          cin >> choice;
          switch(choice)
          {
              // case to display all sayings
              case 1:
                  {
                      // go through sayings vector and display each string
                      for(int i = 1; i < sayings.size(); i++ )
                      {
                        cout << sayings.at(i) << endl;
                    }
                     cout << endl << endl;
                    break;
                  }
  
                  // case to enter a new saying
              case 2:
                  {
                      string newSaying;
  
                      // receive new Saying
                     cout << "What is the new saying you'd like to include? "     << endl;
                      cin.ignore();
                      getline(cin, newSaying);
  
                      // place new saying at end of vector
                      sayings.push_back(newSaying);
                      cout << endl << endl;
                      break;
                  }
  
              // case to search for specific words
              case 3:
                  {
                      string word;
                      size_t found;
  
                      cout << "What word are you looking for? \n";
                      cin >> word;
  
                      // check each string for match with user word input 
                     for(int i = 1; i < sayings.size(); i++ )
                      {
                          string search = sayings.at(i);
                         found = search.find(word);
                         if(found != string::npos)
                          {
                              cout << sayings.at(i) << endl;
                          }
  
                      }
  
                      cout << endl;
                     break;
                 }
 
                   // case to save sayings to a new file
               case 4:
                   {
                     string newFile;
                      ofstream ofs;
                      cout << "Enter name of file to which you wish to save yo    ur sayings (with no spaces): ";
                       cin >> newFile;
                       cin.ignore();
                       ofs.open(newFile);
                      for(int i = 1; i < sayings.size(); i++)
                      {
                          ofs << sayings.at(i) << endl;
                      }
 
                      ofs.close();
                      cout << endl;
                     break;
                  }
  
              // case to exit program
              case 5:
                  {
                      cout << "Come back anytime! \n";
                      break;
                  }
  
              // case in case user does not enter correct choice
            default:
              {
                  cout << "I'm sorry that choice is not an option, please ente    r a new choice. \n";
              }
          }
  
     }
  
  
  
  
  
       return 0;
   }
  
   void  menuOptions()
   {
       cout << "What task would you like to perform? \n 1: Show all sayings \n     2: Enter a new saying \n 3: List sayings that contain a given word \n 4: Sav    e all sayings in a new text file \n 5: Quit \n Your choice is: ";
   }
   
   


                                                              19,17-20      Top
