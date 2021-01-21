<?php
function get_cover($ani_id){
	
	$source = "covers2/".$ani_id.".jpg";
	
	$r = "covers2/no_cover.jpg";
	
	if (file_exists($source)){
		$r = $source;
	}else{
		$r = "covers2/no_cover.jpg";
		}
	return $r;
}

?>
