//Kelly Wang 5351010
//Evan Altshule 5233234
//CustomItem.h

#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <map>
#include <string>
#include "IceCreamItem.h"

class CustomItem: public IceCreamItem{
public:
	CustomItem(std::string size);
	virtual ~CustomItem();
	void addTopping(std::string topping);
	virtual double getPrice();
	virtual std::string composeItem();
protected:
	std::map<std::string, int> m_toppings;
};

#endif