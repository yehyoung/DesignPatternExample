#pragma once

#include "VoteState.h"
#include "VoteManager.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example3 {

class BlackWarnVoteState : public VoteState {
public:
    virtual void vote(std::string user, std::string voteItem, VoteManager *voteManager);
};

}
}
}
}
}