var frm = document.getElementById("form");
frm.onsubmit = function() {
  var decimal = document.getElementById("number").value;
  var integer = parseInt(decimal); //converts string value of user's input to an integer
  var result = integer.toString(2); // returns the the value in binary represented by (2)
  document.getElementById("result").innerHTML = result;
  return false;
}
