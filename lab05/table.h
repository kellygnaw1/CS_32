//Kelly Wang 5351010
#ifndef TABLE_H
#define TABLE_H
#include <string>
#include <iosfwd>
#include <vector>
#include <iostream>
#include <sstream>
#include "entry.h"

using namespace std;

class Table {

public:
	//constructors
    Table(unsigned int max_entries = 100);
    Table(unsigned int entries, istream &input);
    //copy constructor 
    Table(const Table& t);
    //deconstructor 
    ~Table();
    //put
    void put(unsigned int key, string data);
    void put(Entry e); 
    //get 
    string get(unsigned int key) const;
    //remove 
    bool remove(unsigned int key); 
    //accessors
    int getUsed() const;
    int getCapacity() const;
    //sort
    void quickSort(vector<Entry>& v, int left, int right);
    int split(vector<Entry>& v, int left, int right, int who);
    friend ostream& operator<< (ostream &out, const Table &t);

    //assignment operator 
    Table& operator= (const Table &t);
  
private:
	vector<Entry> tableEntries;
    unsigned int accesses;
    unsigned int max_entries;
    unsigned int used;
    unsigned int capacity;
    unsigned int entries;
    string data;
    string input; 
};

#endif
