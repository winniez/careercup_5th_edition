/* find the last kth node in the linked list
 * ID: starcroce
 * Time: 02/24/2013 MST
 */


listNode *getLastKthNode(listNode *head, int k){
  if(k == 0 || head == NULL)
		return NULL;
	listNode *a = head;
	listNode *b = head;
	while(k > 1 && a != NULL){
		a = a->next;
		k--;
	}
	if(a == NULL)
		return NULL;
	while(a->next != NULL){
		b = b->next;
		a = a->next;
	}
	return b;
}
