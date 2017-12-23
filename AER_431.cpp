#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)!=EOF && n){
        priority_queue<int> res;
        for(int i=0;i<n;i++){
            int m, b; scanf("%d %d",&m, &b);
            int best = -1;
            for(int i=0;i<m;i++){
                int x; scanf("%d",&x);
                best = max(best, x*b);
            }
            res.push(best);
        }
        bool first = true;
        while(!res.empty()){
            if(!first) printf(" ");
            printf("%d", res.top());
            res.pop();
            first = false;
        }
        printf("\n");
    }
    return 0;
}
