<!DOCTYPE html>
    <div class="w3-bar w3-black" stlye="position:sticky;">
<!--
        <a href="home.php" class="w3-bar-item w3-button w3-mobile w3-text-blue">Home</a>
-->

        <?php include 'main_menu_view.inc'; ?>

        <?php include 'main_menu_genre.inc'; ?>

        <?php include 'main_menu_filter.inc'; ?>



        <form action="search.php" method="GET">
        <button type="submit" name="Search" class="w3-bar-item w3-button w3-blue w3-right">Go</button>
        <input name ="query" type="text" class="w3-bar-item w3-input w3-right" placeholder="Search...">
        </form>

    </div>
