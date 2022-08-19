/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *createnode(int value)
{
    struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    temp->val = value;
    temp->next = NULL;

    return temp;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{

    int len1, len2;
    len1 = 0;
    len2 = 0;
    for (struct ListNode *temp = l1; temp != NULL; temp = temp->next)
    {
        len1++;
    }
    for (struct ListNode *temp = l2; temp != NULL; temp = temp->next)
    {
        len2++;
    }
    if (len1 == len2 && len1 == 1)
    {
        struct ListNode *temp1 = l1;
        struct ListNode *temp2 = l2;
        int temp;
        int hold;
        hold = 0;
        temp = temp1->val + temp2->val + hold;
        if (temp > 9)
        {
            temp1->val = temp % 10;
            hold = (temp - temp % 10) / 10;
        }
        else
        {
            temp1->val = temp;
            hold = 0;
        }
        if (hold != 0)
        {
            temp1->next = createnode(hold);
        }
        return l1;
    }
    if (len1 > len2)
    {
        struct ListNode *temp1 = l1;
    struct ListNode *temp2 = l2;
    int temp;
    int hold;
    hold = 0;
    while (true)
    {
        temp = temp1->val + temp2->val + hold;
        if (temp > 9)
        {
            temp1->val = temp % 10;
            hold = (temp - temp % 10) / 10;
        }
        else
        {
            temp1->val = temp;
            hold = 0;
        }

        temp2 = temp2->next;
        if (temp2 == NULL)
        {
            if (temp1->next == NULL)
            {
                if (hold == 0)
                {
                    break;
                }
                else
                {
                    temp1->next = createnode(hold);
                }
            }
            temp1 = temp1->next;
            while (true)
            {
                temp = temp1->val + hold;
                if (temp > 9)
                {
                    temp1->val = temp % 10;
                    hold = (temp - temp % 10) / 10;
                }
                else
                {
                    temp1->val = temp;
                    hold = 0;
                }

                //if(temp1==NULL)
                if (temp1->next == NULL)
                {

                    if (hold == 0)
                    {
                        break;
                    }
                    else
                    {
                        temp1->next = createnode(hold);
                    }
                    break;
                }
                temp1 = temp1->next;
            }
            break;
        }
        temp1 = temp1->next;
    }
    }
    if (len1 < len2)
    {
        struct ListNode *temp1 = l2;
    struct ListNode *temp2 = l1;
    int temp;
    int hold;
    hold = 0;
    while (true)
    {
        temp = temp1->val + temp2->val + hold;
        if (temp > 9)
        {
            temp1->val = temp % 10;
            hold = (temp - temp % 10) / 10;
        }
        else
        {
            temp1->val = temp;
            hold = 0;
        }

        temp2 = temp2->next;
        if (temp2 == NULL)
        {
            if (temp1->next == NULL)
            {
                if (hold == 0)
                {
                    break;
                }
                else
                {
                    temp1->next = createnode(hold);
                }
            }
            temp1 = temp1->next;
            while (true)
            {
                temp = temp1->val + hold;
                if (temp > 9)
                {
                    temp1->val = temp % 10;
                    hold = (temp - temp % 10) / 10;
                }
                else
                {
                    temp1->val = temp;
                    hold = 0;
                }

                //if(temp1==NULL)
                if (temp1->next == NULL)
                {

                    if (hold == 0)
                    {
                        break;
                    }
                    else
                    {
                        temp1->next = createnode(hold);
                    }
                    break;
                }
                temp1 = temp1->next;
            }
            break;
        }
        temp1 = temp1->next;
    }
        return l2;
    }

    if (len1 == len2)
    {
        struct ListNode *temp1 = l1;
        struct ListNode *temp2 = l2;
        int temp;
        int hold;
        hold = 0;
        while (true)
        {
            temp = temp1->val + temp2->val + hold;
            if (temp > 9)
            {
                temp1->val = temp % 10;
                hold = (temp - temp % 10) / 10;
            }
            else
            {
                temp1->val = temp;
                hold = 0;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
            if (temp1->next == NULL)
            {

                temp = temp1->val + temp2->val + hold;
                if (temp > 9)
                {
                    temp1->val = temp % 10;
                    hold = (temp - temp % 10) / 10;
                }
                else
                {
                    temp1->val = temp;
                    hold = 0;
                }
                if (hold == 0)
                {
                    break;
                }
                else
                {
                    temp1->next = createnode(hold);
                }
                break;
            }
        }
    }
    return l1;
}