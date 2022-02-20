#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria {

    public:
        AMateria();
        AMateria(const std::string &type);
        AMateria(const AMateria &other);
        virtual ~AMateria();

        AMateria                    &operator=(const AMateria &other);

        const                       std::string &getType() const;
        void                        setType(const std::string type);
        const bool                  &getAvailability() const;
        void                        setAvailability(const bool status);
        virtual                     AMateria *clone() const = 0;
        virtual void                use(ICharacter &target);
        static void                 print_availability_error();

    protected:
        std::string                 type_;
        bool                        is_available_;
        static const std::string    error_msg;
};

#endif
