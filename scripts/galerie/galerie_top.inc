<?php
// Top Main Heading
echo "<h1>";
$title =  new galerie_data();
if($lang == 'en')
{
$title->get_gtitle_en();
echo $title->title_en;
}
else if($lang == 'ro'){
$title->get_gtitle_ro();
echo $title->title_ro;
}
else{
$title->get_gtitle_ro();
echo $title->title_ro;
}
echo "</h1>";

//top text
echo "<h4>";
$top_text =  new galerie_data();
if($lang == 'en')
{
$top_text->get_topg_en();
echo $top_text->topg_text_en;
}
else if($lang == 'ro'){
$top_text->get_topg_ro();
echo $top_text->topg_text_ro;
}
else{
$top_text->get_topg_ro();
echo $top_text->topg_text_ro;
}
echo "</h4>";
?>