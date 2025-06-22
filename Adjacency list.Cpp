#include<iostream>
using namespace std;

struct edge{
    int data;
    struct edge *n;
};

struct vertex{
    int data;
    struct vertex *vertex_link;
    struct edge *edge_link;
};

struct vertex *start = nullptr;

class Graph
{
    private: 
    public:


    //Hyrid function for vertex
    struct vertex *search_vertex(struct vertex *s,int val,struct vertex **pre = nullptr){
        struct vertex *sl = nullptr;
        while(s != nullptr){
            if(s->data == val){
                if(pre) *pre = sl;
                return s;
            }
            sl = s;
            s = s->vertex_link;
        }
        if(pre) *pre = nullptr; //no previous if not found
        return sl;
    }

    //Hybrid function for edge 
    struct edge *search_edge(struct edge *s,int edge,struct edge **pre = nullptr){
        struct edge *sl = nullptr;
        while(s != nullptr){
            if(s->data == edge){
                if(pre) *pre = sl;
                return s;
            }
            sl = s;
            s = s->n;
        }
        if(pre) *pre = nullptr; 
        return sl;
    }


    // This is start of insertion of vertex         
    void insert_vertex(int ver){
        if(start == nullptr){
            start = new vertex;
            start->data = ver;
            start->vertex_link = nullptr;
            start->edge_link = nullptr;
        }
        else{
            struct vertex *pre = nullptr;
            struct vertex *found = search_vertex(start,ver,&pre); //will return the sl or will return s;
            if(found && found->data == ver){
                cout<<ver<<" Vertex already exits."<<endl;
                return;
            }
            else{
                struct vertex *temp = new vertex;
                found->vertex_link = temp;
                temp->data = ver;
                temp->edge_link = nullptr;
                temp->vertex_link = nullptr;
            }
        }
        cout<<ver<<" is inserted into the graph"<<endl;
    }
    // This is end of insertion of vertex 

    // ---------------------------------------------------------------------------- //

    // This is start of insertion of edge
    void insert_edge(int s,int d){
        if(start == nullptr){
            cout<<"No Vertex is inserted yet."<<endl;
            return;
        }

        //Check for souce vertex
        struct vertex *dummy = nullptr;
        struct vertex *src = search_vertex(start,s,&dummy);
        if(!src || src->data != s){
            cout<<"source vertex : "<<s<<" not found"<<endl;
            return;
        }
        
        //check for destination vertex
        struct vertex *des = search_vertex(start,d,&dummy);
        if(!des || des->data != d){
            cout<<"destination vertex : "<<d<<" not found"<<endl;
            return;
        }
        // Connection edge with the vertex
        struct edge *sl = nullptr;
        struct edge *edge_search = search_edge(src->edge_link,d,&sl);
        if(edge_search && edge_search->data == d){
            cout<<"Connection between "<<s<<" and "<<d<<" Already exits."<<endl;
            return;
        }
        else{
            struct edge *temp = new edge;
            if(edge_search != nullptr){ 
                temp->data = d;
                temp->n = nullptr;
                edge_search->n = temp;
            }
            else{
                src->edge_link = temp;
                temp->data = d;
                temp->n = nullptr;
            }
        }
        cout<<"Edge between "<<s<<" and "<<d<<" Succesfully connected."<<endl;
    }

    //Deletion logic begin here--------------------------------------------------------------

    // delete the edge 

    void delete_edge(int s,int d){

        //src
        struct vertex *src = search_vertex(start,s);
        if(src->data != s){
            cout<<"source vertex : "<<s<<" not found"<<endl;
            return;
        }
        //des
        struct vertex *des = search_vertex(start,d);
        if(des->data != d){
            cout<<"destination vertex : "<<s<<" not found"<<endl;
            return;
        }

        //deletion logic
        struct edge *pre = nullptr;
        struct edge *edge_search = search_edge(src->edge_link,d,&pre);
        if(edge_search->data != d){
            cout<<"Connection between "<<s<<" and "<<d<<" does not exit"<<endl;
            return;
        }
        else{
            if(pre != nullptr) pre->n = edge_search->n;
            else src->edge_link = edge_search->n;
        }
        delete edge_search;
        cout<<s<<" is successfully deleted from "<<d<<endl;
    }
    // //end of deletion logic 

    //delete vertex 
    void delete_vertex(int val){

        //delete that particular vertex with edges
        struct vertex *pre = nullptr;
        struct vertex *search = search_vertex(start,val,&pre);
        if(search->data != val){
            cout<<val<<" vertex does not exit"<<endl;
            return;
        }
        if(pre != nullptr) pre->vertex_link = search->vertex_link;
        else start = search->vertex_link;
        struct edge *dummy = search->edge_link;
        while(dummy != nullptr){
            struct edge *t = dummy;
            dummy = dummy->n;
            delete t;
        }
        delete search;
        cout<<"Deleted upto here"<<endl;
        //we are good upto here

        //delete all other edges of that particular vertex 
        search = start;
        while(search != nullptr){
            struct edge *edge_search = search->edge_link;
            struct edge *sl = nullptr;
            while(edge_search != nullptr){
                if(edge_search->data == val){
                    struct edge *t = edge_search;
                    if(sl == nullptr) search->edge_link = edge_search->n;
                    else sl->n = edge_search->n;
                    edge_search = edge_search->n;
                    delete t;
                }
                else{
                    sl = edge_search;
                    edge_search = edge_search->n;
                }
            }
            search = search->vertex_link;
        }
        cout<<"Vertex "<<val<<" is delted along with its all edges connected everywhere."<<endl;
    }
    
    void insert()
    {
        int n; 
        cout<<"Press 1 to add Vertex \nPress 2 to add Edge : ";
        cin>>n;
        if(n == 1){
            int ver;
            cout<<"Name the vertex : ";
            cin>>ver;
            insert_vertex(ver);
        }
        else if(n ==2){
            int src,des;
            cout<<"Enter the source vertex and destination vertex : ";
            cin>>src>>des;
            insert_edge(src,des);
        }
        else{
            cout<<"Invalid Input.Please try again"<<endl;
        }
    }
    void delte()
    {
        int n; 
        cout<<"Press 1 to delete vertex \nPress 2 to delete Edge : ";
        cin>>n;
        if(n == 1){
            int ver;
            cout<<"Name of vertex you want to delete : ";
            cin>>ver;
            delete_vertex(ver);
        }
        else if(n ==2){
            int src,des;
            cout<<"Enter the source vertex and destination vertex to delete : ";
            cin>>src>>des;
            delete_edge(src,des);
        }
        else{
            cout<<"Invalid Input.Please try again"<<endl;
        }
    }
};

int main(){
    Graph g;
    int choice;
    while(true){
        cout<<"Enter your choice : ";
        cin>>choice;
        if(choice == 1){
            g.insert();
        }
        else if(choice == 3){
            break;
        }
        else if(choice == 2){
            g.delte();
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
}