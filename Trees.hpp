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

        bool addWord(std::string);
        bool searchWord(std::string);

    protected:
        bool __searchWord(std::string, Trees *);
        void __addWord(std::string, Trees *);
    private:
        Trees **_arr = new Trees*[ALPHA_SIZE];
        bool _endWord = false;
};

#endif /* !TREES_HPP_ */
