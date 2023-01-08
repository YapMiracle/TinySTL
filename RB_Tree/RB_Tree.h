#ifndef RB_TREE_H
#define RB_TREE_H

#include "RB_Tree_Node.h"

template<class T>
class RB_Tree{
public:
    RB_Tree(T Root_data);
    ~RB_Tree();
    void Left_rotate(RB_Tree<T> * current_node);
    void Right_Rotate(RB_Tree_Node<T>* current_Node);
	void Insert_Node(T insert_data);
	int Delete_Node(T delete_data);
	void Fix_Tree(RB_Tree_Node<T>* current_Node);
	void erase_Node(RB_Tree_Node<T>* Node_del);
	void Fix_Tree_Delete(RB_Tree_Node<T>* current_Node);
	RB_Tree_Node<T>* Find_Successor_Node(RB_Tree_Node<T>* current_Node);
	RB_Tree_Node<T>* Root_Node;
};

#endif // RB_TREE_H