#include "Brain.hpp"

const std::string	Brain::errors = "Error: Index out of range";

Brain::Brain(){

    std::cout << "\x1B[32mBrain's default constructor called\033[0m" << std::endl;
}

Brain::Brain(const Brain &other){

    std::cout << "Brain's copy constructor called" << std::endl;
    *this = other;
}

Brain::~Brain(){

    std::cout << "\x1B[31mBrain's destructor called\033[0m" << std::endl;
}

Brain   &Brain::operator=(const Brain &other){

    if (this != &other) {
        for (int i = 0; i < this->size; ++i)
            this->setIdeas(i, other.getIdeas(i));
    }
    return (*this);
}

const std::string   Brain::getIdeas(const int index) const{

    if (0 <= index && index < this->size)
        return (this->ideas[index]);
    else {
        std::cout << this->errors << std::endl;
        return (NULL);
    }
}

void    Brain::setIdeas(const int index, const std::string &new_idea){

    if (0 <= index && index < this->size)
        this->ideas[index] = new_idea;
    else
        std::cout << this->errors << std::endl;
}
