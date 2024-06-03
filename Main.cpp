#include<iostream>
#include "conio.h"
#include "Vendor.h"
using namespace std;
void menu_function(size_t);
void inputError(size_t& value);
int main() {
	vector<Vendor>Vendorarr;
	char stopKey;size_t choice;
	do {
		cout << "Enter any key to continue or ESC to exit the main page." << endl;
		stopKey = _getch();
		if (stopKey == 27) {
			break;
		}
		cout << "Select from the main menu." << endl;
		cout << "1. Add New Vendor" << endl;
		cout << "2. Remove a Vendor" << endl;
		cout << "3. Update Vendor items" << endl;
		cout << "4. Display Vendor items" << endl;
		cout << "Enter value = "; 
		inputError(choice);
	} while (true);
	system("pause");
	return 0;
}
void menu_function(size_t choice) {
	string temp;
	
	switch (choice) {
	case(1):
		Vendor  Vendor_object;
		Address* Add_object = new Address;
		Contact* Con_object = new Contact;
		Inventory* Inv_object = new Inventory;
		cout << "Enter your First Name = "; getline(cin, temp);
		Con_object->Set_First_Name(temp);
		cout << "Enter your Last Name = "; getline(cin, temp);
		Con_object->Set_Last_Name(temp);
		cout << "Enter your Mobile Number = "; getline(cin,temp);
		Con_object->Set_Mobile_Number(temp);
		cout << "Enter your Home = "; getline(cin, temp);
		Add_object->Set_House(temp);
		cout << "Enter your Street = "; getline(cin, temp);
		Add_object->Set_Street(temp);
		cout << "Enter your City = "; getline(cin, temp);
		Add_object->Set_City(temp);
		cout << "Enter your Country = "; getline(cin, temp);
		Add_object->Set_Country(temp);
		Con_object->Set_Address_ptr(Add_object);
		Vendor_object.set_Vendor_Info(*Con_object);
		system("CLS");
		cout << "Enter your Inventory "; char stop_inv;
		do {
			cout << "Enter any key to continue adding items or ESC to return main page." << endl;
			stop_inv = _getch();
			if (stop_inv==27) {
				break;
			}
			size_t *price= 0,*qun = 0;
			cout << "Items Name = "; getline(cin, temp); 
			cout << "Set Price = "; inputError(*price);
			cout << "Set Quantity = "; inputError(*qun);
			Inv_object->add_Item(temp, *price, *qun);
		} while (true);
		break;
	case(2):

	}
}
Vendor& searchVendor(vector<Vendor>object,string name) {
	for (auto i = object.begin(); i != object.end(); i++) {
		if (i->get_Vendor_Info()->Get_First_Name() == name || i->get_Vendor_Info()->Get_Last_Name() == name) {
			return *i;
		}
	}
	return ;//Error handing remaining for not found case.
}
void inputError(size_t &value) {
	while (true) {
		cin >> value;
		if (cin.fail()) {
			cin.ignore(10000, '\n');
			cout << "Enter a correct value." << endl;
		}
		cin.ignore();
		break;
	}
}