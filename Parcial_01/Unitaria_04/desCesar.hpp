#include <iostream>
#include <string>

class desCesar {

void descypher(std::string w);

};

void desCesar::descypher(std::string w){
  std::string word = w;
  std::string desWord;
  char c;
  int x = 0;
  for (int i=1; i<27;i++)
  {
    desWord ="";
    for(int j=0; j<word.size(); j++)
    {
      x = word[j]+i;
      if (x>90)
      {
        x -= 26;
      }
      c = x;
      desWord += c;
    }
    std::cout << desWord << std::endl;
  }
}
