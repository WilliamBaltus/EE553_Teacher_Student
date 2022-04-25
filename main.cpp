#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;


class Person{
private:
    string name;
    int age;
    char gender;

public:
    Person(string name, int age, char gender){
        cout << name << ", " << age << ", " << "has been born!" << endl;
        this->name = name;
        this->age = age;
        this->gender = gender;
    }
    string getName(){
        return name;
    }
    void setName(string name){
        this->name = name;
    }
    int getAge(){
        return age;
    }
    void setAge(){
        this->age = age;
    }
    char getGender(){
        return gender;
    }
    void setGender(){
        this->gender = gender;
    }
    ~Person(){
        //cout<< this->getName() << ", " << this->getAge() << ", " << "has died!" << endl;
    }
}; //end of Person

class Student : public Person{

}; //end of Student Class


class Teacher : public Person{
private:
    int tid;
    string course;
    uint16_t salary;
    vector <Student*> t_vec;
public:
    Teacher(int tid, string course, uint16_t salary, string name, int age, char gender) : Person(name,age,gender) {
        cout << "Teacher " << name << ", " << age << ", " << gender << " has been created." << endl;
        this->tid = tid;
        this->course = course;
        this->salary = salary;
    }

    static void addStudent(Student *s) {
        //store
       t_vec.push_back(s); //push a student object pointer into array

       for(int i = 0; i < t_vec.size(); i++) {

       }
    }
};

//ADD FUNCTION PASS BY REFERENCE
void add(vector<Teacher> &t_vec, vector<Student> &s_vec){
    cout << endl;
    cout << setfill(' ') << setw(59) << "1. Add Teacher" << endl;
    cout << setfill(' ') << setw(59) << "2. Add Student" << endl;
    string name;
    int age;
    char gender;
    int input = 0;
    cin >> input;
    switch (input) {
        case 1: {
            cout << "Add teacher selected" << endl;
            cout << "Provide a name for this teacher: ";
            cin >> name;
            cout << "Provide an age for " << name << ": ";
            cin >> age;
            cout << "Provide a gender (M/F) for " << name << ": ";
            cin >> gender;
            Person temp (name, age, gender);
            storage.push_back(temp);
            break;
        }
        case 2:{
            cout << "Add student selected " << endl;
            break;
        }
        default:
            break;
    }
} //end add()

void view(vector<Person> storage) {
    cout << endl;
    for(int i =0; i<storage.size(); i++) {
        cout << storage[i].getName() << ", "
        << storage[i].getAge()<< endl;
    }
} //end view()


void remove(vector<Person> &storage) {
    cout << endl;
    view(storage);
    cout << "Which would you like to remove: " << endl;
    string name;
    char flag = 'F';
    cin >> name;
    for(int i =0; i<storage.size(); i++) {
        if(storage[i].getName() == name){
            storage.erase(storage.begin() + i);
            flag = 'T';
            cout << "Removed" << endl;
        }
    }

    if(flag == 'F'){
        cout << name << " is not in the list!" << endl;
    }
} //end delete()

int main() {
    vector<Teacher> teacherVec;
    vector<Student> studentVec;
    while(1) {
        // Print statements for the console output
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << setfill(' ') << setw(70)<< "Welcome to the Teacher-Student GUI " << endl;
        cout << endl;
        cout << setfill('_') << setw(120) << "_" << endl;
        cout << setfill(' ') << setw(60) << "Press a key " << endl;
        cout << setfill(' ') << setw(60) << "1. Exit     " << endl;
        cout << setfill(' ') << setw(60) << "2. View     " << endl;
        cout << setfill(' ') << setw(60) << "3. Add      " << endl;
        cout << setfill(' ') << setw(60) << "4. Update   " << endl;
        cout << setfill(' ') << setw(60) << "5. Remove   " << endl;
        cout << setfill('_') << setw(120) << "_" << endl;
        int input = 0;
        cin >> input;

        // Start of switch case statement
        switch (input) {
            case 1:
                cout << "EXITING" << endl;
                exit(1);
            case 2:
                cout << "View selected " << endl;
                view(teacherVec, studentVec);
                break;
            case 3: {
                cout << "Add selected " << endl;
<<<<<<< HEAD
                add(storage);
                // when adding a student enrolled in a course, must add to teacher's list of students
                // Teacher::addStudent();
=======
                add(teacherVec, studentVec);
>>>>>>> 00bec5c187c30cd0b93f2888ecb782d6c8a51d73
                break;
            }
            case 4:
                cout << "Update selected " << endl;
                break;
            case 5:
                cout << "Remove selected " << endl;
                remove(teacherVec, studentVec);
                break;
            default:
                cout << "INVALID KEY " << endl;
                break;
        }
    }
}
