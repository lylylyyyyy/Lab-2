var frm = document.getElementById("form");
// once the submit button is clicked, it will be directed to the function which determines if the string is a palindrome or not
frm.onsubmit = function() {
    var string = document.getElementById("number-text").value;
    var mainString = string.toLowerCase();
    var len = mainString.length;
    var view = document.getElementById("result");
// this is
    for (var i = 0; i < len/2; i++) {
        if (mainString[i] != mainString[len-1-i]) {
            result.innerHTML = 'Not a Palindrome';
            return false;
        } else {
            result.innerHTML = 'Palindrome';
            return false;
        }
    }
}
