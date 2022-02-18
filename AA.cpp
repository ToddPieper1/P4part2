//
// Created by Todd on 2/8/2022.
//

#include "AA.h"
#include <iostream>
using namespace std;

AA::AA(string url) {
    URL = url;
    scheme = URL.substr(0, URL.find(':')+1);
    beginning = URL.find("//");
    end = URL.find('/', beginning+2 );
    authority = URL.substr(beginning, end-beginning);
    path = URL.substr(end);
}

ostream &operator<<(ostream &os, const AA &aa) {
    return os <<"Scheme: " << aa.getScheme() << "\nAuthority: " << aa.getAuthority() << "\nPath: " << aa.getPath() << "\n";
}


const string &AA::getPath() const {
    return path;
}
const string &AA::getScheme() const {
    return scheme;
}
const string &AA::getAuthority() const {
    return authority;
}
const string &AA::getUrl() const {
    return URL;
}
