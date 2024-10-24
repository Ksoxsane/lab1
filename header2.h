#include "header.h"
class protected_queue : protected cQu
{
public:
    int zad();
    int del();
    void add(int elem);
    void show();
    void amal(protected_queue& Q1);
    void copy(protected_queue& Q);
    bool empty();
};