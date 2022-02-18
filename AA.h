//
// Created by Todd on 2/8/2022.
//
#include <string>
#include <ostream>

#ifndef AA_H
#define AA_H
#pragma once

using namespace std;
class AA {
public:

    AA(string);
    const string &getPath() const ;
    const string &getAuthority() const ;
    const string &getScheme() const ;
    const string &getUrl() const;

    friend ostream &operator<<(ostream &os, const AA &aa);

private:
    string URL, authority, path, scheme;
    int beginning, end;
};


#endif
