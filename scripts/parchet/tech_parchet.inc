<?php
$tech_text =  new parchet_data();
if($lang == 'en')
{
$tech_text->get_tech_en();
echo $tech_text->tech_parchet_en;
}
else if($lang == 'ro'){
$tech_text->get_tech_ro();
echo $tech_text->tech_parchet_ro;
}
else{
$tech_text->get_tech_ro();
echo $tech_text->tech_parchet_ro;
}?>