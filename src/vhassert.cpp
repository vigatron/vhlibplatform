#include "vhplatform.hpp"

void asrts(bool cond, int module, std::string_view msg) {
    if(cond) return;
    std::cout << "ASSERT: " << " Module: " << module << " Msg: " << msg << std::endl;
    exit(1);
}
