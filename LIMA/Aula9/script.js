// let - variavel local
// var - variael global
// const - variavel constante

// const obj = [
//   {
//     name: "Lucas",
//     age: 20,
//     country: "Brazil",
//   },
//   {
//     name: "João",
//     age: 30,
//     country: "Brazil",
//   },
//   {
//     name: "Pedro",
//     age: 40,
//     country: "Brazil",
//   },
// ];

// console.log(obj);
// console.warn("AVISO");
// console.error("ERRO");
// console.table(obj);

//Operadores Aritmeticos
// + soma
// - subtração
// * multiplicação
// / divisão
// ** potenciação
// % resto da divisão

//Operadores de Comparação
// > maior que
// < menor que
// >= maior ou igual que
// <= menor ou igual que
// = atribuição
// == igualdade (valor)
// != diferente (valor)
// === igualdade (valor e tipo)
// !== diferente (valor e tipo)

console.log(
  "Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c."
);
var a = 10;
b = 10;
c = 10;
console.log("A expressão (a + b) / c = ", (a + b) / c);

console.log(
  "\nDesenvolva um programa que leia a velocidade de um carro (km/h) e a distância a ser percorrida (km) por ele. Calcule e apresente na tela, quanto tempo (horas) será necessário para o carro percorrer a distância informada."
);
var kmh = 100;
distanciaKm = 200;
console.log("O tempo é =", distanciaKm / kmh, "horas");

console.log(
  "\nDesenvolva um programa que leia o nome e o salário de uma pessoa, depois leia o valor do índice percentual (%) de reajuste do salário. Calcule e apresente na tela, o valor do novo salário e o nome da pessoa."
);
var nome = "Carlos",
  salario = 2652.54,
  indiceAumento = 10,
  salarioNovo = salario * (indiceAumento / 100 + 1);
console.log("Funcionário: ", nome, "\nSalário Novo: ", salarioNovo.toFixed(2));
