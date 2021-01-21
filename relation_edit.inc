<!DOCTYPE html>
<?php

echo "<form method='POST' action='?id=".$_GET['id']."'>";
echo "<input type='hidden' name='relationship_source' value='".$_GET['id']."'>";

?>
    <div class="w3-mobile w3-round" style="margin:0 auto; width:1098px;">
        <div class="w3-margin-left w3-padding-left" style="display:flex; flex-wrap: wrap;">

            <?php
            $select = "select * from db limit 12;";
            $result = $db->query($select);

            if($result ->num_rows > 0)
            {

                while($row = $result->fetch_assoc())
                {   echo "<div>";
                        echo "<div class='container'>";
                            echo "<a href='?id=".$row["id"]."'>";
                            echo '<img src="'.get_cover($row["id"],$row["imdb_id"]).'" alt="'.$row["title"].'" class="w3-image w3-border w3-border-black" style="width:180px; height:256px;">';
                            echo '<div class="overlay-fixed">'.str_replace(" - ","<br>",$row["title"]).'</div>';
                            echo "</a>";
                        echo "</div>";
                        relation_dropdown();
                    echo "<br><br></div>";
                }
            }else{
                echo "<br><br><br><br><br>Keine Treffer!";
            }

             ?>

        </div>
    </div>
    <p><button class='w3-btn w3-blue-grey w3-margin-left' type='submit' name='relationship_save' value='on'>Fertig</button>
</form>
