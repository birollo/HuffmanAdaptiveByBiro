#include <stdio.h>
#include <malloc.h>

// edit by Bignasca Roberto
// fonte: https://www.geeksforgeeks.org/binary-tree-set-1-introduction/
//MALLOC GUIDE: https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm

struct Node
{
    char ch;
    int weight;
    short value;
    struct Node *left
    struct Node *right;
    struct Node *dad;
};

//Inizializzazione albero
struct node* newNode()
{
    // Allocate memory for new node
    struct node* node = (struct node*)malloc(sizeof(struct node));


    // Initialize dad, left and right children as NULL
    //non so quanto e utile
    node->dad = NULL;
    node->left = NULL;
    node->right = NULL;

    return(node);
}


//devo creare un nuovo nodo perche ho incontrato un nuovo carattere
//richiamare solo quando aggiungo un nuovo carattere

struct Node newNode(struct Node* nyt, char ch)
{
    //il nodo corrente e il NYT quindi
    struct Node *temp =  new struct Node; //padre di NYT e del nuovo ch
    struct Node *foglia = new struct Node; // nodo del nuovo ch

    //aggiornamento puntatori
    temp->dad = nyt->dad;
    nyt->dad = temp;
    temp->left = nyt;
    temp->right = foglia;
    foglia->dad = temp;

    //assegnamento dati
    temp->ch = NULL;
    temp->weight = temp->left->weight + temp->right->weight; //il peso di un nodo e la somma del peso dei figli, se sono NULL spero dia 0
    temp->value = nyt->value;

    foglia->ch = ch;
    foglia->weight = foglia->left + foglia->right;
    foglia->value = temp->value -1;

    nyt->value = temp->value -2;

    return temp;
}



//ricerca per frequenza (utile per il NYT) NYT unico nodo con weight == 0

struct Node SearchForWeight(struct Node* Node, int weight)
{

    if (Node->weight == weight) {
        return Node;
    } else {
        if (Node->Left != NULL) {
            return SearchForWeight(Node->left, weight);
        }
        if (t->Right != NULL) {
            return SearchForWeight(Node->right, weight);
        }
    }

    return NULL;   //in caso non lo trova ritorna NULL forse e meglio fargli ritornare un valore negativo
}

//ricerca per char quando riincontro un carattere

struct Node SearchForChar(struct Node* Node, char ch)
{
    if(Node->ch == ch)
    {
        return Node;
    }
    else
    {

        if(Node->left != NULL) SearchForChar(Node->left, ch);
        if(Node->right != NULL) SearchForChar(Node->Right, ch);
    }

    return NULL;
}


//funzione che ritorna il codice di un carattere  (da concatenare alla codifica)
//forse devo creare il metodo equals oppure identificare se due nodi sono uguali tramite e il value per ora e con il ch
// per ora alla funzione passo l abero e il nodo trovato dal SearchForChar
struct Node CodingNode(struct Node* root, struct Node* node)
{
   //controllo se e a sinistra o destra di suo padre
   if(node->dad->left->value = node->value)
   {
       //si trova a sinistra quindi scirvo il bit "meno significativo" della sua codifica
       //ricorsione
   }
   if(node->dad->right->value = node->value)
   {
       //si trova a destra quindi scirvo il bit "meno significativo" della sua codifica
       //ricorsione
   }
}





int main()
{
    /*create root*/
    struct node *root = newNode(NULL);


    return 0;
}