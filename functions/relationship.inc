<?php

function relation_manager($id) {
}

function relation_dropdown(){
    global $row;


    echo"<select style='width:180px;' name='newrelation".$row["id"]."'>";

    $options = array(-1=>"keine Ahnung",0=>"so gar keine Ähnlichkeit",1=>"nicht ganz anders",2=>"Setting ODER Plot ähnlich",3=>"Setting UND Plot ähnlich",4=>"Spinoff oder Remake");

    foreach($options as $value => $option) {
        if($value == -1) { $select = "selected"; } else { $select = ""; }
        echo "<option value='".$value."' ".$select.">".$option."</option>";
    }

    echo"</select>";
}
?>
