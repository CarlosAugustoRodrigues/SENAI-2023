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

// console.log(
//   "Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c."
// );
// var a = 10,
//   b = 10,
//   c = 10;
// console.log("A expressão (a + b) / c = ", (a + b) / c);

// console.log(
//   "\nDesenvolva um programa que leia a velocidade de um carro (km/h) e a distância a ser percorrida (km) por ele. Calcule e apresente na tela, quanto tempo (horas) será necessário para o carro percorrer a distância informada."
// );
// var kmh = 100,
//   distanciaKm = 200;
// console.log("O tempo é =", distanciaKm / kmh, "horas");

// console.log(
//   "\nDesenvolva um programa que leia o nome e o salário de uma pessoa, depois leia o valor do índice percentual (%) de reajuste do salário. Calcule e apresente na tela, o valor do novo salário e o nome da pessoa."
// );
// var nome = "Carlos",
//   salario = 2652.54,
//   indiceAumento = 10,
//   salarioNovo = salario * (indiceAumento / 100 + 1);
// console.log("Funcionário: ", nome, "\nSalário Novo: ", salarioNovo.toFixed(2));

// var data = new Date();

// var dia = data.getDate();
// var mes = data.getMonth() + 1;
// var ano = data.getFullYear();

// // var anoCompleto = dia + '/' + mes + '/' + ano;
// var anoCompleto = `${dia}/${mes}/${ano}`;

// var hora = data.getHours();
// var min = data.getMinutes();
// var sec = data.getSeconds();

// var horaCompleta = `${hora}:${min}:${sec}`;

// console.log(anoCompleto, horaCompleta);

//Math.ceil() - arredonda para cima
//Math.floor() - arredonda para baixo
//Math.round() - arredonda para o mais próximo

// var n = "10";

// Number.parseInt() - converte para inteiro

// console.log(n, Number.parseFloat(n));

// if(){
// }

// else{
// }

//else if(){
// }

// condição ? true : false - if ternario

// switch (){
//   case 1:
//     break;
//   default:
//     break;
// }

// for(let i = 0; i < 10; i++){
//   console.log(i);
// }

// while(){
// }

// do{
// }while();

// var lista = "a b c d e".split(" ");

// for (let i = 0; i < lista.length; i++) {
//   console.log(lista[i]);
// }

// lista.forEach(item => {
//   console.log(item);
// })

// for(let item of lista){
//   console.log(item);
// }

console.log("Lista 2");
console.log(
  "1. Desenvolva um programa que leia o preço de um produto e se o preço for maior do que 1000 reais aplique um desconto de 8%. Mostre o preço final."
);

function calcularDesconto(precoProduto, descontoProduto) {
  return precoProduto * descontoProduto;
}

function precoFinal(precoProduto, descontoProduto) {
  return precoProduto - descontoProduto;
}

var precoProduto = 1263,
  descontoProduto = 8 / 100,
  valorDesconto = calcularDesconto(precoProduto, descontoProduto);

if (precoProduto > 1000) {
  console.log(valorDesconto);
  console.log(precoFinal(precoProduto, valorDesconto));
}

console.log(
  "\n2. Desenvolva um programa que leia o salário de um funcionário e o número de filhos. Se o salário for menor do que 2000 o funcionário receberá um salário família equivalente a 45 reais por filho. Apresente o salário final."
);

function salarioFamilia(numFilhos, valorPFilho) {
  return numFilhos * valorPFilho;
}

var salarioFuncionario = 2100,
  numFilhos = 3,
  valorPFilho = 45,
  salarioFinal = salarioFuncionario + salarioFamilia(numFilhos);

if (salarioFuncionario < 2000) {
  console.log(salarioFamilia(numFilhos, valorPFilho));
}
