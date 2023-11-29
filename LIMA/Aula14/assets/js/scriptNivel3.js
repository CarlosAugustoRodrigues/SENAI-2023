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

function ex25() {
  let result = document.getElementById("result");
  result.innerHTML = `<h2>PEGANDO DADOS DO FORMULÁRIO</h2>`;

  let input = document.createElement("input");
  input.setAttribute("type", "number");
  result.appendChild(input);

  let buttonIn = document.createElement("button");
  buttonIn.innerHTML = "ENVIAR";
  buttonIn.classList.add("btnIn25");
  buttonIn.addEventListener("click", btn); // Use addEventListener para associar o evento click
  result.appendChild(buttonIn);

  let resultEx = document.createElement("div");
  resultEx.classList.add("resultEx");
  result.appendChild(resultEx);

  function btn() {
    resultEx.innerHTML = ""; // Limpa o conteúdo anterior

    let valueIn = parseInt(document.querySelector("input").value, 10);

    if (!isNaN(valueIn) && valueIn > 0) {
      for (let i = 1; i <= valueIn; i++) {
        resultEx.innerHTML += `<span>${i} 👉</span>`;
      }
      resultEx.innerHTML += `<span> 🏁</span>`;
    } else {
      resultEx.innerHTML += `<span>NENHUM VALOR VÁLIDO DIGITADO</span>`;
    }
  }
}
