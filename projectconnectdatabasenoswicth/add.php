<?php

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "projecttt";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
if ( !empty($_GET['WID']) && (!empty($_GET['WTime'])) && (!empty($_GET['State'])) ) {
    
    $WID = $_GET['WID'];
    $WTime = $_GET['WTime'];
    $State = $_GET['State'];
    echo ($WID);
    echo ($WTime);
    echo ($State);

    $sql = "INSERT INTO hardware(WID, WTime, State) VALUES ('" . $WID . "', '" . $WTime . "', '" . $State . "')";

    if ($conn->query($sql) === TRUE) {
        echo "save OK";
    } else {
        echo "Error:" . $sql . "<br>" . $conn->error;
    }
}
$conn->close();
