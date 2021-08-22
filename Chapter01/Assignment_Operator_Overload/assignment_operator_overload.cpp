// Assignment_Operator_Overload
#include <iostream>
#include <utility>

using namespace std;

class Animal
{
protected:
    string m_name;

public:
    explicit Animal(string name) : m_name(std::move(name))
    {

    }

    // The interface that has to be implemented
    // in derived class
    virtual string MakeSound() = 0;

    string GetName()
    {
        return m_name;
    }

};

class Dog : public Animal
{
public:
    // Forward the constructor arguments
    explicit Dog(string name) : Animal(std::move(name)) {}

    // Copy assignment operator overloading
    void operator = (const Dog &D ) {
         m_name = D.m_name;
      }

    // here we implement the interface
    string MakeSound() override
    {
        return "woof-woof!";
    }

};

int main()
{
    Dog dog = Dog("Bulldog");
    cout << dog.GetName() << " is barking: ";
    cout << dog.MakeSound() << endl;

    Dog dog2 = dog;
    cout << dog2.GetName() << " is barking: ";
    cout << dog2.MakeSound() << endl;

    return 0;
}
