#include<iostream>
#include<string>

void encrypt(std::string& m, int r){
  for(char& c : m){
    if(std::isalpha(c)){
      c = std::tolower(c);
      std::cout << c << ": " << static_cast<int>(c) << std::endl;
      c = ((c-'a' + r)%26) + 'a';

    }
  }
}

int main(){
  std::string msg {};
  auto rot {0};

  std::cout << "Your secrect message: ";
  std::getline(std::cin, msg);
  std::cout << "Your secret key: ";
  std::cin >> rot;

  encrypt(msg, rot);
  std::cout << "The ecoded message:  " << msg << std::endl;
  
}
