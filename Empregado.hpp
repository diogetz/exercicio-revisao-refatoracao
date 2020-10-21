#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  public:
    double pagamentoMes(double horasTrabalhadas) {

      double t = horasTrabalhadas;

	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * salarioHora;
    }

    std::string getNome() {
    return nome;
    }
    void setNome(std::string n) {
    nome = n;
    }

    void setSalario(double n) {
    salarioHora = n;
    }

    void setQuota (double n) {
    quotaMensalVendas = n;
    }
    double getQuota() {
    return quotaMensalVendas;
    }

  private:
    std::string nome;
    double salarioHora;
    double quotaMensalVendas;
};

#endif
