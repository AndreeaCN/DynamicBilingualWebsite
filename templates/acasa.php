	<!--banner-starts-->
	<div class="banner">
		<section class="slider">
            <div class="flexslider">
                <ul class="slides">
					<li>
					<div class="banner1">
						<div class="container">
							<div class="banner-text">
								<h3><?php echo $lang2['mesaj1']?></h3>
							</div>
						</div>
					</div>
					</li>
					<li>
					<div class="banner2">
						<div class="container">
							<div class="banner-text">
								<h3><?php echo $lang2['mesaj2']?></h3>
							</div>
						</div>
					</div>
					</li>
					<li>
					<div class="banner3">
						<div class="container">
							<div class="banner-text">
								<h3><?php echo $lang2['mesaj3']?></h3>
							</div>
						</div>
					</div>
					</li>
					<li>
					<div class="banner4">
						<div class="container">
							<div class="banner-text">
								<h3><?php echo $lang2['mesaj4']?></h3>
							</div>
						</div>
					</div>
					</li>
				</ul>
			</div>
		</section>
		<div class="down">
			<ul>
				<li><a href="#home" class="hvr-bounce-to-right scroll"><?php echo $lang2['scroll-meniu']?></a></li>
				<li><a href="#furniture" class="hvr-bounce-to-right scroll"><?php echo $lang2['scroll-parchet']?></a></li>
				<li><a href="#news" class="hvr-bounce-to-right scroll"><?php echo $lang2['scroll-galerie']?></a></li>
			<!-- 	<li><a href="#product" class="hvr-bounce-to-right scroll"></a></li> -->
			</ul>
		</div>
	</div>
	<!--banner-end-->
	<!--FlexSlider-->
	
	<script defer src="js/jquery.flexslider.js"></script>
	<script type="text/javascript">
    $(window).load(function(){
      $('.flexslider').flexslider({
        animation: "slide",
        start: function(slider){
          $('body').removeClass('loading');
        }
      });
    });
  </script>
	<!--End-slider-script-->
	<!--starts-welcome-->
	<div class="welcome" id="welcome">
		<div class="container">
			<div class="welcome-top heading">
				<?php include_once("scripts/acasa/intro_top.inc"); ?>
			</div>
			<div class="welcome-bottom">
				<div class="col-md-4 welcome-left">
					<img src="images/prime.jpg" alt="Mostra de Parchet Prime instalat" />
					<div class="welcome-btm">
						<a href="colectia-prime.php">Parchet Stejar Prime <span class="arw"> </span></a>
					</div>
				</div>
				<div class="col-md-4 welcome-left">
					<img src="images/caracter.jpg" alt="Mostra de Parchet Caracter instalat" />
					<div class="welcome-btm">
						<a href="colectia-caracter.php">Parchet Stejar Caracter <span class="arw"> </span></a>
					</div>
				</div>
				<div class="col-md-4 welcome-left">
					<img src="images/rustic.jpg" alt="Mostra de Parchet Rustic instalat" />
					<div class="welcome-btm">
						<a href="colectia-rustic.php">Parchet Stejar Rustic <span class="arw"> </span></a>
					</div>
				</div>
				<div class="clearfix"></div>
			</div>
		</div>
	</div>
	<!--welcome-End-->
	<!--our-starts-->
	<div class="our" id="furniture">
		<div class="container">
			<div class="our-top">
				<div class="col-md-7 our-left heading">
				     <?php include_once("scripts/acasa/intro_p.inc"); ?>
				</div>
				<div class="col-md-5 our-right">
					<img src="images/o-1.jpg" alt="Podea cu finisaj ales din seria noastra de parchet"/>
				</div>
				<div class="clearfix"></div>
			</div>
			<div class="our-top">
				<div class="col-md-7 o-left">					
					<img src="images/o-2.jpg" alt="Parchet de stejar in dormitor, instalat de compania noastra" /></a>
				</div>
				<div class="col-md-5 o-right  heading">
				    <?php include_once("scripts/acasa/intro_m.inc"); ?>
				</div>
				<div class="clearfix"></div>
			</div>
			<div class="our-top">
				<div class="col-md-7 our-left heading">
				   <?php include_once("scripts/acasa/intro_s.inc"); ?>
				</div>
				<div class="col-md-5 our-right">
					<img src="images/o-3.jpg" alt="Scari imbracate in stejar masiv" /></a>
				</div>
				<div class="clearfix"></div>
			</div>
		</div>
	</div>
	<!--our-End-->
	<!--news-starts-->
	<div class="news" id="news">
		<div class="container">
			<div class="news-top heading">
				<?php include_once("scripts/acasa/intro_g.inc"); ?>
			</div>
			<div class="news-bottom">
				<div class="col-md-4 news-left">
					<img src="images/n-1.jpg" alt="Parchet instalat pentru Scoala Mark Twain in Galerie" />
					<div class="mask">
						<a href="index.php?opt=galerie"><h3><?php echo $lang2['link-galerie1']?></h3></a>
					</div>
				</div>
				<div class="col-md-4 news-left">
					<img src="images/n-2.jpg" alt="Scari si Balustrade construite din stejar"  />
					<div class="mask">
						<a href="index.php?opt=galerie"><h3><?php echo $lang2['link-galerie2']?></h3></a>
				    </div>
				</div>
				<div class="col-md-4 news-left">
					<img src="images/n-3.jpg" alt="Parchet instalat si finisat cu lacuri de diferite culori" />
					<div class="mask">
						<a href="index.php?opt=galerie"><h3><?php echo $lang2['link-galerie3']?></h3></a>
					</div>
				</div>
				<div class="clearfix"></div>
			</div>
		</div>
	</div>
	