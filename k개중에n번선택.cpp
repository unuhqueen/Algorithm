#include <iostream>
#include <vector>

using namespace std;

int k, n;
vector<int> answer;

void Print(){
    for(int i = 0; i<answer.size(); i++)
        cout << answer[i] << " ";
    cout << endl;
}

void Choose(int curr_num){
    if(curr_num == n+1){
        Print();
        return;
    }
    
    for(int i=1; i<=k; i++){
        answer.push_back(i);
        Choose(curr_num+1);
        answer.pop_back();
    }
    
    return;
    
}

int main(){
    cin >> k >> n;
    
    Choose(1);
    return 0;
}
