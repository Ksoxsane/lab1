#ifndef SAMOLET_H
#define SAMOLET_H

#include "gruzoperevoz.h"

class Samolet : public Gruzoperevoz {
private:
    string type;
    string obem;
    string size;
    string cities;
public:
    Samolet() : type(""), obem(""), size(""), cities("") {}
    Samolet(const string& name, const string& tip, const string& V, const string& razmer, const string& towns)
        : Gruzoperevoz(name), type(tip), obem(V), size(razmer), cities(towns) {}

    void save(ofstream& file) override;
    void load(ifstream& file) override;
    void menu() override;
    void show() const override;
};

#endif 