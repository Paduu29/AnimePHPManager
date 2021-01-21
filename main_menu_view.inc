<!DOCTYPE html>

	<div class="w3-dropdown-hover">
		<button class="w3-button w3-black w3-text-blue"><?php echo(get_main_menu_view());?></button>
			<div class="w3-dropdown-content w3-bar-block w3-card-4" style="width:200px;">


				<form method="post">
					<button class="w3-bar-item w3-black w3-button w3-text-blue" style="width: 200px;" type='submit' name='view' value='new'>Neue Serien</button>
				</form>

				<form method="post">
					<button class="w3-bar-item w3-black w3-button w3-text-blue" style="width: 200px;" type='submit' name='view' value='chron'>Serien chronologisch</button>
				</form>

				<form method="post">
					<button class="w3-bar-item w3-black w3-button w3-text-blue" style="width: 200px;" type='submit' name='view' value='rank'>Serien nach Ranking</button>
				</form>

	<!--
				<form method="post">
					<button type='submit' name='view' value='3'>Underdogs</button>
				</form>
	-->

			</div>
	</div>
