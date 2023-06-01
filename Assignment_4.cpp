#include <bits/stdc++.h>
using namespace std;

// void judge()
// {
// 	#ifndef ONLINE_JUDGE
// 		freopen("Input.txt", "r", stdin);
// 		freopen("Output.txt", "w", stdout);
// 	#endif
// }


void printBoard(int N, int** board) {
   for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++)
         cout << board[i][j] << " ";
         cout << endl;
   }
}
bool isValid(int N, int** board, int row, int col) {
   for (int i = 0; i < col; i++) 
      if (board[row][i])
         return false;
   for (int i=row, j=col; i>=0 && j>=0; i--, j--)
      if (board[i][j]) 
         return false;
   for (int i=row, j=col; j>=0 && i<N; i++, j--)
      if (board[i][j]) 
         return false;
   return true;
}
bool solveNQueen(int N, int** board, int col) {
   if (col >= N) 
      return true;
   for (int i = 0; i < N; i++) { 
      if (isValid(N, board, i, col) ) {
         board[i][col] = 1; 
         if ( solveNQueen(N, board, col + 1)) 
            return true;
         board[i][col] = 0;
      }
   }
   return false; 
}
bool checkSolution(int N, int** board) {
   
   for(int i = 0; i<N; i++)
   for(int j = 0; j<N; j++)
   board[i][j] = 0; 
   if ( solveNQueen(N, board, 0) == false ) { 
      cout << "Solution does not exist";
      return false;
   }
   printBoard(N, board);
   return true;
}


signed main() {
   // judge();
   int n; 
   cout << "Enter the Number of queens: " ;
   cin >> n;
   int **board=new int*[n];
   for (int i = 0; i < n; ++i)
   {
       board[i] = new int[n];
   }
   checkSolution(n, board);
}