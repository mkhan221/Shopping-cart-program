
#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

using namespace std;

class Item
{
 private:
  /** Name of the item */
  string name_item; 
  /** Price of item */
  double unit_price; 
  /** Quantity of item */
  int quantity; 
        
 public:
  /**Constructor;
   *@pre none
   *@post intializes the value of item to default values*/
  Item(); 
  /**Constructor;
   *@param sting name of the item
   *@param double price of the item
   *@param int quantity of the item
   *@pre none
   *@post intializes the values of item to what the user defines*/    
  Item(string, double, int); 
  /**Member function*/
  /** Sets the name*/
  /*@param string the name of the item
    /*@pre none
    /*@post the name has been set to a particular value*/ 
  void set_items(string); 
  /**Member function*/
  /**returns the name*/
  /*@pre none
    /*@post the value returned is the name*/
  string get_items() const; 
  /**Member function*/
  /** Sets the price*/
  /*@param double the price of the item
    /*@pre none
    /*@post the price has been set to a particular value*/
  void set_unit_price(double); 
  /**Member function*/
  /**returns the price*/
  /*@pre none
    /*@post the value returned is the price*/
  double get_unit_price() const;
  /**Member function*/
  /** Sets the quantity*/
  /*@param int the quantity of the item
    /*@pre none
    /*@post the quantity has been set to a particular value*/
  void set_quantity(int); 
  /**Member function*/
  /**returns the quantity*/
  /*@pre none
    /*@post the value returned is the quantity*/ 
  int get_quantity() const; 
        
        
};
/**Compares two items*/
/*@param Item& one of the items*/
/*@param Item& the other item*/
/*@pre none
  /*@post compares two to see if they are equal*/
bool operator ==(const Item&, const Item&);

ostream& operator <<(ostream&, const Item&); 
/** function for taking inputs*/
/*@param istream& takes user input
  /*@param Item& stores the input as item object*/
/*@pre none*/
/*@post takes input from user and stores it as item object*/
istream& operator >>(istream&, Item&);
/** function displaying outputs*/
/*@param ostream& output displays output
  /*@param Item& that displays item object*/
/*@pre none*/
/*@post function that takes and returns stream object*/  
ostream& operator <<(ostream&, const Item&); 
    
bool operator ==(const Item&, const Item&);



#include "item.cpp"


#endif
