#include <iostream>
using namespace;

class solution
{
public:
    Listnode *mergetwolists(Listnode *list1, Listnode *list2)
    {
        Listnode dummy{0};
        auto tail = &dummy;

        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                tail->next = l1;
                list1 = list1->next;
            }
            else
            {
                tail->next = l2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        tail->next = list1 ? list1 : list2;
        return dummy.next;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
