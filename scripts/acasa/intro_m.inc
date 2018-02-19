<?php
$m_intro =  new acasa_data();
if($lang == 'en')
{
$m_intro->get_introm_en();
echo $m_intro->introm_en;
}
else if($lang == 'ro'){
$m_intro->get_introm_ro();
echo $m_intro->introm_ro;
}
else{
$m_intro->get_introm_ro();
echo $m_intro->introm_ro;
}?>
