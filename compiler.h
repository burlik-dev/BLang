#include <iostream>
#include <cstdint>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <utility>

std::string read_code(std::string);

class LinkedList{
public:
    LinkedList* next = this;
    void* value;
};


class LibraryToken{
public:
    std::string name;
    std::string type;
    std::string subtype;
    std::string code;
    std::string returned_type;
    LibraryToken(std::string, std::string, std::string, std::string, std::string);
};

class CodeToken{
public:
    std::string name;
    std::string type;
    std::string subtype;
    CodeToken(std::string, std::string, std::string);
};
