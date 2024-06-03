#include"Vendor.h"
Vendor::Vendor() {
	this->vendorPersonalInfo = nullptr;
	this->vendorInventory = nullptr;
}
Vendor::Vendor(Inventory Inv_ptr,Contact Con_ptr) {
	this->vendorInventory = new Inventory(Inv_ptr);
	this->vendorPersonalInfo = new Contact(Con_ptr);
}
void Vendor::set_Vendor_Inventory(Inventory i) {
	if (this->vendorInventory != nullptr) {
		delete this->vendorInventory;
	}
	this->vendorInventory = new Inventory(i);
}
void Vendor::set_Vendor_Info(Contact c) {
	if (this->vendorPersonalInfo != nullptr) {
		delete this->vendorPersonalInfo;
	}
	this->vendorPersonalInfo = new Contact(c);
}
Inventory* Vendor::get_Vendor_Inventory() {
	return this->vendorInventory;
}
Contact* Vendor::get_Vendor_Info() {
	return this->vendorPersonalInfo;
}