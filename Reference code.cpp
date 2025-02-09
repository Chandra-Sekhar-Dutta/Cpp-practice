#include <iostream>
#include <string>

using namespace std;

class Reservation {
  private:
    string guest_name;
    int room_number;
    bool is_checked_in;

  public:
    Reservation(string name, int room) {
        guest_name = name;
        room_number = room;
        is_checked_in = false;
    }

    void check_in() {
        is_checked_in = true;
        cout << "Welcome " << guest_name << "! You have successfully checked in to room " << room_number << "." << endl;
    }

    void check_out() {
        is_checked_in = false;
        cout << "Thank you " << guest_name << "! You have successfully checked out of room " << room_number << "." << endl;
    }

    bool is_checked() {
        return is_checked_in;
    }

    int get_room_number() {
        return room_number;
    }
};

int main() {
    Reservation reservations[10] = {
        Reservation("John", 101),
        Reservation("Mary", 102),
        Reservation("Peter", 103),
        Reservation("Lucy", 104),
        Reservation("Tom", 105),
        Reservation("Amy", 106),
        Reservation("Bob", 107),
        Reservation("Jane", 108),
        Reservation("David", 109),
        Reservation("Kate", 110)
    };

    int choice, room;

    do {
        cout << "Welcome to our hotel reservation system!" << endl;
        cout << "1. Check In" << endl;
        cout << "2. Check Out" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the room number to check in: ";
                cin >> room;
                for (int i = 0; i < 10; i++) {
                    if (reservations[i].get_room_number() == room) {
                        if (!reservations[i].is_checked()) {
                            reservations[i].check_in();
                        } else {
                            cout << "The room is already occupied." << endl;
                        }
                        break;
                    }
                    if (i == 9) {
                        cout << "The room number is invalid." << endl;
                    }
                }
                break;

            case 2:
                cout << "Enter the room number to check out: ";
                cin >> room;
                for (int i = 0; i < 10; i++) {
                    if (reservations[i].get_room_number() == room) {
                        if (reservations[i].is_checked()) {
                            reservations[i].check_out();
                        } else {
                            cout << "The room is not occupied." << endl;
                        }
                        break;
                    }
                    if (i == 9) {
                        cout << "The room number is invalid." << endl;
                    }
                }
                break;

            case 3:
                cout << "Thank you for using our hotel reservation system!" << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid choice (1-3)." << endl;
        }
    } while (choice != 3);

return 0;
}

