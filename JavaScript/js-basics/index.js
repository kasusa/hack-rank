// let selectedColors = ['red', 'blue'];
// selectedColors[2] = 1;
// console.log(selectedColors.length);

// const circle = {
//     radius: 1,
//     location: {
//         x: 1,
//         y: 1
//     },
//     draw: function() {
//         console.log('draw');
//     }
// };

//factory function
// function createCircle(radius) {
//     return {
//         radius,
//         draw() {
//             console.log('draw');
//         }
//     }
// }

//construcion function
function Circle(radius) {
    this.radius = radius;
    this.draw = function() {
        console.log('draw');
    }
};

// //可以用于后台的自动生成的jsfunction(不太明白)
Circle.call({}, 1);
Circle.apply({}, [1, 2, 3]);

// const circle = new Circle1(1);
// circle.draw();

let x = 10;
let y = x;
var z = 10;

console.log('\a');