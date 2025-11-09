# Attendance Management System (C++)

A simple console-based **Attendance Management System** built using **C++** and file handling concepts.  
This program allows teachers or administrators to mark, view, and search attendance records easily using text file storage.

---

## Features

- Mark Attendance – Enter roll number, name, date, and status (P/A).  
- View All Records – Display all attendance entries in a formatted table.  
- Search by Roll Number – Quickly find a student’s attendance record.  
- File Handling – Data is saved persistently in a text file (`attendance.txt`).  

---

## Technologies Used

- **Language:** C++  
- **Concepts Used:**  
  - File Handling (`fstream`)  
  - Classes and Objects  
  - Loops & Conditionals  
  - Console I/O and Formatting (`iomanip`)

---

## Project Structure

Attendance Mng.cpp # Main program source code
attendance.txt # Data file (auto-created when program runs)
README.md # Project documentation

---

## How to Run

### Step 1: Clone the Repository

git clone https://github.com/<your-username>/attendance-management-system.git
cd attendance-management-system
Step 2: Compile the Code
Using g++:
g++ "Attendance Mng.cpp" -o attendance
Step 3: Run the Program
./attendance
Menu Options
Option	Description
1	Mark Attendance
2	View All Attendance
3	Search Attendance by Roll No
4	Exit
Example Output
======= Attendance Management System =======
1. Mark Attendance
2. View All Attendance
3. Search Attendance by Roll No
4. Exit
Enter your choice: 1

Enter Roll Number: 101
Enter Name: Rahul Sharma
Enter Date (DD-MM-YYYY): 09-11-2025
Enter Status (P/A): P

Attendance Marked Successfully!
Learning Objectives
Understand object-oriented programming basics in C++.
Learn file handling (reading and writing data).
Practice user input validation and menu-driven programs.
Limitations
No GUI (console-based only).
Does not prevent duplicate entries.
Names with spaces may not align perfectly in output view.
Future Enhancements
Add update and delete record functionality.
Support for multiple dates per student.
Export attendance data to CSV or Excel.
Build GUI version using Qt or C++/CLI.
Author
Nikhil Kumar

Project developed for educational purposes.
License
This project is open-source and available under the MIT License.

---

Would you like me to generate the **MIT License** file and a **C++ `.gitignore`** for you next?  
Those are standard additions for a complete GitHub project.
