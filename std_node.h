
#ifndef stdnode_h
#define stdnode_h

struct std_node
{
    int id;
    char name[30];
    struct std_node *next;
};

#endif /* node_h */