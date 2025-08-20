//Sum of Geometric Series O(1)
#include <stdio.h>
#include <math.h>
int sum_geo_series_formula(int a, int r, int n) {
    if (r == 1)
        return a * n;
    return (a * (pow(r, n) - 1)) / (r - 1);
}

int main() {
    int a, r, n;
    printf("Enter the first term (a): ");
    scanf("%d", &a);
    printf("Enter the common ratio (r): ");
    scanf("%d", &r);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    int result = sum_geo_series_formula(a, r, n);
    printf("Sum of geometric series = %d\n", result);

    return 0;
}

//Sum of geo series O(n)
#include <stdio.h>

int sum(int a, int r, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a;
        a *= r;
    }
    return sum;
}

int main() {
    int a, r, n;

    printf("Enter the first term : ");
    scanf("%d", &a);
    printf("Enter the common ratio : ");
    scanf("%d", &r);
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    int result = sum(a, r, n);
    printf("Sum = %d\n", result);

    return 0;
}

//BST

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int item) {
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* node, int value) {
    if (node == NULL)
        return newNode(value);

    if (value < node->data)
        node->left = insert(node->left, value);
    else if (value > node->data)
        node->right = insert(node->right, value);

    return node;
}

void inorder(struct node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d -> ", root->data);
    inorder(root->right);
}

int main() {
    struct node* root = NULL;
    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter %d values to insert into BST:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("\nInorder traversal of the BST:\n");
    inorder(root);
    printf("NULL\n");

    return 0;
}

