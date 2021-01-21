<!DOCTYPE html>

<div class="w3-dropdown-hover">
    <button class="w3-button w3-black w3-text-blue">Genre-Filter</button>
        <div class="w3-dropdown-content w3-bar-block w3-card-4" style="overflow: auto; max-height: 500px; width: 300px; background-color:black;">
            <form method="post">
			<button class= "w3-button w3-red w3-text-black" type = "submit" value = "submit" label="submit">Submitt</button>
            <?php
		    $theme = "select substring_index(theme, ',', 1) as x from anime group by x;";

			$themeresult = $db->query($theme);
			 
			 
			 
			if($themeresult ->num_rows > 0){
				while($row = $themeresult->fetch_assoc()){
					
				echo '<p style="color:white"><input class="w3-check w3-margin-left" type="checkbox" name="genre[]" value="'.$row["x"].'"><label>'.$row["x"].'</label></p>';
				}
			}else{
				echo "something went wrong!";
				}
            ?>
			<!--
			<p style="color:white"><input class="w3-check w3-margin-left" type="checkbox" name="genre"><label>Cooking</label></p>
            <p style="color:white"><input class="w3-check w3-margin-left" type="checkbox" name="genre"><label>BDSM</label></p>
			<p style="color:white"><input class="w3-check w3-margin-left" type="checkbox" name="genre"><label>Ecchi</label></p>
			<p style="color:white"><input class="w3-check w3-margin-left" type="checkbox" name="genre"><label>Action</label></p>
			<p style="color:white"><input class="w3-check w3-margin-left" type="checkbox" name="genre"><label>Adventure</label></p>
			-->
			
			
			</form>
        </div>
</div>
