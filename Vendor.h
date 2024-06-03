#pragma once
#include "Contact.h"
#include "Inventory.h"
class assignmenterror{};
class Vendor{
private:
	Inventory *vendorInventory;
	Contact  *vendorPersonalInfo;
public:
	Vendor();
	Vendor(Inventory,Contact);
	void set_Vendor_Inventory(Inventory);
	void set_Vendor_Info(Contact);
	Inventory* get_Vendor_Inventory();
	Contact* get_Vendor_Info();
};
