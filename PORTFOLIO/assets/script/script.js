var menuContainer = document.getElementById("menu");

var itens_menu = menuContainer.getElementsByClassName("item-menu");

for (var i = 0; i < itens_menu.length; i++) {
  itens_menu[i].addEventListener("click", function() {
    var current = document.getElementsByClassName("active");
    current[0].className = current[0].className.replace(" active", "");
    this.className += " active";
  });
}