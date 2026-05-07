#include <iostream>     // Used for input (cin) and output (cout)
#include <vector>       // Used for dynamic arrays (vector)
#include <map>          // Used for key-value storage (grades)
using namespace std;    // Avoid writing std:: again and again

/* -------------------------------------------------
   Forward Declarations
   These tell the compiler that these classes
   will be defined later in the program
-------------------------------------------------- */
class Course;
class Instructor;

/* =================================================
   STUDENT CLASS
   Represents a student in the system
================================================= */
class Student {
public:
    int id;                         // Stores student ID
    string name;                    // Stores student name
    vector<Course*> courses;        // Stores enrolled courses (many-to-many)

    // Constructor to initialize student object
    Student(int id, string name) {
        this->id = id;              // Assign parameter to class variable
        this->name = name;
    }

    // Function to enroll student in a course
    void enroll(Course* c);

    // Function to display student courses
    void viewCourses();
};

/* =================================================
   INSTRUCTOR CLASS
   Represents an instructor
================================================= */
class Instructor {
public:
    int instructorId;               // Instructor ID
    string name;                    // Instructor name
    string department;              // Instructor department

    // Constructor to initialize instructor object
    Instructor(int id, string name, string dept) {
        this->instructorId = id;
        this->name = name;
        this->department = dept;
    }

    // Instructor assigns grade to student
    void assignGrade(Student* s, Course* c, char grade);
};

/* =================================================
   COURSE CLASS
   Represents a course
================================================= */
class Course {
public:
    int code;                       // Course code
    string name;                    // Course name
    Instructor* instructor;         // Instructor teaching the course
    map<int, char> grades;          // Stores studentId → grade

    // Constructor to initialize course
    Course(int code, string name, Instructor* inst) {
        this->code = code;
        this->name = name;
        this->instructor = inst;
    }

    // Assign grade to a student
    void assignGrade(int studentId, char grade) {
        grades[studentId] = grade;  // Store grade in map
    }
};

/* =================================================
   STUDENT CLASS FUNCTION DEFINITIONS
================================================= */

// Enroll student in a course
void Student::enroll(Course* c) {

    // Check if already enrolled
    for (auto course : courses) {
        if (course->code == c->code) {
            cout << "Already enrolled in this course!\n";
            return;                 // Stop execution
        }
    }

    // Add course to student's course list
    courses.push_back(c);
    cout << "Enrollment successful!\n";
}

// Display student enrolled courses
void Student::viewCourses() {
    cout << "\nCourses of " << name << ":\n";

    // If no courses enrolled
    if (courses.empty()) {
        cout << "No courses enrolled.\n";
        return;
    }

    // Display all enrolled courses
    for (auto c : courses)
        cout << "- " << c->name << endl;
}

/* =================================================
   INSTRUCTOR FUNCTION DEFINITION
================================================= */

// Instructor assigns grade to a student
void Instructor::assignGrade(Student* s, Course* c, char grade) {
    c->assignGrade(s->id, grade);   // Call course function
    cout << "Instructor " << name
         << " assigned grade " << grade
         << " to " << s->name
         << " in " << c->name << endl;
}

/* =================================================
   HELPER FUNCTIONS
   Used to search data efficiently
================================================= */

// Find student by ID
Student* findStudent(vector<Student>& students, int id) {
    for (auto& s : students) {      // Loop through students
        if (s.id == id)
            return &s;              // Return address of student
    }
    return nullptr;                 // If not found
}

// Find course by code
Course* findCourse(vector<Course>& courses, int code) {
    for (auto& c : courses) {
        if (c.code == code)
            return &c;
    }
    return nullptr;
}

// Find instructor by ID
Instructor* findInstructor(vector<Instructor>& instructors, int id) {
    for (auto& i : instructors) {
        if (i.instructorId == id)
            return &i;
    }
    return nullptr;
}

/* =================================================
   MAIN FUNCTION
   Program execution starts here
================================================= */
int main() {

    vector<Student> students;           // Stores all students
    vector<Course> courses;             // Stores all courses
    vector<Instructor> instructors;     // Stores all instructors

    int choice;                         // Stores menu choice

    do {
        // Display menu
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Add Instructor\n";
        cout << "3. Add Course\n";
        cout << "4. Enroll Student in Course\n";
        cout << "5. Assign Grade\n";
        cout << "6. View Student Courses\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Add Student
        if (choice == 1) {
            int id;
            string name;
            cout << "Enter Student ID and Name: ";
            cin >> id >> name;
            students.emplace_back(id, name);
            cout << "Student added successfully!\n";
        }

        // Add Instructor
        else if (choice == 2) {
            int id;
            string name, dept;
            cout << "Enter Instructor ID, Name, Department: ";
            cin >> id >> name >> dept;
            instructors.emplace_back(id, name, dept);
            cout << "Instructor added successfully!\n";
        }

        // Add Course
        else if (choice == 3) {
            int code, instId;
            string cname;
            cout << "Enter Course Code and Name: ";
            cin >> code >> cname;
            cout << "Enter Instructor ID: ";
            cin >> instId;

            Instructor* inst = findInstructor(instructors, instId);
            if (inst) {
                courses.emplace_back(code, cname, inst);
                cout << "Course added successfully!\n";
            } else {
                cout << "Instructor not found!\n";
            }
        }

        // Enroll Student
        else if (choice == 4) {
            int sid, ccode;
            cout << "Enter Student ID and Course Code: ";
            cin >> sid >> ccode;

            Student* s = findStudent(students, sid);
            Course* c = findCourse(courses, ccode);

            if (s && c)
                s->enroll(c);
            else
                cout << "Student or Course not found!\n";
        }

        // Assign Grade
        else if (choice == 5) {
            int sid, ccode, instId;
            char grade;

            cout << "Enter Instructor ID: ";
            cin >> instId;
            cout << "Enter Student ID and Course Code: ";
            cin >> sid >> ccode;
            cout << "Enter Grade: ";
            cin >> grade;

            Instructor* inst = findInstructor(instructors, instId);
            Student* s = findStudent(students, sid);
            Course* c = findCourse(courses, ccode);

            if (inst && s && c)
                inst->assignGrade(s, c, grade);
            else
                cout << "Invalid data entered!\n";
        }

        // View Student Courses
        else if (choice == 6) {
            int sid;
            cout << "Enter Student ID: ";
            cin >> sid;

            Student* s = findStudent(students, sid);
            if (s)
                s->viewCourses();
            else
                cout << "Student not found!\n";
        }

    } while (choice != 7);   // Loop until user chooses exit

    cout << "System exited successfully.\n";
    return 0;               // Program ends
}
