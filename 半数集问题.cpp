#include <iostream>
#include "fstream"
using namespace std;

int set(int m){
    int i,count=1;
    for(i=1;i<=m/2;i++){
        count=count+set(i); //该方法存在重复计算
    }
    return count;
}

int main()
{
    ifstream fin;
    fin.open("input.txt");
    ofstream fout("output.txt");
    int n;
    fin>>n;
    //printf("%d",n);
    fout<<set(n)<<endl;
    fin.close();
    fout.close();
    return 0;
}



#include <iostream>
#include "fstream"
using namespace std;

int a[1000];
int set(int n){
    int i;
    for(i=2;i<=n;i++){
        if(i%2==0){
            a[i]=a[i/2]+a[i-1];
        }else{
            a[i]=a[i-1];
        }
    }
    return a[n];
}
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n,i;
    fin>>n;
    a[1]=1;
    for(i=2;i<=n;i++){
        a[i]=0;
    }
    //cout<<set(n);
    fout<<set(n)<<endl;
    fin.close();
    fout.close();
    return 0;
}
