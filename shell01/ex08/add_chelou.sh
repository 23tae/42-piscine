echo $FT_NBR1+$FT_NBR2 | tr "'" '0' | tr '\\"?!' '1-4' | tr 'mrdoc' '0-4' | bc | xargs echo 'obase=13; ibase=5;' | bc | tr '0-C' 'gtaio luSnemf'