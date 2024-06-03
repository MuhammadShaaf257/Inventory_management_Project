#include "Address.h"

// Constructor
Address::Address() {
    this->Set_House("none");
    this->Set_Street("none");
    this->Set_City("none");
    this->Set_Country("none");
}

Address::Address(const string house, string street, string city, string country) {
    this->Set_House(house);
    this->Set_Street(street);
    this->Set_City(city);
    this->Set_Country(country);
}

Address::Address(const Address& other) : house(other.house), street(other.street), city(other.city), country(other.country) {};

// Setter
void Address::Set_House(const string house) {
    this->house = house;
    To_Lower_Case(this->house);
}

void Address::Set_Street(const string street) {
    this->street = street;
    To_Lower_Case(this->street);
}

void Address::Set_City(const string city) {
    this->city = city;
    To_Lower_Case(this->city);
}

void Address::Set_Country(const string country) {
    this->country = country;
    To_Lower_Case(this->country);
}

// Getter
string Address::Get_House() const { 
    return this->house;
}

string Address::Get_Street() const {
    return this->street;
}

string Address::Get_City() const {
    return this->city;
}

string Address::Get_Country() const {
    return this->country;
}

// Functions
bool Address::equals(const Address& address) const {
    if (this->house == address.house && this->street == address.street && this->city == address.city && this->country == address.country) {
        return true;
    }
    return false;
}

void Address::print_address() const {
    cout << setw(15) << this->country << setw(15) << " " << this->city << " " << this->street << " " << this->house;
}

Address Address::copy_address() const
{
    return Address(this->house, this->street, this->city, this->country);;
}

// Helping function 
void To_Lower_Case(string& str) {
    for (char& c : str) {
        if (c) {

        }
        c = tolower(c);
    }
}
