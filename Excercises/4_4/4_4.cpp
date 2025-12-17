/**
 * Sample solution for decision tree for robot control
 * @author Dorit Borrmann
 */


// include for user input and output
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    // Prompt user whether there is a task to do
    bool task = false;
    cout << "Task to do? Enter 1 for true, 0 for false: ";
    cin >> task;
    
    if(task) {                   // if there is a task to do
        
        // variables to store user input
        int urgency = 0;         // urgengy
        float battery = 0;       // battery level
        
        // Prompt user for urgency and battery level
        cout << "Enter urgency of the task between 0 and 10: ";
        cin >> urgency;
        cout << "Enter battery level between 0 and 1: ";
        cin >> battery;

        if(urgency > 5) {        // if task is urgent
            if(battery > 0.1) {  // battery level high
                cout << "Perform Task!" << endl;
            } else {             // battery level low
                cout << "Recharge now!" << endl;
            }
        } else {                 // if task is not urgent
            if(battery > 0.3) {  // battery level high
                cout << "Perform Task!" << endl;
            } else {             // battery level low
                cout << "Recharge now!" << endl;
            }
        }
    } else {                     // no task to do
        cout << "Recharge now!" << endl;
    }
    
    return 0;
}
