#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


struct contact_info {
    string name;
    string address;
    int phone;

};

contact_info get_contact() {
    contact_info c;

    cout << "enter name: ";
    cin >> c.name;
    cout << "enter address: ";
    cin >> c.address;
    cout << "enter phone: ";
    cin >> c.phone;

    return c;
}

void print_contact(contact_info &contact){
    cout << contact.name << endl;
    cout << contact.address << endl;
    cout << contact.phone << endl;

}
 int main() {

    contact_info contact;
    //get the info from the function
    contact = get_contact();

    print_contact(contact);

    return 0;
}
