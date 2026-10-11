#include<iostream>
#include<cstdio>
#include <memory>


// smart pointer is a pointer that deals with memory management for you

// RAII -> Resource acquire karo, usko ek object ki ownership mein rakho, aur jab woh object destroy ho,
// resource automatically release ho jaana chahiye.

std::shared_ptr<int> getData() {
    std::shared_ptr<int> a = std::make_shared<int>(5);
    return a;
}

std::unique_ptr<int> getData2() {
    auto a = std::make_unique<int>(10);
    return a;

}

int main() {
    std::shared_ptr<int> b = getData();
    auto c = b;

    auto b2 = getData2();
    auto c2 = std::move(b2); // transfer the ownership from b2 to c2
    //std::cout << *b2 << std::endl; // segmentation fault b2 is now deleted we cant accesss
    if (b2) {
        std::cout << *b2 << std::endl;
    }
    std::cout << *c2 << std::endl;

    std::cout<< b.use_count() << std::endl;

    return 0;
}
