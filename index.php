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
        <title>Alex's Anime Manager</title>
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
        } else {
            //~ include 'relation_edit.inc';
            include 'overview.inc';
            include 'overview_pagination.inc';
        }

        ?>
		

    </body>
</html>
<?php $db->close();
?>
