#ifndef GRUZOPEREVOZ_H
#define GRUZOPEREVOZ_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Gruzoperevoz {
protected:
    string fullName;  // Для Speaker и Administration
public:
    Gruzoperevoz() : fullName("Unnamed") {}
    Gruzoperevoz(const string& name) : fullName(name) {}
    virtual ~Gruzoperevoz() {}

    // Виртуальные функции для наследников
    virtual void saveToFile(ofstream& file) = 0;
    virtual void loadFromFile(ifstream& file) = 0;
    virtual void menu() = 0;  // Меню, которое будет различным для каждого наследника

    virtual void show() const {
        cout << "Full Name: " << fullName << endl;
    }

    void setFullName(const string& name) {
        fullName = name;
    }

    string getFullName() const {
        return fullName;
    }
};

#endif 