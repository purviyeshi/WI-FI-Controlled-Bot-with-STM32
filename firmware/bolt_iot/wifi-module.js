
function forwardClick() {
  // Function to be executed when the "RIGHT off" button is pressed
  digitalWrite(0, 'HIGH');
  digitalWrite(1, 'LOW');
  digitalWrite(2, 'LOW');
  digitalWrite(3, 'LOW');
  // Add more logic or call other functions here as needed
}

function leftClick() {
  // Function to be executed when the "RIGHT off" button is pressed
  digitalWrite(0, 'LOW');
  digitalWrite(1, 'HIGH');
  digitalWrite(2, 'LOW');
  digitalWrite(3, 'LOW');
  // Add more logic or call other functions here as needed
}

function rightClick() {
  // Function to be executed when the "RIGHT off" button is pressed
  digitalWrite(0, 'LOW');
  digitalWrite(1, 'LOW');
  digitalWrite(2, 'HIGH');
  digitalWrite(3, 'LOW');
  // Add more logic or call other functions here as needed
}

function backwardClick() {
  // Function to be executed when the "RIGHT off" button is pressed
  digitalWrite(0, 'LOW');
  digitalWrite(1, 'LOW');
  digitalWrite(2, 'LOW');
  digitalWrite(3, 'HIGH');
  // Add more logic or call other functions here as needed
}

function stopClick() {
  // Function to be executed when the "RIGHT off" button is pressed
  digitalWrite(0, 'LOW');
  digitalWrite(1, 'LOW');
  digitalWrite(2, 'LOW');
  digitalWrite(3, 'LOW');
  // Add more logic or call other functions here as needed
}

singleButton({name:"FORWARD", action:"forwardClick", 
              pin:"0", value:"HIGH",bgcolor:"red",
              shape:"rectangle",align:"center","text_color":"black" })
              
singleButton({name:"LEFT", action:"leftClick", 
              pin:"2", value:"HIGH", bgcolor:"red",
              shape:"rectangle", align:"center", text_color:"black"})
              
singleButton({name:"RIGHT", action:"rightClick", 
              pin:"1", value:"HIGH", bgcolor:"red",
              shape:"rectangle", align:"center", text_color:"black"})
              
singleButton({name:"BACKWARD", action:"backwardClick", 
              pin:"3", value:"HIGH", bgcolor:"red",
              shape:"rectangle", align:"center", text_color:"black"})
              
singleButton({name:"STOP", action:"stopClick", 
              pin:"3", value:"HIGH", bgcolor:"red",
              shape:"rectangle", align:"center", text_color:"black"})
