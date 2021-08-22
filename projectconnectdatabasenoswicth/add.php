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
if (!empty($_GET['WTime']) && (!empty($_GET['State']))) {
    $WTime = $_GET['WTime'];
    $State = $_GET['State'];
    echo ($WTime);
    echo ($State);
    $sql = "INSERT INTO projectconnectdatabasenoswicth(WTime, State) VALUES ('" . $WTime . "', '" . $State . "')";

    if ($conn->query($sql) === TRUE) {
        echo "save OK";
    } else {
        echo "Error:" . $sql . "<br>" . $conn->error;
    }
}
$conn->close();
