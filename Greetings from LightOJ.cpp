#include<bits/stdc++.h>

using namespace std;

int main(){
    int case1,ar[2];
    scanf("%d",&case1);
    for (int i = 1; i <= case1; i++) {
        int sum=0;
        for (int j = 0; j < 2; j++) {
            scanf("%d",&ar[j]);
            sum=sum+ar[j];
        }
        printf("Case %d: %d\n",i,sum);
    }
}
