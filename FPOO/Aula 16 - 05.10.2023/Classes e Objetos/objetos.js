//Objeto declarado diretamente
const obj = {};

//Atributos dinamicamente
obj.nome = "Bola";
obj.preco = 39.9;
obj.qtd = 10;

//Método com function
obj.total = function () {
  return obj.preco * obj.qtd;
};

//Método com arrow function
obj.showHTML = () => {
  let str = `<label>Nome: </label><label>${obj.nome}</label>`;
  str += `<label>Preço: </label><label>${obj.preco}</label>`;
  str += `<label>Quantidade: </label><label>${obj.qtd}</label>`;
  str += `<label>Total: </label><label>${obj.total().toFixed(2)}</label>`;

  return str;
};

//Objeto cheio, com atributos e métodos
const obj2 = {
  nome: "Mesa de escritório",
  preco: 349.9,
  qtd: 2,
  total: function () {
    return this.preco * this.qtd;
  },

  showHTML: function () {
    let str = `<label>Nome: </label><label>${this.nome}</label>`;
    str += `<label>Preço: </label><label>${this.preco}</label>`;
    str += `<label>Quantidade: </label><label>${this.qtd}</label>`;
    str += `<label>Total: </label><label>${this.total().toFixed(2)}</label>`;

    return str;
  },
};

//Objeto cheio, com atributos e métodos
const obj3 = {
  nome: "Monitor",
  preco: 1299.9,
  qtd: 2,
  total: function () {
    return this.preco * this.qtd;
  },

  showHTML: function () {
    let str = `<label>Nome: </label><label>${this.nome}</label>`;
    str += `<label>Preço: </label><label>${this.preco}</label>`;
    str += `<label>Quantidade: </label><label>${this.qtd}</label>`;
    str += `<label>Total: </label><label>${this.total().toFixed(2)}</label>`;

    return str;
  },
};

//Saídas no console
console.log(obj);
console.log("Valor Total = R$ " + obj.total().toFixed(2));
console.log(obj2);
console.log("Valor Total = R$ " + obj2.total().toFixed(2));
console.log(obj3);
console.log("Valor Total = R$ " + obj3.total().toFixed(2));

//Saída no HTML
const main = document.getElementById("objetos");
const div = document.createElement("div");
const div2 = document.createElement("div");
const div3 = document.createElement("div");
div.innerHTML = obj.showHTML();
div2.innerHTML = obj2.showHTML();
div3.innerHTML = obj3.showHTML();
main.appendChild(div);
main.appendChild(div2);
main.appendChild(div3);
