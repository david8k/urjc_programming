#include <bits/stdc++.h>

using namespace std;

int count4(int n){
    if(n<5) return n%5==4;
    return count4(n/5)+((n%5)==4);
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x); 
        printf("%s\n",count4(x)>1?"SI":"NO");
    }
    return 0;
}
