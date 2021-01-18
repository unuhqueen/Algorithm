#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string input_str;
    int request_num;
    cin >> input_str >> request_num;
    
    int arr[1000];
    
    for(int i = 0; i <request_num; i++){
        cin >> arr[i];
    }
    
    int str_size = input_str.size();
    int first;
    
    for(int i=0; i<request_num; i++){
        switch(arr[i]){
            case 1:
                first = input_str[0];
                for (int i=1; i<str_size; i++){
                    input_str[i-1] = input_str[i];
                }
                input_str[str_size-1] = first;
                cout << input_str << endl;
                break;
            case 2:
                first = input_str[str_size-1];
                for (int i=str_size-2; i>=0; i--){
                    input_str[i+1] = input_str[i];
                }
                input_str[0] = first;
                cout << input_str << endl;
                break;
            case 3:
                reverse(input_str.begin(), input_str.end());
                cout << input_str << endl;
                break;
        }
    }
}
