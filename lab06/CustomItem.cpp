//Kelly Wang 5351010
//Evan Altshule 5233234
//CustomItem.cpp

#include <sstream>
#include <map>
#include <string>
#include <iomanip>
#include "CustomItem.h"
using namespace std;

CustomItem::CustomItem(string size): IceCreamItem(size){
	if(size == "small")
		price = 3;
	else if(size == "medium")
		price = 5;
	else
		price = 6.5;
}

CustomItem::~CustomItem(){
	//intentionally left blank
}

void CustomItem::addTopping(string topping){
	if(m_toppings.find(topping) == m_toppings.end())
		m_toppings[topping] = 1;
	else
		m_toppings[topping]++;
	price += 0.4;
}

double CustomItem::getPrice(){
	return price; 
}


string CustomItem::composeItem(){
	string composedOf = "Custom Size: ";
	composedOf = composedOf + (size + "\nToppings:\n");
	for(map <string, int>::iterator i = m_toppings.begin(); i != m_toppings.end(); i++)
		composedOf += i->first + ": " +to_string(i->second) + " oz\n";
	composedOf.pop_back();
	stringstream ss;
	ss << fixed << setprecision(2) << price;
	composedOf += "\nPrice: $" + ss.str()+ "\n";
	return composedOf;
}







