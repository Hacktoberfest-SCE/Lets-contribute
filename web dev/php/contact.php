<?php
	// Connect to database
	require_once('mysql_connect.php');
	
	// Get post variables
	$name    = $_POST['Name'];
	$email   = $_POST['Email'];
	$message = $_POST['Message'];
	
	// SQL message
	$sql = "INSERT INTO messages (Name, Email, Message)
			VALUES ('$name', '$email', '$message')";
			
	// Query and check for errors
	if(mysqli_query($con, $sql))
	{
		// Worked
		echo "good";
	} 
	else
	{
		// Didn't work
		echo "Error: " . $sql . "<br>" . mysqli_error($con);
	}
	
	// Close connection
	mysqli_close($con);
?>