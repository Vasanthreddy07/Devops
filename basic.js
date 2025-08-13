
/*const pen={
    fname:"Ball pen",
    rating:4,
    offer:5,
    price :233,
};
offer:9;
console.log(pen);
let a=4;
let b=2;
console.log("a**b = ",a**b);
console.log("4==2",a!=b);
let a=5;
let b=4;
if(a<b){
    console.log("a is greater");
}
else{
  console.log("a is lower");   
}*/
/* let color ;
let mode="dark";
if(mode==="dark"){
    color="black";
}
if(mode==="light"){
    color="white";
}
console.log(color); */
/* let i=10;
do{
    console.log(i);

}while(i<=5);
 */
/*let n=100;
for(i=0;i<n;i++){
    if(i%2==0){
        console.log("even numbers :",i);
    }
}
   /*  else{
         console.log("odd numbers :",i);
    } */
   /*function sum(a,b){
    return a+b;
   }
   const asum=(a,b) => {
    return a+b;
   }*/
  function count(a){
    let c=0;
    for(const ch of a){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            c++;
        }
    }
    return c;
  }


