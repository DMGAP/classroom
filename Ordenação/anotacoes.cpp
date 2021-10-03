#include<stdio.h>
#include<vector>

using namespace std;

int main() {
    vector<int> s;
    int d, b,c=1;

    while(c<4){
        scanf("%d", &d);
        printf("\nLength : %d\n", s.size());
        s.push_back(d);
        s[c]=d; 
        c++;
    }
    for (int i=1 ; i<=(s.size()); i++){
        printf("\n%d", s[i]);
    }
    s.resize(10);
    printf("\nLength : %d\n", s.size());

    return 0;
}