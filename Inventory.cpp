#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
using std::cout;
using std::endl;
  
/* Contructor for class
 *
 * Takes in some variables when there is a class instance created. These variables
 * are to be copied over to their respected variables within the class.
 *
 * @param a string name
 * @param a float price
 * @param an int count
 *
 * @return Nothing
 */
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/* Whenever we sell an item, we decrement how many are in stock.
 *
 * When we sell something that is in store, we want to keep track of the record
 * so we know how many we have left. That is so we do not oversell and we know
 * when we have to order more. We decrememnt that class variable associated 
 * with this
 *
 * @param none
 *
 * @return nothing
 */
void Inventory::sell()
{
  if(m_in_stock <= 0){
    cout << "Sorry, that item is out of stock" << endl;
    return;
  }
  else{ 
    m_in_stock--;
  }
}


//Ill be honest I do not know whats going on with this jazz.
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
