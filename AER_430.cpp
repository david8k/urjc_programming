#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)!=EOF && n){
        long long int time = 0;
        for(int i=0;i<n;i++){
            int n,d; scanf("%d %d",&n,&d);
            if(n>time){
                time = n;
            }
            else{
                long long int inf = 0, sup = 1e6+1;
                while(sup-inf>1){
                    long long int mid = (inf+sup)>>1;
                    if(n+(d*mid) > time) sup = mid;
                    else inf = mid;
                }
                time = n+(d*sup);
            }
        }
        printf("%lld\n",time);
    }
    return 0;
}
