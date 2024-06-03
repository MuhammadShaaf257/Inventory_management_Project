#pragma once
#include "Address.h"
class Contact {
private:
	string first_name;
	string last_name;
	string mobile_number;
	Address* address = new Address;
public:
	//Constructor
	Contact();
	Contact(string first_name, string last_name, string mobile_number, Address* address = nullptr);
	Contact(const Contact& other);
	//setter
	void Set_First_Name(const string&);
	void Set_Last_Name(const string&);
	void Set_Mobile_Number(const string&);
	void Set_Address_ptr(const Address*);
	//getter
	string Get_First_Name()const;
	string Get_Last_Name()const;
	string Get_Mobile_Number()const;
	Address* Get_Address_ptr()const;
	//Funtions
	bool equals(Contact& contact)const;
	Contact* copy_contact();
	//void operator =(Contact &object);
	Contact& operator =(const Contact& object);
	~Contact() {
		delete address;
	}
};