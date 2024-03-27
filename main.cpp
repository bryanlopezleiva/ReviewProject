#include <iostream>
#include <list>
#include "Person.h"
#include "Student.h"
int main()
{
    std::list<Person> personList;

    personList.push_back(Person("Chris", 39));

    std::list<Student> studentList;

    studentList.push_back(Student("Bryan", 40, "lopezlopez@randemail.com", 910910));

    /// popping the data that is in the list
    std::cout << personList.front() << std::endl;
    std::cout << studentList.front() <<std::endl;

    /// creating a new object and inserting data using an ">>" overloaded function
    /// also printing data from the object using an "<<" overloaded function
    ///     same for both Person class and Student class

    Person p2;
    std::cin >> p2;
    std::cout << "The person object is: "<< p2 << std::endl;

    Student studentTwo;
    std::cin>> studentTwo;
    std::cout << "The student object is: " << studentTwo;

    /// using a list to input data into an object of the Student class

    std::list<Student> s2;
    std::string name;
    std::string email;
    int age, studentID;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your student email: ";
    std::cin >> email;

    std::cout << "Enter your student ID: ";
    std::cin >> studentID;

    /// using push back method to insert at the back of the list
    s2.push_back(Student(name, age, email,studentID));

    std::cout << "----- Data in s2 object -----" << std::endl;

    for (const auto &student: s2)
    {
        std::cout << student << std::endl;
    }


    return 0;
}
