#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n ;
    cin>> n ; 
    int a[n] ; 
    int max = 0 ; 
    int t = 0 ;
    for(int i=0 ; i<n ; i++){
        cin>>a[i] ;
        if(a[i]>max){
            max = a[i] ; 
                        
        } 
    }
    for(int i=0 ; i<n ; i++){
        if(max==a[i]){
             t++ ; 
                        
        } 
    }
    cout<<t ; 
}
