#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

bool IsLoggedIn(string username) {
    string password, un, pw;

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

    cout << "1: Register\n2: Login\n3: Change Password\n4: Delete user\n5: Exit\nYour choice: "; cin >> choice;

    if (choice == 5) {
        cout << "Goodbye" << endl;
        return 0;
    }

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

    string username;
    cout << "Enter username: "; cin >> username;

    bool status = IsLoggedIn(username);

    if (!status) {
        cout << "Invalid login" << endl;
        return 0;
    }

    cout << "Successfully logged in" << endl;

    if (choice == 2) {
        main();
    }

    if (choice == 3) {
        string newPassword;
        cout << "Enter new password: "; cin >> newPassword;

        // actually quicker to just make a new file
        // will have to move username collection to main
        remove(("data/" + username + ".txt").c_str());

        ofstream file;
        file.open("data/" + username + ".txt");
        file << username << endl << newPassword;
        file.close();

        cout << "Password updated successfully" << endl;

        main();
    }

    if (choice == 4) {
        remove(("data/" + username + ".txt").c_str());
        cout << "User deleted successfully" << endl;

        main();
    }

}