#ifndef KEEPER_H
#define KEEPER_H

#include "Gruzoperevoz.h"
#include <fstream>

class Keeper {
private:
    Gruzoperevoz** gruzi;
    int counter;

public:
    Keeper();
    ~Keeper();

    void addGruz(Gruzoperevoz* gruzoperevoz);
    void removeGruz(int index);
    void showAll() const;
    void saveToFile(const string& filename);
    void loadFromFile(const string& filename);
    void rename(int index);
    void clear();
};

#endif 