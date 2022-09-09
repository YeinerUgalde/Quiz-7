#include <iostream>
#include "stack.h"
using namespace std;

stack processCell(Queue pQueue){
    listaStack;
    while(pQueue->first!= NULL ){
        stack->push(pQueue->first);
    }
    listaStack->push(stack);
    return listaStack

}   

enum Category {BASE,CENTER,TOP};
struct ingrediente {
    Category type;
    string name;
}

Stack ing <ingrediente>*;
createBurguer(vector<ingrediente> *pIngredientes){

    Stack<string>* pilaAcomodada = new Stack<string>();
    while (ing->top()!= NULL){
        if (*ing->top.Category == BASE){
            pilaAcomodada->push(ing->pop())
        }
        if (*ing->top.Category == CENTER){
            if (*ing->top().Category == CENTER){
                pilaAcomodada->push(ing->pop())
            }
            else{
                Stack<string>* pilatemporal = new Stack<string>();
                while (*ing->top().Category != CENTER){
                    pilatemporal->push(ing->pop())
                }
                
            }
        }
    }
}

int main(){

}