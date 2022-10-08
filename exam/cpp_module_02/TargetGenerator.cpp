#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator()
{
    std::vector<ATarget *>::iterator iter = _targets.begin();
    std::vector<ATarget *>::iterator iter2 = _targets.end();
    while (iter != iter2)
    {
        delete *iter;
        iter++;
    }
    _targets.clear();
    return;
}

void TargetGenerator::learnTargetType(ATarget *some_target)
{
    if (some_target)
    {
        std::vector<ATarget *>::iterator iter = _targets.begin();
        std::vector<ATarget *>::iterator iter2 = _targets.end();
        while (iter != iter2)
        {
            if ((*iter) == some_target)
                return;
            iter++;
        }
        _targets.push_back(some_target->clone());
    }
}
void TargetGenerator::forgetTargetType(std::string const &targen_name)
{
    std::vector<ATarget *>::iterator iter = _targets.begin();
    std::vector<ATarget *>::iterator iter2 =_targets.end();
    while (iter != iter2)
    {
        if ((*iter)->getType() == targen_name)
        {
            delete *iter;
            iter = _targets.erase(iter);
            break;
        }
        iter++;
    }
}
ATarget* TargetGenerator::createTarget(std::string const &targen_name)
{
    std::vector<ATarget *>::iterator iter = _targets.begin();
    std::vector<ATarget *>::iterator iter2 =_targets.end();
    while (iter != iter2)
    {
        if ((*iter)->getType() == targen_name)
        {
            return (*iter);
        }
        iter++;
    }
    return (NULL);
}