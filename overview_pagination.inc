<!DOCTYPE html>
<?php
echo '<center>';

// echo $page."/".$pages_total;
// echo "<br>";
// echo $pages_total;
    // echo "<form action='' method='post'>";

    // if($page>1) {
        // echo "<button class='w3-button w3-text-blue w3-black w3-border-pagination w3-border-blue' type='submit' name='page' value='1'>erste</button>";
        // echo "<button class='w3-button w3-text-blue w3-black w3-border-pagination w3-border-blue' type='submit' name='page' value='".($page-1)."'>zurück</button>";
    // }
    // if($page<$pages_total) {
		
        // echo "<button class='w3-button w3-text-blue w3-black w3-border-pagination w3-border-blue' type='submit' name='page' value='".($page+1)."'>weiter</button>";
        // echo "<button class='w3-button w3-text-blue w3-black w3-border-pagination w3-border-blue' type='submit' name='page' value='".($pages_total)."'>letzte</button>";
    // }
    // echo "</form>";




echo "<br>";
echo "<br>";
echo "<br>";
echo "<br>";


for($page=1;$page<=$pages_total;$page++){
	echo '<a href="index.php?page=' . $page . '" class="w3-button w3-black w3-text-blue">' . $page . '</a> ';
}
echo "<br>";
echo "<br>";
echo "<br>";
echo "<br>";

echo '</center>';

?>
