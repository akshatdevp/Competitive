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
		ListNode* reverseKGroup(ListNode* head, int k) {
			ListNode* a=head;
			for(int i=0;i<k;i++)
			{
				if(a==NULL)return head;
				a=a->next;
			}
			ListNode* curr=head,*prev=NULL,*next=NULL;        
			for(int i=0;i<k;i++)
			{
				//if(curr==NULL)break;
				//            next=curr->next;
				//                        curr->next=prev;
				//                                    prev=curr;
				//                                                curr=next;
				//                                                        }
				//                                                                //cout<<curr->val;
				//                                                                        if(curr!=NULL)
				//                                                                                head->next=reverseKGroup(curr,k);
				//                                                                                        return prev;
				//                                                                                            }
				//                                                                                            };
