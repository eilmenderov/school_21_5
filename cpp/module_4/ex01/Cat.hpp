#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain						*cat_brain;

	public:
		Cat();
		Cat(const Cat &other);
		~Cat();

		Cat							&operator=(const Cat &other);

		void						makeSound() const;
		static const std::string	class_name;
};

#endif