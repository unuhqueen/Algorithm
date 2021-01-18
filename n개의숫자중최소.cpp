#include <iostream>
#include <climits>

using namespace std;

int main(){
    int num, arr[100];
    cin >> num;
    for (int i = 0; i < num; i++)
        cin >> arr[i];
    
    int min_val = arr[0], count = 0;
    for(int i = 0; i<num; i++){
        if(min_val > arr[i]){
            min_val = arr[i];
        }
    }
    
    for(int i=0; i<num; i++){
        if(arr[i] == min_val){
            count++;
        }
    }
    
    cout << min_val << " " << count;
}
