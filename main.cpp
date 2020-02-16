

#include <iostream>

void map(char feld[3][3], char symb, int x,int y){
  feld[x][y] = symb;
  std::cout << feld[0][0] << " | " << feld[1][0] << " | " << feld[2][0] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][1] << " | " << feld[1][1] << " | " << feld[2][1] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][2] << " | " << feld[1][2] << " | " << feld[2][2] << "\n\n";
}

int main(){  
  int x, y;
  std::string player1;
  std::string player2;
  char feld[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

  std:: cout << "[X] Playername: \n";
  std::cin >> player1;
  std:: cout << "[O] Playername: \n";
  std::cin >> player2;
  map(feld,' ', 0, 0);

  // Round 1
  std:: cout << "[X] Gib bitte die X Variable ein " << player1 << ": \n";
  std::cin >> x;
  std:: cout << "[X] Gib bitte die Y Variable ein " << player1 << ": \n";
  std::cin >> y;
  map(feld,'X', x, y);

  std:: cout << "[O] Gib bitte die X Variable ein " << player2 << ": \n";
  std::cin >> x;
  std:: cout << "[0] Gib bitte die Y Variable ein " << player2 << ": \n";
  std::cin >> y;
  map(feld,'O', x, y);

  // Round 2
  std:: cout << "[X] Gib bitte die X Variable ein " << player1 << ": \n";
  std::cin >> x;
  std:: cout << "[X] Gib bitte die Y Variable ein " << player1 << ": \n";
  std::cin >> y;
  map(feld,'X', x, y);

  std:: cout << "[O] Gib bitte die X Variable ein " << player2 << ": \n";
  std::cin >> x;
  std:: cout << "[0] Gib bitte die Y Variable ein " << player2 << ": \n";
  std::cin >> y;
  map(feld,'O', x, y);

  // Round 3
  std:: cout << "[X] Gib bitte die X Variable ein " << player1 << ": \n";
  std::cin >> x;
  std:: cout << "[X] Gib bitte die Y Variable ein " << player1 << ": \n";
  std::cin >> y;
  map(feld,'X', x, y);

  std:: cout << "[O] Gib bitte die X Variable ein " << player2 << ": \n";
  std::cin >> x;
  std:: cout << "[0] Gib bitte die Y Variable ein " << player2 << ": \n";
  std::cin >> y;
  map(feld,'O', x, y);

  // Round 4
  std:: cout << "[X] Gib bitte die X Variable ein " << player1 << ": \n";
  std::cin >> x;
  std:: cout << "[X] Gib bitte die Y Variable ein " << player1 << ": \n\n";
  std::cin >> y;
  map(feld,'X', x, y);

  std:: cout << "[O] Gib bitte die X Variable ein " << player2 << ": \n";
  std::cin >> x;
  std:: cout << "[0] Gib bitte die Y Variable ein " << player2 << ": \n\n";
  std::cin >> y;
  map(feld,'O', x, y);
}
