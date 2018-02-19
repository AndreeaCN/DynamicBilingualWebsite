<?php
// Top Main Heading
echo "<h1>";
$title =  new scari_data();
if($lang == 'en')
{
$title->get_stitle_en();
echo $title->title_en;
}
else if($lang == 'ro'){
$title->get_stitle_ro();
echo $title->title_ro;
}
else{
$title->get_stitle_ro();
echo $title->title_ro;
}
echo "</h1>";

//first paragraph
echo "<h4>";
$top_text =  new scari_data();
if($lang == 'en')
{
$top_text->get_tops_en();
echo $top_text->tops_text_en;
}
else if($lang == 'ro'){
$top_text->get_tops_ro();
echo $top_text->tops_text_ro;
}
else{
$top_text->get_tops_ro();
echo $top_text->tops_text_ro;
}
echo "</h4>";
?>