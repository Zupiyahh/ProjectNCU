<html>
<head>
<title>Wash Staion MySQL Database</title>
<meta http-equiv="refresh" content="3">
</head> 
<h2 align="center">Hard ware</h2>
</table>
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

$sql = "SELECT * FROM Hardware  ";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    // output data of each row
	echo "<table width='1000' border='5' align='center' cellpadding='2' cellspacing='1'><th>WID</th><th>Model</th><th>WTime</th><th>State</th><th>DATETIME</th>";
    while($row = $result->fetch_assoc()) {
		echo "<tr>";
		//echo "<td>".$row['No']."</td>";
		echo "<td align='center'>".$row['WID']."</td>";
		echo "<td align='center'>".$row['Model']."</td>";
		echo "<td align='center'>".$row['WTime']."</td>";
		echo "<td align='center'>".$row['State']."</td>";
		echo "<td align='center'>".$row['reading_time']."</td>";
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