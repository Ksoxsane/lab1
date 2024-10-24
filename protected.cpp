#include <iostream>
#include "header2.h"
using namespace std;
int protected_queue::zad()
{
    turn* last = getlast();
    int result = 0;
    float hn = 0;
    float h = 0;
    int count = 0;
    if (size == 0)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        while (last != nullptr)
        {
            hn+=1./(last->element);
            count+=1;
            last = last->previous;
        }
        h = count/hn;
        last = getlast();
        while (last != nullptr)
        {
            if (last->element < h)
            {
                result = last->element;
            }
            last = last->previous;
        }
    }
    return result;
}
int protected_queue::del() { return cQu::del(); }
void protected_queue::add(int elem) { return cQu::add(elem); }
void protected_queue::show() { return cQu::show(); }
void protected_queue::amal(protected_queue& Q1) { return cQu::amal(Q1); }
void protected_queue::copy(protected_queue& Q1) { return cQu::copy(Q1); }
bool protected_queue::empty() { return cQu::empty(); }