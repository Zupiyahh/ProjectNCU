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
if (!empty($_GET['WTime']) && (!empty($_GET['Process']))) {
    $WTime = $_GET['WTime'];
    $Process = $_GET['Process'];
    echo ($WTime);
    echo ($Process);
    $sql = "INSERT INTO projectconnectdatabasenoswicth(WTime, Process) VALUES ('" . $WTime . "', '" . $Process . "')";

    if ($conn->query($sql) === TRUE) {
        echo "save OK";
    } else {
        echo "Error:" . $sql . "<br>" . $conn->error;
    }
}
$conn->close();
