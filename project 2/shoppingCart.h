
#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <iostream>

#include "Bag.h"
#include "item.h"
using namespace std;

template<typename unit> 
class Shopping_Cart : public Bag<unit>
{
 private:
  /** Comined price of all items*/
  double total_price; 
        
 public:
  /**Member function*/
  /** Intializes the total price to 0*/
  /*@pre none
    /*@post sets the total price to 0*/
  Shopping_Cart(); 
  /**Member function*/
  /**Returns the total price*/
  /*@pre none
    /*@post Returns the total price*/  
  double get_total_price() const; 
  /**Member function*/
  /**function for adding new item*/
  /*@param thing& the item which will be added
    /*@pre none
    /*@post adds a new item to the list*/
  bool add(const unit&); 
  /**function for removing item*/
  /*@param unit& item to be removed
    /*@pre none
    /*@post removes a new item to the list*/
  bool remove(const unit&); 
};

#include "shoppingCart.cpp"

#endif
