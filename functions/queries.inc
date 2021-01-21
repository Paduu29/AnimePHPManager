<?php
function sql_combine($filter, $add) {
    if($filter == "") {
        $filter = "where ";
    } else {
        $filter = $filter." and ";
    }
    $filter = $filter." ".$add;

//~ echo "!!".$filter."!!";
    return $filter;
}

function get_query(){
    global $db, $filtered_genres, $hquery;
    $image_rows = 3;
    $image_cols = 8;

    $perpage = $image_rows*$image_cols;
	
	if(isset($_GET['page']) && !empty($_GET['page'])){
		$currentpage = $_GET['page'];

	}else{
		$currentpage = 1;

	}
	if(!isset($_POST['view'])) {
        $_SESSION["view"] = 1;
		 $orderby = "";

    } elseif(isset($_SESSION["view"])) {
        $_SESSION["view"] = $_POST['view'];

    }

	
	
	// if ($currentpage == 1){
		// $limit="limit 0, ".$perpage;
	// }else{
		// $currentpage = $currentpage - 1;
		// $limit = "limit ".$currentpage*$perpage.", ".$perpage;
	// }
	$limit = "limit ".($currentpage-1)*$perpage.", ".$perpage;
	// $startfrom = ($currentpage * $perpage) - $perpage;
	
	if($filtered_genres == "") { $filter = ""; } else {
        $filter = "where not theme in (".$filtered_genres.")";
        //$hquery = " außer ".$filtered_genres;
    }

    if($_SESSION["view"] == "chron") {
        $orderby = "order by seasonstart desc";
        $filter = sql_combine($filter,"ssn>0");
      //$hquery = "Zeige alle Serien chronologisch sortiert".$hquery;
    } elseif($_SESSION["view"] == "rank") {
        $orderby = "order by iscr desc";
        //$hquery = "Zeige alle Serien nach Bewertung sortiert".$hquery;
    } elseif($_SESSION["view"] == "new") {
        $orderby = "order by seasonstart desc";
        $filter = sql_combine($filter,"ssn=0");
        //$hquery = "Zeige neue Serien".$hquery;
    }
	
	$genr123 = array();
	if(isset($_POST['genre'])){
		if (is_array($_POST['genre'])){
			foreach($_POST['genre'] as $genres){
				$genr123[] = $genres;
			}
			// $_SESSION["view"] = $_POST['view'];
		}
		$selgenr = "'". implode ("', '", $genr123). "'";
		$selectasd = "where substring_index(theme, ',',1) in (".$selgenr.")";
		// print_r($genr123);
	}else{
		$selectasd = "";
	}
	
	$pages = "Select count(*) as count from anime;";
	$sql=mysqli_query($db, $pages);
	$r=$sql->fetch_assoc();
	$count = $r["count"];
	$pages_total= ceil($count/$perpage);
	// echo $limit;


	$query = "Select * from anime ".$selectasd."".$orderby." ".$limit.";";
	
	// $query = "Select * from anime ".$selectasd."".$orderby." ".$limit.";";
	
	// var_dump ($_GET['page']);

		// return array($query, $search);
	// }else{
		// $search="";
		
	// }
	return array($query,$currentpage,$pages_total,$count);


}
	
	
	
	
	// if(isset($_GET['page'])){
		// $page = $_GET['page'];
	// } else{
		// $page = 1;
	// }
	// $limit = 24;
	// $pageshow = ($page-1)*$limit;

	// $pages = "Select count(*) as count from anime;";

	

	// $limit = 24;

    // $sql=$db->query($pages);
	
    // $r = $sql->fetch_assoc();
	// $r = $sql->fetch_assoc();
	// $count = $r["count"];
	// $pages_total = ceil($count/$perpage);
	
	// $page = min($pages_total, filter_input(INPUT_GET, 'page', FILTER_VALIDATE_INT, array('options' => array( 'default' => 1, 'min_range' => 1,),)));
	
    // if(!isset($_SESSION["page"])) {
        // $page = 1;
    // }else{
		// $page = $_SESSION['page'];
	// }

    // if(isset($_POST['page'])) {
        // $_SESSION["page"] = $_POST['page'];
    // }

    
	// if (!isset($_GET['page'])){
	// $page = 1;
	// }else{
	// $page = $_GET['page'];
	// }

		

	
	

    
				



//~ echo $count."!";
    // $page = round($count/$perpage+0.49, 0, PHP_ROUND_HALF_EVEN);
//~ echo $pages;
    // if($page == 0) { $page = 1; }

    
	// if ($query <= 24){
		// $pages= "Select count(*) as count from anime ".$selectasd.";";
		// $sql=$db->query($pages);
	
		// $r = $sql->fetch_assoc();
		// $r = $sql->fetch_assoc();
		// $count = $r["count"];
		// $page = round($count/$perpage+0.49, 0, PHP_ROUND_HALF_EVEN);
		// $limit = "limit ".($_SESSION["page"]-1)*$perpage.", ".$perpage;
		// $pages_total = ceil($count/$perpage);
	// }
	// $query = "Select * from anime ".$selectasd."".$orderby." ".$limit.";";

	// echo $query;
	// echo "<br>";
	// echo $limit;
	// echo "<br>";
	// echo $count;
	// echo "<br>";
	// echo $page;
	// echo "<br>";
	// echo $pages_total;

    //~ echo ">".$query."<br>";
    
// }


?>
