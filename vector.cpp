#include <vector>
#include <iostream>
#include <vector>



void part1() {
    std::vector <int> vector_size;

    for (int i = 0; i < 50000; i++) {
        vector_size.push_back(i);
    }
    std::cout << "After adding elements: Size = " << vector_size.size() << "  Capacity = " << vector_size.capacity() << std::endl;
    
    vector_size.resize(vector_size.size()/2);
    std::cout << "After resizing: Size = " << vector_size.size() << "  Capacity = " << vector_size.capacity() << std::endl;

    vector_size.shrink_to_fit();
    std::cout << "After shrink_to_fit(): Size = " << vector_size.size() << "  Capacity = " << vector_size.capacity() << std::endl;

    std::cout << std::endl;
}

void part2() {

    std::vector<bool> vector_bool(10000);
    std::vector<char> vector_char(10000);

    std::cout << "Memory usage of std::vector<bool>: " << vector_bool.capacity()/8 << " bytes" << std::endl;
    std::cout << "Memory usage of std::vector<char>: " << vector_char.capacity() << " bytes" << std::endl;

}

int main() {
    part1();
    part2();
    return 0;
}
