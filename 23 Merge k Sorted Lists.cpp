class Solution
{
public:
    ListNode *mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        if (NULL == l1) return l2;
        else if (NULL == l2) return l1;
        if (l1->val <= l2->val)
        {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.empty()) return NULL;
        int len = lists.size();
        while (len > 1)
        {
            for (int i = 0; i < len / 2; ++i)
            {
                lists[i] = mergeTwoLists(lists[i], lists[len - 1 - i]);
            }
            len = (len + 1) / 2;
        }

        return lists.front();
    }
};


class Solution
{
    struct compare
    {
        bool operator()(const ListNode* l, const ListNode* r)
        {
            return l->val > r->val;
        }
    };

public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        priority_queue<ListNode *, vector<ListNode *>, compare> q;
        for (auto l : lists)
        {
            if (l)
            {
                q.push(l);
            }
        }

        if (q.empty())
        {
            return NULL;
        }

        ListNode* result = q.top();
        q.pop();
        if (result->next)
        {
            q.push(result->next);
        }

        ListNode* tail = result;
        while (!q.empty())
        {
            tail->next = q.top();
            q.pop();
            tail = tail->next;
            if (tail->next)
            {
                q.push(tail->next);
            }
        }

        return result;
    }
};
