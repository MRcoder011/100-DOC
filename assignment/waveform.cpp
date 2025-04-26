#include <iostream>
#include <vector>
using namespace std;

/*void wavePrint(vector<vector<int>> v) {
    int m = v.size();
    int n = v[0].size();
    
    for (int startcol = 0; startcol < n; startcol++) {
        if ((startcol & 1) == 0) {
            for (int i = 0; i < m; i++) {
                cout << v[i][startcol] << " ";
            }
        } else {
            for (int i = m - 1; i >= 0; i--) {
                cout << v[i][startcol] << " ";
            }
        }
    }
}
*/
void wavePrint(vector<vector<int>> v){
    int m = v.size();
    int n = v[0].size();
    for(int startrow = 0; startrow <m ; startrow++){
        if((startrow & 1)== 0){
            for (int j=0; j<n; j++){
                cout<< v[startrow][j]<< " ";

            } 
        }
            else{
                for (int j=n-1; j>=0; j--){
                    cout<< v[startrow][j] << " ";
                }
            }
        }
    }




int main() {
    vector<vector<int>> v {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    wavePrint(v);
    return 0;
}
