<?php
if(isset($_POST['view'])) {
$_SESSION["view"] = $_POST['view'];
}

if($_SESSION["view"] == "chron"){  
	echo "<i>Chronologisch</i>";
}
elseif($_SESSION["view"] == "rank"){  
	echo "<i>Ranking</i>";
}
elseif($_SESSION["view"] == "new"){
	echo "<i>Neue Serien</i>";
}
?>
