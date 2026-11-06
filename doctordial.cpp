#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {

    int facilityChoice;
    int doctorChoice;
    string number;

    cout << "=================================" << endl;
    cout << "   CHOOSE A HEALTHCARE FACILITY" << endl;
    cout << "=================================" << endl;

    cout << "1. Public Hospital" << endl;
    cout << "2. Private Hospital" << endl;
    cout << "3. Back to Main Menu" << endl;
    cout << "4. Exit" << endl;

    cout << "\nEnter your choice: ";
    cin >> facilityChoice;


    // PUBLIC HOSPITAL
    if (facilityChoice == 1) {

        cout << "\nAVAILABLE PUBLIC DOCTORS" << endl;
        cout << "1. Example Doctor A" << endl;
        cout << "2. Example Doctor B" << endl;
        cout << "3. Example Doctor C" << endl;

        cout << "\nSelect Doctor: ";
        cin >> doctorChoice;

        switch (doctorChoice) {

            case 1:
                number = "09170000001";
                break;

            case 2:
                number = "09170000002";
                break;

            case 3:
                number = "09170000003";
                break;

            default:
                cout << "Invalid doctor selection!" << endl;
                return 0;
        }
    }


    // PRIVATE HOSPITAL
    else if (facilityChoice == 2) {

        cout << "\nAVAILABLE PRIVATE DOCTORS" << endl;
        cout << "1. Example Doctor D" << endl;
        cout << "2. Example Doctor E" << endl;
        cout << "3. Example Doctor F" << endl;

        cout << "\nSelect Doctor: ";
        cin >> doctorChoice;

        switch (doctorChoice) {

            case 1:
                number = "09170000004";
                break;

            case 2:
                number = "09170000005";
                break;

            case 3:
                number = "09170000006";
                break;

            default:
                cout << "Invalid doctor selection!" << endl;
                return 0;
        }
    }


    // BACK TO MAIN MENU
    else if (facilityChoice == 3) {

        cout << "\nReturning to Main Menu..." << endl;

        // Main Menu code.

        return 0;
    }


    // EXIT
    else if (facilityChoice == 4) {

        cout << "\nThank you for using MEDICODE!" << endl;
        return 0;
    }


    // INVALID FACILITY
    else {

        cout << "\nInvalid selection!" << endl;
        return 0;
    }


    // OPEN PHONE DIALER
    cout << "\nSelected Doctor!" << endl;
    cout << "Opening phone dialer..." << endl;

    string command =
        "C:\\platform-tools\\adb.exe shell am start "
        "-a android.intent.action.DIAL -d tel:"
        + number;

    system(command.c_str());

    cout << "\nPhone dialer opened!" << endl;

    return 0;
}