#include "trains.h"
using namespace std;
void Trains::save(ofstream& file) {
    file << fullName << "\n";
    file << year << "\n";
    file << trail << "\n";
    file << sum << "\n";
    file << bulk << "\n";

}

void Trains::load(ifstream& file) {
    getline(file, fullName);
    getline(file, year);
    getline(file, trail);
    getline(file, sum);
    getline(file, bulk);
}

void Trains::menu() {
    int choice;
    do {
        cout << "1. Show\n";
        cout << "2. Change name\n";
        cout << "3. Change the year of release\n";
        cout << "4. Change route\n";
        cout << "5. Change number og wagons\n";
        cout << "6. Change cargo volume\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            show();
            break;
        case 2: {
            string newName;
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, newName);
            setName(newName);
            break;
        }
        case 3: {
            cout << "Enter the year of release: ";
            cin.ignore();
            getline(cin, year);
            break;
        }
        case 4: {
            cout << "Enter route: ";
            cin.ignore();
            getline(cin, trail);
            break;
        }
        case 5: {
            cout << "Enter the number of wagons: ";
            cin.ignore();
            getline(cin, sum);
            break;
        }
        case 6: {
            cout << "Enter cargo volume: ";
            cin.ignore();
            getline(cin, bulk);
            break;
        }
        }
    } while (choice != 0);
}

void Trains::show() const {
    cout << "Train\n";
    cout << "Name: " << fullName << "\n";
    cout << "The year of release: " << year << "\n";
    cout << "Route: " << trail << "\n";
    cout << "Numbers of wagons: " << sum << "\n";
    cout << "Cargo volume: " << bulk << "\n";
}