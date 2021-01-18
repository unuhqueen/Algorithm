#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<tuple<int, int, int>> students;
    
    for(int i = 1; i <= n; i++){
    	int h, w;
    	cin >> h >> w;
        students.push_back(make_tuple(-h, -w, i));
    }
    
    sort(students.begin(), students.end());
    
    for(int i = 0; i < n; i++) {
		int h, w, num;
		tie(h, w, num) = students[i];
		cout << -h << " " << -w << " " << num << endl;
	}
    
    return 0;
}
