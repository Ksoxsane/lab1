#include "header.h"
class private_queue : private cQu
{
public:
    int zad();
    int del();
    void add(int elem);
    void show();
    void amal(private_queue& Q1);
    void copy(private_queue& Q);
    bool empty();
};