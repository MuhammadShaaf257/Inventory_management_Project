#pragma once
#include <string>
#include <vector>
using namespace std;
class Inventory {
private:
	vector<string>items;
	vector<size_t>price;
	vector<size_t>quantity;
	size_t totalItemsPresent;
public:
	Inventory();
	Inventory(vector<string>i, vector<size_t>p, vector<size_t>q);
	void set_Items_Price_Quantity(vector<string>i, vector<size_t>p, vector<size_t>q);
	void add_Item(string, size_t, size_t);
	void del_Item(string); 
	size_t getTotalItemsPresent()const;
};