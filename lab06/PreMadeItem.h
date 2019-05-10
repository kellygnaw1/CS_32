//Kelly Wang 5351010
//Evan Altshule 5233234
//PreMadeItem.h

#ifndef PREMADEITEM_H
#define PREMADEITEM_H
#include "IceCreamItem.h"

class PreMadeItem: public IceCreamItem{
public:
	PreMadeItem(std::string name, std::string size);
	virtual ~PreMadeItem();
	virtual std::string composeItem();
	virtual double getPrice();
protected:
	std::string name;
};
#endif