#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
protected:
    string name;
    int age;

public:
    virtual void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual ~Animal() {}
};

// Dog class inheriting Animal
class Dog : public Animal {
private:
    string breed;

public:
    void input() {
        Animal::input();
        cout << "Enter breed: ";
        getline(cin, breed);
    }

    void display() {
        Animal::display();
        cout << "Breed: " << breed << endl;
    }
};

// Cat class inheriting Animal
class Cat : public Animal {
private:
    string color;

public:
    void input() {
        Animal::input();
        cout << "Enter fur color: ";
        getline(cin, color);
    }

    void display() {
        Animal::display();
        cout << "Fur Color: " << color << endl;
    }
};

// Bird class inheriting Animal
class Bird : public Animal {
private:
    bool canFly;

public:
    void input() {
        Animal::input();
        char choice;
        cout << "Can it fly? (y/n): ";
        cin >> choice;
        cin.ignore();
        canFly = (choice == 'y' || choice == 'Y');
    }

    void display() {
        Animal::display();
        cout << "Can Fly: " << (canFly ? "Yes" : "No") << endl;
    }
};

// Main function
int main() {
    Animal* animals[3];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Bird();

    cout << "\n=== Enter Information ===\n";
    for (int i = 0; i < 3; ++i) {
        cout << "\nEnter information for animal " << i + 1 << ":\n";
        animals[i]->input();
    }

    cout << "\n=== Display Information ===\n";
    for (int i = 0; i < 3; ++i) {
        cout << "\nAnimal " << i + 1 << " Information:\n";
        animals[i]->display();
        delete animals[i]; // Free memory
    }

    return 0;
}

