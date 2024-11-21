#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include "check.h"

using namespace std;

class Note {
    private:
        string name;
        int phone_number;
        int date_of_birth[3];
    public:
        Note();
        Note(const string& name, int num, const int bd[3]);
        Note(const Note& other);
        ~Note();

        string get_name();
        void set_name(string& n);
        int get_number();
        void set_number(int& n);
        string get_date();
        void set_date(int bd[3]);

        void display_Note();
        void edit_Note();
};
