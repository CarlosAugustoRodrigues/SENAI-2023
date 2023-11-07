const sections = document.querySelectorAll("section");
const menuLinks = document.querySelectorAll(".item-menu");

function isSectionInView(section) {
  const rect = section.getBoundingClientRect();
  return rect.top <= 150 && rect.bottom >= 150;
}

function updateMenu() {
  sections.forEach((section, index) => {
    if (isSectionInView(section)) {
      menuLinks.forEach((link) => link.classList.remove("active"));
      menuLinks[index].classList.add("active");
    }
  });
}

window.addEventListener("scroll", updateMenu);

menuLinks.forEach((link) => {
  link.addEventListener("click", (event) => {
    event.preventDefault();
    const targetId = link.getAttribute("href").substring(1);
    const targetSection = document.getElementById(targetId);
    if (targetSection) {
      window.scrollTo({
        top: targetSection.offsetTop - 100,
        behavior: "smooth",
      });
    }
  });
});

updateMenu();
