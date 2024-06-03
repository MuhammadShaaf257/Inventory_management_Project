#pragma once
#include<iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;
void To_Lower_Case(string& str);
class Address {
private:
    string house;
    string street;
    string city;
    string country;
    // Helping function
public:
    // Constructor
    Address();
    Address(const string house, string street, string city, string country);
    // Copy constructor
    Address(const Address& other);
    // Setter
    void Set_House(const string);
    void Set_Street(const string);
    void Set_City(const string);
    void Set_Country(const string);
    // Getter
    string Get_House() const;
    string Get_Street() const;
    string Get_City() const;
    string Get_Country() const;
    bool equals(const Address& address) const;
    void print_address() const;
    Address copy_address() const;
};
