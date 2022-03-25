
#include <iostream>
#include "Serializer.hpp"

int main() {

    // input data into a structure
    Data  data;
    data.id = 1;
    data.name = "Verla Leida";
    data.phone_number = "15646516861526";

    // print data
    std::cout << std::endl;
    std::cout << data << std::endl;

    // serialize data
    uintptr_t serialized_data = serialize(&data);

    // print serialized data
    std::cout << std::endl;
    std::cout << serialized_data << std::endl;

    // deserialize serialized data
    Data* data_ptr = deserialize(serialized_data);

    // print deseralized data
    std::cout << std::endl;
    std::cout << *data_ptr << std::endl;
    std::cout << std::endl;
}
