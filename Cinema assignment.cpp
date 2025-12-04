  #include<iostream>
  using namespace std;
  int main()
  {
      const int R = 3;
      const int C = 3;

      int seats[R][C] = {0};
      int T_S = R * C;
      int booked = 0;

      int r, c;

      while (booked < T_S)
      {
          cout << endl << "CINEMA ARRANGEMENT" << endl;
          cout << "     ";
         for (int column = 1; column <= C; column++)
         {
             cout << column << " ";
          }
          cout << endl;

          for (int rows = 0; rows < R; rows++)
          {
             cout << "ROW" << rows + 1 << " ";
              for (int column = 0; column < C; column++)
              {
                 cout << seats[rows][column] << " ";
              }
              cout << endl;
          }

          cout << "Enter row number 1-" << R << ": ";
          cin >> r;
          cout << "Enter seat number 1-" << C << ": ";
          cin >> c;

         
          if (seats[r - 1][c - 1] == 1)
          {
              cout << "SEAT RESERVED" << endl;
          }
         else
          {
              seats[r - 1][c - 1] = 1;
             booked++;
              cout << "SEAT BOOKED" << endl;
         }
      }

      cout << endl << "All SEATS BOOKED!" << endl;

      return 0;
 }
