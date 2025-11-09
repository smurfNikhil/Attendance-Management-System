#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
class Attendance {
string name, rollNo, date, status;
public:
void markAttendance() {
cout << "\nEnter Roll Number: ";
cin >> rollNo;
cin.ignore();
cout << "Enter Name: ";
getline(cin, name);
cout << "Enter Date (DD-MM-YYYY): ";
cin >> date;
cout << "Enter Status (P/A): ";
cin >> status;
ofstream file("attendance.txt", ios::app);
file << left << setw(15) << rollNo
<< setw(20) << name
<< setw(15) << date
<< setw(10) << status << endl;
file.close();
cout << "\n✅ Attendance Marked Successfully!\n";
}
void viewAttendance() {
ifstream file("attendance.txt");
if (!file) {
cout << "\n⚠ No attendance records found!\n";
return;
}
cout << "\n----- Attendance Records -----\n";
cout << left << setw(15) << "Roll No"
<< setw(20) << "Name"
<< setw(15) << "Date"
<< setw(10) << "Status" << endl;
cout << "--------------------------------------------------------\n";
string r, n, d, s;
while (file >> r >> n >> d >> s) {
cout << left << setw(15) << r
<< setw(20) << n
<< setw(15) << d
<< setw(10) << s << endl;
}
file.close();
}
void searchAttendance() {
string searchRoll;
cout << "\nEnter Roll Number to Search: ";
cin >> searchRoll;
ifstream file("attendance.txt");
if (!file) {
cout << "\n⚠ No attendance records found!\n";
return;
}
bool found = false;
string r, n, d, s;
while (file >> r >> n >> d >> s) {
if (r == searchRoll) {
cout << "\nRecord Found:\n";
cout << "Roll No: " << r << "\nName: " << n
<< "\nDate: " << d << "\nStatus: " << s << endl;
found = true;
break;
}
}
if (!found)
cout << "\n No record found for Roll No: " << searchRoll << endl;
file.close();
}
};
int main() {
Attendance a;
int choice;
do {
cout << "\n======= Attendance Management System =======";
cout << "\n1. Mark Attendance";
cout << "\n2. View All Attendance";
cout << "\n3. Search Attendance by Roll No";
cout << "\n4. Exit";
cout << "\nEnter your choice: ";
cin >> choice;
switch (choice) {
case 1:
a.markAttendance();
break;
case 2:
a.viewAttendance();
break;
case 3:
a.searchAttendance();
break;
case 4:
break;
default:
cout << "\nExiting Program... Goodbye!\n";
cout << "\n Invalid choice! Try again.\n";
}
} while (choice != 4);
return 0;
}