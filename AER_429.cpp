#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)!=EOF && n){
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            int x; scanf("%d",&x);
            pq.push(x);
        }
        scanf("%d",&n);
        bool valid = true;
        while(n--){
            int x; scanf("%d",&x);
            if(pq.empty()) continue;
            if(!valid) continue;
            int best = pq.top(); pq.pop();
            best -= x;
            if(best < 0) valid=false;
            pq.push(best);
        }
        printf("%s\n",valid?"SI":"NO");
    }
    return 0;
}
