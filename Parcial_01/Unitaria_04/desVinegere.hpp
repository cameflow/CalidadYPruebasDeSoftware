#include <iostream>
#include <string>

class desVinegere{

  std::string descypher(std::string t, std::string k);

};

std::string desVinegere::descypher(std::string t, std::string k)
{
  std::string text = t;
  std::string key = k;
  std::string desText = "";
  int cont = 0;
  int c;
  char x;
  for (int i=0; i<text.size(); i++)
  {
    if(text[i] != ' ')
    {
      if(cont == key.size())
      {
        cont = 0;
      }
      c = text[i] - key[cont];
      if(c<0)
      {
        c += 26;
      }
      c += 65;
      x = c;
      desText += x;
      cont++;
    }
    else
    {
      desText += ' ';
    }
  }
  std::cout << desText << std::endl;
}
