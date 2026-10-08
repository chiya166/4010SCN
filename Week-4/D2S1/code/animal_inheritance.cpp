#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    int age;

public:
    Animal(const std::string& animalName, int animalAge)
    : name(animalName), age(animalAge) {
    

    }

    void displayBasicInfo() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
    }

    void celebrateBirthday() {
        ++age;
    }

    // Preview only: derived classes may specialise this same-name behaviour.
    virtual void speak() const {
        std::cout << name << " makes a sound.\n";
    }
};

class Dog : public Animal {
private:
    std::string breed;

public:
    Dog(const std::string& animalName, int animalAge, const std::string& dogBreed)
    : Animal(animalName, animalAge), breed(dogBreed) {
        
    }

    void displayDog() const {
        displayBasicInfo();
        std::cout << "Breed: " << breed << "\n";
    }

    void speak() const override {
    std::cout << name << " says: bark!\n";
    }

};

class Cat : public Animal {
private:
    bool indoorOnly;

public:
    Cat(const std::string& animalName, int animalAge, bool catIsIndoorOnly)
        : Animal(animalName, animalAge), indoorOnly(catIsIndoorOnly) {
    }

    void displayCat() const {
        displayBasicInfo();
        std::cout << "Indoor only: " << (indoorOnly ? "yes" : "no") << "\n";
    }

    void describeHome() const {
        if (indoorOnly) {
            std::cout << name << " lives indoors.\n";
        } else {
            std::cout << name << " can go outdoors safely with supervision.\n";
        }
    }

    void speak() const override {
    std::cout << name << " says: purr!\n";
    }

};

int main() {
    Dog dog("Milo", 3, "Labrador");
    Cat indoorCat("Luna", 2, true);
    Cat outdoorCat("Simba", 5, false);

    std::cout << "Dog\n";
    dog.displayDog();
    dog.speak();

    std::cout << "\nIndoor cat\n";
    indoorCat.displayCat();
    indoorCat.describeHome();
    indoorCat.speak();

    std::cout << "\nOutdoor cat\n";
    outdoorCat.displayCat();
    outdoorCat.describeHome();
    outdoorCat.speak();

    std::cout << "\nBirthday check\n";
    dog.celebrateBirthday();
    dog.displayDog();

    indoorCat.celebrateBirthday();
    indoorCat.displayCat();

    return 0;
}
