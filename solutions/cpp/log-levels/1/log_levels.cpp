#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    std::string::size_type gap{line.find(" ")};
    return line.substr(gap+1);
}

std::string log_level(std::string line) {
    // return the log level
    std::string::size_type start{line.find("[")};
    std::string::size_type end{line.find("]")};
    return line.substr(start+1,end-(start+1));
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string::size_type gap{line.find(" ")};
    std::string::size_type start{line.find("[")};
    std::string::size_type end{line.find("]")};
    return line.substr(gap+1) + " (" + line.substr(start+1,end-start-1) + ")";
}
}  // namespace log_line
