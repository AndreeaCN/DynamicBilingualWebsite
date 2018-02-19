<?php
$top_text =  new parchet_data();
if($lang == 'en')
{
$top_text->get_top_text_en();
echo $top_text->top_parchet_en;
}
else if($lang == 'ro'){
$top_text->get_top_text_ro();
echo $top_text->top_parchet_ro;
}
else{
$top_text->get_top_text_ro();
echo $top_text->top_parchet_ro;
}?>