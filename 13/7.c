#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} Node;

Node *circle_create(int n);
void count_off(Node *head, int n, int k, int m);

int main() {
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
     scanf("%d%d%d", &n, &k, &m);
    if (m == 1)
    {
        int a = k;
        for (int i = 0; i <= (n - k); i++)
        {
            printf("%d", a);
            a++;
            printf(" ");
        }
        exit(0);
    }
    Node *head = circle_create(n);
    count_off(head, n, k, m);
    return 0;
}

Node *circle_create(int n) {
    Node *temp, *new_node, *head;
    int i;

    // 真真真真真真�
    temp = (Node *) malloc(sizeof(Node));
    head = temp;
    head->data = 1;

    // 真� 2 真 n 真真真真�
    for(i = 2; i <= n; i++) {
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data = i;
        temp->next = new_node;
        temp = new_node;
    }

    // 真真真真真真真真
    temp->next = head;

    return head;
}

void count_off(Node *head, int n, int k, int m) {
    Node *p=head;
    Node *q;
    if(p!=NULL){
    	while(p->data!=k){
        	p=p->next;
        }
        while(p!=p->next){
            int j=1;
            while(j<m-1){
            	p=p->next;
            	++j;
			}
            q=p->next;
            printf("%d ",q->data);
            p->next=q->next;
            free(q);
            q=NULL;
            p=p->next;
        }
        printf("%d",p->data);
    }
    return;
}
