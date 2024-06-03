#include "Contact.h"
bool CheckDigit(string n);
bool Check_Email(string email);
//Constructor
Contact::Contact() {
	this->Set_First_Name("None");
	this->Set_Last_Name("None");
	this->Set_Mobile_Number("00000000000");
	this->Set_email_address("none@.com");
	this->address = nullptr;
};
Contact::Contact(string first_name, string last_name, string mobile_number, Address* address) {
	this->Set_First_Name(first_name);
	this->Set_Last_Name(last_name);
	this->Set_Mobile_Number(mobile_number);
	this->address = new Address(*address);
}
Contact::Contact(const Contact& other) {
	first_name = other.first_name;
	last_name = other.last_name;
	mobile_number = other.mobile_number;
	email_address = other.email_address;
	address = new Address(*(other.address)); 
}
//Helping functions
bool CheckDigit(string n) {
	/*  Check in phone number setter, Phone number must be 11 digits */
	if (n.size() != 11) {
		return false;
	}
	else {
		for (int i = 0; n[i] != '\0'; i++) {
			if (n[i] >= 58 || n[i] <= 47) {
				return false;
			}
		}
		return true;
	}
}
bool Check_Email(string email) {
	char arr[4] = { '.','c','o','m' }; int count_ = 0;
	for (int i = 0, k = 0; i < email.size(); i++) {
		if (email[i] == '@') {
			count_++;
		}
		if (email.size() - i - 1 < 4) {
			//cout << email[i] << " " << arr[k] << endl;
			if (email[i] != arr[k]) {
				return false;
			}
			else {
				k++;
			}
		}
	}
	if (count_ == 1) {
		return true;
	}
	else {
		return false;
	}
}
//setter
void Contact::Set_First_Name(const string& firstname) {
	this->first_name = firstname;
	To_Lower_Case(this->first_name);
}
void Contact::Set_Last_Name(const string& lastname) {
	this->last_name = lastname;
	To_Lower_Case(this->last_name);
}
void Contact::Set_Mobile_Number(const string& mobilenum) {
	this->mobile_number = mobilenum;
	if (!CheckDigit(this->mobile_number)) {
		do {
			cout << "Enter a correct 11 digit number = "; getline(cin, this->mobile_number);
		} while (!CheckDigit(this->mobile_number));
	}
}
void Contact::Set_Address_ptr(const Address* addobj) {
	if (addobj != nullptr) {
		if (this->address != nullptr) {
			delete this->address;
		}
		this->address = new Address(*addobj);
	}
}
//getter
string Contact::Get_First_Name()const {
	return this->first_name;
}
string Contact::Get_Last_Name()const {
	return this->last_name;
}
string Contact::Get_Mobile_Number()const {
	return this->mobile_number;
}
Address* Contact::Get_Address_ptr()const {
	return address;
}
//functions
bool Contact::equals(Contact& contact)const {
	if ((this->first_name == contact.first_name) && (this->last_name == contact.last_name) && (this->mobile_number == contact.mobile_number) && (this->email_address == contact.email_address)) {
		if (contact.address->equals(*address)) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}
Contact* Contact::copy_contact()
{
	return new Contact(*this);
}
Contact& Contact::operator=(const Contact& object){
	if (this != &object) {
		this->Set_First_Name(object.Get_First_Name());
		this->Set_Last_Name(object.Get_Last_Name());
		this->Set_Mobile_Number(object.Get_Mobile_Number());
		this->Set_Address_ptr(object.Get_Address_ptr());
	}
	return *this;
}