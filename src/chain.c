///////////////////////////////////////////////////////////////////////////////
// Tyler Perkins
// 9-29-21
// Markov chain implementation
//

#include "chain.h"

m_node* m_next(const m_node* rhs){
    uint16_t total = 0;
    int i = 0;

    uint16_t v = rand() % (sizeof(uint16_t) * 8);

    while(v > total){
        total += rhs->_conns[i]._probability;
        ++i;
    }

    return rhs->_conns[i]._node;
}
