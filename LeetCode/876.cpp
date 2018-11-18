/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *aNode = head;
        int nodesCount = 1;
        while (aNode->next != NULL) {
            aNode = aNode->next;
            nodesCount++;
        }
        
        int theMiddleNodeIndex = nodesCount / 2 + 1;
        int currentNodeIndex = 1;
        ListNode *theMiddleNode = head;
        while (currentNodeIndex < theMiddleNodeIndex) {
            theMiddleNode = theMiddleNode->next;
            currentNodeIndex++;
        }
        
        return theMiddleNode;
    }
};