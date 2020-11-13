/*
#pragma once

#include <iostream>
#include <string>
#include <map>
#include <algorithm>


#include "defs.h"
#include "Data.h"
#include "Cliente.h"
#include "Produto.h"
#include "Transacao.h"
//#include "Recomendacoes.h"


#include "utils.h"


using namespace std;
*/
#include <iostream>
#include <string>
#include "Date.h"
#include "Client.h"
#include "Product.h"
#include "Transaction.h"

using namespace std;

class Store{
 private:
  string name;

  unsigned int lastClientId; // variavel que guarda o identificador unico do cliente com o maior identiicador
  vector<Client> clients; // vetor que guarda a informacao dos clientes existentes
  vector<Product> products; // vetor que guarda a informacao dos produtos disponiveis
  vector<Transaction> transactions; // vetor que guarda a informacao das ttransacoes efetuadas

 public:
  Store(string name, vector<Product> products);
  
  void listClients();
  void showClientInfo(string name);
  void addClient(string name, Date & date);
  //void editClient();
  void removeClient(string name);

  void listProducts() const;
  
  void listClientTransactions(string clientName) ;
  //void listDayTransactions() const;
  void listTransationTimePeriod(Date & lowerDate, Date & upperDate);
  //void listTransactions() const;
  void addTransaction(string clientName, Date & date, vector<string> transactionProducts);
  string toString();
  //friend ostream& operator<<(ostream& out, const Store & supermercado);
  //friend void recomendar(const VendeMaisMais &supermercado);
  //friend void bottom10(const VendeMaisMais &supermercado);
  //friend int escolher_cliente(const VendeMaisMais &supermercado);
  //friend pair<int, string>  escolher_cliente2(const VendeMaisMais &supermercado);
};

