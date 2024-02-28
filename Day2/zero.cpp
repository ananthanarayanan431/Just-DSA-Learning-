

#include<bits/stdc++.h>

using namespace std;    

vector<vector<int>> matrix(vector<vector<int>> &arr, int r,int c) {

    int col0 = 1;
    for (int i=0; i<r; ++i) {
        for (int j=0; j<c; ++j) {
            if (arr[i][j]==0) {
                arr[i][0] = 0;

                if (j!=0) {
                    arr[0][j] = 0;
                } else {
                    col0 = 0;
                }
            }
        }
    }

    if(arr[0][0]==0) {
        for(int i=0; i<c; ++i) {
            arr[0][i] = 0;
        }
    }

    if (col0==0) {
        for (int i=0; i<r; ++i) {
            arr[i][0] = 0;
        }
    }

    for (int i=1; i<r; ++i) {
        for (int j=1; j<c; ++j) {
            if (arr[i][0]==0 || arr[0][j]==0) {
                arr[i][j] = 0;
            }
        }
    }

    return arr;
}

int main() {

    int r,c;
    cin>>r>>c;

    vector<vector<int>> arr(r, vector<int>(c, 0));
    for (int i=0; i<r; ++i) {
        for (int j=0; j<c; ++j) {
            cin>>arr[i][j];
        }
    }

    arr = matrix(arr,r,c);

    for (int i=0; i<r; ++i) {
        for (int j=0; j<c; ++j) {
            cout<<arr[i][j] << " ";
        }
        cout<<endl;
    }
}