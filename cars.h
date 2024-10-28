#ifndef CARS_H
#define CARS_H

#include "gruzoperevoz.h"

class Cars : public Gruzoperevoz {
private:
    string god;
    string mark;
    string ch;
    string volume;
public:
    Cars() : god(""), mark(""), ch(""), volume("") {}
    Cars(const string& name, const string& year, const string& marka, const string& th, const string& volumes)
        : Gruzoperevoz(name), god(year), mark(marka), ch(th), volume(volumes) {}

    void save(ofstream& file) override;
    void load(ifstream& file) override;
    void menu() override;
    void show() const override;
};

#endif