
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

bool checkEvenOdd(int numToCheck);

//bulding the Star code:
void putStars(int current, int lastEnter, int limit, bool isLimitReached) {
    cout << "*";
    if(current == lastEnter ) {
        cout << endl;
        current = 0;
        if(isLimitReached == false)
            lastEnter++;
        else lastEnter--;
    }
    if(current + 1 == limit) {
        isLimitReached = true;
    }
    current++;
    if(!(isLimitReached == true && lastEnter == 0))
        putStars(current, lastEnter, limit, isLimitReached);
}




int main(int argc, const char * argv[]) {
    
    // Part 1:

    // Convert this code from a while structure to a for loop:
    cout << "while loop\n";
    int j = 1;
    while ( j <= 5 )
    {
    cout <<"*";
        j ++;
    }
    cout <<endl;
    
    //for loop:
    cout<< "for loop:\n";
    
    for (int j=1; j <=5; j++)
    cout << "*";
    cout << "\n========================================================================\n";
    
    /// Part 2:
    // Given a student score between 0 and 100 determine the letter grade:
    // 90 and above - > A
    // 80 and above - > B
    // 70 and above - > C
    // 60 and above - > D
    // 59 and below - > F
    // the student score will be data type int.
    // the letter grade will be data type char.
    // there are several ways to approach the problem.
    // extra Kudos if you can figure out how to use a switch statement.
    // Note you may not have a switch statement with more than 8 or 9 case statements.
    // C++ Program to calculate grade of student
     
    cout<< "Grading Program"<< endl;
    
        int score, i, average;
        float total=0;
      
        cout<< "Enter the points you earned on your last 5 exams\n"; //i chose to calculate the total average of 5 exams user will input the totals and then the program will give their grade.
      
        for(i=0; i<5; i++) {
     cin >> score;
     total += score;
        }
      
        average = total/5;
      
        cout<<"Grade : ";
        switch(average/10) {
           case 9 :
               cout << "A";
               break;
           case 8 :
           case 7 :
               cout << "B";
               break;
           case 6 :
           case 5 :
               cout << "C";
               break;
           default :
               cout << "D";
        }
    cout << "\n========================================================================\n";
    /* Part 3:
 
    Write a program that asks the user to enter the month ( letting the user enter an integer in the range 1 to 12) and the year.   The program should then display the number of days in that month.   Use the following criteria to identify leap years:
    1. Determine whether the year is evenly divisible by 100.   If it is, then it is a leap year if and only if it is evenly divisible by 400.   For example, 2000 is a leap year  but 2100 is not.
    2. If the year is not evenly divisible by 100, then it is a leap year if and only if it is evenly divisible by 4.   For example, 2008 is a leap year but 2009 is not.
    Here is an  sample run of the program
    Enter a month ( 1-12):  2
    Enter a year : 2008
    29 days
    // here is an alternate definition of leap year:
    A year will be a leap year if it is divisible by 4 but not by 100. If a year is divisible by 4 and by 100, it is not a leap year unless it is also divisible by 400. this is enough to check if a year is a leap year.
     here is a good article on the whole Leap Year item:
      */
    cout<<" Days in a Month\n";
    
    int year,
          month;

      // Ask user to enter month
      cout << endl;
      cout << "Enter the month (1 - 12): "; cin >> month;
      cout << "Enter the year (up to 9000): "; cin >> year;

      // Line Break
      cout << endl; // Error check for valid year if (year >= 0 && year <= 9000)
      {
          if (year % 4 == 0) {
                 if (year % 100 == 0) {
                     if (year % 400 == 0)
                         cout << year << " is a leap year. ";
                     else
                         cout << year << " is not a leap year. ";
                 }
                 else
                     cout << year << " is a leap year. ";
             }
             else
                 cout << year << " is not a leap year. ";
          // Decision statement for month
          switch (month)
          {
              case 1:
              case 3:
              case 5:
              case 7:
              case 8:
              case 10:
              case 12:
                  cout << "31 days";
                  break;

              case 4:
              case 6:
              case 9:
              case 11:
                  cout << "30 days";
                  break;

              case 2:
                  // Decision statement for leap year
                  if (year % 100 == 0)
                  {
                      if (year % 400 == 0)
                          cout << "29 days" << endl;
                      else
                          cout << "28 days" << endl;
                  }
                  else if (year % 100 != 0)
                  {
                      if (year % 4 == 0)
                          cout << "29 days" << endl;
                      else
                          cout << "28 days" << endl;
                  }
                  break;
                  

              default:
                  cout << "Invalid month. Rerun program. Try again." << endl;
                  
          }
      }
      cout << endl;
    
    
    
    cout << "\n========================================================================\n";

    cout<< "Multiplication table" <<endl;
    
    int num, x, y, res;
        cout<<"-----------Table from 1 to 10--------\n\n";
        for(x=1; x<=10; x++)
        {
            num = x;
            cout<<"Table of "<<num<<": ";
            for(y=1; y<=10; y++)
            {
                setw(6);
                res = num*y;
                cout<<res<<"  ";
            }
            cout<<endl;
        }
        cout<<endl;
    
    cout << "\n========================================================================\n";
    // write a function that puts out n stars.   We will use the asterisk character to look like a star.
    // it will be return type of ?
    // it will take one parameter and integer that tell how many stars to put out.
    // I ask you to use a for loop inside the function. putStars ( 7 ) ;
    // this would cause the function to put out on the console 7 asterisks.    *******
    // I expect to see some driver code.
    
    
    cout<<"Stars"<<endl;
   // int numberOfStars = 0;
   // cout << "Enter max number of stars to be generated : "<<endl;
       // cin >> numberOfStars;
        putStars(1, 1, 7, false); // I'm outputting only 7 stars but if you replace the 7 for: numberOfStars you can add as many lines as you want. remove the // from the cin to allowed user to input their own amount of stars.
    

    
    cout << "\n========================================================================\n";
    
    
    // Part 6
    // write a function that returns a true or false.
    //The input is a integer.
    //If the integer is evenly divisible by 7 return true.   Otherwise return false.
    cout <<endl;
    int numToCheck;
      bool isEven;
      cout<<"Enter an integer to check if it is divisible by 7\n";
      //Storing the entered value in variable numToCheck
      cin>>numToCheck;
      //Calling the function that checks even odd
      isEven = checkEvenOdd(numToCheck);
      if(isEven)
         cout<<numToCheck <<" is True";
      else
         cout<<numToCheck<< " is False";
     
    cout << "\n========================================================================\n";
    
    
    return 0;
}


bool checkEvenOdd(int numToCheck){
   bool b;
   /* If number is perfectly divisible by 7 then it is
    * an even number else it is an odd number
    */
   if (numToCheck % 7 == 0)
    b=true;
   else
      b=false;
   return b;
}
