<?php
// Top Main Heading
$top_text =  new montaj_data();
if($lang == 'en')
{
$top_text->get_topm_en();
echo $top_text->topm_text_en;
}
else if($lang == 'ro'){
$top_text->get_topm_ro();
echo $top_text->topm_text_ro;
}
else{
$top_text->get_topm_ro();
echo $top_text->topm_text_ro;
}
?>