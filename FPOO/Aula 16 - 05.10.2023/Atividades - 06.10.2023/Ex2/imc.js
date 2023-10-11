class Paciente {
  constructor(nome, peso, altura) {
    this.nome = nome;
    this.peso = peso;
    this.altura = altura;
  }
  imc() {
    return this.peso / this.altura ** 2;
  }
  diagnosticar() {
    if (this.imc() < 18.5) {
      return "Baixo Peso";
    } else if (this.imc() >= 18.5 && this.imc() <= 24.9) {
      return "Peso Normal";
    } else if (this.imc() >= 25 && this.imc() <= 29.9) {
      return "Sobrepreso";
    } else if (this.imc() >= 30 && this.imc() <= 34.9) {
      return "Obesidade Grau 1";
    } else if (this.imc() >= 35 && this.imc() <= 39.9) {
      return "Obesidade Grau 2";
    } else {
      return "Obesidade Grau 3";
    }
  }
  showHTML() {
    let str = `<h2 class="nome">${this.nome}</h2>`;
    str += `<hr>`;
    str += `<p class="peso">Peso:<span>${this.peso}</span></p>`;
    str += `<p class="altura">Altura:<span>${this.altura}</span></p>`;
    str += `<p class="imc">IMC:<span>${this.imc().toFixed(1)}</span></p>`;
    str += `<hr>`;
    str += `<h3 class="diag">Diagnóstico:</h3>`;
    str += `<h3>${this.diagnosticar()}</h3>`;
    return str;
  }
}

const listaPacientes = [];
listaPacientes.push(new Paciente("André Mattos", 80, 1.8));
listaPacientes.push(new Paciente("João da Silva", 100, 1.7));
listaPacientes.push(new Paciente("Maria de Souza", 60, 1.65));
listaPacientes.push(new Paciente("José de Oliveira", 90, 1.75));
listaPacientes.push(new Paciente("Silvia Andrade", 60, 1.85));
listaPacientes.push(new Paciente("Sueli Oliveira", 44, 1.65));
listaPacientes.push(new Paciente("Pedro de Souza", 110, 1.85));

console.table(listaPacientes);

const main = document.getElementById("pacientes");
listaPacientes.forEach((lista) => {
  const div = document.createElement("div");
  div.innerHTML = lista.showHTML();
  main.appendChild(div);
});
