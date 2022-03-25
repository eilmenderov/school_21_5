#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

    protected:
		Animal();
		Animal(const Animal &other);
		std::string         type;

	public:
		virtual ~Animal();

		Animal              &operator=(const Animal &other);

		const std::string   &getType() const;
		void                setType(const std::string new_type);
		virtual void        makeSound() const;
};

#endif
