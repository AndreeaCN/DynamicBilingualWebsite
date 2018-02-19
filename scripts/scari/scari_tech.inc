<?php
$tech_scari =  new scari_data();
if($lang == 'en')
{
$tech_scari->get_tech_en();
echo $tech_scari->tech_en;
}
else if($lang == 'ro'){
$tech_scari->get_tech_ro();
echo $tech_scari->tech_ro;
}
else{
$tech_scari->get_tech_ro();
echo $tech_scari->tech_ro;
}
?>