<html>
<head>
<title>NodeMCU ESP8266 MySQL Database</title>
<meta http-equiv="refresh" content="3">
</head> 
<body>
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

$sql = "SELECT * FROM projectconnectdatabasenoswicth  ";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    // output data of each row
	echo "<table border='1'><th>No</th><th>WTime</th><th>Process</th><th>DATETIME</th>";
    while($row = $result->fetch_assoc()) {
		echo "<tr>";
		echo "<td>".$row['No']."</td>";
		echo "<td>".$row['WTime']."</td>";
		echo "<td>".$row['Process']."</td>";
		echo "<td>".$row['reading_time']."</td>";
		echo "</tr>";
    }
	echo "</table>";
} else {
    echo "0 results";
}
$conn->close();
?>
</body>
</html>