#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int total = 0;
typedef struct Node {
    char name[50];
    char author[40];
    int count;
    struct Node* next;
} Node;

Node* createNode(const char* name, const char* author) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->name, name);
    strcpy(newNode->author, author);
    newNode -> count = 1;
    newNode->next = NULL;
    return newNode;
}

void insertNode(Node** head, Node* newNode, int count) {
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

int check(Node *head, char *name, char *author){
	if(head == NULL)
		return 1;
	Node *iter = head;
	while(iter != NULL){
		if(strcmp(iter -> name, name) == 0 && strcmp(iter -> author, author) == 0){
			iter -> count++;
			return 0;
		}
		iter = iter -> next;
	}
	return 1;
}

void del(Node **head, char *name, char *author){
	if(*head == NULL){
		printf("Liste bos, silme islemi yapilamaz!!!");
		return;
	}
	Node *iter = *head;
	while(iter != NULL){
		if(strcmp(iter -> name, name) == 0 && strcmp(iter -> author, author) == 0){
			if(iter -> count > 1){
				iter -> count--;
				return;
			}
			else{
                if (*head == iter) {
                    *head = iter->next;
                } else {
                    Node* prev = *head;
                    while (prev->next != iter) {
                        prev = prev->next;
                    }
                    prev->next = iter->next;
                }
                free(iter);
                return;
            }
		}
		iter = iter -> next;
	}
	
}

void saveToFile(Node *head, char *fileName){
	FILE *file = fopen(fileName, "w");
	if(file == NULL){
		printf("Dosya acma hatasi!\n");
		return;
	}
	Node *current = head;
	while(current != NULL){
		total += current -> count;
		fprintf(file, "%s-%s-%d\n", current -> name, current -> author, current -> count);
		current = current -> next;
	}
	fclose(file);
}

void printList(Node* head) {
    if (head == NULL) {
        printf("Liste bos.\n");
        return;
    }

    Node* current = head;
    while (current != NULL) {
        printf("Kitap Adi: %s\n", current->name);
        printf("Yazari: %s\n", current->author);
        printf("Adeti : %d\n", current -> count);
        printf("----------------\n");
        current = current->next;
    }
}

void freeList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL;
    int choice;
    char name[50];
    char author[40];
	FILE *file = fopen("Kitaplar.txt", "r");
	if (file == NULL) {
        printf("Dosya açma hatasý!\n");
        return 1;
    }
    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        char* name = strtok(line, "-");
        if (name != NULL) {
            char* author = strtok(NULL, "-");
            int count = atoi(strtok(NULL, "-"));
            insertNode(&head, createNode(name, author), count);
        }
    }
    while (1) {
        printf("\nYapmak istediginiz islemi secin:\n");
        printf("1 - Kitap Ekle\n");
        printf("2 - Kitaplari Listele\n");
        printf("3 - Kitap Sil\n");
        printf("4 - Cikis\n");
        printf("Secim: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                printf("Kitap Adi: ");
                fscanf(stdin, " %[^\n]s", name);
                printf("Yazari: ");
                fscanf(stdin, " %[^\n]s", author);
                int flag = check(head, name, author);
                if(flag == 1)
                	insertNode(&head, createNode(name, author), 1);
                printf("Kitap basariyla eklendi.\n");
                break;
            case 2:
                printf("Kitaplar:\n");
                printList(head);
                break;
            case 3:
            	printf("Kitap Adi: ");
                fscanf(stdin, " %[^\n]s", name);
                printf("Yazari: ");
                fscanf(stdin, " %[^\n]s", author);
                del(&head, name, author);
            	break;
            case 4:
            	saveToFile(head, "Kitaplar.txt");
                freeList(head);
                printf("Programdan cikiliyor.\n");
                printf("Toplam kitap sayisi = %d", total);
                return 0;
            default:
                printf("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n");
        }
    }
    return 0;
}

