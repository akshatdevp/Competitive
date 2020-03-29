#include<bits/stdc++.h>
using namespace std;
/**
 *  * Definition for singly-linked list.
 *   * struct ListNode {
 *    *     int val;
 *     *     ListNode *next;
 *      *     ListNode(int x) : val(x), next(NULL) {}
 *       * };
 *        */
class Solution {
	public:
		ListNode* rotateRight(ListNode* head, int k) {
			if(!head||!head->next)
				return head;
			ListNode *temp=head,*temp1=head;
			int c=1;
			while(temp->next)
				temp=temp->next,c++;
			temp->next=head;
			c=c-k%c;
			while(c>1)
				temp1=temp1->next,c--;
			temp=temp1->next;
			temp1->next=NULL;
			return temp;
		}
};
