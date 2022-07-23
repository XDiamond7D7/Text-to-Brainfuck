#include <string>
#include <fstream>

// ' ' = ++++++++++[>+++<-]>++.
// a = +++++++++[>++++++++++<-]>+++++++.
// b = +++++++++[>++++++++++<-]>++++++++.
// c = +++++++++[>++++++++++<-]>+++++++++.
// d = ++++++++++[>++++++++++<-]>.
// e = ++++++++++[>++++++++++<-]>+.
// f = ++++++++++[>++++++++++<-]>++.
// g = ++++++++++[>++++++++++<-]>+++.
// h = ++++++++++[>++++++++++<-]>++++.
// i = ++++++++++[>++++++++++<-]>+++++.
// j = ++++++++++[>++++++++++<-]>++++++.
// k = ++++++++++[>++++++++++<-]>+++++++.
// l = ++++++++++[>++++++++++<-]>++++++++.
// m = ++++++++++[>++++++++++<-]>+++++++++.
// n = +++++++++++[>++++++++++<-]>.
// o = +++++++++++[>++++++++++<-]>+.
// p = +++++++++++[>++++++++++<-]>++.
// q = +++++++++++[>++++++++++<-]>+++.
// r = +++++++++++[>++++++++++<-]>++++.
// s = +++++++++++[>++++++++++<-]>+++++.
// t = +++++++++++[>++++++++++<-]>++++++.
// u = +++++++++++[>++++++++++<-]>+++++++.
// v = +++++++++++[>++++++++++<-]>++++++++.
// w = +++++++++++[>++++++++++<-]>+++++++++.
// x = ++++++++++++[>++++++++++<-]>.
// y = ++++++++++++[>++++++++++<-]>+.
// z = ++++++++++++[>++++++++++<-]>++.

// A = ++++++++++[>++++++<-]>+++++.
// B = ++++++++++[>++++++<-]>++++++.
// C = ++++++++++[>++++++<-]>+++++++.
// D = ++++++++++[>++++++<-]>++++++++.
// E = ++++++++++[>++++++<-]>+++++++++.
// F = ++++++++++[>+++++++<-]>.
// G = ++++++++++[>+++++++<-]>+.
// H = ++++++++++[>+++++++<-]>++.
// I = ++++++++++[>+++++++<-]>+++.
// J = ++++++++++[>+++++++<-]>++++.
// K = ++++++++++[>+++++++<-]>+++++.
// L = ++++++++++[>+++++++<-]>++++++.
// M = ++++++++++[>+++++++<-]>+++++++.
// N = ++++++++++[>+++++++<-]>++++++++.
// O = ++++++++++[>+++++++<-]>+++++++++.
// P = ++++++++++[>++++++++<-]>.
// Q = ++++++++++[>++++++++<-]>+.
// R = ++++++++++[>++++++++<-]>++.
// S = ++++++++++[>++++++++<-]>+++.
// T = ++++++++++[>++++++++<-]>++++.
// U = ++++++++++[>++++++++<-]>+++++.
// V = ++++++++++[>++++++++<-]>++++++.
// W = ++++++++++[>++++++++<-]>+++++++.
// X = ++++++++++[>++++++++<-]>++++++++.
// Y = ++++++++++[>++++++++<-]>+++++++++.
// Z = ++++++++++[>+++++++++<-]>.

// , = +++++++++++[>++++<-]>.
// . = +++++++++++[>++++<-]>++.
// ; = ++++++++++[>++++++<-]>-.
// : = ++++++++++[>++++++<-]>--.
// ! = +++++++++++[>+++<-]>.


inline std::string convert_char_to_bf(char character, bool comments = false) {
    std::string output;
    switch (character) {
        case ' ':
            output = "++++++++++[>+++<-]>++."; if (comments) output += "  # Space";
        break;
        /* LOW LETTERS */
        case 'a':
            output = "+++++++++[>++++++++++<-]>+++++++."; if (comments) output += "  # a";
        break;
        case 'b':
            output = "+++++++++[>++++++++++<-]>++++++++."; if (comments) output += "  # b";
        break;
        case 'c':
            output = "+++++++++[>++++++++++<-]>+++++++++."; if (comments) output += "  # c";
        break;
        case 'd': 
            output = "++++++++++[>++++++++++<-]>."; if (comments) output += "  # d";
        break;
        case 'e': 
            output = "++++++++++[>++++++++++<-]>+."; if (comments) output += "  # e";
        break;
        case 'f': 
            output = "++++++++++[>++++++++++<-]>++."; if (comments) output += "  # f";
        break;
        case 'g': 
            output = "++++++++++[>++++++++++<-]>+++."; if (comments) output += "  # g";
        break;
        case 'h': 
            output = "++++++++++[>++++++++++<-]>++++."; if (comments) output += "  # h";
        break;
        case 'i': 
            output = "++++++++++[>++++++++++<-]>+++++."; if (comments) output += "  # i";
        break;
        case 'j': 
            output = "++++++++++[>++++++++++<-]>++++++."; if (comments) output += "  # j";
        break;
        case 'k': 
            output = "++++++++++[>++++++++++<-]>+++++++."; if (comments) output += "  # k";
        break;
        case 'l': 
            output = "++++++++++[>++++++++++<-]>++++++++."; if (comments) output += "  # l";
        break;
        case 'm': 
            output = "++++++++++[>++++++++++<-]>+++++++++."; if (comments) output += "  # m";
        break;
        case 'n': 
            output = "+++++++++++[>++++++++++<-]>."; if (comments) output += "  # n";
        break;
        case 'o': 
            output = "+++++++++++[>++++++++++<-]>+."; if (comments) output += "  # o";
        break;
        case 'p': 
            output = "+++++++++++[>++++++++++<-]>++."; if (comments) output += "  # p";
        break;
        case 'q': 
            output = "+++++++++++[>++++++++++<-]>+++."; if (comments) output += "  # q";
        break;
        case 'r': 
            output = "+++++++++++[>++++++++++<-]>++++."; if (comments) output += "  # r";
        break;
        case 's': 
            output = "+++++++++++[>++++++++++<-]>+++++."; if (comments) output += "  # s";
        break;
        case 't': 
            output = "+++++++++++[>++++++++++<-]>++++++."; if (comments) output += "  # t";
        break;
        case 'u': 
            output = "+++++++++++[>++++++++++<-]>+++++++."; if (comments) output += "  # u";
        break;
        case 'v': 
            output = "+++++++++++[>++++++++++<-]>++++++++."; if (comments) output += "  # v";
        break;
        case 'w': 
            output = "+++++++++++[>++++++++++<-]>+++++++++."; if (comments) output += "  # w";
        break;
        case 'x': 
            output = "++++++++++++[>++++++++++<-]>."; if (comments) output += "  # x";
        break;
        case 'y': 
            output = "++++++++++++[>++++++++++<-]>+."; if (comments) output += "  # y";
        break;
        case 'z': 
            output = "++++++++++++[>++++++++++<-]>++."; if (comments) output += "  # z";
        break;
        /* CAPITAL LETTERS */
        case 'A':
            output = "++++++++++[>++++++<-]>+++++."; if (comments) output += "  # A";
        break;
        case 'B':
            output = "++++++++++[>++++++<-]>++++++."; if (comments) output += "  # B";
        break;
        case 'C':
            output = "++++++++++[>++++++<-]>+++++++."; if (comments) output += "  # C";
        break;
        case 'D': 
            output = "++++++++++[>++++++<-]>++++++++."; if (comments) output += "  # D";
        break;
        case 'E': 
            output = "++++++++++[>++++++<-]>+++++++++."; if (comments) output += "  # E";
        break;
        case 'F': 
            output = "++++++++++[>+++++++<-]>."; if (comments) output += "  # F";
        break;
        case 'G': 
            output = "++++++++++[>+++++++<-]>+."; if (comments) output += "  # G";
        break;
        case 'H': 
            output = "++++++++++[>+++++++<-]>++."; if (comments) output += "  # H";
        break;
        case 'I': 
            output = "++++++++++[>+++++++<-]>+++."; if (comments) output += "  # I";
        break;
        case 'J': 
            output = "++++++++++[>++++++++++<-]>++++."; if (comments) output += "  # J";
        break;
        case 'K': 
            output = "+++++++++++[>+++++++<-]>+++++."; if (comments) output += "  # K";
        break;
        case 'L': 
            output = "++++++++++[>+++++++<-]>++++++."; if (comments) output += "  # L";
        break;
        case 'M': 
            output = "++++++++++[>+++++++<-]>+++++++."; if (comments) output += "  # M";
        break;
        case 'N': 
            output = "++++++++++[>+++++++<-]>++++++++."; if (comments) output += "  # N";
        break;
        case 'O': 
            output = "++++++++++[>+++++++<-]>+++++++++."; if (comments) output += "  # O";
        break;
        case 'P': 
            output = "++++++++++[>++++++++<-]>."; if (comments) output += "  # P";
        break;
        case 'Q': 
            output = "++++++++++[>++++++++<-]>+."; if (comments) output += "  # Q";
        break;
        case 'R': 
            output = "++++++++++[>++++++++<-]>++."; if (comments) output += "  # R";
        break;
        case 'S': 
            output = "++++++++++[>++++++++<-]>+++."; if (comments) output += "  # S";
        break;
        case 'T': 
            output = "++++++++++[>++++++++<-]>++++."; if (comments) output += "  # T";
        break;
        case 'U': 
            output = "++++++++++[>++++++++<-]>+++++."; if (comments) output += "  # U";
        break;
        case 'V': 
            output = "++++++++++[>++++++++<-]>++++++."; if (comments) output += "  # V";
        break;
        case 'W': 
            output = "++++++++++[>++++++++<-]>+++++++."; if (comments) output += "  # W";
        break;
        case 'X': 
            output = "++++++++++[>++++++++<-]>++++++++."; if (comments) output += "  # X";
        break;
        case 'Y': 
            output = "++++++++++[>++++++++<-]>+++++++++."; if (comments) output += "  # Y";
        break;
        case 'Z': 
            output = "++++++++++[>+++++++++<-]>."; if (comments) output += "  # Z";
        break;
        /* GRAMMATICAL SIGNS */
        case ',':
            output = "+++++++++++[>++++<-]>."; if (comments) output += "  # ,";
        break;
        case '.':
            output = "+++++++++++[>++++<-]>."; if (comments) output += "  # .";
        break;
        case ';':
            output = "++++++++++[>++++++<-]>-."; if (comments) output += "  # ;";
        break;
        case ':':
            output = "++++++++++[>++++++<-]>--."; if (comments) output += "  # :";
        break;
        case '!':
            output = "+++++++++++[>+++<-]>."; if (comments) output += "  # !";
        break;
    }
    return output;
}




inline std::string convert_string_to_bf(std::string string, std::string file_name = "" /* empty == just printing on the terminal*/, bool comments = false) {
    int lenght = string.length();
    std::string output;
    std::string move_on = "";
    for (int i = 0; i < lenght; i++) {
        output += move_on + convert_char_to_bf(string[i], comments) + "\n";
        move_on += ">";
    }
    if (file_name == "") {
        return "\n" + output;
    } else {
        std::ofstream myfile;
        myfile.open (file_name);
        myfile << output;
        myfile.close();
    }
    return "Your file is ready.\n";
}