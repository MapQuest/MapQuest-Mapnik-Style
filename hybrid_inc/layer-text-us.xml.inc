<Style name="landmark-poly-text">
<!--park/wood/forest-->
	<Rule>
		<Filter>([leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [landuse] = 'forest') and [way_area] &gt;= 30000000 and ([boundary] = 'national_park' or [boundary] = 'protected_area')</Filter>
		&maxscale_zoom7;
		&minscale_zoom8;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#a8f3bb" halo-radius="2" halo-fill="rgba(0,0,0)" wrap-width="25" minimum-distance="20" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>([leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [landuse] = 'forest') and [way_area] &gt;= 10000000</Filter>
		&maxscale_zoom9;
		&minscale_zoom10;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#a8f3bb" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" minimum-distance="20" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>([leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [landuse] = 'forest') and [way_area] &gt;= 10000000</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#a8f3bb" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" minimum-distance="20" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>([leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [landuse] = 'forest') and [way_area] &gt;= 1000000</Filter>
		&maxscale_zoom13;
		&minscale_zoom14;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#a8f3bb" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" minimum-distance="20" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>([leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [landuse] = 'forest') and [way_area] &gt;= 20000</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#a8f3bb" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" minimum-distance="20" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>([leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [landuse] = 'forest')</Filter>
		&maxscale_zoom17;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#a8f3bb" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" minimum-distance="20" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
<!--military-->
	<Rule>
		<Filter>[landuse]='military' and [way_area] &gt;= 500000</Filter>
		&maxscale_zoom13;
		&minscale_zoom14;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[landuse]='military' and [way_area] &gt;= 100000</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[amenity] = 'university' or [amenity] = 'college'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer fontset-name="oblique-fonts" size="11" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
<!--golf course-->
  <Rule>
    <Filter>[leisure] = 'golf_course'</Filter>
    &maxscale_zoom13;
    &minscale_zoom14;
    <TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#a8f3bb" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="45" line-spacing="4">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[leisure] = 'golf_course'</Filter>
    &maxscale_zoom15;
    <TextSymbolizer fontset-name="oblique-fonts" size="12" fill="#a8f3bb" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="45" line-spacing="4">[name]</TextSymbolizer>
  </Rule>
<!--college/university-->
	<Rule>
		<Filter>([amenity] = 'university' or [amenity] = 'college') and [way_area] &gt;= 500000</Filter>
		&maxscale_zoom13;
		&minscale_zoom14;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>([amenity] = 'university' or [amenity] = 'college') and [way_area] &gt;= 100000</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<TextSymbolizer fontset-name="oblique-fonts" size="11" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[amenity] = 'university' or [amenity] = 'college'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer fontset-name="oblique-fonts" size="11" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
<!--school-->
	<Rule>
		<Filter>[amenity] = 'school' and [way_area] &gt;= 500000</Filter>
		&maxscale_zoom13;
		&minscale_zoom14;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[amenity] = 'school' and [way_area] &gt;= 100000</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="14" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[amenity] = 'school'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="14" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
<!--stadium or attraction-->
	<Rule>
		<Filter>([leisure] = 'stadium' or [leisure] = 'sports_centre' or [tourism] = 'attraction' or [tourism] = 'zoo') and [way_area] &gt;= 500000</Filter>
		&maxscale_zoom13;
		&minscale_zoom14;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="14" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>([leisure] = 'stadium' or [leisure] = 'sports_centre' or [tourism] = 'attraction' or [tourism] = 'zoo') and [way_area] &gt;= 10000</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="14" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'stadium' or [leisure] = 'sports_centre' or [tourism] = 'attraction' or [tourism] = 'zoo'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="14" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
<!--Shopping center-->
	<Rule>
		<Filter>[landuse] = 'retail'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="14" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
<!--Building-->
	<Rule>
		<Filter>[building] = 'yes' and [way_area] &gt;= 100000</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="14" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[building] = 'yes'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="14" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
<!--hospital polygon-->
  <Rule>
    <Filter>[amenity] = 'hospital'</Filter>
    &maxscale_zoom14;
    &minscale_zoom15;
    <TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgba(0,0,0)" wrap-width="45" line-spacing="4">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[amenity] = 'hospital'</Filter>
    &maxscale_zoom16;
    <ShieldSymbolizer fontset-name="oblique-fonts" size="12" fill="#ffffff" halo-radius="2" halo-fill="rgba(0,0,0)" wrap-width="45" line-spacing="4" dy="-10" vertical-alignment="top" file="&symbols;/hospital.svg" unlock-image="true">[name]</ShieldSymbolizer>
  </Rule>
	<!--airport-->
  <Rule>
    <Filter>[aeroway] = 'aerodrome'</Filter>
    &maxscale_zoom12;
    &minscale_zoom12;
    <PointSymbolizer file="&symbols;/airport.svg"/>
  </Rule>
  <Rule>
    <Filter>[aeroway] = 'aerodrome'</Filter>
    &maxscale_zoom13;
    &minscale_zoom15;
    <ShieldSymbolizer fontset-name="oblique-fonts" size="10" text-transform="uppercase" fill="#ffffff" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="45" line-spacing="4" dy="-10" vertical-alignment="top" file="&symbols;/airport.svg" unlock-image="true">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[aeroway] = 'aerodrome'</Filter>
    &maxscale_zoom16;
    <ShieldSymbolizer fontset-name="oblique-fonts" size="12" text-transform="uppercase" fill="#ffffff" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="45" line-spacing="4" dy="-10" vertical-alignment="top" file="&symbols;/airport.svg" unlock-image="true">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[aeroway] = 'apron'</Filter>
    &maxscale_zoom13;
    &minscale_zoom15;
    <TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="10" text-transform="uppercase" line-spacing="4">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[aeroway] = 'apron'</Filter>
    &maxscale_zoom16;
    <TextSymbolizer fontset-name="oblique-fonts" size="12" fill="#ffffff" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="10" text-transform="uppercase" line-spacing="4">[name]</TextSymbolizer>
  </Rule>
        <!--cemetery-->
        <Rule>
                <Filter>[way_area] &gt; 750000 and ([landuse] = 'cemetery' or [amenity]='cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard')</Filter>
                &maxscale_zoom13;
                &minscale_zoom13;
                <TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="45" line-spacing="4">[name]</TextSymbolizer>
        </Rule>
        <Rule>
                <Filter>[way_area] &gt; 250000 and ([landuse] = 'cemetery' or [amenity]='cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard')</Filter>
                &maxscale_zoom14;
                &minscale_zoom14;
                <TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="45" line-spacing="4">[name]</TextSymbolizer>
        </Rule>
        <Rule>
                <Filter>[landuse] = 'cemetery' or [amenity]='cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard'</Filter>
                &maxscale_zoom15;
                &minscale_zoom15;
                <TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="45" line-spacing="4">[name]</TextSymbolizer>
        </Rule>
        <Rule>
                <Filter>[landuse] = 'cemetery' or [amenity]='cemetery' or [landuse] = 'grave_yard' or [amenity]='grave_yard'</Filter>
                &maxscale_zoom16;
                <TextSymbolizer fontset-name="oblique-fonts" size="12" fill="#ffffff" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="45" line-spacing="4">[name]</TextSymbolizer>
        </Rule>
        <Rule>
                <Filter>[amenity] = 'parking'</Filter>
                &maxscale_zoom17;
                <ShieldSymbolizer fontset-name="oblique-fonts" size="12" fill="#ffffff" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="45" dy="-10" vertical-alignment="top" line-spacing="4" file="&symbols;/parking.svg" unlock-image="true">[name]</ShieldSymbolizer>
        </Rule>
</Style>
<Style name="landmark-point-text">
        <Rule>
                <Filter>[leisure] = 'stadium'</Filter>
                &maxscale_zoom15;
                <TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="14" line-spacing="4">[name]</TextSymbolizer>
        </Rule>

<!--island-->
	<Rule>
		<Filter>[place] = 'island'</Filter>
		&maxscale_zoom14;
		<TextSymbolizer fontset-name="oblique-fonts" size="9" fill="#ffffff" dy="0" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="20" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
<!--attraction/POI-->
	<Rule>
		<Filter>[tourism] = 'museum' or [tourism] = 'attraction' or [tourism] = 'theme_park' or [tourism] = 'zoo'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" dy="-8" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
<!--hospital point-->
  <Rule>
    <Filter>[amenity] = 'hospital'</Filter>
    &maxscale_zoom14;
    &minscale_zoom15;
    <TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgba(0,0,0)" wrap-width="45" line-spacing="4">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[amenity] = 'hospital'</Filter>
    &maxscale_zoom16;
    <ShieldSymbolizer fontset-name="oblique-fonts" size="12" fill="#ffffff" halo-radius="2" halo-fill="rgba(0,0,0)" wrap-width="45" line-spacing="4" dy="-10" vertical-alignment="top" file="&symbols;/hospital.svg" unlock-image="true">[name]</ShieldSymbolizer>
  </Rule>
<!--ferry terminal-->
	<Rule>
		<Filter>[amenity] = 'ferry_terminal'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" dy="-8" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
<!--train station-->
	<Rule>
		<Filter>[railway] = 'station'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" dy="-8" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" line-spacing="4">[name]</TextSymbolizer>
	</Rule>
</Style>
<Style name="water-text">
<!--bay/open water-->
	<Rule>
		<Filter>[natural] = 'bay'</Filter>
		&maxscale_zoom6;
		<TextSymbolizer fontset-name="oblique-fonts" size="12" fill="#29b1ff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="20" minimum-distance="200">[name]</TextSymbolizer>
	</Rule>
<!--marina-->
	<Rule>
		<Filter>[leisure] = 'marina'</Filter>
		&maxscale_zoom15;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="30">[name]</TextSymbolizer>
	</Rule>
<!--lake-->
	<Rule>
		<Filter>[natural] = 'water' or [landuse] = 'reservoir' or [landuse] = 'basin' or [waterway] = 'mill_pond' or [waterway]='canal'</Filter>
		&maxscale_zoom6;
		&maxscale_zoom8;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#29b1ff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="20" minimum-distance="200">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[natural] = 'water' or [landuse] = 'reservoir' or [landuse] = 'basin' or [waterway] = 'mill_pond' or [waterway]='canal'</Filter>
		&maxscale_zoom9;
		&maxscale_zoom11;
		<TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#29b1ff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="20" minimum-distance="200">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[natural] = 'water' or [landuse] = 'reservoir' or [landuse] = 'basin' or [waterway] = 'mill_pond' or [waterway]='canal'</Filter>
		&maxscale_zoom12;
		&maxscale_zoom13;
		<TextSymbolizer fontset-name="oblique-fonts" size="11" fill="#29b1ff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="20" minimum-distance="200">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[natural] = 'water' or [landuse] = 'reservoir' or [landuse] = 'basin' or [waterway] = 'mill_pond' or [waterway]='canal' </Filter>
		&maxscale_zoom14;
		&minscale_zoom16;
		<TextSymbolizer fontset-name="oblique-fonts" size="12" fill="#29b1ff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="20" minimum-distance="100">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[natural] = 'water' or [landuse] = 'reservoir' or [landuse] = 'basin' or [waterway] = 'mill_pond' or [waterway]='canal'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer fontset-name="oblique-fonts" size="12" fill="#29b1ff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="20" minimum-distance="100">[name]</TextSymbolizer>
	</Rule>
</Style>
<Style name="water-line-text">
  <!--river and stream-->
  <Rule>
    <Filter>[waterway]='river'</Filter>
    &maxscale_zoom11;
    &minscale_zoom13;
    <TextSymbolizer fontset-name="oblique-fonts" size="11" fill="#29b1ff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="40" minimum-distance="200" spacing="600" avoid-edges="true" minimum-padding="65">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[waterway]='weir' or [waterway]='river' or [waterway]='canal' or [waterway]='derelict_canal' or [waterway]='stream' or [waterway]='drain'</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <TextSymbolizer fontset-name="oblique-fonts" size="11" fill="#29b1ff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="40" minimum-distance="200" spacing="600" avoid-edges="true" minimum-padding="65">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[waterway]='weir' or [waterway]='river' or [waterway]='canal' or [waterway]='derelict_canal' or [waterway]='stream' or [waterway]='drain'</Filter>
    &maxscale_zoom15;
    <TextSymbolizer fontset-name="oblique-fonts" size="12" fill="#29b1ff" halo-fill="rgba(0,0,0,1)" halo-radius="2" placement="line" max-char-angle-delta="40" minimum-distance="200" spacing="600" avoid-edges="true" minimum-padding="65">[name]</TextSymbolizer>
  </Rule>
</Style>
<Style name="ferry-text">
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom15;
                 <TextSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" halo-fill="#20205b" halo-radius="2" placement="line" allow-overlap="false" avoid-edges="true" minimum-distance="200" spacing="350"> [name] </TextSymbolizer>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                <TextSymbolizer fontset-name="bold-fonts" size="12" fill="#ffffff" halo-fill="#20205b" halo-radius="2" placement="line" allow-overlap="false" avoid-edges="true" minimum-distance="200" spacing="350"> [name] </TextSymbolizer>
        </Rule>
</Style>
<Style name="symbol-text">
<!--motorway junction-->
  <Rule>
    &maxscale_zoom12;
    &minscale_zoom13;
    <PointSymbolizer ignore-placement="true" file="&symbols;/exit-point.svg"/>
  </Rule>
  <Rule>
    <Filter>[number_length] &lt; 7</Filter>
    &maxscale_zoom14;
    <PointSymbolizer file="&symbols;/exit-point.svg"/>
    <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#ffffff" placement="point" dx="0.5" dy="0.5" shield-dy="-12" shield-dx="0" file="&symbols;/exit[number_length].svg">[shield_name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[number_length] &gt; 6</Filter>
    &maxscale_zoom15;
    <PointSymbolizer ignore-placement="true" file="&symbols;/exit-point.svg"/>
  </Rule>
</Style>
<Style name="locality">
	<Rule>
		<Filter>[place] = 'locality'</Filter>
		&maxscale_zoom16;
		<TextSymbolizer fontset-name="bold-fonts" size="10" fill="#e5e5e5" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="20" minimum-distance="10" line-spacing="2">[name]</TextSymbolizer>
	</Rule>
</Style>
<Style name="neighborhood">
  <Rule>
    <Filter>[place] = 'hamlet'</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <TextSymbolizer fontset-name="oblique-fonts" size="10" fill="#ab705e" halo-radius="2" halo-fill="rgba(0,0,0,1)" text-transform="uppercase" wrap-width="28" line-spacing="4">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[place] = 'hamlet'</Filter>
    &maxscale_zoom17;
    <TextSymbolizer fontset-name="oblique-fonts" size="12" fill="#ab705e" halo-radius="2" halo-fill="rgba(0,0,0,1)" text-transform="uppercase" wrap-width="28" line-spacing="4">[name]</TextSymbolizer>
  </Rule>
</Style>
<Style name="city 4">
  <Rule>
    <Filter>[place] = 'suburb'</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <ShieldSymbolizer fontset-name="book-fonts" size="9" fill="#ffffff" dy="-5" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/small-city.svg" minimum-distance="10" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[place] = 'suburb' or [place] = 'village'</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <ShieldSymbolizer fontset-name="book-fonts" size="9" fill="#ffffff" dy="-5" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/small-city.svg" minimum-distance="10" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[place] = 'suburb' or [place] = 'village'</Filter>
    &maxscale_zoom11;
    &minscale_zoom13;
    <ShieldSymbolizer fontset-name="book-fonts" size="10" fill="#ffffff" dy="-5" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/small-city.svg" minimum-distance="10" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[place] = 'suburb' or [place] = 'village'</Filter>
    &maxscale_zoom14;
    <ShieldSymbolizer fontset-name="book-fonts" size="11" fill="#ffffff" dy="-5" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/small-city.svg" minimum-distance="10" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
</Style>
<Style name="city 3">
  <Rule>
    <Filter>[place] = 'small_town'</Filter>
    &maxscale_zoom8;
    &minscale_zoom10;
    <ShieldSymbolizer fontset-name="book-fonts" size="9" fill="#ffffff" dy="-5" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/small-city.svg" minimum-distance="10" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[place] = 'small_town'</Filter>
    &maxscale_zoom11;
    &minscale_zoom15;
    <ShieldSymbolizer fontset-name="bold-fonts" size="11" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/small-city.svg" minimum-distance="10" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[place] = 'small_town'</Filter>
    &maxscale_zoom16;
    <ShieldSymbolizer fontset-name="bold-fonts" size="14" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/small-city.svg" minimum-distance="10" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
</Style>
<Style name="city 2">
  <Rule>
    <Filter>[place] = 'town' or [place]='large_town'</Filter>
    &maxscale_zoom7;
    &minscale_zoom8;
    <ShieldSymbolizer fontset-name="book-fonts" size="9" fill="#ffffff" dy="-4" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/small-city.svg" minimum-distance="30" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[place] = 'town' or [place]='large_town'</Filter>
    &maxscale_zoom9;
    &minscale_zoom10;
    <ShieldSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" dy="-5" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/small-city.svg" minimum-distance="10" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[place] = 'town' or [place]='large_town'</Filter>
    &maxscale_zoom11;
    &minscale_zoom15;
    <ShieldSymbolizer fontset-name="bold-fonts" size="13" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/small-city.svg" minimum-distance="10" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[place] = 'town' or [place]='large_town'</Filter>
    &maxscale_zoom16;
    <ShieldSymbolizer fontset-name="bold-fonts" size="15" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/small-city.svg" minimum-distance="10" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
</Style>

<Style name="city 1">
  <!-- place in ('metropolis', 'city') -->
  <!-- state capitals first -->
  <Rule>
    <Filter>[state_capital] = 'yes'</Filter>
    &maxscale_zoom6;
    &minscale_zoom7;
    <ShieldSymbolizer fontset-name="book-fonts" size="9" fill="#ffffff" dy="-5" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/state-prov-capital.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'yes'</Filter>
    &maxscale_zoom8;
    &minscale_zoom9;
    <ShieldSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/state-prov-capital.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'yes'</Filter>
    &maxscale_zoom10;
    &minscale_zoom13;
    <ShieldSymbolizer fontset-name="bold-fonts" size="14" fill="#ffffff" dy="-7" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/state-prov-capital.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'yes'</Filter>
    &maxscale_zoom14;
    &minscale_zoom15;
    <ShieldSymbolizer fontset-name="bold-fonts" size="15" fill="#ffffff" dy="-8" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/state-prov-capital.svg" minimum-distance="20" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'yes'</Filter>
    &maxscale_zoom16;
    <ShieldSymbolizer fontset-name="bold-fonts" size="16" fill="#ffffff" dy="-8" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/state-prov-capital.svg" minimum-distance="20" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <!-- non state capitals -->
  <Rule>
    <Filter>[state_capital] = 'no'</Filter>
    &maxscale_zoom6;
    &minscale_zoom7;
    <ShieldSymbolizer fontset-name="book-fonts" size="9" fill="#ffffff" dy="-5" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/large-city.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'no'</Filter>
    &maxscale_zoom8;
    &minscale_zoom9;
    <ShieldSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/large-city.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'no'</Filter>
    &maxscale_zoom10;
    &minscale_zoom13;
    <ShieldSymbolizer fontset-name="bold-fonts" size="14" fill="#ffffff" dy="-7" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/large-city.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'no'</Filter>
    &maxscale_zoom14;
    &minscale_zoom15;
    <ShieldSymbolizer fontset-name="bold-fonts" size="15" fill="#ffffff" dy="-8" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/large-city.svg" minimum-distance="20" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'no'</Filter>
    &maxscale_zoom16;
    <ShieldSymbolizer fontset-name="bold-fonts" size="16" fill="#ffffff" dy="-8" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/large-city.svg" minimum-distance="20" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
</Style>

<Style name="city 0">
  <!-- place in ('metropolis', 'city') -->
  <!-- state capitals first -->
  <Rule>
    <Filter>[state_capital] = 'yes' and [population] &gt;= 500000</Filter>
    &maxscale_zoom6;
    &minscale_zoom7;
    <ShieldSymbolizer fontset-name="bold-fonts" size="12" fill="#ffffff" dy="-5" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/state-prov-capital.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'yes' and [population] &lt; 500000</Filter>
    &maxscale_zoom6;
    &minscale_zoom7;
    <ShieldSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" dy="-5" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/state-prov-capital.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'yes' and [population] &gt;= 500000</Filter>
    &maxscale_zoom8;
    &minscale_zoom9;
    <ShieldSymbolizer fontset-name="bold-fonts" size="15" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/state-prov-capital.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'yes' and [population] &lt; 500000</Filter>
    &maxscale_zoom8;
    &minscale_zoom9;
    <ShieldSymbolizer fontset-name="bold-fonts" size="13" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/state-prov-capital.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'yes' and [population] &gt;= 500000</Filter>
    &maxscale_zoom10;
    &minscale_zoom13;
    <ShieldSymbolizer fontset-name="bold-fonts" size="15" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" text-transform="uppercase" file="&symbols;/state-prov-capital.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'yes' and [population] &lt; 500000</Filter>
    &maxscale_zoom10;
    &minscale_zoom13;
    <ShieldSymbolizer fontset-name="bold-fonts" size="14" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/state-prov-capital.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'yes' and [population] &gt;= 500000</Filter>
    &maxscale_zoom14;
    <ShieldSymbolizer fontset-name="bold-fonts" size="16" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" text-transform="uppercase" file="&symbols;/state-prov-capital.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'yes' and [population] &lt; 500000</Filter>
    &maxscale_zoom14;
    <ShieldSymbolizer fontset-name="bold-fonts" size="16" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/state-prov-capital.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <!-- non state capitals -->
  <Rule>
    <Filter>[state_capital] = 'no' and [population] &gt;= 500000</Filter>
    &maxscale_zoom6;
    &minscale_zoom7;
    <ShieldSymbolizer fontset-name="bold-fonts" size="12" fill="#ffffff" dy="-5" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/large-city.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'no' and [population] &lt; 500000</Filter>
    &maxscale_zoom6;
    &minscale_zoom7;
    <ShieldSymbolizer fontset-name="bold-fonts" size="10" fill="#ffffff" dy="-5" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/large-city.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'no' and [population] &gt;= 500000</Filter>
    &maxscale_zoom8;
    &minscale_zoom9;
    <ShieldSymbolizer fontset-name="bold-fonts" size="15" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/large-city.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'no' and [population] &lt; 500000</Filter>
    &maxscale_zoom8;
    &minscale_zoom9;
    <ShieldSymbolizer fontset-name="bold-fonts" size="13" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/large-city.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'no' and [population] &gt;= 500000</Filter>
    &maxscale_zoom10;
    &minscale_zoom13;
    <ShieldSymbolizer fontset-name="bold-fonts" size="15" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" text-transform="uppercase" file="&symbols;/large-city.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'no' and [population] &lt; 500000</Filter>
    &maxscale_zoom10;
    &minscale_zoom13;
    <ShieldSymbolizer fontset-name="bold-fonts" size="14" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/large-city.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'no' and [population] &gt;= 500000</Filter>
    &maxscale_zoom14;
    <ShieldSymbolizer fontset-name="bold-fonts" size="16" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" text-transform="uppercase" file="&symbols;/large-city.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[state_capital] = 'no' and [population] &lt; 500000</Filter>
    &maxscale_zoom14;
    <ShieldSymbolizer fontset-name="bold-fonts" size="16" fill="#ffffff" dy="-6" dx="4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="0" line-spacing="2" character-spacing="1" file="&symbols;/large-city.svg" minimum-distance="5" unlock-image="true" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left" avoid-edges="true" minimum-padding="267">[name]</ShieldSymbolizer>
  </Rule>
</Style>

<Style name="capital">

	<!-- no capitals at 4 and 5 for now :(
	<Rule>
		&maxscale_zoom4;
		&minscale_zoom5;
		<ShieldSymbolizer  fontset-name="bold-fonts" size="11" fill="#f0f0f0" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="0" line-spacing="2" file="&symbols;/national-capital.svg" minimum-distance="5" unlock-image="true" dx="4" dy="-5" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left">[name]</ShieldSymbolizer>
	</Rule>
	-->

	<Rule>
		&maxscale_zoom6;
		&minscale_zoom7;
		<ShieldSymbolizer  fontset-name="bold-fonts" size="12" fill="#f0f0f0" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="0" line-spacing="2" file="&symbols;/national-capital.svg" minimum-distance="15" unlock-image="true" dy="-6" dx="4" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left">[name]</ShieldSymbolizer>
	</Rule>
	<Rule>
		&maxscale_zoom8;
                &minscale_zoom9;
                <ShieldSymbolizer  fontset-name="bold-fonts" size="15" fill="#f0f0f0" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="0" line-spacing="2" text-transform="uppercase" file="&symbols;/national-capital.svg" unlock-image="true" dy="-7" dx="5" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left">[name]</ShieldSymbolizer>
        </Rule>
        <Rule>
                &maxscale_zoom10;
		&minscale_zoom13;
		<ShieldSymbolizer  fontset-name="bold-fonts" size="15" fill="#f0f0f0" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="0" line-spacing="2" text-transform="uppercase" file="&symbols;/national-capital.svg" unlock-image="true" dy="-7" dx="5" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left">[name]</ShieldSymbolizer>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<ShieldSymbolizer  fontset-name="bold-fonts" size="15" fill="#f0f0f0" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="0" line-spacing="2" character-spacing="5" text-transform="uppercase" file="&symbols;/national-capital.svg" unlock-image="true" dy="-7" dx="5" vertical-alignment="top" horizontal-alignment="right" justify-alignment="left">[name]</ShieldSymbolizer>
	</Rule>
</Style>
<Style name="state">
  <Rule>
    <Filter>[place] = 'state'</Filter>
    &maxscale_zoom5;
    &minscale_zoom5;
    <TextSymbolizer fontset-name="book-fonts" size="9" fill="#eea94f" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="23" line-spacing="4" text-transform="uppercase">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[place] = 'state'</Filter>
    &maxscale_zoom6;
    &minscale_zoom6;
    <TextSymbolizer fontset-name="bold-fonts" size="10" fill="#eea94f" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="23" line-spacing="4" text-transform="uppercase">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[place] = 'state'</Filter>
    &maxscale_zoom7;
    &minscale_zoom7;
    <TextSymbolizer fontset-name="bold-fonts" size="10" fill="#eea94f" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="28" line-spacing="8" character-spacing="6" text-transform="uppercase">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[place] = 'state'</Filter>
    &maxscale_zoom8;
    &minscale_zoom8;
    <TextSymbolizer fontset-name="bold-fonts" size="15" fill="#eea94f" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="28" line-spacing="12" character-spacing="10" text-transform="uppercase">[name]</TextSymbolizer>
  </Rule>
</Style>
<Style name="county">
	<Rule>
		<Filter>[place] = 'county'</Filter>
		&maxscale_zoom10;
		&minscale_zoom10;
		<TextSymbolizer fontset-name="bold-fonts" size="10" fill="#b4b4b4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="45" line-spacing="4" text-transform="uppercase" character-spacing="10" placement="interior">[name]</TextSymbolizer>
	</Rule>
	<Rule>
		<Filter>[place] = 'county'</Filter>
		&maxscale_zoom11;
		&minscale_zoom11;
		<TextSymbolizer fontset-name="bold-fonts" size="12" fill="#b4b4b4" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="45" line-spacing="4" text-transform="uppercase" character-spacing="10">[name]</TextSymbolizer>
	</Rule>
</Style>
<Style name="country">
  <Rule>
    <Filter>[population] &gt;= 300000000</Filter>
    &maxscale_zoom3;
    &minscale_zoom3;
    <TextSymbolizer fontset-name="book-fonts" size="14" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &gt;= 100000000 and [population] &lt; 300000000</Filter>
    &maxscale_zoom3;
    &minscale_zoom3;
    <TextSymbolizer fontset-name="book-fonts" size="12" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &gt;= 30000000 and [population] &lt; 100000000</Filter>
    &maxscale_zoom3;
    &minscale_zoom3;
    <TextSymbolizer fontset-name="book-fonts" size="10" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &gt;= 1000000 and [population] &lt; 30000000</Filter>
    &maxscale_zoom3;
    &minscale_zoom3;
    <TextSymbolizer fontset-name="book-fonts" size="8" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &lt;= 1000000</Filter>
    &maxscale_zoom3;
    &minscale_zoom3;
    <TextSymbolizer fontset-name="book-fonts" size="11" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &gt;= 300000000</Filter>
    &maxscale_zoom4;
    &minscale_zoom4;
    <TextSymbolizer fontset-name="book-fonts" size="15" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &gt;= 100000000 and [population] &lt; 300000000</Filter>
    &maxscale_zoom4;
    &minscale_zoom4;
    <TextSymbolizer fontset-name="book-fonts" size="14" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &gt;= 30000000 and [population] &lt; 100000000</Filter>
    &maxscale_zoom4;
    &minscale_zoom4;
    <TextSymbolizer fontset-name="book-fonts" size="13" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &gt;= 1000000 and [population] &lt; 30000000</Filter>
    &maxscale_zoom4;
    &minscale_zoom4;
    <TextSymbolizer fontset-name="book-fonts" size="12" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &lt;= 1000000</Filter>
    &maxscale_zoom4;
    &minscale_zoom4;
    <TextSymbolizer fontset-name="book-fonts" size="11" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &gt;= 300000000</Filter>
    &maxscale_zoom5;
    &minscale_zoom5;
    <TextSymbolizer fontset-name="book-fonts" size="16" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &gt;= 100000000 and [population] &lt; 300000000</Filter>
    &maxscale_zoom5;
    &minscale_zoom5;
    <TextSymbolizer fontset-name="book-fonts" size="15" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &gt;= 30000000 and [population] &lt; 100000000</Filter>
    &maxscale_zoom5;
    &minscale_zoom5;
    <TextSymbolizer fontset-name="book-fonts" size="14" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &gt;= 1000000 and [population] &lt; 30000000</Filter>
    &maxscale_zoom5;
    &minscale_zoom5;
    <TextSymbolizer fontset-name="book-fonts" size="13" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[population] &lt;= 1000000</Filter>
    &maxscale_zoom5;
    &minscale_zoom5;
    <TextSymbolizer fontset-name="book-fonts" size="12" fill="#a0522d" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" line-spacing="4" minimum-distance="20">[name]</TextSymbolizer>
  </Rule>
</Style>

<Style name="continent">
  <Rule>
    &maxscale_zoom2;
    &minscale_zoom2;
    <TextSymbolizer fontset-name="bold-fonts" size="12" fill="#918378" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" character-spacing="5" line-spacing="10" text-transform="uppercase">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom3;
    &minscale_zoom3;
    <TextSymbolizer fontset-name="bold-fonts" size="14" fill="#918378" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" character-spacing="5" line-spacing="10" text-transform="uppercase">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom4;
    &minscale_zoom4;
    <TextSymbolizer fontset-name="bold-fonts" size="16" fill="#918378" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" character-spacing="5" line-spacing="10" text-transform="uppercase">[name]</TextSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom5;
    &minscale_zoom5;
    <TextSymbolizer fontset-name="bold-fonts" size="17" fill="#918378" dy="0" halo-radius="2" halo-fill="rgba(0,0,0,1)" wrap-width="30" character-spacing="5" line-spacing="14" text-transform="uppercase">[name]</TextSymbolizer>
  </Rule>
</Style>

<Layer name="placenames-continent" status="on" srs="&osm2pgsql_projection;">
        <StyleName>continent</StyleName>
        <Datasource>
          <Parameter name="table">
            (select way, name
             from &prefix;_point
             where place in ('continent') ) as continents
          </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>

<Layer name="placenames-country" status="on" srs="&osm2pgsql_projection;">
        <StyleName>country</StyleName>
        <Datasource>
          <Parameter name="table">
            (select way,
      case when "name:en" is null then name
           when name is null then "name:en"
           when length(btrim(replace(name, "name:en", ''), '()- ')) = 0 then "name:en"
           else "name:en" || E'\n(' || btrim(replace(name, "name:en", ''), '()- ') || ')'
      end as name,
        case when population > 0 then population else -1 end as population
       from &prefix;_point
       where place in ('country')
order by population desc) as countries
          </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>

<Layer name="placenames-natcaps" status="on" srs="&osm2pgsql_projection;">
        <StyleName>capital</StyleName>
        <Datasource>
                <Parameter name="table">
        (select way,
      case when "name:en" is null then name
           when name is null then "name:en"
           when length(btrim(replace(name, "name:en", ''), '()- ')) = 0 then "name:en"
           else "name:en" || E'\n(' || btrim(replace(name, "name:en", ''), '()- ') || ')'
      end as name,
        case when population &gt; 0 then population
        else -1 end as population
          from &prefix;_point
          where place in ('city','metropolis')
          and capital = 'yes'
          and length(name) &gt; 0
        order by population desc
      ) as placenames</Parameter>
        &datasource-settings;
        </Datasource>
</Layer>

<Layer name="placenames-large" status="on" srs="&osm2pgsql_projection;">
        <StyleName>county</StyleName>
        <StyleName>state</StyleName>
        <Datasource>
          <Parameter name="table">
      (select way,place,
      case when "name:en" is null then name
           when name is null then "name:en"
           when length(btrim(replace(name, "name:en", ''), '()- ')) = 0 then "name:en"
           else "name:en" || E'\n(' || btrim(replace(name, "name:en", ''), '()- ') || ')'
      end as name,
        ref
       from &prefix;_point
       where place in ('county','state')) as placenames
          </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>

<Layer name="placenames-city0" status="on" srs="&osm2pgsql_projection;">
        <StyleName>city 0</StyleName>
        <Datasource>
                <Parameter name="table">
        (select way,
      case when "name:en" is null then name
           when name is null then "name:en"
           when length(btrim(replace(name, "name:en", ''), '()- ')) = 0 then "name:en"
           else "name:en" || E'\n(' || btrim(replace(name, "name:en", ''), '()- ') || ')'
      end as name,
        case when population &gt; 0 then population
        else -1 end as population,
        case when state_capital = 'yes' then 'yes'
        else 'no' end as state_capital
          from &prefix;_point
          where place in ('city','metropolis')
          and (capital is null or capital&lt;&gt;'yes')
          and length(name) &gt; 0
	  and population &gt;= 100000
        order by population desc
      ) as placenames</Parameter>
        &datasource-settings;
        </Datasource>
</Layer>

<Layer name="placenames-city1" status="on" srs="&osm2pgsql_projection;">
        <StyleName>city 1</StyleName>
        <Datasource>
                <Parameter name="table">
        (select way,
      case when "name:en" is null then name
           when name is null then "name:en"
           when length(btrim(replace(name, "name:en", ''), '()- ')) = 0 then "name:en"
           else "name:en" || E'\n(' || btrim(replace(name, "name:en", ''), '()- ') || ')'
      end as name,
        case when population &gt; 0 then population
        else -1 end as population,
        case when state_capital = 'yes' then 'yes'
        else 'no' end as state_capital
          from &prefix;_point
          where place in ('city','metropolis')
          and (capital is null or capital&lt;&gt;'yes')
          and length(name) &gt; 0
	  and (population is null or population &lt; 100000)
        order by population desc
      ) as placenames</Parameter>
        &datasource-settings;
        </Datasource>
</Layer>

<Layer name="placenames-medium" status="on" srs="&osm2pgsql_projection;">
        <StyleName>city 2</StyleName>
        <StyleName>city 3</StyleName>
        <Datasource>
                <Parameter name="table">
        (select way,place,
      case when "name:en" is null then name
           when name is null then "name:en"
           when length(btrim(replace(name, "name:en", ''), '()- ')) = 0 then "name:en"
           else "name:en" || E'\n(' || btrim(replace(name, "name:en", ''), '()- ') || ')'
      end as name, case when population > 0 then population
        else -1 end as population,
        state_capital
          from &prefix;_point
          where place in ('town','large_town','small_town')
          and (capital is null or capital&lt;&gt;'yes')
	  order by population desc
      ) as placenames</Parameter>
        &datasource-settings;
        </Datasource>
</Layer>

<Layer name="placenames-small" status="on" srs="&osm2pgsql_projection;">
	<StyleName>city 4</StyleName>
	<StyleName>neighborhood</StyleName>
	<StyleName>locality</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,place,
      case when "name:en" is null then name 
           when name is null then "name:en" 
	   when length(btrim(replace(name, "name:en", ''), '()- ')) = 0 then "name:en" 
	   else "name:en" || E'\n(' || btrim(replace(name, "name:en", ''), '()- ') || ')' 
      end as name,case when population > 0 then population
        else -1 end as population,
	ref
      from &prefix;_point
      where place in ('suburb','village','large_village','hamlet','locality')
      order by population desc
    ) as placenames
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="symbol-text" status="on" srs="&osm2pgsql_projection;">
        <StyleName>symbol-text</StyleName>
        <Datasource>
                <Parameter name="table">
            (select way,
            replace(ref,'Exit ','') as shield_name,
            length(replace(ref,'Exit ','')) as number_length
            from &prefix;_point
            where "highway" = 'motorway_junction'
            ) as point
                </Parameter>
                &datasource-settings;
        </Datasource>
</Layer>
<Layer name="ferry-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>ferry-text</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,coalesce("name:en" || ' (' || name || ')',name) as name
      from &prefix;_line
      where route is not null
      ) as routes
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="water-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>water-text</StyleName>
	<Datasource>
		<Parameter name="table">
     (select way,coalesce("name:en" || ' (' || name || ')',name) as name,leisure,landuse,"natural",waterway,'yes'::text as point
       from &prefix;_point
       where leisure is not null
          or landuse is not null
          or "natural" is not null
          or waterway is not null
      ) as text
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="water-line-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>water-line-text</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,waterway,disused,lock,coalesce("name:en" || ' (' || name || ')',name) as name,
      case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
      from &prefix;_line
      where waterway = 'river'
      ) as water_lines
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="landmark-poly-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>landmark-poly-text</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,way_area,aeroway,amenity,building,landuse,leisure,man_made,military,coalesce("name:en" || ' (' || name || ')',name) as name,"natural",power,shop,tourism,boundary
       from &prefix;_polygon
       where name is not null
       order by z_order,way_area desc
      ) as text
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="landmark-point-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>landmark-point-text</StyleName>
	<Datasource>
		<Parameter name="table">
	    (select way,amenity,place,railway,tourism,leisure,coalesce("name:en" || ' (' || name || ')',name) as name
	    from &prefix;_point
	    where amenity in ('ferry_terminal','hospital')
	    or tourism in ('museum', 'attraction', 'theme_park', 'zoo')
	    or railway = 'station'
	    or place='island'
            or leisure='stadium'
	    ) as text
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>

<Style name="barrier-text">
<!-- toll booths and gates share this symbolizer -->
  <Rule>
    &maxscale_zoom17;
    <TextSymbolizer fontset-name="bold-fonts" size="9" fill="#ffffff" halo-radius="2" halo-fill="rgb(0,0,0)" wrap-width="25" dy="-7">[label]</TextSymbolizer>
  </Rule>    
</Style>
<Layer name="barrier-text" status="on" srs="&osm2pgsql_projection;">
  <StyleName>barrier-text</StyleName>
  <Datasource>
    <Parameter name="table">
      (select 
        way, (case 
	  when "name:en" is not null and name is not null then "name:en" || ' (' || name || ')'
	  when "name:en" is not null then "name:en"
	  when name is not null then name
	  when barrier='toll_booth' then 'Toll Booth'
	  when access='permissive' then 'Gate (Permission)'
	  when access='private' then 'Gate (Private)'
	  else 'Gate'
	end) as label
       from &prefix;_point
       where barrier in ('gate','toll_booth')
       ) as symbols
    </Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
