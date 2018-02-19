<?php
$extra_text =  new parchet_data();
if($lang == 'en')
{
$extra_text->get_extra_en();
echo $extra_text->extra_parchet_en;
}
else if($lang == 'ro'){
$extra_text->get_extra_ro();
echo $extra_text->extra_parchet_ro;
}
else{
$extra_text->get_extra_ro();
echo $extra_text->extra_parchet_ro;
}
?>