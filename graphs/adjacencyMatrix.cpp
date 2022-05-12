#include <iostream>
using namespace std;

class AdjacencyMatrix
{
private:
    int nodes;
    int **matrix;

public:
    AdjacencyMatrix(int nodes)
    {
        this->nodes = nodes;
        matrix = new int *[nodes];
        for (int i = 0; i < nodes; i++)
        {
            matrix[i] = new int[nodes];
            for (int j = 0; j < nodes; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    void display()
    {
        for (int i = 0; i < nodes; i++)
        {
            for (int j = 0; j < nodes; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    void addEdge(int origin,int destination){
        if (origin<=0||destination<=0|| origin>nodes|| destination>nodes)
        {
            	cout<<"Invalid edge!\n";
            	return;
        }
        matrix[origin-1][destination-1]=1;
        
    }
};
int main()
{
    AdjacencyMatrix m(5);
    m.addEdge(1,1);
    m.addEdge(1,2);
    m.addEdge(4,3);
    m.addEdge(1,4);
    m.addEdge(1,5); 

    cout<<"First"<<endl;
    m.display(); 

    m.addEdge(1,1);
    m.addEdge(2,2);
    m.addEdge(2,3);
    m.addEdge(4,5);
    m.addEdge(2,5);

    cout<<"Second"<<endl;
    m.display();
    return 0;
}