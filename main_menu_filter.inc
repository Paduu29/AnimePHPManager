<!DOCTYPE html>

<div class="w3-dropdown-hover">
	<button class="w3-button w3-black w3-text-blue">Filter</button>
		<div class="w3-dropdown-content w3-bar-block w3-card-4" style="width:260px; background-color:black;">
		<form method="post">
			<p class="w3-margin-left" style="color:white;">Filtern</p>
			<p style="color:white"><input class="w3-check w3-margin-left" type="checkbox" name="rating">
			<label>Rating</label></p>
			<p style="color:white"><input class="w3-check w3-margin-left" type="checkbox" name="interrupted">
			<label>Abgebrochene</label></p>
			<p style="color:white"><input class="w3-check w3-margin-left" type="checkbox" name="complete">
			<label>Abgeschloßene</label></p>
			<p style="color:white"><input class="w3-check w3-margin-left" type="checkbox" name="new">
			<label>Aktuelle</label></p>
			<p style="color:white"><button class="w3-btn w3-blue-grey w3-margin-left" type="submit" value="submit">Apply filter</button>
			<button class="w3-btn w3-blue-grey" type="submit" value="reset">Reset filter</button></p>
		</form>
		</div>
</div>
