#include "compiler.h"

std::map<std::string, LibraryToken*> lib_tokens_hash;


LibraryToken::LibraryToken(std::string name, std::string type, std::string subtype, std::string code, std::string){
    this->name = name;
    this->type = type;
    this->subtype = subtype;
    this->code = code;
}

CodeToken::CodeToken(std::string name, std::string type, std::string subtype){
    this->name = name;
    this->type = type;
    this->subtype = subtype;
}



std::string read_code(std::string file){
    std::ifstream code(file);
    std::stringstream buffer;
    buffer << code.rdbuf();
    std::string content = buffer.str();
    return content;
}


void LoadLibraryTokens(std::string code, LinkedList* tokens, size_t& tokens_len){

}



std::string code;
LinkedList lib_tokens;
LinkedList code_tokens;
size_t lib_tokens_len;
size_t code_tokens_len;



int main(int argc, char* argv[]){
    code = read_code(argv[1]);
    return 0;
}
