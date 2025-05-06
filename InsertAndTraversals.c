struct node {
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}
  
void inorderInBST(BSTNODE root) {
	if(root != NULL){
		inorderInBST(root->left);
		printf("%d ",root->data);
		inorderInBST(root->right);
	}
}
void preorderInBST(BSTNODE root) {
	//write your code here..
	if(root!=NULL){
		printf("%d ",root->data);
		preorderInBST(root->left);
		preorderInBST(root->right);
	}
}
void postorderInBST(BSTNODE root) {
	if (root != NULL){
	postorderInBST(root->left);
		postorderInBST(root->right);
		printf("%d ",root->data);
	}
}
BSTNODE insertNodeInBST(BSTNODE node, int ele) {
	if(node == NULL){
		printf("Successfully inserted.\n");
		return newNodeInBST(ele);
	}
	if(ele < node->data) {
		node->left = insertNodeInBST(node->left, ele);
	} else if (ele > node->data) {
		node->right = insertNodeInBST(node->right, ele);
	}
	return node;
}

BSTNODE searchNodeInBST(BSTNODE root, int ele) {
	if(root == NULL){
	return NULL;
}
	if(root->data == ele){
		return root;
	}

	if(ele < root ->data){
		return searchNodeInBST(root->left, ele);
	} else {
		return searchNodeInBST(root->right, ele);
	}
	
	
}
