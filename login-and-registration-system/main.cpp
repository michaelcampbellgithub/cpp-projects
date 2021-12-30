#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLoggedIn() {
    string username, password, un, pw;

    cout << "Enter username: "; cin >> username;
    cout << "Enter password: "; cin >> password;

    ifstream read("data/" + username + ".txt");

    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password) {
        return true;
    }

    return false;
}

int main() {
    int choice;

    cout << "1: Register\n2: Login\nYour choice: "; cin >> choice;

    if (choice == 1) {
        string username, password;

        cout << "Select a username: "; cin >> username;
        cout << "Select a password: "; cin >> password;

        ofstream file;
        file.open("data/" + username + ".txt");
        file << username << endl << password;
        file.close();

        main();
    }

    if (choice == 2) {
        bool status = IsLoggedIn();

        if (!status) {
            cout << "Invalid login" << endl;
            return 0;
        }

        cout << "Successfully logged in" << endl;
        return 1;
    }
}