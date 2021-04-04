/*
** EPITECH PROJECT, 2021
** trees
** File description:
** Trees
*/

#include "Trees.hpp"

bool Trees::__searchWord(std::string word, Trees *tree)
{
    if (word.size() == 0)
        return tree->_endWord;

    char it = word[0] - 97;
    word.erase(0, 1);
    if (!tree->_arr[it])
        return false;
    return __searchWord(word, tree->_arr[it]);
}

bool Trees::searchWord(std::string word)
{
    if (word.size() == 0)
        return false;
    for (auto &it : word) {
        if (it >= 'A' && it <= 'Z')
            it += 32;
        if (!(it >= 'a' && it <= 'z'))
            return false;
    }
    return __searchWord(word, this);
}

bool Trees::addWord(std::string word)
{
    if (word.size() == 0)
        return false;
    for (auto &it : word) {
        if (it >= 'A' && it <= 'Z')
            it += 32;
        if (!(it >= 'a' && it <= 'z'))
            return false;
    }
    __addWord(word, this);
    return true;
}

void Trees::__addWord(std::string word, Trees *tree)
{
    if (word.size() == 0) {
        tree->_endWord = true;
        return;
    }

    char it = word[0] - 97;

    word.erase(0, 1);
    if (!tree->_arr[it])
        tree->_arr[it] = new Trees;
    __addWord(word, tree->_arr[it]);
}