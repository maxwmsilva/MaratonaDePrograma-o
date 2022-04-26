#include <cstdio>
#include <algorithm>

using namespace std;


int main(){
    int n,i;
    int v[3]; //coloca o vetor de 3 posiçoes ou declara abc

    scanf("%d", &n);
    
    for(i=0;i<n;i++){ //i contador de sequencias
    
    scanf("%d %d %d", &v[0], &v[1], &v[2]);
    //printf("%d %d %d", &v[0], &v[1], &v[2]);

    //ordenação - "da pra usar bumble sort" 

    sort(v, v+3); //ordenacao dos elementos do vetor 

    printf("%d %d %d\n", v[0], v[1], v[2]);
    
    }

    return 0;

}
