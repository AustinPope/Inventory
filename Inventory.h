#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;





/* A class keeping track of the store's stock.
 * For each item in stock we are keeping track of a name, price, and if in stock
 *
 * A function for contructing, selling, and something to do with a good friend.
 */

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
