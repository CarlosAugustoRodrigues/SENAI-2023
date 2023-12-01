//EXERCICIO 21
function ex21() {
  let result = document.getElementById("result");
  result.innerHTML = `<h2>CONTANDO DE 1 ATÉ 10</h2>`;

  let resultEx = document.createElement("div");
  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  for (let i = 1; i <= 10; i++) {
    resultEx.innerHTML += `<span>${i} 👉</span>`;
  }
  resultEx.innerHTML += `<span> 🏁</span>`;
}

//EXERCICIO 22
function ex22() {
  let result = document.getElementById("result");
  result.innerHTML = `<h2>CONTANDO DE 1 ATÉ 10 (MARCANDO OS PARES)</h2>`;

  let resultEx = document.createElement("div");
  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  for (let i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      resultEx.innerHTML += `<span style="color: var(--color9);">${i} 👉</span>`;
    } else {
      resultEx.innerHTML += `<span>${i} 👉</span>`;
    }
  }
  resultEx.innerHTML += `<span> 🏁</span>`;
}

//EXERCICIO23
function ex23() {
  let result = document.getElementById("result");
  result.innerHTML = `<h2>CONTANDO DE 1 ATÉ 10 (MOSTRANDO APENAS OS PARES)</h2>`;

  let resultEx = document.createElement("div");
  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  for (let i = 1; i <= 10; i++) {
    i = i + 1;
    resultEx.innerHTML += `<span>${i} 👉</span>`;
  }
  resultEx.innerHTML += `<span> 🏁</span>`;
}

//EXERCICIO 24
function ex24() {
  let result = document.getElementById("result");
  result.innerHTML = `<h2>CONTAGEM REGRESSIVA DE 10 ATÉ 1</h2>`;

  let resultEx = document.createElement("div");
  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  for (let i = 10; i >= 1; i--) {
    resultEx.innerHTML += `<span>${i} 👉</span>`;
  }
  resultEx.innerHTML += `<span> 🏁</span>`;
}

//EXERCICIO 25
function ex25() {
  let result = document.getElementById("result");
  result.innerHTML = `<h2>PEGANDO DADOS DO FORMULÁRIO</h2>`;

  let input = document.createElement("input");
  input.setAttribute("type", "number");
  result.appendChild(input);

  let buttonIn = document.createElement("button");
  buttonIn.innerHTML = "ENVIAR";
  buttonIn.classList.add("btn");
  buttonIn.addEventListener("click", btn);
  result.appendChild(buttonIn);

  let resultEx = document.createElement("div");
  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  function btn() {
    resultEx.innerHTML = "";

    let valueIn = Number(document.querySelector("input").value);

    if (!isNaN(valueIn) && valueIn > 0) {
      for (let i = 0; i <= valueIn; i++) {
        resultEx.innerHTML += `<span>${i} 👉</span>`;
      }
      resultEx.innerHTML += `<span> 🏁</span>`;
    } else {
      resultEx.innerHTML += `<span>NENHUM VALOR DIGITADO</span>`;
    }
  }
}

//EXERCICIO 26
function ex26() {
  let result = document.getElementById("result");
  result.innerHTML = `<h2>PEGANDO DADOS DO FORMULÁRIO (CONTAGEM MAIS "INTELIGENTE)"</h2>`;

  let input = document.createElement("input");
  input.id = "input1";
  input.setAttribute("type", "number");
  result.appendChild(input);

  let input2 = document.createElement("input");
  input2.id = "input2";
  input2.setAttribute("type", "number");
  result.appendChild(input2);

  let buttonIn = document.createElement("button");
  buttonIn.innerHTML = "ENVIAR";
  buttonIn.classList.add("btn");
  buttonIn.addEventListener("click", btn)
  result.appendChild(buttonIn);

  let resultEx = document.createElement("div");
  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  function btn() {
    let valueStart = Number(document.getElementById("input1").value);
    let valueEnd = Number(document.getElementById("input2").value);

    if (valueStart > valueEnd) {
      resultEx.innerHTML += "<span>FUNCIONOU 1</span>";
    } else if (valueStart < valueEnd) {
        resultEx.innerHTML = "<span>FUNCIONOU 2</span>";
    }
  }
}
