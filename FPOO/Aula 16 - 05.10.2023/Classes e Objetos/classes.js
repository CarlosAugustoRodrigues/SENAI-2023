//Criar objetos a partir de uma classe
class Coisa {
  constructor(nome, preco, qtd) {
    this.nome = nome;
    this.preco = preco;
    this.qtd = qtd;
  }

  total() {
    return this.preco * this.qtd;
  }

  showHTML() {
    let str = `<label>Nome: </label><label>${this.nome}</label>`;
    str += `<label>Preço: </label><label>${this.preco}</label>`;
    str += `<label>Quantidade: </label><label>${this.qtd}</label>`;
    str += `<label>Total: </label><label>${this.total().toFixed(2)}</label>`;

    return str;
  }
}

//Ciar instâncias desta classe
const lista = [];
lista.push(new Coisa("Cadeira", 149.9, 6));
lista.push(new Coisa("Mesa", 349.9, 1));
lista.push(new Coisa("Caneta", 2.99, 50));
lista.push(new Coisa("Sofá", 1200.0, 1));
lista.push(new Coisa("PC Gamer", 5200.0, 1));

//Mostrar no Console
console.table(lista);

//Mostrar no HTML
const main = document.getElementById("objetos");
lista.forEach((obj) => {
  const div = document.createElement("div");
  div.innerHTML = obj.showHTML();
  main.appendChild(div);
});
