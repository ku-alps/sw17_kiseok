#include <iostream>
using namespace std;
bool **arr;
int n, m, ans;

bool dfs(int x){

    for(int i=1;i<=n;i++){
        if(arr[x][i]){
            if(ans==i)
                return true;
            else
                dfs(i);
        }
    }
}
int main(){

    int count=0;
    cin >> n >> m;

    arr = new bool*[n+1];
    for(int i=1;i<=n;i++){
        arr[i] = new bool[n+1];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            arr[i][j] = 0;
        }
    }


    for(int i=0;i<m;i++){
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
    }
    for(int i=1;i<=n;i++){
        ans = i;
        if(dfs(i))
            count++;
    }

    cout << count <<endl;
    delete arr;
    return 0;
}
