#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

    private:
        static const std::string    errors;
        static const unsigned int   size = 100;
        std::string                 ideas[size];

    public:
        Brain();
        Brain(const Brain &other);
        virtual ~Brain();

        Brain                       &operator=(const Brain &other);

        const std::string           getIdeas(const int index) const;
        void                        setIdeas(const int index, const std::string &new_idea);
};

#endif
