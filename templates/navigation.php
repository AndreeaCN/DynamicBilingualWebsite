	<!--navigation-starts-->
	<div class="navigation">
		<span class="menu"></span> 
			<ul class="navig cl-effect-16">
			<?php
			if(filter_input(INPUT_GET,"opt")=="acasa")
			 {
				 ?><li class="active"><a href="index.php?opt=acasa&lang=ro"><?php echo $lang2['acasa']?></a></li> <?php 
			}
			else 
			 {
				?><li><a href="index.php?opt=acasa"><?php echo $lang2['acasa']?></a></li><?php
			}
			if(filter_input(INPUT_GET,"opt")=="parchet")
			{
				?><li class="active"><a href="index.php?opt=parchet"><?php echo $lang2['parchet']?></a></li><?php				
			}
			else
			{
				?><li><a href="index.php?opt=parchet"><?php echo $lang2['parchet']?></a></li><?php
			}
			if(filter_input(INPUT_GET,"opt")=="galerie")
			{
				?><li class="active"><a href="index.php?opt=galerie"><?php echo $lang2['galerie']?></a></li><?php
			}
			else
			{
				?><li><a href="index.php?opt=galerie"><?php echo $lang2['galerie']?></a></li><?php
			}
			if(filter_input(INPUT_GET,"opt")=="montaj")
			{
				?><li class="active"><a href="index.php?opt=montaj"><?php echo $lang2['montaj']?></a></li><?php
			}
			else
			{
				?><li><a href="index.php?opt=montaj"><?php echo $lang2['montaj']?></a></li><?php
			}
			if(filter_input(INPUT_GET,"opt")=="scari")
			{
				?><li class="active"><a href="index.php?opt=scari"><?php echo $lang2['scari']?></a></li></li><?php
			}
			else
			{
				?><li><a href="index.php?opt=scari"><?php echo $lang2['scari']?></a></li><?php
			}
			if(filter_input(INPUT_GET,"opt")=="contact")
			{
				?><li class="active"><a href="index.php?opt=contact"><?php echo $lang2['contact']?></a></li><?php
			}
			else
			{
				?><li><a href="index.php?opt=contact"><?php echo $lang2['contact']?></a></li><?php
			} ?>			
				
				
			</ul>
		</div>
		<!--navigation-end-->
	<!--script-for-menu-->
		<script>
			$("span.menu").click(function(){
				$(" ul.navig").slideToggle("slow" , function(){
				});
			});
		</script>
	<!--script-for-menu-->