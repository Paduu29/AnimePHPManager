<!DOCTYPE html>
<?php
session_start();

foreach (glob("functions/*.inc") as $filename) {
    require_once($filename) ;
}

?>
<html>
    <head>
        <meta charset="utf-8" />
        <title>Alex's Porno und Anime Manager</title>
        <link rel="stylesheet" href="style.css">
    </head>

    <body text="white">

        <?php include 'main_menu.inc'; ?>
<br>
<br>
<!--
<p>Sortierung: <?php  ?></p>
-->
<div class="bgblack">
<br>
<br>
<br>
<br>
<br>
<br>


    <?php	

        if(isset($_GET['erel'])) {
            include 'relation_edit.inc';
        } elseif(isset($_GET['id'])) {
            include 'details.inc';
        } 
		else {
			include 'search.inc';
            // include 'overview_pagination.inc';
        }

        ?>
		
<br>
<br>
<br>
<a href="index.php" class ="w3-button w3-black w3-text-blue" >Zurück</a>
<br>
<br>
<br>
<br>
<br>
<br>
    </body>
</html>
<?php $db->close(); ?>
	
	
	
