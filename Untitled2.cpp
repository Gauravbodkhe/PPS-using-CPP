#include <iostream>
 #include <string> 
 #include <vector> 
 using namespace std; 
 class Hotel {
public:
string name; int rooms;
};
class Booking { public:
string guestName; int roomNumber; string date;
};
vector<Hotel> hotels; vector<Booking> bookings; void addHotel() {
Hotel hotel;
cout << "Enter hotel name: "; cin >> hotel.name;
cout << "Enter number of rooms: "; cin >> hotel.rooms; hotels.push_back(hotel);
}
void addBooking() { Booking booking;
cout << "Enter guest name: "; cin >> booking.guestName; cout << "Enter room number: "; cin >> booking.roomNumber; cout << "Enter date: ";
cin >> booking.date;
 
bookings.push_back(booking);
}
void displayHotels() {
for (auto &hotel : hotels) {
cout << "Hotel Name: " << hotel.name << endl;
cout << "Number of Rooms: " << hotel.rooms << endl;
}
}
void displayBookings() {
for (auto &booking : bookings) {
cout << "Guest Name: " << booking.guestName << endl; cout << "Room Number: " << booking.roomNumber << endl; cout << "Date: " << booking.date << endl;
}
}
int main() {
int choice; while (true) {
cout << "1. Add Hotel" << endl; cout << "2. Add Booking" << endl; cout << "3. Display Hotels" << endl;
cout << "4. Display Bookings" << endl; cout << "5. Exit" << endl;
cout << "Enter your choice: "; cin >> choice;
switch (choice) { case 1:
addHotel(); break;
case 2:
addBooking(); break;
case 3:
displayHotels(); break;
 
case 4:
displayBookings(); break;
case 5:
return 0; default:
cout << "Invalid choice. Please try again." << endl;
}
}
return 0;
}

