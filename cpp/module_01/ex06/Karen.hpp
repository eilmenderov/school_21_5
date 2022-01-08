#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class Karen {

    public:
        Karen();
        ~Karen();

        void    complain(std::string level);
        void    filter(std::string level);
    
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);

        typedef void    (*func[]);
};

#endif
