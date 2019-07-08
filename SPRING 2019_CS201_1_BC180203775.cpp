#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    // All Variable Declared...
    int program_option;
    int year1;
    int year2;
    int year3;
    int year4;
    int studentsSum;

    cout << "Please Select The Program Options, In Which You Want To Enter Enrollments.\n";
    cout << "Please Enter Option 1 for BCS program.\n";
    cout << "Please Enter Option 2 for BIT program.\n";
    cout << "Please Enter Option 3 for BBA program.\n";
    cout << "Please Enter Option 4 for BA program.\n";
    cout << "===================\n";
    do {
        cout << "Please Enter Program Option: ";
        cin >> program_option;
        if(program_option > 4){
            cout << "THE PROGRAM NAME IS INVALID, PLEASE TRY AGAIN.\n";
            system("pause");
        }
    } while(program_option > 4);

    cout << "Please enter number of students in Year 1: ";
    cin >> year1;

    cout << "Please enter number of students in Year 2: ";
    cin >> year2;

    cout << "Please enter number of students in Year 3: ";
    cin >> year3;

    cout << "Please enter number of students in Year 4: ";
    cin >> year4;
    cout << "\n\n";
    if(program_option == 1){
            cout << "==============DEPARTMENT OF COMPUTER SCIENCE==============\n";
    } else if(program_option == 2){
            cout << "==============DEPARTMENT OF COMPUTER SCIENCE==============\n";
    } else if(program_option == 3) {
            cout << "==============DEPRTAMENT OF BUSINESS ADMINISTRATION==============\n";
    } else {
            cout << "==============DEPARTMENT OF FINE ARTS==============\n";
    }
    cout << "\n";

    cout << "The number of students in year 1 is: ";
    cout << year1;
    cout << "\n";

    cout << "The number of students in year 2 is: ";
    cout << year2;
    cout << "\n";

    cout << "The number of students in year 3 is: ";
    cout << year3;
    cout << "\n";

    cout << "The number of students in year 4 is: ";
    cout << year4;
    cout << "\n\n";

    studentsSum = year1 + year2 + year3 + year4;

    cout << "The percentage of students in year 1 is: ";
    double percentage = (double)year1 / studentsSum * 100;
    cout << percentage; cout << "%\n";

    cout << "The percentage of students in year 2 is: ";
    percentage = (double)year2 / studentsSum * 100;
    cout << percentage; cout << "%\n";

    cout << "The percentage of students in year 3 is: ";
    percentage = (double)year3 / studentsSum * 100;
    cout << percentage; cout << "%\n";

    cout << "The percentage of students in year 4 is: ";
    percentage = (double)year4 / studentsSum * 100;
    cout << percentage; cout << "%\n";

    cout << "The total number of students in the program is: ";
    cout << studentsSum;
    cout << "\n";

    if(studentsSum > 100){
        cout << "The number of students enrolled in that year is over the limit.";
    }
}