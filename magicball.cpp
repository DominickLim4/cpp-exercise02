#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

//Magic Ball program

int main() {
  std::cout << "MAGIC 8-BALL\n";

  srand(time(NULL));
  int answer = std::rand() % 10;
  std::cout << answer;
  std::cout << "\n";

  string ask;
  std::cout << "Magic Ball, ";
  std::cin >> ask;

//You'll always have luck :)
  switch(answer){
    case 9:
      std::cout << "It is certain.\n";
      break;
    case 8:
      std::cout << "It is decidedly so.\n";
      break;
    case 7:
      std::cout << "Without a doubt.\n";
      break;
    case 6:
      std::cout << "Yes - definitely.\n";
      break;
    case 5:
      std::cout << "You may rely on it.\n";
      break;
    case 4:
      std::cout << "As I see it, yes.\n";
      break;
    case 3:
      std::cout << "Most likely.\n";
      break;
    case 2:
      std::cout << "Outlook good.\n";
      break;
    case 1:
      std::cout << "Yes.\n";
      break;
    default:
      std::cout << "Signs point to yes.\n";
      break;   
  }



}