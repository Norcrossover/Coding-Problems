#include <string>
bool solution(std::string const &str, std::string const &ending) {
    int strLen = str.size(), endLen = ending.size(), count = 0;
    for (int i = (strLen-endLen); i < strLen; i++) {
      if (str[i] != ending[count]) {
        return false;
      }
      count++;
    }
    return true;
}