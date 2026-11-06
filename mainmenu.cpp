#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    // text color to bright red
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);

        cout << R"(
    ███╗   ███╗███████╗██████╗ ██╗ ██████╗ ██████╗ ██████╗ ███████╗
    ████╗ ████║██╔════╝██╔══██╗██║██╔════╝██╔═══██╗██╔══██╗██╔════╝
    ██╔████╔██║█████╗  ██║  ██║██║██║     ██║   ██║██║  ██║█████╗  
    ██║╚██╔╝██║██╔══╝  ██║  ██║██║██║     ██║   ██║██║  ██║██╔══╝  
    ██║ ╚═╝ ██║███████╗███████║██║╚██████╗╚██████╔╝██████╔╝███████╗
    ╚═╝     ╚═╝╚══════╝╚══════╝╚═╝ ╚═════╝ ╚═════╝ ╚═════╝╚══════╝
)";

    // back to white
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

     cout << "           A USSD Code for Non-critical Medical Assistance." << endl;


cout << "                       MEDICODE USSD CODE: 123" << endl << endl;
int code;
cout << "Input Code: ";
cin >> code;
if (code == 123){
    cout << endl;

cout << "Disclaimer: \033[3mMEDICODE asks questions about your symptoms, provides general health guidance, and connects you to available General Practitioners (GPs)." << endl; 
cout << "It caters only to Green Triage cases, which are generally non-emergency conditions that are stable and can wait for routine medical assessment." << endl;
cout << "MEDICODE does not diagnose illnesses or directly provide specialist consultations.\033[0m"<< endl;
int choice;
    cout << R"(
    1. Proceed
    2. Exit )" << endl;
cin >> choice;
    if (choice == 1){
        int consent;

cout << endl;
cout << "Your personal and medical information will be collected to help provide healthcare navigation and connect you with a GP." << endl;
cout << "1. Agree" << endl;
cout << "2. Decline" << endl;
cin >> consent;
if (consent == 1){
cout << "Patient ID: 000" << endl;
int type;
cout << "1. Physical Health" << endl;
cout << "2. Mental Health" << endl;
cout << "3. Patient Profile Menu" << endl;
cout << "4. Exit Menu" << endl;
cin >> type;
switch(type){
case 1:

break;

case 2:

break;

case 3:

break;

case 4:

break;
}















}
else if (consent == 2){
    return 0;
}
    else {
        cout << "Input not recognized. Please choose 1 or 2" << endl;
    }
}
else if (choice == 2){
   return 0; 
}
else {
    cout << "Please choose either 1 or 2" << endl;
}

}
else {

    cout << "input not recognized" << endl;
}





















    return 0;
}