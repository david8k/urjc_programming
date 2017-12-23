#include <bits/stdc++.h>

using namespace std;

char a[500],b[500];

int main(){
    int t; scanf("%d",&t);
    while(t--){
        scanf("%s",a); 
        scanf("%s",b); 
        if(strcmp(a, "Luke") == 0 && strcmp(b, "padre") == 0)
            printf("TOP SECRET\n");
        else
            printf("%s, yo soy tu %s\n",a,b);
    }
    return 0;
}
