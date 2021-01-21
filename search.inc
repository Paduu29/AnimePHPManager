
<!DOCTYPE html>
<?php
    // list($select,$currentpage,$pages_total,$shows_total) = get_query();


    // echo $hquery;
?>

<div class="w3-mobile w3-round" style="margin:0 auto; width:1460px;">
    <div class="w3-margin-left w3-padding-left" style="display:flex; flex-wrap: wrap; box-shadow: 0 0 1px 2px black;">		
	<?php
		
		$query = $_GET['query'];
		
		$min_length= 3;
		if(strlen($query) >= $min_length){
			$query = htmlspecialchars($query);
			// $query = mysqli_real_escape_string($query);
			
			$select= "select * from anime where title like '%".$query."%' or substring_index(theme, ',', 8) like '%".$query."%';";
			$result = $db->query($select);
			if($result ->num_rows > 0){
				while($row = $result->fetch_assoc()){
					echo "<div class='container'>";
                    echo "<a href='?id=".$row["id"]."'>";
                    echo "<div class='zoom'>";
                    echo '<img src="'.get_cover($row["anidb_id"]).'" alt="'.$row["title"].'" class="w3-image w3-border w3-border-black" style="width:180px; height:256px;">';
                    echo '<div class="overlay overlay2">'.str_replace(" - ","<br>",$row["title"]).'<br>'.get_stars()."</div>";
                    echo "  </div>";
                    echo "</a>";
					echo "</div>";
				}
			}
			else{
				echo "Kein treffer!!!!";
			}
		}
		else{
			echo "Mindestens ".$min_length." buchstaben fürs suche eingeben.";
		}

	?>

	</div>
</div>