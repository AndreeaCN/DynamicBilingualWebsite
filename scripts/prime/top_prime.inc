<?php
$top_text =  new prime_data();
if($lang == 'en')
{
$top_text->get_top_text_en();
echo $top_text->top_prime_en;
}
else if($lang == 'ro'){
$top_text->get_top_text_ro();
echo $top_text->top_prime_ro;
}
else{
$top_text->get_top_text_ro();
echo $top_text->top_prime_ro;
}?>