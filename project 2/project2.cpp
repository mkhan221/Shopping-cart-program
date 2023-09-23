/*This program demonstrates an program using public inheritance of different to classes 
to resemble a real life shopping cart
Mohammad Aryan Khan
py9242yg
09/21/2023
Instructor:Jie Meichsner
*/
#include <iostream>
#include <string>
#include <iomanip>
#include "item.h"
#include "shoppingCart.h"
#include "Bag.h"

using namespace std;

int main()
{
   
  Item i, temp; 
  string choice; 
  Shopping_Cart<Item> sc; 
  int max_length, choices, new_quantity;

  cout << "Welcome to XXX SHOPPING CENTER." << endl;
  cout << "Enter the item you selected in the following order:" << endl;
  cout << "Name, Unit Price, quantity"<<endl;
  cout << "Name cannot contain any space, otherwise errors happen!)" << endl;
  cin >> i;
  sc.add(i);

  cout << "Want to continue? y/n--> ";
  cin >> choice;
    
  bool not_full = true;
    
  while ((choice == "y") and (not_full == true)) 
    {
        
      cout << endl << "--> ";
      cin >> i;
      not_full = sc.add(i); 
      cout << "Want to continue? y/n--> ";
      cin >> choice;
        
    }
    
  cout << endl << "Here is your order:" << endl;
    
  cout << "-------------------------------------------------" << endl;
    
  max_length = 22; 
  cout << "Name";
  cout << setw(max_length) << "Unit_price";
  cout << setw(max_length)<<"Quantity" << endl; 
    
    
    
  for ( int a = 0; a < sc.getCurrentSize(); a++) 
    {
      cout << setw(16) << left << sc.toVector()[a].get_items()
	   << "$" <<setw(max_length + 1) << left << fixed << setprecision(2) << sc.toVector()[a].get_unit_price()
	   << sc.toVector()[a].get_quantity() << endl;
    }
    
  cout << "The total charge is: $" << sc.get_total_price() << endl;
  cout << "--------------------------------------------------" << endl;
    
  cout << endl << "Want to modify your order? y/n--> ";
  cin >> choice;
   
  not_full = true; 
   
  while((choice == "y") and (not_full == true)) 
    {
       
      cout << "What do you want: Enter 1: add 2: remove 3: change quantity" << endl;
      cout << "--> ";
      cin >> choices; 
       
      switch(choices) 
	{
	case 1: 
	  {
	    cout << endl << "To add enter the item in the following order:" << endl;
	    cout << "Name, unit price, quantity" << endl;
	    cout << "--> ";
	    cin >> i;
	    sc.add(i);
	    cout << "The item has been added." << endl;
	    break;
	  }
	case 2: 
	  {
	    cout << endl << "Enter the item to remove in the following order:" << endl;
	    cout << "Name, unit price, quantity" << endl;
	    cout << "--> ";
	    cin >> i;
	    if (sc.contains(i) == false) 
	      {
		cout << "No such item in your shopping cart!" << endl;
	      }
	    else
	      {
		sc.remove(i);
		cout << "The item has been removed!" << endl;
	      }
	    break;
	  }
	case 3: 
	  {
	    cout << endl << "Enter the item to change as the following order:" << endl;
	    cout << "Name, unit price, quantity" << endl;
	    cout << "--> ";
	    cin >> i;
	    temp = i;
	    if(sc.contains(i) == false) 
	      {
		cout << "No such item exists." << endl;
                   break;
               }
               else
               {
                    cout << "Enter a new quantity --> ";
                    cin >> new_quantity;
                    
                    while(new_quantity <= 0) 
                    {
                        cout << new_quantity << " is not a valid input." << endl;
                        cout << "Enter a new quantity --> ";
                        cin >> new_quantity;
                    }
               }
               
                sc.remove(i);
                temp.set_quantity(new_quantity);
                sc.add(temp);
cout << "The quantity has been modified." << endl;
                break;
           }
       }
       
       cout << endl << "Want to modify your order? y/n--> ";
       cin >> choice;
   }
   
   
   
    cout << endl << "Here is your updated order:" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "You have ordered the following items:" << endl;
    cout << "Name";
    cout << setw(max_length) << right << "Unit_price";
    cout << setw(max_length) <<"Quantity" << endl;
    
    for ( int a = 0; a < sc.getCurrentSize(); a++) 
    {
        cout << setw(16) << left << sc.toVector()[a].get_items()
        << "$" <<setw(max_length + 1) << left << fixed << setprecision(2) << sc.toVector()[a].get_unit_price()
        << sc.toVector()[a].get_quantity() << endl;
    }
    
    cout << "The total charge is $" << sc.get_total_price() << endl;
    cout << "Thanks for shopping on XXX SHOPPING CENTER." << endl;
    cout << "--------------------------------------------------" << endl;
    return 0;
    
}
