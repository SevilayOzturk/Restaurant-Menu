#include <iostream>
#include<iomanip>
using namespace std;

int main() {
   
   int menuItem;
   bool starter = true;
   bool mainmenu = true;
   double total = 0 ;
   double budget =10.0;
   cout<<fixed;
   cout << setprecision(2);
   while(starter)
   {
      if (mainmenu){
      cout << "Please select a menu item from the list below" <<endl;
      cout << "1 - View Food Menu"<<endl;
      cout<<"2 - Pay total due"<<endl;
      cout<< "3 - Add $5 in credit"<<endl;
      cout<<"4 - Clear order"<<endl;
      cout<<endl;
      cin >> menuItem;
      }
      
      if (menuItem == 1)
      {
         mainmenu = false;
         int choice;
               cout << "What would you like to add to your order?"<< endl;
               cout <<"(1) Chicken Sandwich: $3.45" << endl;
               cout <<"(2) Chicken Salad: $4.00" << endl;
               cout<< "(3) French Fries: $1.99" << endl;
               cout<<"(4) Hotdog: $2.99" << endl;
               cout<<"(5) Pizza: $3.99" <<endl;
               cout<< "(6) Go to main menu" << endl;
               cout<<"Your current total is: $" << total<<endl;
            cin>>choice;
            switch(choice){
               
               case 1 :
                  cout << "You have added a Chicken Sandwich to your order." << endl;
                  total += 3.45;
                  break;
               case 2: 
                  cout << "You have added a Chicken Salad to your order." << endl;
                  total += 4.00;
                  break;
               case 3:
                  cout << "You have added French Fries to your order." << endl;
                  total += 1.99;
                  break;
               case 4:
                  cout << "You have added a Hot Dog to your order." << endl;
                  total += 2.99;
                  break;
               case 5:
                  cout << "You have added a Slice of Pizza to your order." << endl;
                  total += 3.99;
                  break;
               case 6:
                  mainmenu = true;
                  break;
               default:
                  cout<<"Invalid item number please try again."<<endl;
            }
            
            cout << endl;
            
         }
         if (menuItem == 2){
               if (total <= budget){
                  cout<< "Your total due is: $" << total << endl;
               cout << "Thank you! Your change is: $" << budget - total << endl;
               cout << "Enjoy your meal!" << endl;
                  }
               else{
                  cout<< "Your total due is: $" << total << endl;
                  cout << "Insufficient funds!" << endl;
                  }
            break;
            }
         if (menuItem == 3){
            budget +=5.0;
            cout << "Credit available: $" << budget << endl;
            }
         if(menuItem == 4){
            total = 0.0;
            cout<<"Current order balance has been cleared. Current due: $0.00"<< endl;
         }
      if (menuItem < 1 || menuItem > 4){
         cout << "Please enter a valid option!" << endl;
         }
      }
      return 0;
   }
   /* Type your code here. */
