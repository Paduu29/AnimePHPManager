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

<div class="w3-padding" style="position:absolute;top:50%;left:50%;transform:translate(-50%,-50%);-ms-transform:translate(-50%,-50%);background-color:white; width: 210px; height: auto;">
	<form action="index.php" method="post">
		<label for="email"><b>E-Mail adresse:</b></label>
		<div style="height: 15px;"></div>
		<input type="text" placeholder="E-mail" name="e-mail" required>
		<div style="height: 30px;"></div>
		<label for="user"><b>User:</b></label>
		<div style="height: 15px;"></div>
		<input type="text" placeholder="Username" name="user" required>
		<div style="height: 30px;"></div>
		<label for="pswd"><b>Passwort:</b></label>
		<div style="height: 15px;"></div>
		<input type="password" placeholder="Passwort" name="pswd" required>
		<div style="height: 30px;"></div>
		<button class="w3-button w3-text-blue w3-black" type="submit">Registrieren</button>	<button class="w3-button w3-text-blue w3-black" type="reset">Reset</button>
		<br>
		<span style="float: right; padding-top: 16px;"><a href="login.php">Zurück</a></span>

	</form>
		

</div>

</body>

</html>
