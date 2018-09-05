// 单链表元素结构题
typeof struct LNode{
	// 数据
	ElemType data;
	// 指向下一个节点的指针
	struct LNode *next;
};

LinkList CreateList2(LinkList &L){
	// 设置元素类型为整形
    int x;
    // 建立头节点
    L = (LinkList)malloc(sizeof(LNode));
    // r是表尾指针
    // s是每次生成的新节点
    LNode *s,*r=L;
    // 输入节点的值
    scanf("%d",&x);
    // 生成链表
    while(x != 9999){
    	s = (LNode *)malloc(sizeof(LNode));
    	s->data = x;
    	// 上一个节点和新节点建立连接
    	r->next = s;
    	r = s;
    	scanf('%d',&x);
    }
    // 最后一个指针指向NULL
    r->next = NULL;
    return L
}


typedef struct DNode{
	ElemType data;
	struct DNode *prior,*next;
}DNode, *DLinklist;