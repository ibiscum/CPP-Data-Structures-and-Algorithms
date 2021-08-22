// Constructor
#include <iostream>
#include <utility>

using namespace std;

class Animal
{
private:
    string m_name;

public:
    explicit Animal(string name) : m_name(std::move(name))
    {

    }

    string GetName()
    {
        return m_name;
    }
};

int main()
{
    Animal dog = Animal("dog");

    cout << "Hi, I'm a " << dog.GetName() << endl;

    return 0;
}
