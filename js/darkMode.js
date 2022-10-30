const dark = document.getElementById("dark");
dark.onclick = () => {
    document.body.classList.toggle("dark-mode");
    localStorage.setItem("dark-mode", document.body.classList.contains("dark-mode"));
}
window.addEventListener("load", initDark, true); 

function initDark(){
    if (localStorage.getItem("dark-mode") == "true") {
        document.body.classList.toggle("dark-mode");
    }
}

