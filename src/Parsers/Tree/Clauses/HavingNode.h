#pragma once

#include "Parsers/Tree/Clauses/ClauseNode.h"
#include "Parsers/Tree/Expressions/ExpressionNode.h"

namespace FQL
{
    class HavingNode : public ClauseNode
    {
    protected:
        ExpressionNode* cond = NULL;

    public:
        HavingNode(ExpressionNode* cond);

        virtual ~HavingNode();

        virtual void DumpTree(std::ostream& out, int indent = 0) const;
    };
}
