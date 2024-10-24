#include <iostream>
#include "header3.h"
using namespace std;
int public_queue::zad()
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
