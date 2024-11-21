#include "note.h"

Note::Note(): name(""), phone_number(0) {
    date_of_birth[0] = date_of_birth[1] = date_of_birth[2] = 0;
    cout << "Constructor called without parameters for Note class\n";
}

Note::Note(const string& name, int num, const int bd[3]): name(name), phone_number(num) {
    for (int i = 0; i < 3; ++i) {
        date_of_birth[i] = bd[i];
    }
    cout << "Constructor called with parameters for Note class\n";
}

Note::Note(const Note& other): name(other.name), phone_number(other.phone_number) {
    for (int i = 0; i < 3; ++i) {
        date_of_birth[i] = other.date_of_birth[i];
    }
    cout << "The copy constructor for the Note class has been called " << endl;
}

Note::~Note() {
    cout << "The destructor for the Note class has been called" << endl;
}

string Note::get_name() {
    return name;
}

void Note::set_name(string& n) {
    name = n;
}

int Note::get_number(){
    return phone_number;
}

void Note::set_number(int& n) {
    phone_number = n;
}

void Note::set_date(int bd[3]) {
    for (int i = 0; i < 3; ++i) {
        date_of_birth[i] = bd[i];
    }
}

string Note::get_date(){
    return to_string(date_of_birth[0]) + "." +
           to_string(date_of_birth[1]) + "." +
           to_string(date_of_birth[2]);
}

void Note::display_Note() {
    cout << "Name: " << name << "\nPhone: " << phone_number << endl;
    cout << "\nBirthday: ";
    for (int i = 0; i < 3; i++) {
        if (date_of_birth[i] < 10)
            cout << '0' << date_of_birth[i] << '.';
        else
            cout << date_of_birth[i] << '.';
    }
}
void Note::edit_Note() {
    string new_name;
    int new_number;
    int new_date_of_birth[3];

    cout << "Enter new name: ";
    cin >> new_name;
    set_name(new_name);

    cout << "Enter new phone number: ";
    cin >> new_number;
    set_number(new_number);

    cout << "Enter the day of birth (DD): ";
    new_date_of_birth[0] = check_date_day();
    cout << "Enter the month of birth (MM): ";
    new_date_of_birth[1] = check_date_month();
    cout << "Enter the year of birth (YYYY): ";
    new_date_of_birth[2] = check_input();
    check_date(new_date_of_birth[0], new_date_of_birth[1], new_date_of_birth[2]);

    set_date(new_date_of_birth);
    cout << "Note edited successfully." << endl;
}