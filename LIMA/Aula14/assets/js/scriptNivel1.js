const result = document.getElementById("result");
var resultEx = document.createElement("div");

function ex01() {
  window.alert("Hello World!");
}

function ex02() {
  result.innerHTML = `<h2>CLIQUE NO BOTÃO</h2>`;

  let btn = document.createElement("button");
  btn.style.width = "170px";
  btn.style.height = "50px";
  btn.innerHTML = "CLIQUE AQUI";
  btn.addEventListener("click", () => {
    window.alert("Você clicou no botão");
  });
  result.appendChild(btn);
}

function ex03() {
  resultEx.innerHTML = "";
  result.innerHTML = `<h2>DIGITE SEU NOME</h2>`;

  let input = document.createElement("input");
  result.appendChild(input);

  let btn = document.createElement("button");
  btn.innerHTML = "ENVIAR";
  btn.addEventListener("click", () => {
    let name = input.value;
    window.alert(`Olá ${name}, é um prazer te conhecer!`);
    input.value = "";
  });
  result.appendChild(btn);

  resultEx.classList.add("resultEx");

  result.appendChild(resultEx);
}

function ex04() {
  resultEx.innerHTML = "";
  result.innerHTML = `<h2>DIGITE SEU NOME</h2>`;

  let input = document.createElement("input");
  result.appendChild(input);

  let btn = document.createElement("button");
  btn.innerHTML = "ENVIAR";
  btn.addEventListener("click", () => {
    let name = input.value;
    resultEx.innerHTML = `<span style="font-size: 40px">Olá ${name}, é um grande prazer te conhecer!<span>`;
    input.value = "";
  });
  result.appendChild(btn);

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);
}

function ex05() {
  resultEx.innerHTML = "";
  result.innerHTML = `<h2>DIGITE UM NÚMERO INTEIRO E POSITIVO</h2>`;

  let input = document.createElement("input");
  result.appendChild(input);

  let btn = document.createElement("button");
  btn.innerHTML = "ENVIAR";
  btn.addEventListener("click", () => {
    let number = Number(input.value);
    resultEx.innerHTML = `<span style="font-size: 30px">Número escolhido: ${number}<span>`;
    resultEx.innerHTML += `<span style="font-size: 30px">O dobro de ${number} é ${
      number * 2
    }<span>`;
    resultEx.innerHTML += `<span style="font-size: 30px">A metade de ${number} é ${
      number / 2
    }<span>`;
    input.value = "";
  });
  result.appendChild(btn);

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);
}

function ex06() {
  resultEx.innerHTML = "";
  result.innerHTML = `<h2>DIGITE DOIS NÚMERO INTEIRO PARA SOMAR</h2>`;

  let input = document.createElement("input");
  result.appendChild(input);
  let input2 = document.createElement("input");
  result.appendChild(input2);

  let btn = document.createElement("button");
  btn.innerHTML = "ENVIAR";
  btn.addEventListener("click", () => {
    let number1 = Number(input.value);
    let number2 = Number(input2.value);
    resultEx.innerHTML = `<span style="font-size: 30px">${number1} + ${number2} = ${
      number1 + number2
    }<span>`;
    input.value = "";
    input2.value = "";
  });
  result.appendChild(btn);

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);
}

function ex07() {
  resultEx.innerHTML = "";
  result.innerHTML = `<h2>DIGITE O NOME E AS NOTAS DO ALUNO(A)</h2>`;

  let input = document.createElement("input");
  input.placeholder = "NOME";
  result.appendChild(input);

  let input2 = document.createElement("input");
  input2.placeholder = "NOTA 1";
  result.appendChild(input2);

  let input3 = document.createElement("input");
  input3.placeholder = "NOTA 2";
  result.appendChild(input3);

  let btn = document.createElement("button");
  btn.innerHTML = "ENVIAR";
  btn.addEventListener("click", () => {
    let name = input.value;
    let nota1 = input2.value.replace(",", ".");
    let nota2 = input3.value.replace(",", ".");
    nota1 = Number(nota1);
    nota2 = Number(nota2);
    resultEx.innerHTML = `<span style="font-size: 30px">Aluno(a): ${name}<span>`;
    resultEx.innerHTML += `<span style="font-size: 30px">Nota 1: ${nota1}<span>`;
    resultEx.innerHTML += `<span style="font-size: 30px">Nota 2: ${nota2}<span>`;
    resultEx.innerHTML += `<span style="font-size: 30px">Média: ${(
      (nota1 + nota2) /
      2
    ).toFixed(2)}<span>`;
    input.value = "";
    input2.value = "";
    input3.value = "";
  });
  result.appendChild(btn);

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);
}

function ex08() {
  resultEx.innerHTML = "";
  result.innerHTML = `<h2>DIGITE UM NÚMERO PARA SER ANALISADO</h2>`;

  let input = document.createElement("input");
  result.appendChild(input);

  let btn = document.createElement("button");
  btn.innerHTML = "ENVIAR";
  btn.addEventListener("click", () => {
    let number = input.value.replace(",", ".");
    number = Number(number);
    resultEx.innerHTML = `<span style="font-size: 30px">Número em análise: ${number}<span>`;
    resultEx.innerHTML += `<span style="font-size: 30px">O seu valor absoluto é: ${Math.abs(
      number
    )}<span>`;
    resultEx.innerHTML += `<span style="font-size: 30px">A sua parte inteira é: ${Math.trunc(
      number
    )}<span>`;
    resultEx.innerHTML += `<span style="font-size: 30px">O valor inteiro mais próximo é: ${Math.round(
      number
    )}<span>`;
    resultEx.innerHTML += `<span style="font-size: 30px">A sua raiz quadrada é = ${Math.sqrt(
      number
    ).toFixed(2)}<span>`;
    resultEx.innerHTML += `<span style="font-size: 30px">A sua raiz cúbica é = ${Math.cbrt(
      number
    ).toFixed(2)}<span>`;
    resultEx.innerHTML += `<span style="font-size: 30px">O valor de ${number}² =  ${Math.pow(
      number,
      2
    ).toFixed(2)}<span>`;
    resultEx.innerHTML += `<span style="font-size: 30px">O valor de ${number}³ = ${Math.pow(
      number,
      3
    ).toFixed(2)}<span>`;
    input.value = "";
  });
  result.appendChild(btn);

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);
}

function ex09() {
  let clicks = 0;

  resultEx.innerHTML = "";
  result.innerHTML = `<h2>CONTADOR DE CLIQUES</h2>`;

  let btn = document.createElement("button");
  btn.style.width = "170px";
  btn.style.height = "50px";
  btn.innerHTML = "CLIQUE AQUI";
  btn.addEventListener("click", () => {
    clicks++;
    resultEx.innerHTML = `<span style="font-size: 30px">O botão foi clicado ${clicks} vez(es)<span>`;
  });
  result.appendChild(btn);

  let btn2 = document.createElement("button");
  btn2.style.width = "170px";
  btn2.style.height = "50px";
  btn2.innerHTML = "LIMPAR CONTADOR";
  btn2.addEventListener("click", () => {
    clicks = 0;
    resultEx.innerHTML = `<span style="font-size: 30px">O botão foi clicado ${clicks} vez(es)<span>`;
  });
  result.appendChild(btn2);

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);
}

function ex10() {
  resultEx.innerHTML = "";
  result.innerHTML = `<h2>REGISTRANDO SUAS AÇÕES COM OS BOTÕES ACIMA</h2>`;

  let divButton = document.createElement("div");
  divButton.style.display = "flex";
  divButton.style.columnGap = "15px";
  divButton.classList.add("divButton");
  result.appendChild(divButton);

  let btn = document.createElement("button");
  btn.innerHTML = "AÇÃO 1";
  btn.addEventListener("click", () => {
    resultEx.innerHTML += `<span style="font-size: 30px">Você clicou o primeiro botão<span>`;
  });
  divButton.appendChild(btn);

  let btn2 = document.createElement("button");
  btn2.innerHTML = "AÇÃO 2";
  btn2.addEventListener("click", () => {
    resultEx.innerHTML += `<span style="font-size: 30px">Você clicou o segundo botão<span>`;
  });
  divButton.appendChild(btn2);

  let btn3 = document.createElement("button");
  btn3.innerHTML = "AÇÃO 3";
  btn3.addEventListener("click", () => {
    resultEx.innerHTML += `<span style="font-size: 30px">Você clicou o terceiro botão<span>`;
  });
  divButton.appendChild(btn3);

  let btn4 = document.createElement("button");
  btn4.innerHTML = "AÇÃO 4";
  btn4.addEventListener("click", () => {
    resultEx.innerHTML += `<span style="font-size: 30px">Você clicou o quarto botão<span>`;
  });
  divButton.appendChild(btn4);

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);
}

function excluir() {
  result.innerHTML = "";
  resultEx.innerHTML = "";
}
