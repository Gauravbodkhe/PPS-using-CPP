#include <iostream>
#include <string>
using namespace std;
const int MAX_SLOTS = 10;
string parkingSlots[MAX_SLOTS];
void parkCar() {
for (int i = 0; i < MAX_SLOTS; i++) {
if (parkingSlots[i].empty()) {
cout << "Enter license plate: ";
cin >> parkingSlots[i];
cout << "Car parked!" << endl;
return;
}
    }
cout << "Parking lot is full!" << endl;
}
void removeCar() {
string licensePlate; 
cout << "Enter license plate: ";
cin >> licensePlate;
for (int i = 0; i < MAX_SLOTS; i++) {
if (parkingSlots[i] == licensePlate) {
parkingSlots[i].clear();
cout << "Car removed!" << endl;
return;
        }
    }
cout << "Car not found!" << endl;
}
void displayParkedCars() {
 cout << "Parked Cars:" << endl;
 for (int i = 0; i < MAX_SLOTS; i++) {
if (!parkingSlots[i].empty());
cout << parkingSlots[i] << endl;
        }
    }

int main() {
int choice;
do {
cout << "Car Parking System" << endl;
cout << "1. Park a car" << endl;
cout << "2. Remove a car" << endl;
cout << "3. Display parked cars" << endl;
cout << "4. Exit" << endl;
cin >> choice;
switch (choice) {
case 1: parkCar(); break;
case 2: removeCar(); break;  
case 3: displayParkedCars(); break;
case 4: cout << "Exiting..." << endl; break;
default: cout << "Invalid choice!" << endl;
}
    } while (choice !=4);
return 0;
}
