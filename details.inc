
<!DOCTYPE html>
<?php
print_r($_SESSION);

relation_manager($_GET["id"]);

$result = $db->query("select * from anime where id=".$_GET["id"].";");
$row = $result->fetch_assoc();
$synopsis = $db->query("select * from datas where anidb_id = ".$row["anidb_id"].";");
$row2 = $synopsis->fetch_assoc();

echo '<div class="w3-container w3-margin-left w3-padding">';
echo '<center>';
echo '<p>'.$row["title"].'</p>';
echo '<img src="'.get_cover($row["ani_id"]).'" alt="'.$row["title"].'" class="w3-image w3-border w3-border-black" style="width:360px; height:512px;">';
echo '</center>';
echo '<br>';
echo '<a href="index.php" style="text-decoration: none;"><button class="w3-button w3-text-blue w3-black w3-border-pagination w3-border-blue">Zurück</button></a>';
echo '<br>';
echo '<left>';
echo '<table class="w3-table-all">';
echo '<tr class="w3-black w3-text-blue">';
echo "<th colspan='2'><center><a href='https://myanimelist.net/anime/".$row["ani_id"]."' target='_blank'>MyAnimeList</a></center></th>";
echo '</tr>';
echo '<tr class="w3-black w3-text-red">';
echo "<td>Genre: </td>";
echo '<td>'.$row["theme"].'</td>';
echo '</tr>';
echo '<tr class="w3-black w3-text-red">';
echo '<td>Status: </td>';
// echo "<td>".get_mstatus()."</td>";
echo '</tr>';
echo '<tr class="w3-black w3-text-red">';
echo "<td>Alex score: </td>";
echo '<td>'.get_mscr().'</td>';
echo '</tr>';
echo '<tr class="w3-black w3-text-red">';
echo "<td>Member score: </td>";
echo '<td>'.get_uscr().'</td>';
echo '</tr>';
echo '<tr class="w3-black w3-text-red">';
echo "<td>MyAnimeList score: </td>";
echo '<td>'.get_iscr().'</td>';
echo '</tr>';
echo '<tr class="w3-black w3-text-red">';
echo "<td>MyAnimeList score (relativ zu alex score): </td>";
echo '<td>'.get_iscr(true).'</td>';
echo '</tr>';
echo '<tr class="w3-black w3-text-red">';
echo "<td> Synopsis: </td>";
echo '<td>'.$row2["synopsis"].'</td>';
echo "</tr>";
echo '</table>';
echo '</left>';
echo '</div>';
// echo 'Ähnliche Serien (<a href="?id='.$_GET["id"].'&erel=1">hilf mit</a>):';
?>


