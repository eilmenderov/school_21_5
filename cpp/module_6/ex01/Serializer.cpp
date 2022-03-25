#include "Serializer.hpp"

uintptr_t       serialize(Data* ptr) {

    return reinterpret_cast<uintptr_t>(ptr);
}

Data            *deserialize(uintptr_t raw) {

    return reinterpret_cast<Data*>(raw);
}

std::ostream    &operator<<(std::ostream &os, const Data &data) {

    os << "Id: " << data.id << "\n";
    os << "Name: " << data.name << "\n";
    os << "Phone number: " << data.phone_number << "\n";
    return os;
}
