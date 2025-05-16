#include <iostream>
using namespace std;

int main() {
    int n, sold = 1000;
    cout << "                                                   ** ATM **" << endl;
    cout << "                                              Please select the language" << endl;
    cout << "                                                1 - Romana" << endl;
    cout << "                                                2 - English" << endl;
    cin >> n;

    if (n < 1 || n >= 3) {
        cout << "Please select a valid option ( 1 or 2)" << endl;
    }

    if (n == 1) {
        int a, b;
        do {
            cout << "1 - Vizualizare sold" << endl;
            cout << "2 - Depunere " << endl;
            cout << "3 - Retragere " << endl;
            cout << "4 - Iesire" << endl;
            cin >> a;

    switch (a) {
    case 1:
    cout << "Sold-ul dumneavoastra este : " << sold << " lei" << endl;
    break;
    case 2:
    cout << "Introduceti suma pe care o doriti sa o depuneti: ";
    cin >> b;
    sold += b;
    cout << "Depunerea a fost efectuata cu succes!" << endl;
    cout << "Sold-ul dumneavoastra acum este de: " << sold << " lei" << endl;
break;
case 3:
cout << "Introduceti suma pe care o doriti sa o retrageti: ";
    cin >> b;
if (sold >= b) {
sold -= b;
cout << "Retragerea a fost efectuata cu succes!" << endl;
cout << "Sold-ul dumneavoastra acum este de: " << sold << " lei" << endl;
        } else {
    cout << "Suma propusa depaseste sold-ul dumneavoastra." << endl;
       }
    break;
    case 4:
        cout << "Multumim de vizita!" << endl;
        break;
    default:
        cout << "Selectati una dintre cele 4 optiuni." << endl;
        }
        } while (a != 4);
    }
    if (n==2){
        int a, b;
        do {  cout << "1 - View balance" << endl;
            cout << "2 - Deposit " << endl;
            cout << "3 - Withdraw " << endl;
            cout << "4 - Exit" << endl;
            cin >> a;
switch (a) {
    case 1:
    cout << "Your balance is : " << sold << " lei" << endl;
    break;
    case 2:
    cout << "Enter the amount you wish to deposit.: ";
    cin >> b;
    sold += b;
    cout << "The deposit was successful!" << endl;
    cout << "Your balance is now: " << sold << " lei" << endl;
break;
case 3:
cout << "Enter the amount you wish to withdraw.: ";
    cin >> b;
if (sold >= b) {
sold -= b;
cout << "The withdrawal was successful!" << endl;
cout << "Your balance now is: " << sold << " lei" << endl;
        } else {
    cout << "The proposed amount exceeds your balance." << endl;
       }
    break;
    case 4:
        cout << "Thank you for visiting.!" << endl;
        break;
    default:
        cout << "Select one of the 4 options." << endl;
        }
        } while (a != 4);

    }
    return 0;
}

