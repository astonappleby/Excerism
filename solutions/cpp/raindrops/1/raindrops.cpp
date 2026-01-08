#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
std::string convert(int num){
    std::string noise{""};
    bool flag = 0;
    if (num % 3 == 0){
        noise += "Pling";
        flag = 1;
    }
    if (num % 5 == 0){
        noise += "Plang";
        flag = 1;
    } 
    if (num % 7 == 0){
        noise += "Plong";
        flag = 1;
    } 
    if(flag == 0){
        return std::to_string(num);
    }
    return noise;
}
}  // namespace raindrops
