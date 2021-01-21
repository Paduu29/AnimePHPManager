<?php
function get_main_menu_view() {
    if(!isset($_POST['view'])) {
        $_SESSION["view"] = "chron";
    }

    if($_SESSION["view"] == "chron") {
        return "Alle chronologisch";
    } elseif($_SESSION["view"] == "rank") {
        return "Alle nach Bewertung";
    } elseif($_SESSION["view"] == "new") {
        return "Neue Serien";
    }
}
?>
