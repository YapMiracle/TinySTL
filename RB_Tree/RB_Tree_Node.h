#ifndef RB_TREE_NODE_H
#define RB_TREE_NODE_H

template<class T>
class RB_Tree_Node{
public:
    RB_Tree_Node(T data_in);
    ~RB_Tree_Node(void);
    RB_Tree_Node *left_child;
    RB_Tree_Node *right_child;
    RB_Tree_Node *father_child;
    T data;
    int color_tag; // 1 hong 0 hei
};
#endif // RB_TREE_NODE_H