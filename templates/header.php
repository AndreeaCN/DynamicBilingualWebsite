<!DOCTYPE html>
<!--A Design by W3layouts
Author: W3layout
Author URL: http://w3layouts.com
License: Creative Commons Attribution 3.0 Unported
License URL: http://creativecommons.org/licenses/by/3.0/
-->
<html lang="ro">
<head>
<title><?php echo $lang2['meta_title_header']?></title>
<meta name="viewport" content="width=device-width, initial-scale=1">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="keywords" content="" />

<link rel="icon" href="favicon.ico" type="image/x-icon" />
<script type="application/x-javascript"> addEventListener("load", function() { setTimeout(hideURLbar, 0); }, false); function hideURLbar(){ window.scrollTo(0,1); } </script>
<link href="css/bootstrap.css" rel='stylesheet' type='text/css' />
<link href="css/style.css" rel='stylesheet' type='text/css' />
<link rel="stylesheet" type="text/css" href="stylec.css" />
<link href="css/flexslider.css" rel='stylesheet' type='text/css' media="screen" />
<script src="js/jquery.min.js"></script>
<!--start-smoth-scrolling-->
<script type="text/javascript" src="js/move-top.js"></script>
<script type="text/javascript" src="js/easing.js"></script>
<script type="text/javascript">
			jQuery(document).ready(function($) {
				$(".scroll").click(function(event){		
					event.preventDefault();
					$('html,body').animate({scrollTop:$(this.hash).offset().top},1000);
				});
			});
		</script>
<!--start-smoth-scrolling-->
<?php
if (filter_input(INPUT_GET,  "opt") == "contact" )
{
	include("contact-app/html-head-code.php");
}
?>
</head>
<body>
	<!--header-top-->
	<div class="header-top" id="home">
	 <div id="languages">
	 <!-- ensure the language option is added to the page option and does not replace it.
	 also make sure the opt is changed as user travels through pages-->
	 <?php
	 if (filter_input(INPUT_GET,"opt"))
	 {
		 $opt =filter_input(INPUT_GET,"opt");
	 }
	 else if(filter_input(INPUT_GET,"opt"))
	 {
		 $opt =filter_input(INPUT_GET,"opt");
	 }
	 ?><a href="index.php?opt=<?php echo $opt?>&lang=en&lang2=en"><img src="images/en.png" alt="English Flag" /></a>
        <a href="index.php?opt=<?php echo $opt?>&lang=ro&lang2=ro"><img src="images/ro.png" alt="Romanian Flag"/></a>
        </div>
		<div class="container">
			<div class="head-main">
				<div class="col-md-4 head-left">
				        <p> 0755 450 826</p>

				</div>
				<div class="col-md-4 head-middle">
					<h1>Parchet-Stejar.ro</h1>
					<h2><?php echo $lang2['slogan']?></h2>
				</div>
				<div class="col-md-4 head-right">
				      <p>info@parchet-stejar.ro</p>
				</div>
				<div class="clearfix"></div>
			</div>
		</div>
	</div>
	<!--header-top-->
