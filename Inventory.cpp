#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

//Constructor for Inventory. Sets the name, price, and number in
//stock of the item. 
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

//sells an item by decrementing the number in stock.
void Inventory::sell()
{
  if(m_in_stock >0){
    m_in_stock--;
  }else{
    std::cout << "Sorry, that item is out of stock" << std::endl;
  }
}

//Overloads the << operator, so that Items can be printed consistenty
//in the same format. 
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
