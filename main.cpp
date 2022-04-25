#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Teacher{

};

class Student {

};

class Person{
private:
    string name;
    int age;
    char gender;
    vector<Student> students;
    vector<Teacher> teachers;
public:
    Person(string name, int age, char gender){
        cout << name << ", " << age << ", " << "has been born!" << endl;
        this->name = name;
        this->age = age;
        this->gender = gender;
        vector<Student> students;
        vector<Teacher> teachers;
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
        cout<< this->getName() << ", " << this->getAge() << ", " << "has died!" << endl;
    }
};


int main() {
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    //cout << setfill(' ') << setw(70)<< "Welcome to the Teacher-Student GUI " << endl;
    cout << endl;
    cout << setfill('_') <<setw(120)<< "_" << endl;
    cout << setfill(' ') << setw(60)<< "Press a key " << endl;
    cout << setfill(' ') << setw(60)<< "1. Exit     " << endl;
    cout << setfill(' ') << setw(60)<< "2. View     " << endl;
    cout << setfill(' ') << setw(60)<< "3. Add      " << endl;
    cout << setfill(' ') << setw(60)<< "4. Update   " << endl;
    cout << setfill(' ') << setw(60)<< "5. Remove   " << endl;
    cout << setfill('_') << setw(120)<< "_" << endl;
    Person("Billy", 21, 'M');
    return 0;
}
