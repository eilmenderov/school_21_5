#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {

    if (argc != 4) {
        std::cout << "Usage: ./replace file string1 string2" << std::endl;
        return 1;
    }

    std::string     buf;
    std::string     s1(argv[2]);
    std::string     s2(argv[3]);

    std::ifstream   input_file(argv[1]);
    if (!input_file) {
        std::cerr << "Cannot open file for reading: " << argv[1] << std::endl;
        return 1;
    } else if (input_file.peek() == EOF) {
        std::cerr << "File is empty!" << std::endl;
        input_file.close();
        return 1;
    }

    std::ofstream   output_file(std::string(argv[1]) + std::string(".replace"));
    if (!output_file) {
        std::cerr << "Cannot open/create file for writing" << std::endl;
    }

    std::size_t len_s1 = s1.length();
    std::size_t len_s2 = s2.length();
    while (std::getline(input_file, buf)) {

        std::size_t  pointer = 0;
        while ((pointer = buf.find(s1)) != std::string::npos) {
            buf.erase(pointer, len_s1);
            buf.insert(pointer, s2);
            pointer += len_s2;
        }
        output_file << buf << "\n";
    }
    input_file.close();
    output_file.close();
    return 0;
}
 