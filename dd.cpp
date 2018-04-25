#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Max(int x, int y);
int main(){

    int x, input, sum;
    
    cin>>x;
    vector<int> stair(x+1);//계단[넘버]=점수
    vector<int> d(x+1);

    stair[0]=0;
    for(int i=1; i<x+1; i++){
        cin>>input;
        stair[i]=input;
    }

    d[0]=0;
    //d[1]=Max(stair[1],stair[2]);
    d[1]=stair[1];
    d[2]=Max(stair[1]+stair[2],stair[1]);

    for(int i=3;i<x+1;i++){

        d[i]=Max(stair[i]+d[i-2], stair[i]+stair[i-1]+d[i-3]);
    }

    cout<<d[x];

    return 0;
}
int Max(int x, int y){

    return x > y ? x : y;
}