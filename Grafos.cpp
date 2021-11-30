#include <iostream>
#include <list>
using namespace std;

class grafo{
public:
    list<int> *listaadyacente;
    int n;
    grafo(int v){
        listaadyacente=new list<int> [v];
        n=v;
    }

    void borde(int u,int v,bool vi){
        listaadyacente[u].push_back(v);
        if(vi){
            listaadyacente[v].push_back(u);
        }
    }

    void imprimir(){
        for(int i=0;i<n;i++){
            cout<<i<<"--> ";
            for(auto it:listaadyacente[i]){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }


};

int main() {
    grafo g(5);
    g.borde(1,2,true);
    g.borde(4,2,true);
    g.borde(1,3,true);
    g.borde(4,3,true);
    g.borde(1,4,true);

    g.imprimir();
}