// NODE STRUCTURE
struct Node 
{
    int data;
    struct Node* next;
};

// CREATE A NODE
struct Node* createNode(int value)
{
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->=NULL;
    return newNode;
}

//INSERT AT BEGINNING
void insertAtBeginning(struct Node** head, int value)
{
    struct Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

// DISPLAY ALL
void display(struct Node* head)
{
    struct Node* current = head;
    while(current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

//DELETE BY VALUE
void deleteByValue(struct Node** head, int value)
{
    if (*head == NULL) return ;

    if ((*head)->data == value)
        {
            struct Node* temp = *head;
            *head = (*head)->next;
            free(temp);
            return;
        }

        struct Node* current = *head;
        while (current->next != NULL && current->next->data != value)
        {
            current = current->next->next;
        }
        if (current->next != NULL)
        {
            struct Node* temp = current->next;
            current->next = current->next->next;
            free(temp);
        }
}

// SEARCH
int search(struct Node* head, int value)
{
    struct Node* current = head;
    while (current != NULL)
    {
        if(current->data == value) return 1;
        current = current->next;
    }
    return 0;
}