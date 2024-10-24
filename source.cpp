#include <iostream>
#include "header.h"
using namespace std;
cQu::cQu()
{
    size = 0;
    last = nullptr;
}
cQu::~cQu()
{
    while (size > 0)
    {
        turn* temp = last;
        last = temp->previous;
        delete temp;
        size--;
    }
}
turn* cQu::getlast()
{
    return last;
}
int cQu::del()
{
    turn* tmp = last;
    int delelement = 0;
    if (tmp->previous == nullptr)
    {
        delelement = tmp->element;
        delete last;
        last = nullptr;
        size--;
    }
    else
    {
        while (tmp->previous->previous != nullptr)
        {
            tmp = tmp->previous;
        }
        delelement = tmp->previous->element;
        delete tmp->previous;
        tmp->previous = nullptr;
        size--;
    }
    return delelement;
}
void cQu::add(int elem)
{
    turn* new_turn = new turn;
    new_turn->previous = last;
    last = new_turn;
    last->element = elem;
    size++;
}
void cQu::show()
{
    turn* tmp = last;
    while (tmp->previous != nullptr)
    {
        cout << tmp->element << " ";
        tmp = tmp->previous;
    }
    cout << tmp->element << endl;
}
void cQu::copy(cQu& Q)
{
    int* buff = new int[Q.size];
    turn* elem_queue = Q.last;
    for (int i = Q.size - 1; i >= 0; i--)
    {
        buff[i] = elem_queue->element;
        elem_queue = elem_queue->previous;
    }
    for (int i = 0; i < Q.size; i++)
    {
        this->add(buff[i]);
    }
    delete[] buff;
}
void cQu::amal(cQu& Q1)
{
    int* buff1 = new int[Q1.size];
    turn* el_queue1 = Q1.last;
    for (int i = Q1.size - 1; i >= 0; i--)
    {
        buff1[i] = el_queue1->element;
        el_queue1 = el_queue1->previous;
    }
    for (int i = 0; i < Q1.size; i++)
    {
        this->add(buff1[i]);
    }
    delete[] buff1;
    cout << "Done" << endl;
}
bool cQu::empty()
{
    if (size == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}