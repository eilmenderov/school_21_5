#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

    protected:
		std::string         type;

	public:
		Animal();
		Animal(const Animal &other);
		virtual ~Animal();

		Animal              &operator=(const Animal &other);

		const std::string   &getType() const;
		void                setType(const std::string new_type);
		virtual void        makeSound() const;
};

#endif
