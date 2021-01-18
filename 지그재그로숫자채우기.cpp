#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
     
    int grid[n][m] = {}, count = 0;
    
    for(int i = 0; i < m; i++){
        if(i % 2 == 0){
            for(int j = 0; j < n; j++){
                grid[j][i] = count;
                count++;
            }
        }
        else {
            for(int j = n-1; j >= 0; j--){
                grid[j][i] = count;
                count++;
            }
        }
    }
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}


