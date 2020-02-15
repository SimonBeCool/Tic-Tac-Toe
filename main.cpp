#include <iostream>

int main(){
  // Variablen und Datentypen  
  std::string player1;
  std::string player2;
  int x;
  int x1;
  int x2;
  int x3;
  int y;
  int y1;
  int y2;
  int y3;

  int ox;
  int oy;
  int ox1;
  int oy1;
  int ox2;
  int oy2;
  int ox3;
  int oy3;

  std:: cout << "[X] Playername: \n";
  std::cin >> player1;
  std:: cout << "[O] Playername: \n";
  std::cin >> player2;

  char feld[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
  std::cout << feld[0][0] << " | " << feld[1][0] << " | " << feld[2][0] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][1] << " | " << feld[1][1] << " | " << feld[2][1] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][2] << " | " << feld[1][2] << " | " << feld[2][2] << "\n\n";

  // Round 1
  std:: cout << "[X] Gib bitte die X Variable ein " << player1 << ": \n";
  std::cin >> x;
  std:: cout << "[X] Gib bitte die Y Variable ein " << player1 << ": \n";
  std::cin >> y;

  feld[x][y] = 'X';
  std::cout << feld[0][0] << " | " << feld[1][0] << " | " << feld[2][0] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][1] << " | " << feld[1][1] << " | " << feld[2][1] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][2] << " | " << feld[1][2] << " | " << feld[2][2] << "\n\n";

  std:: cout << "[O] Gib bitte die X Variable ein " << player2 << ": \n";
  std::cin >> ox;
  std:: cout << "[0] Gib bitte die Y Variable ein " << player2 << ": \n";
  std::cin >> oy;

  feld[x][y] = 'X';
  feld[ox][oy] = 'O';
  std::cout << feld[0][0] << " | " << feld[1][0] << " | " << feld[2][0] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][1] << " | " << feld[1][1] << " | " << feld[2][1] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][2] << " | " << feld[1][2] << " | " << feld[2][2] << "\n\n";

  // Round 2
  std:: cout << "[X] Gib bitte die X Variable ein " << player1 << ": \n";
  std::cin >> x1;
  std:: cout << "[X] Gib bitte die Y Variable ein " << player1 << ": \n";
  std::cin >> y1;
  feld[x][y] = 'X';
  feld[ox][oy] = 'O';
  feld[x1][y1] = 'X';
  std::cout << feld[0][0] << " | " << feld[1][0] << " | " << feld[2][0] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][1] << " | " << feld[1][1] << " | " << feld[2][1] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][2] << " | " << feld[1][2] << " | " << feld[2][2] << "\n\n";

  std:: cout << "[O] Gib bitte die X Variable ein " << player2 << ": \n";
  std::cin >> ox1;
  std:: cout << "[0] Gib bitte die Y Variable ein " << player2 << ": \n";
  std::cin >> oy1;

  feld[x][y] = 'X';
  feld[ox][oy] = 'O';
  feld[x1][y1] = 'X';
  feld[ox1][oy1] = 'O';
  std::cout << feld[0][0] << " | " << feld[1][0] << " | " << feld[2][0] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][1] << " | " << feld[1][1] << " | " << feld[2][1] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][2] << " | " << feld[1][2] << " | " << feld[2][2] << "\n\n";

  // Round 3
  std:: cout << "[X] Gib bitte die X Variable ein " << player1 << ": \n";
  std::cin >> x2;
  std:: cout << "[X] Gib bitte die Y Variable ein " << player1 << ": \n";
  std::cin >> y2;

  feld[x][y] = 'X';
  feld[ox][oy] = 'O';
  feld[x1][y1] = 'X';
  feld[ox1][oy1] = 'O';
  feld[x2][y2] = 'X';
  std::cout << feld[0][0] << " | " << feld[1][0] << " | " << feld[2][0] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][1] << " | " << feld[1][1] << " | " << feld[2][1] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][2] << " | " << feld[1][2] << " | " << feld[2][2] << "\n\n";

  std:: cout << "[O] Gib bitte die X Variable ein " << player2 << ": \n";
  std::cin >> ox2;
  std:: cout << "[0] Gib bitte die Y Variable ein " << player2 << ": \n";
  std::cin >> oy2;

  feld[x][y] = 'X';
  feld[ox][oy] = 'O';
  feld[x1][y1] = 'X';
  feld[ox1][oy1] = 'O';
  feld[x2][y2] = 'X';
  feld[ox2][oy2] = 'O';
  std::cout << feld[0][0] << " | " << feld[1][0] << " | " << feld[2][0] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][1] << " | " << feld[1][1] << " | " << feld[2][1] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][2] << " | " << feld[1][2] << " | " << feld[2][2] << "\n\n";

  // Round 4
  std:: cout << "[X] Gib bitte die X Variable ein " << player1 << ": \n";
  std::cin >> x3;
  std:: cout << "[X] Gib bitte die Y Variable ein " << player1 << ": \n\n";
  std::cin >> y3;

  feld[x][y] = 'X';
  feld[ox][oy] = 'O';
  feld[x1][y1] = 'X';
  feld[ox1][oy1] = 'O';
  feld[x2][y2] = 'X';
  feld[ox2][oy2] = 'O';
  feld[x3][y3] = 'X';
  std::cout << feld[0][0] << " | " << feld[1][0] << " | " << feld[2][0] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][1] << " | " << feld[1][1] << " | " << feld[2][1] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][2] << " | " << feld[1][2] << " | " << feld[2][2] << "\n\n";

  std:: cout << "[O] Gib bitte die X Variable ein " << player2 << ": \n";
  std::cin >> ox3;
  std:: cout << "[0] Gib bitte die Y Variable ein " << player2 << ": \n\n";
  std::cin >> oy3;

  feld[x][y] = 'X';
  feld[ox][oy] = 'O';
  feld[x1][y1] = 'X';
  feld[ox1][oy1] = 'O';
  feld[x2][y2] = 'X';
  feld[ox2][oy2] = 'O';
  feld[x3][y3] = 'X';
  feld[ox3][oy3] = 'O';
  std::cout << feld[0][0] << " | " << feld[1][0] << " | " << feld[2][0] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][1] << " | " << feld[1][1] << " | " << feld[2][1] << "\n";
  std::cout << "-" << " | " << "-" << " | " << "-" << "\n";
  std::cout << feld[0][2] << " | " << feld[1][2] << " | " << feld[2][2] << "\n\n";
}
