<?php
function get_mscr(){
    global $row;

    // if($row["stat"]<-1){ return "0.0"; }
    if($row["cat"]==0){ return "-"; }
    if($row["mscr"]==0) { return "?"; }
    return round($row["mscr"]/10,1,PHP_ROUND_HALF_ODD);
}

function get_uscr(){
    global $row;

    $r = 50;
    return round($r/10,1,PHP_ROUND_HALF_ODD);
}

function get_iscr2mscr($iscr){
    $min_iscr = 50.0;
    $max_iscr = 85;
    $min_iscr_equals = 15;

    $imdb_factor = ($max_iscr - $min_iscr_equals) / ($max_iscr - $min_iscr);
    if($iscr > $max_iscr) { $iscr = $max_iscr; }
    if($iscr < $min_iscr) { $iscr = $min_iscr; }

    return ($iscr -$min_iscr) * $imdb_factor + $min_iscr_equals;
}

function get_iscr($relative=false){
    global $row;
    if($relative) {
        $r = get_iscr2mscr($row["iscr"]);
    } else {
        $r = $row["iscr"];
    }
    return round($r/10,1,PHP_ROUND_HALF_ODD);
}

function get_stars() {
    if($_SESSION["view"] == "new") { return; }
    global $row;
    $max_stars = 5;

    $fstar = "&#9733;";
    $hstar = "&#9734;";

    $scr = get_mscr();
    if($row["stat"] == 0) { return "<span class='spanstar'>* NEU *</span>"; }
    if($scr == "-" || $scr == "?") {
        return "";
    }

    $sscr = round( $scr/10*$max_stars ,0,PHP_ROUND_HALF_ODD);

    $s = "<span class='spanstar'>".str_repeat($fstar,$sscr)."</span>";
    $s = $s."<span class='spanstaremtpy'>".str_repeat($hstar,$max_stars-$sscr)."</span>";

    return $s;
}

	




// function get_mstatus() {
    // global $row;

    // if($row["fin"] == 1) {
        // $hssn = " Mini-Serie";
    // } else {
        // if($row["ssn"] == 0) { $hssn = 1; } else { $hssn = $row["ssn"]; }
        // $hssn = str_pad($hssn,2,"0",STR_PAD_LEFT);
        // if($row["fin"]) { $hssn = $hssn."/".str_pad($row["fin"],2,"0",STR_PAD_LEFT);}
    // }

    // if($row["ssn"] == 0) { $r = "Vorgemerkt: s".$hssn; }
    // elseif($row["stat"] >=0) { $r = "Aktuell: s".$hssn; }
    // elseif($row["stat"] =-1) { $r = "Abgeschlossen: s".$hssn; }
    // else { $r = "Abgebrochen: s".$hssn; }

    // return $r;
// }
?>
