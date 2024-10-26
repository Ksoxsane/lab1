#ifndef TRAINS_H
#define TRAINS_H

#include "gruzoperevoz.h"

class Trains : public Gruzoperevoz {
private:
    string year;
    string trail;
    string sum;
    string bulk;
public:
    Trains() : year(""), trail(""), sum(""), bulk("") {}
    Trains(const string& name, const string& years, const string& traila, const string& suma, const string& bulki)
        : Gruzoperevoz(name), year(years), trail(traila), sum(suma), bulk(bulki) {}

    void saveToFile(ofstream& file) override;
    void loadFromFile(ifstream& file) override;
    void menu() override;
    void show() const override;
};

#endif