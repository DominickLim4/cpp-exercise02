#include <iostream>
 
int main() {
 
  // The magic starts here
  int gryffindor, hufflepuff, ravenclaw, slytherin;
  int answer1, answer2, answer3, answer4;

  std::cout << "The Sorting Hat Quiz!\n";

  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";

  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n\n";
  std::cin >> answer1;
  std::cout << "\n";

  switch(answer1){
    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << "Invalid input\n";
      break;
  }

  std::cout << "Q2) Dawn or Dusk?\n\n";

  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n\n";
  std::cin >> answer2;
  std::cout << "\n";

  switch (answer2){
  case 1:
    gryffindor++;
    ravenclaw++;
    break;
  case 2:
    hufflepuff++;
    slytherin++;
    break;
  default:
    std::cout << "Invalid input\n";
    break;
  }

  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";

  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n\n";
  std::cin >> answer3;
  std::cout << "\n";

  switch (answer3){
  case 1:
    slytherin++;
    break;
  case 2:
    hufflepuff++;
    break;
  case 3:
    ravenclaw++;
    break;
  case 4:
    gryffindor++;
    break;
  default:
    std::cout << "Invalid input\n";
    break;
  }

  std::cout << "Q4) Which road tempts you most?\n\n";

  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n\n";
  std::cin >> answer4;
  std::cout << "\n";

  switch (answer4){
  case 1:
    hufflepuff++;
    break;
  case 2:
    slytherin++;
    break;
  case 3:
    gryffindor++;
    break;
  case 4:
    ravenclaw++;
    break;
  default:
    std::cout << "Invalid input\n";
    break;
  }

  int max = 0;
  std::string house;

  if (gryffindor > max) {
 
  max = gryffindor;
  house = "Gryffindor";
 
}
 
if (hufflepuff > max) {
 
  max = hufflepuff;
  house = "Hufflepuff";
 
}
 
if (ravenclaw > max) {
 
  max = ravenclaw;
  house = "Ravenclaw";
 
}
 
if (slytherin > max) {
 
  max = slytherin;
  house = "Slytherin";
 
}
 
std::cout << house << "!\n";


}