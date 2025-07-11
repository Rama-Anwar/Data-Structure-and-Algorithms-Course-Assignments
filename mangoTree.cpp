#include<iostream>
using namespace std;

// using brute force approach O(n^4)
int mangoTree(char arr[][100], int n){
    int ans = 0;
    for(int row = 0; row < n-1; row++){
        for(int col = 0; col < n-1; col++){
            int s1 = 0, s2 = 0, s3 = 0, s4 = 0;
            
            for (int i = 0; i <= row; i++){
                for(int j = 0; j <= col; j++){
                    if(arr[i][j] == '#'){
                        s1++;
                    }
                }
            }

            for(int i = 0; i <= row; i++){
                for(int j = col + 1; j < n; j++){
                    if(arr[i][j] == '#'){
                        s2++;
                    }
                }
            }

            for(int i = row + 1; i < n; i++){
                for(int j = col + 1; j < n; j++){
                    if(arr[i][j] == '#'){
                        s3++;
                    }
                }
            }

            for(int i = row + 1; i < n; i++){
                for(int j = 0; j <= col; j++){
                    if(arr[i][j] == '#'){
                        s4++;
                    }
                }
            }
            int minimum = min(s1, min(s2,min(s3,s4)));
            ans = max(minimum, ans);
        }
    }
    return ans;
}

// using a prefix array O(n^2) + O(n^2) = O(n^2)
int mangoTree2(char arr[][100], int n){
    int temp[100][100];
    int ans = 0;

    //first column
    for(int row = 0; row < n; row++){
        temp[row][0] = (arr[row][0] == '#') ? 1 : 0;
        if (row != 0){
            temp[row][0] += temp[row-1][0];
        }
    }
    //first row
    for(int col = 0; col < n; col++){
        temp[0][col] = (arr[0][col] == '#') ? 1 : 0;
        if (col != 0){
            temp[0][col] += temp[0][col-1];
        }
    }
    //rest of array
    for(int row = 1; row < n; row++){
        for(int col = 1; col < n; col++){
            if(arr[row][col] == '#')
                temp[row][col] = 1 + temp[row-1][col] + temp[row][col-1] - temp[row-1][col-1];
            else
                temp[row][col] = temp[row-1][col] + temp[row][col-1] - temp[row-1][col-1];

        }
    }

    for(int i = 0; i < n-1; i++){
        int s1, s2, s3, s4;
        int minimum;
        for(int j = 0; j < n-1; j++){
            s1 = temp[i][j];
            s2 = temp[i][n-1] - s1;
            s3 = temp[n-1][j] - s1;
            s4 = temp[n-1][n-1] - s1 - s2 - s3;
            minimum = min(s1, min(s2, min(s3,s4)));
            ans = max(ans, minimum);
        }
    }
    return ans;
}


int main(){
    char arr[100][100];
    int n;
    cout << "Enter the  of rows and columns";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
        cin >> arr[i][j];
    }
    cout << mangoTree(arr, n) << endl;
    cout << mangoTree2(arr, n) << endl;


}