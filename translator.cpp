#include <cstring>
#include <iostream>
#include "ASCII.h"
using namespace std;


int main(int argc, char* argv[]) {
    bool comments = false;
    std::string file_name = "";
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            if (std::string(argv[i]) == "--comments") {
                comments = true;
            } else if (std::string(argv[i]).find("--filename") != string::npos) {
                std::string file_name_argument = argv[1];
                file_name = file_name_argument.substr(file_name_argument.find(':')+1, file_name_argument.length()); 
                std::cout << "The result is going to be written here: " << file_name << std::endl;
            } else {
                cout << "Usage:\n" << argv[0] << "\n   --comments  (optional) it prints what every line of Brainfuck means\n   --filename:[your_file_name]  (optional) the output will not be printed on the terminal, instead it will be saved on [your_file_name]";
            }
        }
    }
    string text;
    cout << "\nEnter your text:";
    std::getline(std::cin, text);
    
    cout << "\nOutput: " << convert_string_to_bf(text, comments, file_name) << "\n";
    return 0;
}