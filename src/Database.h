#include <sqlite3.h>
#include <iostream>
#include <vector>

#include "Customer.h"

class Database
{
private:
    const char *db_name;
    sqlite3 *db;
    char *err_msg=nullptr;
    int rc;
    static int get_customers_from_db_wrapper(void* data, int argc, char** argv, char** azColName);
    static int callback(void *data, int argc, char **argv, char **azColName);
    int get_customers_from_db(int argc, char **argv, char **azColName);
public:
    std::vector<Customer*> customers;
    Database(const char *input_db_name);
    ~Database();
    int connect();
    int exec_query(const char *input_query);
    int exec_select_query(const char *input_query);
    void close();
    int get_all_customers();
};
