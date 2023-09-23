
/**implementation file*/
/** file: item.cpp*/
/** Class IMPLEMENTED: item (See item.h for documentation.)*/
#include "item.h"

Item::Item() {
  name_item = ""; //constructor that intializes default values
  unit_price = 0;
  quantity = 0;
}


Item::Item(string d, double r, int c)
{
  name_item = d;  // constructor that intializes user defined values
  unit_price = r;
  quantity = c;
}

// Getter and Setter function implementations
void Item::set_items(string d)
{
  name_item = d;
}


string Item::get_items() const
{
  return name_item;
}


void Item::set_unit_price(double r)
{
  unit_price = r;
}


double Item::get_unit_price() const
{
  return unit_price;
}


void Item::set_quantity(int r)
{
  quantity = r;
}


int Item::get_quantity() const
{
  return quantity;
}


//checks if two items are equal
bool operator ==(const Item& item1, const Item& item2)
{
  if (((item1.get_items() == item2.get_items()) and (item1.get_unit_price() == item2.get_unit_price())) == 1)
    {
      return true;
    }
  else 
    {
      return false;
    }
}

//function for taking input
istream& operator >>(istream& in, Item& i)
{
  string d;
  double r;
  int c;
    
  in >> d >> r >> c;
  i.set_items(d);
  i.set_unit_price(r);
  i.set_quantity(c);
  return in;
}


//function thats displays the output
ostream& operator <<(ostream& out, const Item& i)
{
  out << i.get_items() << " " << i.get_unit_price() << " " << i.get_quantity();
  return out;
}
