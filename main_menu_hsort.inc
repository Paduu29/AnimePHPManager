<?php
function get_hsort() {
    //~ if(isset($_POST['view'])) {
    //~ $_SESSION["view"] = $_POST['view'];
    //~ }

    if($_SESSION["view"] == "chron"){
        return "<i>Chronologisch</i>";
    }
    elseif($_SESSION["view"] == "rank"){
        return "<i>Ranking</i>";
    }
    elseif($_SESSION["view"] == "new"){
        return "<i>Neue Serien</i>";
    }
}
?>
