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

class Teacher : public Person{
private:
    int tid;
    string course;
    uint16_t salary;
public:

};

class Student : public Person{

};

void add(vector<Person> &storage){
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

int main() {
    vector<Person> storage;
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
                view(storage);
                break;
            case 3: {
                cout << "Add selected " << endl;
                add(storage);
                break;
            }
            case 4:
                cout << "Update selected " << endl;
                break;
            case 5:
                cout << "Remove selected " << endl;
                break;
            default:
                cout << "INVALID KEY " << endl;
                break;
        }
    }
}
