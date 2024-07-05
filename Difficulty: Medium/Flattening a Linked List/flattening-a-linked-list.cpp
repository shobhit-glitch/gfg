//{ Driver Code Starts
#include <bits/stdc++.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};

using namespace std;

void printList(Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
}

Node* flatten(Node* root);

int main(void) {

    int t;
    cin >> t;
    while (t--) {
        int n, m, flag = 1, flag1 = 1;
        struct Node* temp = NULL;
        struct Node* head = NULL;
        struct Node* pre = NULL;
        struct Node* tempB = NULL;
        struct Node* preB = NULL;
        cin >> n;
        int work[n];
        for (int i = 0; i < n; i++)
            cin >> work[i];
        for (int i = 0; i < n; i++) {
            m = work[i];
            --m;
            int data;
            scanf("%d", &data);
            temp = new Node(data);
            temp->next = NULL;
            temp->bottom = NULL;

            if (flag) {
                head = temp;
                pre = temp;
                flag = 0;
                flag1 = 1;
            } else {
                pre->next = temp;
                pre = temp;
                flag1 = 1;
            }
            for (int j = 0; j < m; j++) {

                int temp_data;
                scanf("%d", &temp_data);
                tempB = new Node(temp_data);

                if (flag1) {
                    temp->bottom = tempB;
                    preB = tempB;
                    flag1 = 0;
                } else {
                    preB->bottom = tempB;
                    preB = tempB;
                }
            }
        }
        Node* fun = head;
        Node* fun2 = head;

        Node* root = flatten(head);
        printList(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

/*  Function which returns the  root of
    the flattened linked list. */
Node *flatten(Node *root) {
    // Your code here
   
    if(root==NULL){
        return NULL;
    }
    vector<int> v;
    Node* trav=root;
    while(trav!=NULL){
        v.push_back(trav->data);
        Node* travbot=trav;
        while(travbot->bottom){
            travbot=travbot->bottom;
            v.push_back(travbot->data);
        }
        trav=trav->next;
    }
    sort(v.begin(),v.end());
    //for(int i=0;i<v.size();i++){
     //   cout<<v[i]<<endl;
    //}
    
    int n=v.size();
    Node* head = new Node(v[0]);
        Node* prev=head;
        for(int i=1;i<n;i++){
            Node* temp=new Node(v[i]);
            prev->bottom=temp;
            prev=temp;
        }
        return head;
}
