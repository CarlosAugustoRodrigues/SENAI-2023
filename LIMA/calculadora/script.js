const result = document.getElementById('display');
const keys = document.querySelectorAll('button');

keys.forEach( (key) => {
  key.addEventListener('click', (e) => {
    var value = e.target.innerText; 

    if(+value || value == '.') {
        result.innerHTML += value;
    } else {
    }
  });

});
