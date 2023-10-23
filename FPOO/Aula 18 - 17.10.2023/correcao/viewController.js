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

function remover(botaoExlcuir) {
  botaoExlcuir.parentNode.remove();
  pessoas.splice(botaoExlcuir.parentNode.querySelector(".id").innerHTML.slice(0), 1);
  console.log(pessoas);
}

function editar(botaoEditar){
  
}