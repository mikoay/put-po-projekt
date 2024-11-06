#include "Application.h"

void Application::run()
{
    Database *database=new Database("bank.db");
    delete database;
}