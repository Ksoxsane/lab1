#include <iostream>
#include "header.h"
#include "header1.h"
#include "header2.h"
#include "header3.h"
using namespace std;
template <class T>
void Qu(T* q, int n_q)
{
    int key;
    int flag = 1;
    int value;
    int nomer = 0;
    int total = 0;
    int number;
    int copiya = 0;
    while (flag == 1)
    {
        cout << "1 - Add element" << endl;
        cout << "2 - Delete element" << endl;
        cout << "3 - Show queue" << endl;
        cout << "4 - MyVariant" << endl;
        cout << "5 - Copy queue" << endl;
        cout << "6 - Amalganation and show" << endl;
        cout << "7 - Exit" << endl;
        cout << "Choose: ";
        cin >> key;
        switch (key)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q[nomer].add(value);
                cout << "Value added.\n " << endl;
                break;
            case 2: 
                if (q[nomer].empty())
                {
                        cout << "Queue is empty.\n " << endl;
                        system("pause");
                        break;
                }
                else
                {
                        value = q[nomer].del();
                        cout << "Delete element: " << value << endl;
                        cout << "\n";
                }
                break;
            case 3: 
                if (q[nomer].empty())
                {
                    cout << "Queue is empty.\n" << endl;
                    system("pause");
                    break;
                }
                else
                {
                    q[nomer].show();
                    cout << "\n";
                }
                break;
            case 4:
                if (q[nomer].empty())
                {
                    cout << "Queue is empty.\n" << endl;
                    system("pause");
                    break;
                }
                else
                {
                    total = q[nomer].zad();
                    cout << "Minimal element: " << total << endl;
                    cout << "\n";
                }
                break;
            case 5:
                if (q[nomer].empty())
                {
                    cout << "Queue is empty.\n" << endl;
                    system("pause");
                    break;
                }
                else
                {
                    cout << "The number of queue is: ";
                    cin >> copiya;
                    if (1 == n_q || copiya == nomer)
                    {
                        cout << "Amount of queues is only 1.\n" << endl;
                        system("pause");
                        break;
                    }
                    q[copiya].copy(q[nomer]);
                    cout << "Copied.\n" << endl;
                }
                break;
            case 6:
                if (n_q == 1)
                {
                    cout << "Amount of queues is only 1.\n" << endl;
                    system("pause");
                    break;
                }
                else
                {
                    cout << "Choose queue: ";
                    cin >> number;
                    if ((number < 0) || (number >= n_q) || (number == nomer))
                    {
                        cout << "Incorrect value.\n" << endl;
                        system("pause");
                        break;
                    }
                    if (q[number].empty())
                    {
                        cout << "The second queue is empty.\n" << endl;
                        system("pause");
                        break;
                    }
                    q[nomer].amal(q[number]);
                    cout << "\n";
                }
                break;
            case 7:
                exit(1);
                break;
            default:
                cout << "Error" << endl;
                break;
        }
    }
}
int main()
{
    int amount_queues = 0; //количество очередей
    int key;
    int flag = 1;
    private_queue* q1 = NULL;
    protected_queue* q2 = NULL;
    public_queue* q3 = NULL;
    cout << "Enter amount of queues: ";
    do
    {
        cin >> amount_queues;
    } while (amount_queues <= 0 && cout << "Incorrect value\n" && cout << "Enter amount of queues: ");
    cout << "Choose access mode: " << endl;
    while (flag == 1)
    {
        cout << "1 - Private" << endl;
        cout << "2 - Protected" << endl;
        cout << "3 - Publiuc" << endl;
        cout << "0 - Exit" << endl;
        cout << "Choose: ";
        cin >> key;
        switch (key)
        {
        case 1:
            q1 = new private_queue[amount_queues];
            Qu(q1, amount_queues);
            delete[] q1;
            break;
        case 2:
            q2 = new protected_queue[amount_queues];
            Qu(q2, amount_queues);
            delete[] q2;
            break;
        case 3:
            q3 = new public_queue[amount_queues];
            Qu(q3, amount_queues);
            delete[] q3;
            break;
        case 0:
            flag = 0;
            break;
        default:
            cout << "Error" << endl;
            break;
        }
    }
    return 0;
}