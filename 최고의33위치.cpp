#include <iostream>

using namespace std;

int n;
int grid [20][20];

int GetNumOfGold(int row_s, int col_s, int row_e, int col_e) {
    int num_of_gold = 0;
    for(int i=row_s; i <= row_e; i++){
        for(int j=col_s; j<=col_e; j++){
            num_of_gold += grid[i][j];
        }
    }
    return num_of_gold;
}

int main(){
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> grid[i][j];
        }
    }
    
    int max_gold = 0;
    
    for(int i=0; i<n; i++){
        for(int j = 0; j < n; j++){
            if(i+2 >= n || j+2 >= n) continue;
            int num_of_gold = GetNumOfGold(i, j, i+2, j+2);
            max_gold = max(max_gold, num_of_gold);
        }
    }
    
    cout << max_gold;
}
