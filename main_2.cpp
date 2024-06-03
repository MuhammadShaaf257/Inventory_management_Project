//#include <iostream>
//#include "ContactsBook.h"
//using namespace std;
//int main() {
//    ContactsBook book;
//
//    // Adding contacts
//    Address temp1("New York", "New York", "New York","New York"),temp2("Los Angeles", "Los Angeles", "Los Angeles", "Los Angeles");
//    Contact alice("Alice", "Smith", "12345678910","Alice@Smith.com", &temp1);
//    Contact bob("Bob", "Brown", "98765421321", "Alice@Smith.com", &temp2);
//    Contact bob_duplicate("Bob", "Brown", "98765421321", "Alice@Smith.com", &temp2);
//    Contact alice_duplicate("Alice", "Smith", "12345678910", "Alice@Smith.com",&temp1); // Duplicate
//
//    book.add_contact(alice);
//    book.add_contact(bob);
//    book.add_contact(bob_duplicate);
//    book.add_contact(alice_duplicate);
//
//    // Display all contacts
//    cout << "All contacts:" << endl;
//    book.print_contacts_sorted('L'); // Assuming it sorts and then displays
//
//    //// Search by name
//    //cout << "\nSearching for Bob:" << endl;
//    //Contact* foundContact = book.search_contact("Bob", "Brown");
//    //if (foundContact != nullptr) {
//    //    book.Display(*foundContact);
//    //}
//    //else {
//    //    cout << "Bob not found." << endl;
//    //}
//
//    // Testing merge duplicates
//    cout << "\nMerging duplicates:" << endl;
//    book.merge_duplicates();
//    book.print_contacts_sorted('A');
//
//    //// Delete a contact
//    //cout << "\nDeleting a contact:" << endl;
//    //book.DeleteContact(0); // Assuming index 0 is a valid index after merge
//    //book.print_contacts_sorted('A');
//
//    // Loading and saving from/to a file
//    book.save_to_file("contacts.txt");
//    book.load_from_file("contacts.txt");
//
//    return 0;
//}