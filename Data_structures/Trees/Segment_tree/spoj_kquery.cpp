#include <bits/stdc++.h>
using namespace std;

struct Query{
    int x,y,k,num;
};

struct Element{
    int val, ind;
};

bool compareElement(Element a, Element b){
    return a.val<b.val;
}

bool compareQuery(Query a, Query b){
    return a.k<b.k;
}

int build(int si, int ss, int se){
    if(ss>se) return 0;
    if(ss==se) return 1;
    int mid=(ss+se)>>1;
    

}

int main(){
    int n,q;
    cin>>n;
    vector<Element> a(n);
    for(int i=0; i<n; i++){
        int v;
        cin>>v;
        a[i].val = v;
        a[i].ind = i;
    }
    sort(a.begin(), a.end(), compareElement);
    cin>>q;
    vector<Query> queries(q);
    for(int i=0; i<n; i++){
        int x, y, k;
        cin >> x >> y >> k;
        queries[i].x = x - 1;
        queries[i].y = y - 1;
        queries[i].k = k;
        queries[i].num = i;
    }
    sort(queries.begin(), queries.end(), compareQuery);
}