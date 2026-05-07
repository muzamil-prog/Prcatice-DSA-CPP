#include <iostream> // using input and output operation
#include <vector>// using for dynamic array
#include <string>// using for string data  types
#include <map>  // using for storing grade(key pairs value)
using namespace std;
// these are neded because classes refer to each other using pointer
class Course;
class Instructer;
class Students{
    public:
    int studentId;
    string Name;
    int age;
    string Adress;
    string Email;
    int dateOfBirth;
    vector<Course* > enrollCourses;
    // acsess specifies
    // a construncter in which intilaize the value
    Students(int tudentId, string Name, int age, string Adress , string Email , int dateOfBirth){
        this->studentId=studentId;
        this->Name=Name;
        this->age=age;
        this->Adress=Adress;
        this->Email=Email;
        this->dateOfBirth=dateOfBirth;
    }
    int getStudentId(){ // a getter method to return the student id
        return getStudentId;
    }
    void enrollStudent(Course*course);//a method that enroll student in a course
    void dropStudent(Course*course);// a method that drope the courses
    void viewStudent(Course*course);// a methode that view courses of the students


};
class Instructer{
      public:
    int instructerId;
    string name;
    string department;
    string contactNumber;
    vector<Course*> courseTaught;// course taugth by instructer
    
    
    Instructer( int InstructerId,string name, string department, string contactNumber){
        this->instructerId;
        this->name=name;
        this->department=department;
        this->contactNumber=contactNumber;
    }
    int getInstructerId(){// a memthod that used to return instructerid
        return instructerId;
    }
    void assignCourse(Course*course){// add courses to instructer teaching list
        courseTaught.push_back(course);
    }
    void assignGrade(Students*student, Course*course, char grade);
};
// create the class of course
class Course{
    public:
    int courseCode;
    string name;
    int creditValue;
    int duration;
    Instructer* instructer;
    vector<Students*> students;
    map<int , char> grades;

    Course(int courseCode, string name, int creditValue, Instructer*instructer){
        this->courseCode=courseCode;
        this->name=name;
        this->creditValue=creditValue;
        this->instructer=instructer;
    }
    int getCourseCode(){
        return courseCode;
    }
    string getNameCourse(){
        return name;
    }
    void addStudent(Students*student){
        students.push_back(student);

    }
    void romoveStudents(Students*student){
        for(auto   it=students.begin(); it !=students.end(); it++){
            if((*it)->studentId()==student->studentId()){
            students.erase(it);
            break;
        }
    }


}
void setGrade(int studentId, char grade){
grades[studentId]= grade;

}
char getgrade(int studentId){
return grades[studentId];
}

};
void Students::dropStudent(Course*course){
for(auto  it=enrollCourses.begin(); it != enrollCourses.end(); it++){
    if((*it)->getCourseCode()==course->getCourseCode()){
        enrollCourses.erase(it);
        break;
    }
}
course->romoveStudents(this);
cout <<Name<<"droped"<<getNameCourse()<<endl;

}
void Students::vievStudent(Course*course){
    cout <<"\n courses of"<<name<<endl;
    for(auto c: enrollcourses){
        cout <<"-"<<getNameCourse()<<endl;
    }
}
void Instructer::assignCourse(Students*student, Course*course, char grade){
    course->setGrade(student->studentId(), grade);
    cout<<"grade"<<grade<<"assingned to"<<student->getName()<<"in"<<course->getCourseName()<<endl;
}
int main(){
    Instructer instruster(101,"muzammil", "BSCS","9314");
    Course oop(201, "OOP", 3, 4,&instructer);
    Students s1(1,"ali", 20, "lahore", "mh23748893", 20204);
    Students s2(2, "asghar", "lahore", "hrt33838939", 22, 2024);
    s1.enrollStudent(&oop);
    s2.enrollStudent(&oop);
    instructer.assignGrade(&s1, &oop, 'A');
    instructer.assignGrade(&s2, &oop, 'B');
    s1.viewStudent();
    s2.viewStudent();
    return 0;

}