<?php
$character_title =  new parchet_data();
if($lang == 'en')
{
$character_title->get_character_en();
echo $character_title->character_title_en;
}
else if($lang == 'ro'){
$character_title->get_character_ro();
echo $character_title->character_title_ro;
}
else{
$character_title->get_character_ro();
echo $character_title->character_title_ro;
}
?>