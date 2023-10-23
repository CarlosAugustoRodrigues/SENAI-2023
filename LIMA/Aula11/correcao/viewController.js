const formPessoa = document.querySelector("#formPessoa");
const pessoas = [];

formPessoa.addEventListener("submit", (e) => {
  e.preventDefault();
  pessoas.push(new Pagamento(formPessoa.nome.value, formPessoa.salario.value));
  criarCard();
});

function criarCard() {
  const cards = document.querySelector(".cards");
  let card = document.querySelector(".card");
  cards.innerHTML = "";
  cards.appendChild(card);

  pessoas.forEach((pessoa) => {
    let cardNew = card.cloneNode(true);
    cardNew.classList.remove("model");
    cardNew.querySelector(".nomeValor").innerHTML = `${pessoa.nome}`;
    cardNew.querySelector(
      ".salarioValor"
    ).innerHTML = `Salário: R$ ${pessoa.salario}`;
    cardNew.querySelector(
      ".salarioBase"
    ).innerHTML = `Salário Base: R$ ${pessoa.salarioBase}`;
    cardNew.querySelector(
      ".salarioLiquido"
    ).innerHTML = `Salário Líquido: R$ ${pessoa.salarioLiquido}`;
    cardNew.querySelector(".id").innerHTML = `${pessoas.indexOf(pessoa)}`;
    cards.appendChild(cardNew);
  });
}

<<<<<<< HEAD:FPOO/Aula 18 - 17.10.2023/correcao/viewController.js
function remover(botaoExlcuir) {
  botaoExlcuir.parentNode.remove();
  pessoas.splice(botaoExlcuir.parentNode.querySelector(".id").innerHTML.slice(0), 1);
  console.log(pessoas);
}

function editar(botaoEditar){
  
}
=======
function remover(botaoExcluir) {
  botaoExcluir.parentNode.remove();
  pessoas.splice(
    botaoExcluir.parentNode.querySelector(".id").innerHTML.slice(0),
    1
  );
  console.log(pessoas);
}

function editar(botaoEditar) {}
>>>>>>> cb3e42cdfdc3a256bc09cac8383290248e61b5c8:LIMA/Aula11/correcao/viewController.js
