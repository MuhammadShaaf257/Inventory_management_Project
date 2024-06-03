#include"Inventory.h"
Inventory::Inventory() {
	this->totalItemsPresent = 0;
}
Inventory::Inventory(vector<string>i, vector<size_t>p, vector<size_t>q) {
	this->items = i;
	this->price = p;
	this->quantity = q;
	this->totalItemsPresent = this->items.size();
}
void Inventory::set_Items_Price_Quantity(vector<string>i, vector<size_t>p, vector<size_t>q) {
	this->items = i;
	this->price = p;
	this->quantity = q;
	this->totalItemsPresent = this->items.size();
}
void Inventory::add_Item(string item, size_t pr, size_t qun) {
	this->items.push_back(item);
	this->price.push_back(pr);
	this->quantity.push_back(qun);
	this->totalItemsPresent++;
}
void Inventory::del_Item(string str) {
	vector<string>::iterator it;
	it = find(items.begin(),items.end(), str);

}
size_t Inventory::getTotalItemsPresent() const {
	return this->totalItemsPresent;
}
