// Какие операции имеют в списке сложность меньше чем в векторе? Почему?

1) Insert
2) Erase\deletion

т.к. не нужно создавать новый массив, как в векторе, достаточно только поменять ближайшие указатели

|  операции    | push_back | insert  | indexing |  deletion |
+--------------+-----------+---------+----------------------+
|  vector      |    O(1)   |   O(n)  |   O(1)   |   O(n)    |
|  linked list |    O(n)   |   O(1)  |   O(n)   |   O(1)    |
---------------+-----------+---------+----------+-----------+