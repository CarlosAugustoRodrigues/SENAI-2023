const result = document.getElementById("result");
var resultEx = document.createElement("div");

function ex21() {
  resultEx.innerHTML = "";

  result.innerHTML = `<h2>CONTANTO DE 1 ATÉ 10</h2>`;

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  let paragraph = document.createElement("p");
  resultEx.appendChild(paragraph);

  for (let i = 1; i <= 10; i++) {
    paragraph.innerHTML += `<span>${i} 👉</span>`;
  }

  paragraph.innerHTML += `<span>🏁</span>`;
}

function ex22() {
  resultEx.innerHTML = "";

  result.innerHTML = `<h2>CONTANTO DE 1 ATÉ 10 (MARCANDO OS PARES)</h2>`;

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  let paragraph = document.createElement("p");
  resultEx.appendChild(paragraph);

  for (let i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      paragraph.innerHTML += `<span style="color: var(--color9)">${i} 👉</span>`;
    } else {
      paragraph.innerHTML += `<span>${i} 👉</span>`;
    }
  }

  paragraph.innerHTML += `<span>🏁</span>`;
}

function ex23() {
  resultEx.innerHTML = "";

  result.innerHTML = `<h2>CONTANTO DE 1 ATÉ 10 (MOSTRANDO OS PARES)</h2>`;

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  let paragraph = document.createElement("p");
  resultEx.appendChild(paragraph);

  for (let i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      paragraph.innerHTML += `<span>${i} 👉</span>`;
    }
  }

  paragraph.innerHTML += `<span>🏁</span>`;
}

function ex24() {
  resultEx.innerHTML = "";

  result.innerHTML = `<h2>CONTAGEM REGRESSIVA DE 10 ATÉ 1</h2>`;

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  let paragraph = document.createElement("p");
  resultEx.appendChild(paragraph);

  for (let i = 10; i >= 1; i--) {
    paragraph.innerHTML += `<span>${i} 👉</span>`;
  }

  paragraph.innerHTML += `<span>🏁</span>`;
}

function ex25() {
  resultEx.innerHTML = "";

  result.innerHTML = `<h2>PEGANDO DADOS DE UM FORMULÁRIO</h2>`;

  let input = document.createElement("input");
  input.type = "number";
  result.appendChild(input);

  let btna = document.createElement("button");
  btna.innerHTML = "ENVIAR";
  btna.addEventListener("click", btn);
  result.appendChild(btna);

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  let paragraph = document.createElement("p");
  resultEx.appendChild(paragraph);

  function btn() {
    paragraph.innerHTML = "";

    let num = parseInt(input.value);

    if (!isNaN(num) && num > 0) {
      for (let i = 0; i <= num; i++) {
        paragraph.innerHTML += `<span>${i} 👉</span>`;
      }
      paragraph.innerHTML += `<span>🏁</span>`;
    } else {
      alert("NENHUM VALOR DIGITADO");
    }
  }
}

function ex26() {
  resultEx.innerHTML = "";

  result.innerHTML = `<h2>PEGANDO DADOS DE UM FORMULÁRIO (CONTAGEM MAIS "INTELIGENTE")</h2>`;

  let inputStart = document.createElement("input");
  inputStart.type = "number";
  result.appendChild(inputStart);

  let inputEnd = document.createElement("input");
  inputEnd.type = "number";
  result.appendChild(inputEnd);

  let btna = document.createElement("button");
  btna.innerHTML = "ENVIAR";
  btna.addEventListener("click", btn);
  result.appendChild(btna);

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  let paragraph = document.createElement("p");
  resultEx.appendChild(paragraph);

  function btn() {
    paragraph.innerHTML = "";

    let start = parseInt(inputStart.value);
    let end = parseInt(inputEnd.value);

    if (!isNaN(start) && !isNaN(end) && start > end) {
      for (let i = start; i >= end; i--) {
        paragraph.innerHTML += `<span>${i} 👉</span>`;
      }
      paragraph.innerHTML += `<span>🏁</span>`;
    } else if (!isNaN(start) && !isNaN(end) && start < end) {
      for (let i = start; i <= end; i++) {
        paragraph.innerHTML += `<span>${i} 👉</span>`;
      }
      paragraph.innerHTML += `<span>🏁</span>`;
    } else if (start == end) {
      alert("IMPOSSÍVEL CONTAR POIS OS NÚMEROS SÃO IGUAIS");
      inputStart.value = "";
      inputEnd.value = "";
    } else {
      alert("É NECESSÁRIO PREENCHER OS DOIS INPUTS");
    }
  }
}

function ex27() {
  resultEx.innerHTML = "";

  result.innerHTML = `<h2>TABUADA</h2>`;

  let inputNumber = document.createElement("input");
  inputNumber.type = "number";
  result.appendChild(inputNumber);

  let btna = document.createElement("button");
  btna.innerHTML = "ENVIAR";
  btna.addEventListener("click", btn);
  result.appendChild(btna);

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  let paragraph = document.createElement("p");
  paragraph.classList.add("ex27");
  resultEx.appendChild(paragraph);

  function btn() {
    paragraph.innerHTML = "";

    let num = parseInt(inputNumber.value);

    if (!isNaN(num) && num > 0) {
      for (let i = 0; i <= 10; i++) {
        paragraph.innerHTML += `<span>${num} x ${i} = ${num * i}</span>`;
      }
      paragraph.innerHTML += `<span>🏁</span>`;
    } else {
      alert("NENHUM VALOR DIGITADO");
    }
  }
}

function ex28() {
  resultEx.innerHTML = "";

  result.innerHTML = `<h2>FATORIAL</h2>`;

  let inputNumber = document.createElement("input");
  inputNumber.type = "number";
  result.appendChild(inputNumber);

  let btna = document.createElement("button");
  btna.innerHTML = "ENVIAR";
  btna.addEventListener("click", btn);
  result.appendChild(btna);

  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  let paragraph = document.createElement("p");
  resultEx.appendChild(paragraph);

  function btn() {
    paragraph.innerHTML = "";

    let num = parseInt(inputNumber.value);
    let fat = 1;

    if (!isNaN(num) && num > 0) {
      for (fat; num > 1; num--) {
        fat *= num;
        paragraph.innerHTML += `<span>${num} x </span>`;
      }
      paragraph.innerHTML += `<span>1 = ${fat}</span>`;
    } else {
      alert("NENHUM VALOR DIGITADO");
    }
  }
}

function excluir() {
  result.innerHTML = "";
  resultEx.innerHTML = "";
}
