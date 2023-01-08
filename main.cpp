#include <fstream>
#include <sstream>
#include "Parse/Parser.hpp"
#include "Interpreter/Interpreter.hpp"

int main() {
    tinyc::Parser parser("../test/test3.tc");
    tinyc::Interpreter interpreter(parser);
    interpreter.interpret();
    return 0;
}
