#ifndef PQMAN_H
#define PQMAN_H


#include <pqxx/pqxx>

//C++ Class for work with libpqxx
//Params: connect_chars
class Pqman
{
private:
    const char* connect_chars_;
    pqxx::connection* connect;
    pqxx::work* transact;

public:
    Pqman(const char* connect_chars);
    virtual ~Pqman();

    const char* get(const char* tables, const char* colluns, const char* filters);
};

#endif
