<?php

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "projecttt";

if ($_SERVER["REQUEST_METHOD"] == "POST")  {
    
    $WID = $_POST['WID'];
    $Model = $_POST['Model'];
    $WTime = $_POST['WTime'];
    $State = $_POST['State'];

    // Create connection
    $conn = new mysqli($servername, $username, $password, $dbname);
    // Check connection
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    $sql = "INSERT INTO hardware(WID, Model, WTime, State) VALUES ('" . $WID . "',  '" . $Model. "', '" . $WTime . "', '" . $State . "')";
    echo ($sql);

    if ($conn->query($sql) === TRUE) {
        echo "successfully";
    } 
    else {
        echo "Error:" . $sql . "<br>" . $conn->error;
    }

    
    $conn->close();
}
else {
echo "No data posted with HTTP POST.";
}

