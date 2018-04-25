#include <stdlib.h>
#include <stdio.h>

// #include <iostream>
// #include <algorithm>

void sort(int[] arr, int N);

int main(){
    int N;//총 회의의 수
    int* s, *f;
    int result_num=0;
    int time, count=0;
    
    scanf("%d", &N);
    
    *s=(int*)malloc(N*sizeof(int));
    *f=(int*)malloc(N*sizeof(int));
    
    for(int i=0; i<N; i++){
        scanf("%d %d",&s[i],&f[i]);
    }
    
    
    time = f[0];
    //f[]를 솔트 시키고, 
    // 그 안에서 f[0]의 위치를 보고
    // 노노
    //s[]만 소트 시키자. 그리고 time이 어딜 넘는게 뭔지들 보고, 그 안에서 또 다시 가장 f[]이 빠른거 하면되지
    sort(s,N);
    
    for(int i=0; i<N; i++){

        if
            
    }
    
    
    
    return 0;
    
}

void sort(int[] arr, int N){
    int temp;
    for(int i=0; i<N; i++){
        for(int j=1; j<N-1-i, j++){
            if(arr[j] < arr[j-1]){
                arr[j] = temp;
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        } 
    }
}