#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1;
  eng1.setNome("Joao Snow");
  eng1.setSalario(35);
  eng1.projetos = 3;
  std::cout << "Nome: " << eng1.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng1.pagamentoMes(9.5) << std::endl;
  std::cout << "Projetos: " << eng1.projetos << std::endl;
  std::cout << std::endl;

  Engenheiro eng2;
  eng2.setNome("Daniela Targaryen");
  eng2.setSalario(30);
  eng2.projetos = 1;
  std::cout << "Nome: " << eng2.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng2.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng2.projetos << std::endl;
  std::cout << std::endl;

  Engenheiro eng3;
  eng3.setNome("Bruno Stark");
  eng3.setSalario(30);
  eng3.projetos = 2;
  std::cout << "Nome: " << eng3.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng3.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng3.projetos << std::endl;
  std::cout << std::endl;


  Vendedor vend1;
  vend1.setNome("Tonho Lannister");
  vend1.setSalario(20);
  vend1.setQuota(5000);

  std::cout << "Nome: " << vend1.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend1.pagamentoMes(6) << std::endl;
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;

  Vendedor vend2;
  vend2.setNome("Jose Mormont");
  vend2.setSalario(25);
  vend2.setQuota(3000);

  std::cout << "Nome: " << vend2.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend2.pagamentoMes(8) << std::endl;
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl;
  std::cout << std::endl;

  Vendedor vend3;
  vend3.setNome("Sonia Stark");
  vend3.setSalario(30);
  vend3.setQuota(4000);

  std::cout << "Nome: " << vend3.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend3.pagamentoMes(8) << std::endl;
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;

  return 0;
}
