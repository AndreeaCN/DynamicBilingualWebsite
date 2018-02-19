<!--about-starts-->
	<div class="about">
		<div class="container">
			<div class="about-top heading">
				<h1><?php include("scripts/caracter/character_title.inc");?></h1>
			</div>
			<div class="about-bottom">				
				<div class="col-md-6 about-left">
					<img src="images/caracter_top.png" alt="<?php echo $lang['TOP_IMAGE_ALT']; ?>" />
				</div>
				<div class="col-md-6 about-right">
					<?php include_once("scripts/caracter/top_caracter.inc");?>
				</div>
				<div class="clearfix"></div>
			</div>
		</div>
	</div>
	<!--about-end-->
	<!--features-starts-->
	<div class="features">
		<div class="container">
			<div class="features-top heading">
				<?php include_once("scripts/caracter/tech_caracter.inc");?>
			</div>
			<div class="features-bottom">
				<div class="col-md-6 feature-left">
					<div class="f-left">
						<img src="images/lamela_caracter.jpg" alt="<?php echo $lang['TECH_LIST_LIMGALT']; ?>" />
					</div>
					<div class="f-right">
						<?php include_once("scripts/caracter/list_left_caracter.inc");?>
					</div>
					<div class="clearfix"></div>
				</div>
				<div class="col-md-6 feature-left">
					<div class="f-left">
						<img src="images/parchet_caracter.jpg" alt="<?php echo $lang['TECH_LIST_LIMGALT']; ?>" />
					</div>
					<div class="f-right">
						<?php include_once("scripts/caracter/list_right_caracter.inc");?>
					</div>
					<div class="clearfix"></div>
				</div>
				<div class="clearfix"></div>
			</div>
		</div>
	</div>
	<!--features-end-->