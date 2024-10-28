#include "cars.h"
using namespace std;
void Cars::save(ofstream& file) {
    file << fullName << "\n";
    file << god << "\n";
    file << mark << "\n";
    file << ch << "\n";
    file << volume << "\n";

}

void Cars::load(ifstream& file) {
    getline(file, fullName);
    getline(file, god);
    getline(file, mark);
    getline(file, ch);
    getline(file, volume);
}

void Cars::menu() {
    int choice;
    do {
        cout << "1. Show\n";
        cout << "2. Change model\n";
        cout << "3. Change the year of release\n";
        cout << "4. Change mark\n";
        cout << "5. Change the delivery cities/number of delivery hours\n";
        cout << "6. Change volume of baggage\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            show();
            break;
        case 2: {
            string newModel;
            cout << "Enter new model: ";
            cin.ignore();
            getline(cin, newModel);
            setName(newModel);
            break;
        }
        case 3: {
            cout << "Enter the year of release: ";
            cin.ignore();
            getline(cin, god);
            break;
        }
        case 4: {
            cout << "Enter mark: ";
            cin.ignore();
            getline(cin, mark);
            break;
        }
        case 5: {
            cout << "Enter the delivery cities/number of delivery hours: ";
            cin.ignore();
            getline(cin, ch);
            break;
        }
        case 6: {
            cout << "Enter cargo volume: ";
            cin.ignore();
            getline(cin, volume);
            break;
        }
        }
    } while (choice != 0);
}

void Cars::show() const {
    cout << "Car\n";
    cout << "Model: " << fullName << "\n";
    cout << "The year of release: " << god << "\n";
    cout << "Mark: " << mark << "\n";
    cout << "Delivery cities/number of delivery hours: " << ch << "\n";
    cout << "Cargo volume: " << volume << "\n";
}