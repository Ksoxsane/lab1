#pragma once
typedef struct turn
{
    int element = 0;
    turn* previous = 0;
} turn;
class cQu
{
private:
    turn* last = 0;
protected:
    int size;
public:
    cQu();
    ~cQu();
    turn* getlast();
    int del();
    void add(int elem);
    void show();
    void amal(cQu& Q1);
    void copy(cQu& Q);
    bool empty();
};