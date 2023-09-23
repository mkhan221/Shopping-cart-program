
/**implementation file*/
/** file: ShoppingCart.cpp*/
/** Class IMPLEMENTED: ShoppingCart (See ShoppingCart.h for documentation.)*/
#include "shoppingCart.h"

#include <iostream>

using namespace std;

template<typename unit>
Shopping_Cart<unit>::Shopping_Cart() : total_price(0) //sets total_price to zero
             
{           
}

template<typename unit>
double Shopping_Cart<unit>::get_total_price() const //returns total_price
{
  return total_price;
}

template<typename unit>
bool Shopping_Cart<unit>::add(const unit& stuff)
{
  bool a = Bag<unit>::add(stuff);                          //adds an item
  
  total_price += stuff.get_unit_price() * stuff.get_quantity(); 
  if (a == false) 
    {
      total_price -= stuff.get_unit_price();
    }
    
  return a;
}


template<typename unit>
bool Shopping_Cart<unit>::remove(const unit& stuff)      //removes an item
{
  bool a = Bag<unit>::remove(stuff);
  total_price -= stuff.get_unit_price() * stuff.get_quantity();
  return a;
}
