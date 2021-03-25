/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if(head==null){
            return head;
        }

        ListNode res = new ListNode(0,head);
        ListNode cur = res;
        while(cur.next!=null && cur.next.next!=null){
            if(cur.next.val==cur.next.next.val){
                int tmp = cur.next.val;
                while(cur.next!=null && tmp==cur.next.val)
                {
                    cur.next = cur.next.next;
                }
            }
            else{
                cur = cur.next;
            }
        }
        return res.next;
    }
}