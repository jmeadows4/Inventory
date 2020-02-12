#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

//Inventory represents an item, its price, and the amount held in stock
//of that item. Items can only be compared and sold. 

using std::string;
using std::ostream;

class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif
