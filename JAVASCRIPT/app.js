// console.log("Hiiii lala")

// //VARIABLES
// let a=9
// let b=15
// let c = "!%hjbdfvfdius";
// let d = true;
// let e={
//   name:'kartik', age:18 , roll_no:15
// }

// function startGame(){
//   const random=Math.floor(Math.random()*10)+1;
//   while(true){
//   const guess=parseInt(prompt("Guess the no. 1-10"));
//   console.log(guess)
//   if(guess > random){
//     alert("Too High");
//   }
//   if(guess<random){
//     alert("Too Low");
//   }
//   if(guess == random){
//     alert("YOU WIN !!");
//     break;
//   }
// }}

// const handleClick= () =>{
//   confirm("ARE YOU GAY ?");
//   if(confirm){
//     alert("CHALA JAA BSDK");
//   }else{
//     alert("YOU ARE WELCOME NIGGA");
//   }
// }


// let name=undefined;

// let student=["kartik", 45 , true , "BCA", 99.99, "hiii"];


// console.log(student[3]);

// const obj1={
//   name:"kartik",
//   age:17,
//   greet:function greet(name){
//   console.log("HII niggas!!");
// },
//   isPassout:true,
//   isPassionate:true,
//   isProcastinating:true
// }
// obj1.age=19;
// console.log("Hii niggas", obj1);

// console.log()


// let number=90;
// a=100;

// var num1="kartik";

// const pie=3.14;


// const studentObj = {
//   name:"Kartik", 
//   age:69,
//   roll_no:69,
//   id:6969
// }
// studentObj['name']="sarthak";
// studentObj['age']=189;
// studentObj['roll_no']=69;
// studentObj['id']=78;

// const testArray=[20,30,40,50,60];

// console.log(testArray.at(-1));


// const newArray=testArray.map((item, index)=>{
//   return item * index;
// })

// console.log(testArray);


// let a=parseInt(prompt("Enter A:"));
// let b=parseInt(prompt("Enter B:"));

// let choice = prompt("Enter operation:");

// function sum(a,b){
//   return a+b
// }

// function minus(a,b){
//   return a-b;
// }
// function multiply(a,b){
//   return a*b
// }

// function divide(a,b){
//   if(b!=0){
//     return a/b;
//   }else{
//     console.log("invalid");
//   }
// }


// function calculate(){
  
//   if(choice == '+'){
//     result = sum(a,b);
//     console.log("Result", result);
//   }
//     if(choice == '-'){
//     result = minus(a,b);
//     console.log("Result", result);
//   }
//     if(choice == '*'){
//     result = multiply(a,b);
//     console.log("Result", result);
//   }
//     if(choice == '/'){
//     result = divide(a,b);
//     console.log("Result", result);
//   }

// }

// function Save(){
//   print();
// }

// const newArray = [10,20,30,40,50];

// for(let i=0; i < newArray.length ; i++){
//   console.log("values", newArray[i]);
// }

// let resultDiv=document.querySelector("h2");

// function check(n){
//   let num1=parseInt(prompt("Enter a number:"));
//   if(n%2!=0){
//     console.log("ODD");
//     resultDiv.textContent = "ODD";
//   }else{
//     console.log("EVEN");
//     resultDiv.textContent= "EVEN";
//   }
// }

// const resultDiv = document.getElementsById("check");

// const result = document.createElement("p");

// function checkAge(){

// const age = parseInt(prompt("Enter Age:"));

// if(age>=18){
//   console.log("You can vote niggaaa");
//   resultDiv.append("YOU can vote niggaa")
// }
// if(age<=17){
//   console.log("You cant vote nigga");
//   result.textContent = "YOU CAN VOTEE !";
//   resultDiv.append("YOU can vote niggaa")
// }
// }

// const n = parseInt(prompt("Enter N:"));

// function giveEven(n){
//   if(n < 0){
//     return console.log(n*-2,"is converted to an positive even integer");
//   }
//   if(n%2==0){
//     return console.log(n," is already even");
//   }if(n%2!=0){
//     return console.log(n*2,"is converted to even");
//   }
// }

// function mod(n){
//   if(n<0){
//     return console.log(n*-1,"is converted number");
//   }if(n>0){
//     return console.log(n,"Is already a positive number");
//   }if(n == 0){
//     return console.log(n, "is 0");
//   }
// }



// function checkmod(n){
//   if(n<0){
//     return console.log(n*-1,"is converted number");
//   }if(n>0){
//     return console.log(n,"Is already a positive number");
//   }if(n == 0){
//     return console.log(n, "is 0");
//   }
// }

// checkmod(8)

console.log("OPTIONS:-");
console.log("1.RED | 2.YELLOW | 3.GREEN")


function checkOption(){
const input = prompt("Select option:");
if(input == "Red" || input == "red" || input == "RED"){
  console.log("Stop !")
}
if(input == "Yellow" || input == "yellow" || input == "YELLOW"){
  console.log("Get Ready to Go !!");
}
if(input == "Green" || input == "green" || input == "GREEN"){
  console.log("Startt !!");
}
}
