<?php
echo "<h1>";
$title =  new parchet_data();
if($lang == 'en')
{
$title->get_title_en();
echo $title->title_parchet_en;
}
else if($lang == 'ro'){
$title->get_title_ro();
echo $title->title_parchet_ro;
}
else{
$title->get_title_ro();
echo $title->title_parchet_ro;
}
echo "</h1>";

?>