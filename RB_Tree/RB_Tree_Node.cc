#include "RB_Tree_Node.h"

template <typename T>
RB_Tree_Node<T>::RB_Tree_Node(T data_in):data(data_in), color_tag(0), 
                left_child(nullptr), right_child(nullptr), father_child(nullptr){
                    data = data_in;
                    color_tag = 1;
}
template <typename T>
RB_Tree_Node<T>::~RB_Tree_Node(void){
    
}