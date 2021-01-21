<?php
	if(isset($_POST['text'])){
	$search = "select * from anime where title like '%".$_POST['text']."%';";
	}

	$searchresult = $db->query($search);
	 
        if($searchresult ->num_rows > 0)
        {

            while($row = $searchresult->fetch_assoc())
            {
                echo "<div class='container'>";
                    echo "<a href='?id=".$row["id"]."'>";
                    echo "<div class='zoom'>";
                    echo '<img src="'.get_cover($row["anidb_id"]).'" alt="'.$row["title"].'" class="w3-image w3-border w3-border-black" style="width:180px; height:256px;">';
                    echo '<div class="overlay overlay2">'.str_replace(" - ","<br>",$row["title"]).'<br>'.get_stars()."</div>";
                    echo "  </div>";
                    echo "</a>";
                echo "</div>";
            }
        }else{
            echo "<br><br><br><br><br>Keine Treffer!";
        }

?>