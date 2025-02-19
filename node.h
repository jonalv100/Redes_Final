#ifndef NODE_H
#define NODE_H

#include <vector>
#include <string>

class Node
{
  public:
    std::string m_data;
    std::vector<std::string> m_relations;
    std::vector<std::string> m_attributes;
  public:
    bool isInRelations(std::string node);
    bool addRelation(std::string node);
    std::string doQuery(std::string msgQuery, int deep);
    Node();
    Node(std::string data,std::vector<std::string>& attributes);
    ~Node();
};
#endif
