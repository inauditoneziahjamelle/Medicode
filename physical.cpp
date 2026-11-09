#include <iostream>
#include <string>
using namespace std;




int main()
{
int concern_summary[8];

    
    cout << "How long have you experienced this problem?" << endl;
    cout << "1. Today - Started today" << endl;
    cout << "2. A Few Days - Lasted 1-3 days." << endl;
    cout << "3. One Week or Longer - Lasted at least 7 days." << endl;
    cout << "4. Not Sure" << endl;
         
    cin >> concern_summary[0];

    cout << "How severe is your concern" << endl;
    cout << "1. Mild - Does not greatly affect daily activities." << endl;
    cout << "2. Moderate - Makes some daily activities difficult." << endl;
    cout << "3. Severe - Makes normal daily activities very difficult." << endl;
    cout << endl;
       
    cin >> concern_summary[1];

 
    cout << "How does this concern affect activities?" << endl;
    cout << "1. Not at All - Daily activities are mostly unaffected." << endl;
    cout << "2. Slightly - Some activities are affected." << endl;
    cout << "3. Moderately - Several activities are difficult." << endl;
    cout << "4. Not Sure" << endl;
       
    cin >> concern_summary[2];

   
    cout << "Is your condition getting worse?" << endl;
    cout << "1. Yes - Becoming more severe." << endl;
    cout << "2. No - Staying the same." << endl;
    cout << "3. Improving - Getting better." << endl;
    cout << "4. Not Sure" << endl;
     
    cin >> concern_summary[3];
    
    cout << "Do you have other symptoms or concerns?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "3. Back to Previous Question" << endl;
    cout << "4. Back to Main Menu" << endl;
         
    cin >> concern_summary[4];

    cout << "Are you experiencing any urgent warning signs?" << endl;
    cout << "1. Difficulty breathing" << endl;
    cout << "2. Chest pain or pressure" << endl;
    cout << "3. Fainting or sudden confusion" << endl;
    cout << "4. Severe allergic reaction" << endl;
    cout << "5. Feeling unsafe or needing immediate mental health support" << endl;
    cout << "6. None of These" << endl;
    cout << "7. Back to Previous Question" << endl;
   cin >> concern_summary[5];

   
    cout << "Have you taken any medication or received any treatment for this concern?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "3. Not Applicable" << endl;
    cout << "4. Back to Previous Question" << endl;
    cout << "5. Back to Main Menu" << endl;
         
   cin >> concern_summary[6];

   
    cout << "1. View Concern Summary" << endl;
    cout << "2. Connect to an Available General Practitioner" << endl;
    cout << "3.View General Health Guidance" << endl;
    cout << "4. Back to Main Menu" << endl;
    cout << "5. Exit" << endl;
         
cin >> concern_summary[7];



if (concern_summary[7] == 1) {
    cout << "\n===============================" << endl;
        cout << "       YOUR CONCERN SUMMARY    " << endl;
        cout << "===============================" << endl;
string durations[] = {"", "Today", "A Few Days", "One Week or Longer", "Not Sure"};
        string severities[] = {"", "Mild", "Moderate", "Severe"};
        string impacts[] = {"", "Not at All", "Slightly", "Moderately", "Not Sure"};
        string progressions[] = {"", "Yes - Becoming more severe", "No - Staying the same", "Improving - Getting better", "Not Sure"};
        string symptoms[] = {"", "Yes", "No", "Back to Previous Question", "Back to Main Menu"};
        string warningSigns[] = {"", "Difficulty breathing", "Chest pain or pressure", "Fainting or sudden confusion", "Severe allergic reaction", "Feeling unsafe or needing immediate mental health support", "None of These", "Back to Previous Question"};
        string medications[] = {"", "Yes", "No", "Not Applicable", "Back to Previous Question", "Back to Main Menu"};

        cout << "Duration: " << (concern_summary[0] >= 1 && concern_summary[0] <= 4 ? durations[concern_summary[0]] : "Invalid") << endl;
        cout << "Severity: " << (concern_summary[1] >= 1 && concern_summary[1] <= 3 ? severities[concern_summary[1]] : "Invalid") << endl;
        cout << "Impact on Activities: " << (concern_summary[2] >= 1 && concern_summary[2] <= 4 ? impacts[concern_summary[2]] : "Invalid") << endl;
        cout << "Progression: " << (concern_summary[3] >= 1 && concern_summary[3] <= 4 ? progressions[concern_summary[3]] : "Invalid") << endl;
        cout << "Other Symptoms: " << (concern_summary[4] >= 1 && concern_summary[4] <= 4 ? symptoms[concern_summary[4]] : "Invalid") << endl;
        cout << "Urgent Signs: " << (concern_summary[5] >= 1 && concern_summary[5] <= 7 ? warningSigns[concern_summary[5]] : "Invalid") << endl;
        cout << "Medication/Treatment: " << (concern_summary[6] >= 1 && concern_summary[6] <= 5 ? medications[concern_summary[6]] : "Invalid") << endl;
        
        cout << "===============================" << endl;
}


    return 0;
}