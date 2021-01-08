#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

int countSmileys(std::vector<std::string> arr)
{
  int arrSize = sizeof(arr);
  std::string str = "";
  int smileyCount = 0;
  
  for (int i = 0; i < arrSize; i++){
    str = arr[i];
    for(char& c : str) {
      if (str.find(c) == std::string::npos){
        smileyCount += 1;
        break;
      }
    }
  }
  return smileyCount;
}

int main(){

    std::cout << countSmileys({});
    std::cout << countSmileys({":D", ":~)", ";~)", ":)"});
    std::cout << countSmileys({":)", ":(", ":D", ":O", ":;"});  
    std::cout << countSmileys({";]", ":[", ";*", ":$", ";-D"});
  return 0;
}