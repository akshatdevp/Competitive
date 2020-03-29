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
		ListNode *detectCycle(ListNode *head) {
			if(!head)return NULL;
			ListNode*slow=head;
			ListNode*fast=head;
			while(fast&&fast->next)
			{
				slow=slow->next;
				fast=fast->next->next;
				if(slow==fast)
				{

					while(slow!=head)
					{
						slow=slow->next;
						head=head->next;
					}
					return head;
				}
			}
			return NULL;
		}
};
// 1 2 3 4 5 
// // ^<----|
