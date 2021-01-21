<?php

?>
<!DOCTYPE html>
<html>

<head>
	<meta charset="utf-8" />
	<title>Login Tobias's Serien Manager</title>
	<link rel="stylesheet" href="style.css">
</head>

<body>

<div class="w3-padding" style="position:absolute;top:50%;left:50%;transform:translate(-50%,-50%);-ms-transform:translate(-50%,-50%);background-color:white; width: 200px; height: auto;">
	<form action="index.php" method="post">

		<label for="user"><b>User:</b></label>
		<div style="height: 15px;"></div>
		<input type="text" placeholder="Username" name="user" required>
		<div style="height: 30px;"></div>
		<label for="pswd"><b>Passwort:</b></label>
		<div style="height: 15px;"></div>
		<input type="password" placeholder="Passwort" name="pswd" required>
		<div style="height: 30px;"></div>
		<button class="w3-button w3-text-blue w3-black" type="submit" style="float: left; margin-right: 10px;">Log in</button> 
		<button class="w3-button w3-text-blue w3-black" type="reset" style="float: left; margin-left: 35px;">Reset</button>

<!--		<span style="float: left;padding-top: 16px;">Noch nicth user? Hier <a href="register.php">registrieren</a>.</span> -->

	</form>
		

</div>

</body>

</html>
