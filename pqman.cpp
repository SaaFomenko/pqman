#include "pqman.h"


Pqman::Pqman(const char* connect_chars) :
    connect_chars_(connect_chars)
{
    connect = new pqxx::connection(connect_chars_);
}

Pqman::~Pqman()
{
    delete connect;
    connect = nullptr;
}

const char* Pqman::get(const char* tables, const char* collums, const char* filters)
{
    const char* response;

    return response;
}