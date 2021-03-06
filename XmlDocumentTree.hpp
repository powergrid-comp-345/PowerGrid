
#ifndef XMLDOCUMENTTREE_HPP_
#define XMLDOCUMENTTREE_HPP_

#include <string>
#include "XmlDocumentNode.hpp"

class XmlDocumentTree {
    private:
        XmlDocumentNode* rootNode;
    public:
        XmlDocumentTree(XmlDocumentNode* rootNode);
        XmlDocumentTree(std::string rootElementName, std::string rootElementValue);
        XmlDocumentNode* getRootNode();
        ~XmlDocumentTree();
};

#endif
