#include <iostream>
#define op_io ios_base::sync_with_stdio(0);cin.tie(0);
#define MAX_N 1002
#define MOD 1000000000
using namespace std;

int E[MAX_N][MAX_N];
typedef long int LI;

//top-down
LI espirales(int m,int n){
    if(m == 1)return n;
    if(n == 1) return m;
    if(E[m][n] != 0) return E[m][n];
    else return E[m][n] = (espirales(m-1,n) + espirales(m,n-1) + 1)%MOD;
}
//Bottom-up
LI solve(int m,int n){
    for(int i=1;i<=m;i++){
        E[i][1] = i;
    }
    for(int i=1;i<=n;i++){
        E[1][i] = i;
    }
    for(int i=2;i<=m;i++){
        for(int j=2;j<=n;j++){
            E[i][j] = (E[i-1][j] + E[i][j-1] + 1)%MOD;
        }
    }
    return E[m][n];
}
int main(){
    op_io
    int m,n;
    cin>>m>>n;
    cout << solve(m,n) << endl;
    return 0;
}
