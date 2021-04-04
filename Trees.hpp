/*
** EPITECH PROJECT, 2021
** github_public
** File description:
** Trees
*/

#ifndef TREES_HPP_
#define TREES_HPP_
#define ALPHA_SIZE 26

#include <string>

class Trees {
    public:
        Trees() = default;
        ~Trees() = default;

        bool addWord(std::string word);
        bool searchWord(std::string word);

    protected:
        bool __searchWord(std::string word, Trees *tree);
        void __addWord(std::string word, Trees *tree);
    private:
        Trees **_arr = new Trees*[ALPHA_SIZE];
        bool _endWord = false;
};

#endif /* !TREES_HPP_ */
