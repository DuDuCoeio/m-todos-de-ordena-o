#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10

// Defini��o da estrutura do n� da lista encadeada
typedef struct Node {
    int key;
    int value;
    struct Node* next;
} Node;

// Defini��o da estrutura da tabela hash
typedef struct HashTable {
    Node* table[TABLE_SIZE];
} HashTable;

// Fun��o para criar um novo n� da lista encadeada
Node* createNode(int key, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// Fun��o para criar uma nova tabela hash
HashTable* createHashTable() {
    HashTable* newHashTable = (HashTable*)malloc(sizeof(HashTable));
    for (int i = 0; i < TABLE_SIZE; i++) {
        newHashTable->table[i] = NULL;
    }
    return newHashTable;
}

// Fun��o para calcular o �ndice da tabela hash usando a fun��o de dispers�o
int hashFunction(int key) {
    return key % TABLE_SIZE;
}

// Fun��o para inserir um elemento na tabela hash
void insert(HashTable* hashTable, int key, int value) {
    int index = hashFunction(key);
    Node* newNode = createNode(key, value);

    // Verifica se j� existe um n� no �ndice da tabela
    if (hashTable->table[index] == NULL) {
        hashTable->table[index] = newNode;
    } else {
        // Se j� existir um n�, insere o novo n� no in�cio da lista encadeada
        newNode->next = hashTable->table[index];
        hashTable->table[index] = newNode;
    }
}

// Fun��o para buscar um elemento na tabela hash
int search(HashTable* hashTable, int key) {
    int index = hashFunction(key);
    Node* currentNode = hashTable->table[index];

    // Percorre a lista encadeada para buscar a chave
    while (currentNode != NULL) {
        if (currentNode->key == key) {
            return currentNode->value;
        }
        currentNode = currentNode->next;
    }

    return -1; // Elemento n�o encontrado
}

int main() {
    HashTable* hashTable = createHashTable();

    insert(hashTable, 11, 100);
    insert(hashTable, 22, 200);
    insert(hashTable, 33, 300);

    printf("Valor encontrado para a chave 11: %d\n", search(hashTable, 11));
    printf("Valor encontrado para a chave 22: %d\n", search(hashTable, 22));
    printf("Valor encontrado para a chave 33: %d\n", search(hashTable, 33));
    printf("Valor encontrado para a chave 44: %d\n", search(hashTable, 44));

    return 0;
}
