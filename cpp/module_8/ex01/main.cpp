#include "Span.hpp"

int main() {

    std::cout << "\n---Check subject case---" << std::endl;
    Span sp = Span(5);
    sp.addNumber(1);
    sp.addNumber(3);
    sp.addNumber(7);
    sp.addNumber(13);
    sp.addNumber(17);
    std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
    std::cout << "longestSpan:  " << sp.longestSpan() << std::endl;

    std::cout << "\n---Check 10000 case---" << std::endl;
    int     rand_num;
    int     span_size = 9999;
    int     random_size = 200;
    Span    sp_ten = Span(span_size + 1);

    sp_ten.addNumber(0);
    for (int i = 0; i < span_size; i++) {
        rand_num = rand() % random_size;
        // std::cout << rand_num << " ";
        sp_ten.addNumber(rand_num);
    }
    // std::cout << std::endl;
    std::cout << "shortestSpan: " << sp_ten.shortestSpan() << std::endl;
    std::cout << "longestSpan:  " << sp_ten.longestSpan() << std::endl;

    // std::cout << "\n---Check exeption case---" << std::endl;
    // Span sp_exep = Span(1);
    // sp_exep.addNumber(1);
    // std::cout << "shortestSpan: " << sp_exep.shortestSpan() << std::endl;
    // std::cout << "longestSpan:  " << sp_exep.longestSpan() << std::endl;
    // sp_exep.addNumber(3);

    return 0;
}
