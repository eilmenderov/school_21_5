#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {

    const Animal*   animal = new Animal();
    const Animal*   animal_dog = new Dog();
    const Animal*   animal_cat = new Cat();
    const Cat*      cat_cat = new Cat();

    std::cout << "type of animal: " << animal->getType() << std::endl;
    std::cout << "type of animal_dog: " << animal_dog->getType() << std::endl;
    std::cout << "type of animal_cat: " <<  animal_cat->getType() << std::endl;
    std::cout << "type of cat_cat: " <<  cat_cat->getType() << std::endl;
    std::cout << "animal's makeSound: ";
    animal->makeSound();
    std::cout << std::endl;
    std::cout << "animal_dog's makeSound: ";
    animal_dog->makeSound();
    std::cout << "animal_cat's makeSound: ";
    animal_cat->makeSound();
    std::cout << "cat_cat's makeSound: ";
    cat_cat->makeSound();
    delete animal;
    delete animal_dog;
    delete animal_cat;
    delete cat_cat;

    std::cout << "\nTest for WrongAnimals" << std::endl;

    const WrongAnimal*  wrong_animal= new WrongAnimal();
    const WrongAnimal*  wrong_animal_wcat = new WrongCat();
    const WrongCat*     wrong_cat = new WrongCat();

    std::cout << "type of wrong_animal: " << wrong_animal->getType() << std::endl;
    std::cout << "type of wrong_animal_wcat: " << wrong_animal_wcat->getType() << std::endl;
    std::cout << "type of wrong_cat: " << wrong_cat->getType() << std::endl;
    std::cout << "wrong_animal's makeSound: ";
    wrong_animal->makeSound();
    std::cout << "wrong_animal_wcat's makeSound: ";
    wrong_animal_wcat->makeSound();
    std::cout << "wrong_cat's makeSound: ";
    wrong_cat->makeSound();
    delete wrong_animal;
    delete wrong_animal_wcat;
    delete wrong_cat;
    return 0;
}