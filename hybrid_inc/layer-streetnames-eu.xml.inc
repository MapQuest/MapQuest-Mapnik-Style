<Style name="shield-text-e-road">
	<Rule>
                <Filter>[length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_trk_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="650">[ref]</ShieldSymbolizer>
	</Rule>
        <Rule>
                <Filter>[length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_trk_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="650">[ref]</ShieldSymbolizer>
        </Rule>
</Style>

<Style name="shield-text" filter-mode="first">
<!--Mexico Shields-->
        <Rule>
                <Filter>[iso_country_code] = 'MEX' and [number_length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_mex2.svg" avoid-edges="true" minimum-padding="256" minimum-distance="10" spacing="400" label-position-tolerance="0">[route_number]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'MEX' and [number_length] &lt; 5</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_mex[number_length].svg" avoid-edges="true" minimum-padding="256" minimum-distance="10" spacing="400" label-position-tolerance="0">[route_number]</ShieldSymbolizer>
        </Rule>

<!-- Trans Canada Highway -->
        <Rule>
                <Filter>[iso_country_code] = 'CAN' and [name].match('Trans.*Canada.*Highway|Route.*Transcanadienne') and [number_length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="9" fill="#108010" dx="1" dy="-1" placement="line" file="&symbols;/shield_trans_ca.svg" transform="scale(1.3)" vertical-alignment="middle" horizontal-alignment="middle" avoid-edges="true" minimum-padding="256" minimum-distance="10" spacing="400" label-position-tolerance="0">[route_number]</ShieldSymbolizer>
        </Rule>
	<Rule>
                <Filter>[iso_country_code] = 'CAN' and [name].match('Trans.*Canada.*Highway|Route.*Transcanadienne')</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="9" fill="#108010" dx="1" dy="-1" placement="line" file="&symbols;/shield_trans_ca.svg" transform="scale(1.6, 1.3)" avoid-edges="true" minimum-padding="256" minimum-distance="10" spacing="400" label-position-tolerance="0">[route_number]</ShieldSymbolizer>
        </Rule>

<!-- Yellowhead Highway -->
        <Rule>
                <Filter>[iso_country_code] = 'CAN' and [name].match('Yellowhead.*Highway|Route.*Yellowhead')</Filter>
                <ShieldSymbolizer no-text="true" fontset-name="bold-fonts" size="11" fill="#000" placement="line" file="&symbols;/shield_yellowhead_ca.svg" avoid-edges="true" minimum-padding="256" minimum-distance="10" spacing="350">[route_number]</ShieldSymbolizer>
        </Rule>

<!-- Other Canada Shields -->
	<Rule>
                <Filter>[iso_country_code] = 'CAN' and [number_length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" dy="0.5" placement="line" file="&symbols;/shield_sr_us2.svg" vertical-alignment="middle" horizontal-alignment="middle" avoid-edges="true" minimum-padding="256" minimum-distance="10" spacing="400" label-position-tolerance="0">[route_number]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'CAN' and [number_length] &lt; 8</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" dy="0.5" placement="line" file="&symbols;/shield_sr_us[number_length].svg" vertical-alignment="middle" horizontal-alignment="middle" avoid-edges="true" minimum-padding="256" minimum-distance="10" spacing="400" label-position-tolerance="0">[route_number]</ShieldSymbolizer>
        </Rule>

<!--European Type 1 Road Shield-->
        <Rule>
                <Filter>[ref].match('^E[ 1-9].*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_trk_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[ref].match('^E[ 1-9].*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_trk_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Austria Type 2-3 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'AUT' and [ref].match('^[AS].*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'AUT' and [ref].match('^[AS].*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Belarus Type 2 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'BLR' and [ref].match('^M.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'BLR' and [ref].match('^M.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Belgium Type 3 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'BEL' and [ref].match('^N.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'BEL' and [ref].match('^N.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Czech Republic Type 2 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'CZE' and [ref].match('^[DR].*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'CZE' and [ref].match('^[DR].*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Czech Republic Type 3-5 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'CZE' and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'CZE' and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Denmark Type 2 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'DNK' and ([length] &lt; 3 or [ref].match('^O.*'))</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_gold_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Finland Type 3 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'FIN' and [length] = 2 and [ref].match('^[4-9].*')</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_gold_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Finland Type 2 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'FIN' and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--France Type 2-3 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'FRA' and [ref].match('^[AN].*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'FRA' and [ref].match('^[AN].*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--France Type 4 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'FRA' and [ref].match('^D.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_gold_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'FRA' and [ref].match('^D.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_gold_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Germany Type 2 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'DEU' and [ref].match('^A.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'DEU' and [ref].match('^A.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Germany Type 3 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'DEU' and [ref].match('^B.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_gold_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'DEU' and [ref].match('^B.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_gold_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Greece Type 2 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'GRC' and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#039" dx="0.5" placement="line" file="&symbols;/shield_white_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'GRC' and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#039" dx="0.5" placement="line" file="&symbols;/shield_white_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Italy Type 2 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'ITA' and [ref].match('^A.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_trk_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'ITA' and [ref].match('^A.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_trk_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Italy Type 3-4 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'ITA' and [ref].match('^(SS|SP|SR).*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'ITA' and [ref].match('^(SS|SP|SR).*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Liechtenstein Type 3 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'LIE' and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'LIE' and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Monaco Type 4 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'MCO' and [ref].match('^D.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_gold_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'MCO' and [ref].match('^D.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_gold_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Netherlands Type 2 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'NLD' and [ref].match('^A.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'NLD' and [ref].match('^A.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Netherlands Type 3 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'NLD' and [ref].match('^N.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_gold_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'NLD' and [ref].match('^N.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_gold_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Portugal Type 2 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'PRT' and [ref].match('^A.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'PRT' and [ref].match('^A.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Portugal Type 3 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'PRT' and [ref].match('^IP.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'PRT' and [ref].match('^IP.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Russia Type 2 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'RUS' and [ref].match('^M.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'RUS' and [ref].match('^M.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Spain Type 3 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'ESP' and [ref].match('^N.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'ESP' and [ref].match('^N.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Spain Type 2 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'ESP' and [highway] = 'motorway' and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'ESP' and [highway] = 'motorway' and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Sweden Type 2-3 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'SWE' and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'SWE' and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Turkey Type 2 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'TUR' and [ref].match('^O.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#039" dx="0.5" placement="line" file="&symbols;/shield_white_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'TUR' and [ref].match('^O.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#039" dx="0.5" placement="line" file="&symbols;/shield_white_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Turkey Type 3 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'TUR' and ([length] &gt; 5 or [ref].match('^D.*')) and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'TUR' and ([length] &gt; 5 or [ref].match('^D.*')) and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_mot_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Ukraine Type 2 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'UKR' and [ref].match('^M.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'UKR' and [ref].match('^M.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Andorra Type 4 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'AND' and [ref].match('^CS.*') and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_trk_uk2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'AND' and [ref].match('^CS.*') and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_trk_uk[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--Andorra Type 3 Road Shield-->
        <Rule>
                <Filter>[iso_country_code] = 'AND' and [length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[iso_country_code] = 'AND' and [length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#fff" dx="0.5" placement="line" file="&symbols;/shield_red_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>

<!--European Standard White Road Shield-->
        <Rule>
                <Filter>[length] &lt; 3</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_white_eu2.svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
        <Rule>
                <Filter>[length] &lt; 9</Filter>
                <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#000" dx="0.5" placement="line" file="&symbols;/shield_white_eu[length].svg" allow-overlap="false" avoid-edges="true" minimum-padding="256" minimum-distance="40" spacing="400">[ref]</ShieldSymbolizer>
        </Rule>
</Style>

<Style name="road-names-1">
<!--motorway text-->
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom17;
		<TextSymbolizer fontset-name="bold-fonts" size="12" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" dy="0" placement="line" max-char-angle-delta="30" text-transform="uppercase" allow-overlap="false" avoid-edges="true" minimum-distance="250" spacing="500" label-position-tolerance="0"> [name] </TextSymbolizer>
	</Rule>
	<Rule>
                &maxscale_zoom18;
                <TextSymbolizer fontset-name="bold-fonts" size="13" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" dy="0" placement="line" max-char-angle-delta="30" text-transform="uppercase" allow-overlap="false" avoid-edges="true" minimum-distance="250" spacing="500" label-position-tolerance="0"> [name] </TextSymbolizer>
        </Rule>
</Style>

<Style name="road-names-2">
<!--trunk/primary text-->
        <Rule>
                &maxscale_zoom11;
                &minscale_zoom13;
                <TextSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                <TextSymbolizer fontset-name="bold-fonts" size="12" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
        </Rule>
</Style>

<Style name="road-names-3">
<!--secondary text-->
	<Rule>
		&maxscale_zoom13;
		&minscale_zoom15;
		<TextSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		<TextSymbolizer fontset-name="bold-fonts" size="12" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
	</Rule>
</Style>

<Style name="road-names-4">
<!--tertiary text-->
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<TextSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		<TextSymbolizer fontset-name="bold-fonts" size="12" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="30" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
	</Rule>
</Style>

<Style name="road-names-5">
<!--class 5 roads-->
	<Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <TextSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="20" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                <TextSymbolizer fontset-name="bold-fonts" size="12" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="20" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
        </Rule>
</Style>

<Style name="walkway-names">
<!--walkways-->
        <Rule>
                &maxscale_zoom18;
                <TextSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="1" placement="line" max-char-angle-delta="20" allow-overlap="false" avoid-edges="true" minimum-distance="150" spacing="250" label-position-tolerance="0"> [name] </TextSymbolizer>
        </Rule>
</Style>
<Style name="rail-text">
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom18;
                <TextSymbolizer fontset-name="book-fonts" size="9" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="45" avoid-edges="true" spacing="450" minimum-distance="400">[name]</TextSymbolizer>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <TextSymbolizer fontset-name="book-fonts" size="11" fill="#ffffff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="45" avoid-edges="true" spacing="450" minimum-distance="400">[name]</TextSymbolizer>
        </Rule>
</Style>

<Layer name="shield-text-1" status="on" maxzoom="&max_zoom8;" minzoom="&min_zoom9;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
	<Datasource>
		<Parameter name="table">
                        (select ways.way as way, ways.highway, ways.name, countries.iso_country_code,
                           substring(ref,E'^([^/;,]*)') as ref,
                           char_length(substring(ref,E'^([^/;,]*)')) as length,
			   substring(ref,E'^[^/;,0-9]*([A-Za-z]*[0-9]+[A-Za-z0-9]*)') as route_number,
			   char_length(substring(ref,E'^[^/;,0-9]*([A-Za-z]*[0-9]+[A-Za-z0-9]*)')) as number_length
                         from
			   (select ref, highway, name, (st_dump(st_linemerge(st_collect(way)))).geom as way
			    from &prefix;_roads
			    where highway = 'motorway'
			      and ref is not null
			      and way &amp;&amp; !bbox!
			    group by ref, highway, name
			   ) AS ways
			 left join
			   (select iso_country_code, way
			    from country_polygon
			    where st_intersects(way, !bbox!)
			   ) as countries on st_intersects(ways.way, countries.way)
                        ) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="shield-text-2" status="on" maxzoom="&max_zoom10;" minzoom="&min_zoom11;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
	<Datasource>
		<Parameter name="table">
                        (select ways.way as way, ways.highway, ways.name, countries.iso_country_code,
                           substring(ref,E'^([^/;,]*)') as ref,
                           char_length(substring(ref,E'^([^/;,]*)')) as length,
			   substring(ref,E'^[^/;,0-9]*([A-Za-z]*[0-9]+[A-Za-z0-9]*)') as route_number,
			   char_length(substring(ref,E'^[^/;,0-9]*([A-Za-z]*[0-9]+[A-Za-z0-9]*)')) as number_length
                         from
			   (select ref, highway, name, (st_dump(st_linemerge(st_collect(way)))).geom as way
			    from &prefix;_roads
			    where highway in ('motorway', 'trunk')
			      and ref is not null
			      and way &amp;&amp; !bbox!
			    group by ref, highway, name
			   ) AS ways
			 left join
			   (select iso_country_code, way
			    from country_polygon
			    where st_intersects(way, !bbox!)
			   ) as countries on st_intersects(ways.way, countries.way)
                        ) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="shield-text-3" status="on" maxzoom="&max_zoom12;" minzoom="&min_zoom12;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
	<Datasource>
		<Parameter name="table">
                        (select ways.way as way, ways.highway, ways.name, countries.iso_country_code,
                           substring(ref,E'^([^/;,]*)') as ref,
                           char_length(substring(ref,E'^([^/;,]*)')) as length,
			   substring(ref,E'^[^/;,0-9]*([A-Za-z]*[0-9]+[A-Za-z0-9]*)') as route_number,
			   char_length(substring(ref,E'^[^/;,0-9]*([A-Za-z]*[0-9]+[A-Za-z0-9]*)')) as number_length
                         from
			   (select ref, highway, name, (st_dump(st_linemerge(st_collect(way)))).geom as way
			    from &prefix;_roads
			    where highway in ('motorway', 'trunk', 'primary')
			      and ref is not null
			      and way &amp;&amp; !bbox!
			    group by ref, highway, name
			   ) AS ways
			 left join
			   (select iso_country_code, way
			    from country_polygon
			    where st_intersects(way, !bbox!)
			   ) as countries on st_intersects(ways.way, countries.way)
                        ) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="shield-text-4" status="on" maxzoom="&max_zoom13;" minzoom="&min_zoom15;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text</StyleName>
        <Datasource>
                <Parameter name="table">
                        (select ways.way as way, ways.highway, ways.name, countries.iso_country_code,
                           substring(ref,E'^([^/;,]*)') as ref,
                           char_length(substring(ref,E'^([^/;,]*)')) as length,
			   substring(ref,E'^[^/;,0-9]*([A-Za-z]*[0-9]+[A-Za-z0-9]*)') as route_number,
			   char_length(substring(ref,E'^[^/;,0-9]*([A-Za-z]*[0-9]+[A-Za-z0-9]*)')) as number_length
                         from
			   (select ref, highway, name, (st_dump(st_linemerge(st_collect(way)))).geom as way
			    from &prefix;_roads
			    where highway in ('motorway', 'trunk', 'primary', 'secondary')
			      and ref is not null
			      and way &amp;&amp; !bbox!
			    group by ref, highway, name
			   ) AS ways
			 left join
			   (select iso_country_code, way
			    from country_polygon_detail
			    where st_intersects(way, !bbox!)
			   ) as countries on st_intersects(ways.way, countries.way)
                        ) as roads
                </Parameter>
                &datasource-settings;
        </Datasource>
</Layer>
<Layer name="shield-text-5" status="on" maxzoom="&max_zoom16;" srs="&osm2pgsql_projection;">
        <StyleName>shield-text</StyleName>
        <Datasource>
                <Parameter name="table">
                        (select ways.way as way, ways.highway, ways.name, countries.iso_country_code,
                           substring(ref,E'^([^/;,]*)') as ref,
                           char_length(substring(ref,E'^([^/;,]*)')) as length,
			   substring(ref,E'^[^/;,0-9]*([A-Za-z]*[0-9]+[A-Za-z0-9]*)') as route_number,
			   char_length(substring(ref,E'^[^/;,0-9]*([A-Za-z]*[0-9]+[A-Za-z0-9]*)')) as number_length
                         from
			   (select ref, highway, name, (st_dump(st_linemerge(st_collect(way)))).geom as way
                            from &prefix;_line
                            where highway in ('motorway', 'trunk', 'primary', 'secondary', 'tertiary', 'residential', 'unclassified', 'road')
			      and ref is not null and way &amp;&amp; !bbox!
			    group by ref, highway, name
                           ) AS ways
                         left join 
			   (select iso_country_code, way
			    from country_polygon_detail
			    where st_intersects(way, !bbox!)
			   ) as countries on st_intersects(ways.way, countries.way)
                        ) as roads
                </Parameter>
                &datasource-settings;
        </Datasource>
</Layer>

<Layer name="shield-text-e-roads-1" status="off" maxzoom="&max_zoom8;" minzoom="&min_zoom9;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text-e-road</StyleName>
	<Datasource>
		<Parameter name="table">
			(SELECT ways.way AS way,
                           CASE
                             WHEN tags[4] ~ '^E[ 0-9]' THEN tags[4]
                             WHEN tags[6] ~ '^E[ 0-9]' THEN tags[6]
                             WHEN tags[8] ~ '^E[ 0-9]' THEN tags[8]
                             WHEN tags[10] ~ '^E[ 0-9]' THEN tags[10]
                             WHEN tags[12] ~ '^E[ 0-9]' THEN tags[12]
                             WHEN tags[14] ~ '^E[ 0-9]' THEN tags[14]
                             ELSE NULL
			   END AS ref,
                           CASE
                             WHEN tags[4] ~ '^E[ 0-9]' THEN char_length(tags[4])
                             WHEN tags[6] ~ '^E[ 0-9]' THEN char_length(tags[6])
                             WHEN tags[8] ~ '^E[ 0-9]' THEN char_length(tags[8])
                             WHEN tags[10] ~ '^E[ 0-9]' THEN char_length(tags[10])
                             WHEN tags[12] ~ '^E[ 0-9]' THEN char_length(tags[12])
                             WHEN tags[14] ~ '^E[ 0-9]' THEN char_length(tags[14])
                             ELSE NULL
			   END AS length 
			 FROM &prefix;_roads ways, &prefix;_rels rels
			 WHERE ways.way &amp;&amp; !bbox! AND ways.highway = ANY(ARRAY['motorway']) AND 'e-road' = ANY(tags) AND ways.osm_id = ANY(rels.parts[rels.way_off:rels.rel_off])
			) as e_roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>

<Layer name="shield-text-e-roads-2" status="on" maxzoom="&max_zoom10;" minzoom="&min_zoom11;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text-e-road</StyleName>
	<Datasource>
		<Parameter name="table">
			(SELECT ways.way,
                           CASE
                             WHEN tags[4] ~ '^E[ 0-9]' THEN tags[4]
                             WHEN tags[6] ~ '^E[ 0-9]' THEN tags[6]
                             WHEN tags[8] ~ '^E[ 0-9]' THEN tags[8]
                             WHEN tags[10] ~ '^E[ 0-9]' THEN tags[10]
                             WHEN tags[12] ~ '^E[ 0-9]' THEN tags[12]
                             WHEN tags[14] ~ '^E[ 0-9]' THEN tags[14]
                             ELSE NULL
			   END AS ref,
                           CASE
                             WHEN tags[4] ~ '^E[ 0-9]' THEN char_length(tags[4])
                             WHEN tags[6] ~ '^E[ 0-9]' THEN char_length(tags[6])
                             WHEN tags[8] ~ '^E[ 0-9]' THEN char_length(tags[8])
                             WHEN tags[10] ~ '^E[ 0-9]' THEN char_length(tags[10])
                             WHEN tags[12] ~ '^E[ 0-9]' THEN char_length(tags[12])
                             WHEN tags[14] ~ '^E[ 0-9]' THEN char_length(tags[14])
                             ELSE NULL
			   END AS length 
			 FROM &prefix;_roads ways, &prefix;_rels rels
			 WHERE ways.way &amp;&amp; !bbox! AND ways.highway = ANY(ARRAY['motorway', 'trunk']) AND 'e-road' = ANY(tags) AND ways.osm_id = ANY(rels.parts[rels.way_off:rels.rel_off])
			) as e_roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>

<Layer name="shield-text-e-roads-3" status="on" maxzoom="&max_zoom12;" minzoom="&min_zoom12;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text-e-road</StyleName>
	<Datasource>
		<Parameter name="table">
			(SELECT ways.way,
                           CASE
                             WHEN tags[4] ~ '^E[ 0-9]' THEN tags[4]
                             WHEN tags[6] ~ '^E[ 0-9]' THEN tags[6]
                             WHEN tags[8] ~ '^E[ 0-9]' THEN tags[8]
                             WHEN tags[10] ~ '^E[ 0-9]' THEN tags[10]
                             WHEN tags[12] ~ '^E[ 0-9]' THEN tags[12]
                             WHEN tags[14] ~ '^E[ 0-9]' THEN tags[14]
                             ELSE NULL
			   END AS ref,
                           CASE
                             WHEN tags[4] ~ '^E[ 0-9]' THEN char_length(tags[4])
                             WHEN tags[6] ~ '^E[ 0-9]' THEN char_length(tags[6])
                             WHEN tags[8] ~ '^E[ 0-9]' THEN char_length(tags[8])
                             WHEN tags[10] ~ '^E[ 0-9]' THEN char_length(tags[10])
                             WHEN tags[12] ~ '^E[ 0-9]' THEN char_length(tags[12])
                             WHEN tags[14] ~ '^E[ 0-9]' THEN char_length(tags[14])
                             ELSE NULL
			   END AS length 
			 FROM &prefix;_roads ways, &prefix;_rels rels
			 WHERE ways.way &amp;&amp; !bbox! AND ways.highway = ANY(ARRAY['motorway', 'trunk', 'primary']) AND 'e-road' = ANY(tags) AND ways.osm_id = ANY(rels.parts[rels.way_off:rels.rel_off])
			) as e_roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>

<Layer name="shield-text-e-roads-4" status="on" maxzoom="&max_zoom13;" minzoom="&min_zoom15;" srs="&osm2pgsql_projection;">
	<StyleName>shield-text-e-road</StyleName>
	<Datasource>
		<Parameter name="table">
			(SELECT ways.way,
                           CASE
                             WHEN tags[4] ~ '^E[ 0-9]' THEN tags[4]
                             WHEN tags[6] ~ '^E[ 0-9]' THEN tags[6]
                             WHEN tags[8] ~ '^E[ 0-9]' THEN tags[8]
                             WHEN tags[10] ~ '^E[ 0-9]' THEN tags[10]
                             WHEN tags[12] ~ '^E[ 0-9]' THEN tags[12]
                             WHEN tags[14] ~ '^E[ 0-9]' THEN tags[14]
                             ELSE NULL
			   END AS ref,
                           CASE
                             WHEN tags[4] ~ '^E[ 0-9]' THEN char_length(tags[4])
                             WHEN tags[6] ~ '^E[ 0-9]' THEN char_length(tags[6])
                             WHEN tags[8] ~ '^E[ 0-9]' THEN char_length(tags[8])
                             WHEN tags[10] ~ '^E[ 0-9]' THEN char_length(tags[10])
                             WHEN tags[12] ~ '^E[ 0-9]' THEN char_length(tags[12])
                             WHEN tags[14] ~ '^E[ 0-9]' THEN char_length(tags[14])
                             ELSE NULL
			   END AS length 
			 FROM &prefix;_roads ways, &prefix;_rels rels
			 WHERE ways.way &amp;&amp; !bbox! AND ways.highway = ANY(ARRAY['motorway', 'trunk', 'primary', 'secondary']) AND 'e-road' = ANY(tags) AND ways.osm_id = ANY(rels.parts[rels.way_off:rels.rel_off])
			) as e_roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>

<Layer name="shield-text-e-roads-5" status="on" maxzoom="&max_zoom16;" srs="&osm2pgsql_projection;">
        <StyleName>shield-text-e-road</StyleName>
        <Datasource>
                <Parameter name="table">
                        (SELECT ways.way,
                           CASE
                             WHEN tags[4] ~ '^E[ 0-9]' THEN tags[4]
                             WHEN tags[6] ~ '^E[ 0-9]' THEN tags[6]
                             WHEN tags[8] ~ '^E[ 0-9]' THEN tags[8]
                             WHEN tags[10] ~ '^E[ 0-9]' THEN tags[10]
                             WHEN tags[12] ~ '^E[ 0-9]' THEN tags[12]
                             WHEN tags[14] ~ '^E[ 0-9]' THEN tags[14]
                             ELSE NULL
                           END AS ref,
                           CASE
                             WHEN tags[4] ~ '^E[ 0-9]' THEN char_length(tags[4])
                             WHEN tags[6] ~ '^E[ 0-9]' THEN char_length(tags[6])
                             WHEN tags[8] ~ '^E[ 0-9]' THEN char_length(tags[8])
                             WHEN tags[10] ~ '^E[ 0-9]' THEN char_length(tags[10])
                             WHEN tags[12] ~ '^E[ 0-9]' THEN char_length(tags[12])
                             WHEN tags[14] ~ '^E[ 0-9]' THEN char_length(tags[14])
                             ELSE NULL
                           END AS length
                         FROM &prefix;_roads ways, &prefix;_rels rels
                         WHERE ways.way &amp;&amp; !bbox! AND ways.highway = ANY(ARRAY['motorway', 'trunk', 'primary', 'secondary', 'tertiary', 'residential', 'unclassified', 'road']) AND 'e-road' = ANY(tags) AND ways.osm_id = ANY(rels.parts[rels.way_off:rels.rel_off])
                        ) as e_roads
                </Parameter>
                &datasource-settings;
        </Datasource>
</Layer>

<Layer name="street-1-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-1</StyleName>
	<Datasource>
		<Parameter name="table">
                        (select way, name from &prefix;_roads
			 where highway = 'motorway' and name is not null
			   and (ref is null or name != ref) and (junction is null or junction != 'roundabout')
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-2-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-2</StyleName>
	<Datasource>
		<Parameter name="table">
                        (select way, name from &prefix;_roads
			 where highway = 'trunk' and name is not null and (ref is null or name != ref)
			   and (junction is null or junction != 'roundabout')
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-3-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-3</StyleName>
	<Datasource>
		<Parameter name="table">
                        (select way, name from &prefix;_roads
			 where highway = 'primary' and name is not null and (ref is null or name != ref)
			   and (junction is null or junction != 'roundabout')
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-4-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-4</StyleName>
	<Datasource>
		<Parameter name="table">
                        (select way, name from &prefix;_roads
			 where highway = 'secondary' and name is not null and (ref is null or name != ref)
			   and (junction is null or junction != 'roundabout')
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-5-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>road-names-5</StyleName>
	<Datasource>
		<Parameter name="table">
                        (select way, name from &prefix;_line
			 where highway in ('tertiary', 'residential', 'unclassified', 'road', 'service')
			   and name is not null and (ref is null or name != ref) and (junction is null or junction != 'roundabout')
			) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<!--rail text data-->
<Layer name="rail-text" status="on" srs="&osm2pgsql_projection;">
   <StyleName>rail-text</StyleName>
   <Datasource>
      <Parameter name="table">
             (select way,name
             from &prefix;_line
             where railway in ('rail', 'light_rail', 'subway', 'monorail', 'station')
             and name is not null) as roads
      </Parameter>
      &datasource-settings;
   </Datasource>
</Layer>
<Layer name="walkway-text" status="on" srs="&osm2pgsql_projection;">
        <StyleName>walkway-names</StyleName>
        <Datasource>
                <Parameter name="table">
                        (select way, name from &prefix;_line
                         where highway in ('pedestrian', 'footway', 'path', 'steps')
			   and name is not null and (ref is null or name != ref)
                        ) as roads
                </Parameter>
                &datasource-settings;
        </Datasource>
</Layer>
