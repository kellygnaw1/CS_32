//Kelly Wang 5351010
//Evan Altshule 5233234
//PreMadeItem.cpp

#include <sstream>
#include <map>
#include <string>
#include <iomanip>
#include "PreMadeItem.h"
using namespace std;

PreMadeItem::PreMadeItem(string name, string size) : IceCreamItem(size), name(name){
	if(size == "small")
		price = 4;
	else if(size == "medium")
		price = 6;
	else 
		price = 7.5;
}

PreMadeItem:: ~PreMadeItem(){
//intentionally left blank
}

double PreMadeItem::getPrice(){
	return price; 
}


string PreMadeItem::composeItem(){
	string composedOf = "Pre-made Size: ";
	composedOf = composedOf + (size + "\nPre-made Item: " + name);
	stringstream ss;
	ss << fixed << setprecision(2) << price;
	composedOf += "\nPrice: $" + ss.str()+ "\n";
	return composedOf;
}
