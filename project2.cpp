#include<iostream>// use for input and output
#include<vector>// use  for dynamic array
#include<string>// use for string values
#include<map>// use for key value storage grade
using namespace std;// avoid for writing again and again std::

class Instructer;// thsese classed tell the compiler define these class later 
class Course;
class Student{ // student class
    public:
    int id;// student id
    string name;// student name menber data
    vector<Course*>courses;// store enrolled courses many to many 
    Student(int id, string name){// constructer intialize
        this->id=id;
        this->name=name;
    }
    void enroll(Course*c);// a methode the enroll the student in courses
    void viewCourse();//  a method that show the student which already be enrooled in cousese

};
class Instructer{//  a class instructer that already declare on top and this define the class
    public:
    int instructerId; // data member of instructer
    string name;//  instucter name
    string department; // instructer department
    Instructer(int instructerId, string name, string department){
        this->instructerId=instructerId;// a constructer intialize
        this->name=name;
        this->department=department;
    }
    void assignGrade(Student*s, Course*c, char grade);// a mentod that assing the grade of student
};
class Course{ // a course class
    public:// public acess specifier
    int code;// id of course
    string name;// name of course
    Instructer* instructer;// instructer the  course
    map<int , char> grades; // store student -> grade use for fast searching
    Course(int code, string name){// a constructer intialize
        this->code=code;
        this->name=name;
    }
    void assignGrade(int id, char grade){//a method that assing a grade to the student
        grades[id] = grade;
    }
    
};
void Student::enroll(Course*c){// a define the function that enrool student in course
    for(auto course: courses){
        if(course->courseId==c->courseId){// check if already enrolled
            cout<<"already enrolled in this course "<<endl;
            return; // stop excution
        }
    }
    // add course to student course list
    courses.push_back(c);
    cout <<"eroll student successfully"<<endl;
}
 void Student::viewCourse(){ // a function define display student course enrolled
    cout <<"courses of:"<<name<<endl;
    if(courses.empty()){// if no course enrelled
        cout <<"sourse are not enrolled"<<endl;
    }
    for(auto c:courses){// dispalay all student enrolled courses
        cout<<"-"<<c->name<<endl;
    }
 }  //instructer assign a grade to student
 void Instructer:: assignGrade(Studnet*s, Course*c, char grade){
    c->assignGrade(s->id, grade); // call the function course
    cout<<"instructer"<<name<<"assign grade"<<grade<<"assing to"<<s->name<<"in"<<c->name<<endl;

 }
 //===== helper function that are used to find the student by id===
 Student* findStudent(vector<Student>& students , int id){
    for(auto& s : students){
        if(s.id==id){
            return &s;
        }
    }
    return nullptr;

 }
 Course*findCourse(vector<Course>& courses, int code){
    for(auto& c: courses){
        if(c.code==code){
            return &c;
        }
    }
    return nullptr;
 }
 Instructer*findinstucter(vector<Instructer>& instructers , int id){
    for(auto& i: instructers){
        if(i.id==id){
            return &i;
        }
    }
    return nullptr;
 }
 int main(){
    vector<Student> students;
    vector<Course> courses;
    vector<Instructer> instructers;
    int choice;
    do{
        cout <<"==== student management system========"<<endl;
        cout<<"1... add students "<<endl;
        cout <<"2.  add cource"<<endl;
        cout<<"3.. add instucters"<<endl;
        cout <<"4.. enrolll students in course"<<endl;
        cout <<".. 5 assign grades"<<endl;
        cout <<"6...  view student course"<<endl;
        cout <<"7.. exit"<<endl;
        cout <<"enter your choice"<<endl;
        cin >> choice;
        if(choice==1){
            int id;
            string name;
            cout <<"enter the student id and name"<<endl;
            cin >> id>> name;
            students.emplace_back(id, name) ;
            cout <<"student add sucessfuly"<<endl;
        }
    }
 }