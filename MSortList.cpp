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
		ListNode * merge(ListNode * head1, ListNode * head2)
		{
			if(!head1||!head2)
				return head1?head1:head2;
			ListNode *res;
			if(head1->val<=head2->val)
			{  res=head1;
				res->next=merge(head1->next,head2);
			}
			else
			{
				res=head2;
				res->next=merge(head1,head2->next);
			}
			return res;
		}
		ListNode * middle(ListNode* head)
		{
			ListNode *s=head, *f=head->next;
			while(f&&f->next)
			{
				s=s->next;
				f=f->next->next;
			}
			return s;
		}
		ListNode * merge_sortf(ListNode * head)
		{
			if(!head || !head->next)
				return head;
			ListNode * mid= middle(head);
			ListNode * heads= mid->next;
			mid->next=NULL;
			return merge(merge_sortf(head),merge_sortf(heads));
		}
		ListNode* sortList(ListNode* head) {
			return merge_sortf(head);
		}
};
