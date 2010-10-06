<Style name="landmark-poly-text">
<!--park/wood/forest-->
	<Rule>
		<Filter>([leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'nature_reserve' or [landuse] = 'forest') and [way_area] &gt;= 50000000</Filter>
		&maxscale_zoom9;
		&minscale_zoom10;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#006f53" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" min_distance="20" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>([leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'nature_reserve' or [landuse] = 'forest') and [way_area] &gt;= 25000000</Filter>
		&maxscale_zoom11;
		&minscale_zoom12;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#006f53" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" min_distance="20" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>([leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'nature_reserve' or [landuse] = 'forest') and [way_area] &gt;= 1000000</Filter>
		&maxscale_zoom13;
		&minscale_zoom14;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#305943" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" min_distance="20" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>([leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'nature_reserve' or [landuse] = 'forest') and [way_area] &gt;= 20000</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#005842" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" min_distance="20" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>([leisure] = 'park' or [leisure] = 'playground' or [landuse] = 'recreation_ground' or [leisure] = 'nature_reserve' or [landuse] = 'forest')</Filter>
		&maxscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#005842" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" min_distance="20" line_spacing="4"/>
	</Rule>
<!--military-->
	<Rule>
		<Filter>[landuse]='military' and [way_area] &gt;= 500000</Filter>
		&maxscale_zoom13;
		&minscale_zoom14;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>[landuse]='military' and [way_area] &gt;= 100000</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>[amenity] = 'university' or [amenity] = 'college'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="11" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" line_spacing="4"/>
	</Rule>
<!--golf course-->
	<Rule>
		<Filter>[leisure] = 'golf_course'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#006f53" dy="-10" dx="30" justify_alignment="left" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="30" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'golf_course'</Filter>
		&maxscale_zoom16;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="12" fill="#006f53" dy="-15" dx="35" justify_alignment="left" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="30" line_spacing="4"/>
	</Rule>
<!--college/university-->
	<Rule>
		<Filter>([amenity] = 'university' or [amenity] = 'college') and [way_area] &gt;= 500000</Filter>
		&maxscale_zoom13;
		&minscale_zoom14;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>([amenity] = 'university' or [amenity] = 'college') and [way_area] &gt;= 100000</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="11" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>[amenity] = 'university' or [amenity] = 'college'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="11" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" line_spacing="4"/>
	</Rule>
<!--school-->
	<Rule>
		<Filter>[amenity] = 'school' and [way_area] &gt;= 500000</Filter>
		&maxscale_zoom13;
		&minscale_zoom14;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>[amenity] = 'school' and [way_area] &gt;= 100000</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="14" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>[amenity] = 'school'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="14" line_spacing="4"/>
	</Rule>
<!--stadium or attraction-->
	<Rule>
		<Filter>([leisure] = 'stadium' or [leisure] = 'sports_centre' or [tourism] = 'attraction' or [tourism] = 'zoo') and [way_area] &gt;= 500000</Filter>
		&maxscale_zoom13;
		&minscale_zoom14;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="14" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>([leisure] = 'stadium' or [leisure] = 'sports_centre' or [tourism] = 'attraction' or [tourism] = 'zoo') and [way_area] &gt;= 10000</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="14" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>[leisure] = 'stadium' or [leisure] = 'sports_centre' or [tourism] = 'attraction' or [tourism] = 'zoo'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="14" line_spacing="4"/>
	</Rule>
<!--Shopping center-->
	<Rule>
		<Filter>[landuse] = 'retail'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="14" line_spacing="4"/>
	</Rule>
<!--Building-->
	<Rule>
		<Filter>[building] = 'yes' and [way_area] &gt;= 100000</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="14" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>[building] = 'yes'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="14" line_spacing="4"/>
	</Rule>
<!--hospital polygon-->
	<Rule>
		<Filter>[amenity] = 'hospital'</Filter>
		&maxscale_zoom16;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="11" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="40" line_spacing="4"/>
	</Rule>
</Style>
<Style name="landmark-point-text">
<!--airport-->
	<Rule>
		<Filter>[aeroway] = 'apron' or [aeroway] = 'aerodrome'</Filter>
		&maxscale_zoom11;
		&minscale_zoom15;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="10" text_transform="uppercase" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>[aeroway] = 'apron' or [aeroway] = 'aerodrome'</Filter>
		&maxscale_zoom16;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="11" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="10" text_transform="uppercase" line_spacing="4"/>
	</Rule>
<!--island-->
	<Rule>
		<Filter>[place] = 'island'</Filter>
		&maxscale_zoom14;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="9" fill="#000" dy="0" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" line_spacing="4"/>
	</Rule>
<!--attraction/POI-->
	<Rule>
		<Filter>[tourism] = 'museum' or [tourism] = 'attraction' or [tourism] = 'theme_park' or [tourism] = 'zoo'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" dy="-8" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" line_spacing="4"/>
	</Rule>
<!--hospital point-->
	<Rule>
		<Filter>[amenity] = 'hospital'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="11" fill="#2b2b2b" dy="-10" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="40" line_spacing="4"/>
	</Rule>
<!--ferry terminal-->
	<Rule>
		<Filter>[amenity] = 'ferry_terminal'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" dy="-8" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" line_spacing="4"/>
	</Rule>
<!--train station-->
	<Rule>
		<Filter>[railway] = 'station'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" dy="-8" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="25" line_spacing="4"/>
	</Rule>
</Style>
<Style name="water-text">
<!--bay/open water-->
	<Rule>
		<Filter>[natural] = 'bay'</Filter>
		&maxscale_zoom6;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="12" fill="#384e6c" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" min_distance="200"/>
	</Rule>
<!--marina-->
	<Rule>
		<Filter>[leisure] = 'marina'</Filter>
		&maxscale_zoom15;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#2b2b2b" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="30"/>
	</Rule>
<!--lake-->
	<Rule>
		<Filter>[natural] = 'water' or [landuse] = 'reservoir' or [landuse] = 'basin' or [waterway] = 'mill_pond' or [waterway]='canal'</Filter>
		&maxscale_zoom6;
		&maxscale_zoom8;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#384e6c" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" min_distance="200"/>
	</Rule>
	<Rule>
		<Filter>[natural] = 'water' or [landuse] = 'reservoir' or [landuse] = 'basin' or [waterway] = 'mill_pond' or [waterway]='canal'</Filter>
		&maxscale_zoom9;
		&maxscale_zoom11;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="10" fill="#37617e" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" min_distance="200"/>
	</Rule>
	<Rule>
		<Filter>[natural] = 'water' or [landuse] = 'reservoir' or [landuse] = 'basin' or [waterway] = 'mill_pond' or [waterway]='canal'</Filter>
		&maxscale_zoom12;
		&maxscale_zoom13;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="11" fill="#304f6f" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" min_distance="200"/>
	</Rule>
	<Rule>
		<Filter>[natural] = 'water' or [landuse] = 'reservoir' or [landuse] = 'basin' or [waterway] = 'mill_pond' or [waterway]='canal' </Filter>
		&maxscale_zoom14;
		&minscale_zoom16;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="12" fill="#214c6e" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" min_distance="100"/>
	</Rule>
	<Rule>
		<Filter>[natural] = 'water' or [landuse] = 'reservoir' or [landuse] = 'basin' or [waterway] = 'mill_pond' or [waterway]='canal'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="12" fill="#214c6e" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" min_distance="100"/>
	</Rule>
</Style>
<Style name="water-line-text">
<!--river and stream-->
	<Rule>
		<Filter>[waterway]='weir' or [waterway]='river' or [waterway]='canal' or [waterway]='derelict_canal' or [waterway]='stream' or [waterway]='drain'</Filter>
		&maxscale_zoom14;
		&minscale_zoom14;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="11" fill="#304f6f" halo_fill="rgba(255,255,255,0.1)" halo_radius="2" placement="line" max_char_angle_delta="40"/>
	</Rule>
	<Rule>
		<Filter>[waterway]='weir' or [waterway]='river' or [waterway]='canal' or [waterway]='derelict_canal' or [waterway]='stream' or [waterway]='drain'</Filter>
		&maxscale_zoom15;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="12" fill="#214c6e" halo_fill="rgba(255,255,255,0.1)" halo_radius="2" placement="line" max_char_angle_delta="40"/>
	</Rule>
</Style>
<Style name="ferry-text">
	<Rule>
		&maxscale_zoom13;
		<TextSymbolizer name="[name]" fontset_name="oblique-fonts" size="11" fill="#304f6f" halo_fill="rgba(255,255,255,0.1)" halo_radius="2" placement="line" max_char_angle_delta="40"/>
	</Rule>
</Style>
<Style name="symbol-text">
<!--motorway junction-->
	<Rule>
		&maxscale_zoom15;
		<ShieldSymbolizer name="[shield_name]" fontset_name="bold-fonts" size="10" fill="#ffffff" placement="point" dx="-1" dy="-2.5" shield_dy="-15" shield_dx="10" file="&symbols;/exit.png" type="png" width="21" height="17"/> 
	</Rule>
</Style>
<Style name="locality">
	<Rule>
		<Filter>[place] = 'locality'</Filter>
		&maxscale_zoom16;
		<TextSymbolizer name="[name]" fontset_name="bold-fonts" size="10" fill="#787878" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" min_distance="10" line_spacing="2"/>
	</Rule>
</Style>
<Style name="neighborhood">
	<Rule>
		<Filter>[place] = 'village' or [place] = 'hamlet'</Filter>
		&maxscale_zoom12;
		&minscale_zoom12;
		<TextSymbolizer name="[name]" fontset_name="bold-fonts" size="10" fill="#787878" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" min_distance="50" line_spacing="2"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'village' or [place] = 'hamlet'</Filter>
		&maxscale_zoom13;
		&minscale_zoom14;
		<TextSymbolizer name="[name]" fontset_name="bold-fonts" size="10" fill="#787878" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" min_distance="50" line_spacing="2"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'village' or [place] = 'hamlet'</Filter>
		&maxscale_zoom15;
		&minscale_zoom16;
		<TextSymbolizer name="[name]" fontset_name="bold-fonts" size="10" fill="#787878" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" min_distance="100" line_spacing="2"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'village' or [place] = 'hamlet'</Filter>
		&maxscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="bold-fonts" size="12" fill="#787878" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" text_transform="uppercase" min_distance="100" line_spacing="2" character_spacing="5"/>
	</Rule>
</Style>
<Style name="city 4">
	<Rule>
		<Filter>[place] = 'suburb'</Filter>
		&maxscale_zoom9;
		&minscale_zoom10;
		<TextSymbolizer name="[name]" fontset_name="bold-fonts" size="10" fill="#6e6e6e" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" min_distance="10" line_spacing="2"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'suburb'</Filter>
		&maxscale_zoom11;
		&minscale_zoom13;
		<TextSymbolizer name="[name]" fontset_name="bold-fonts" size="12" fill="#6e6e6e" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" min_distance="10" line_spacing="2"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'suburb'</Filter>
		&maxscale_zoom14;
		&minscale_zoom17;
		<TextSymbolizer name="[name]" fontset_name="bold-fonts" size="12" fill="#6e6e6e" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" text_transform="uppercase" min_distance="10" line_spacing="2" character_spacing="5"/>
	</Rule>
</Style>
<Style name="city 3">
	<Rule>
		<Filter>[place] = 'small_town'</Filter>
		&maxscale_zoom6;
		&minscale_zoom10;
		<ShieldSymbolizer name="[name]" fontset_name="bold-fonts" size="10" fill="#f00" dy="-17" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="0" line_spacing="2" file="&symbols;/small-city.png" type="png" width="8" height="8" min_distance="10"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'small_town'</Filter>
		&maxscale_zoom11;
		&minscale_zoom15;
		<ShieldSymbolizer name="[name]" fontset_name="bold-fonts" size="12" fill="#2b2b2b" dy="-17" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="0" line_spacing="2" file="&symbols;/small-city.png" type="png" width="8" height="8" min_distance="10"/>
	</Rule>
</Style>
<Style name="city 2">
	<Rule>
		<Filter>[place] = 'town' or [place]='large_town'</Filter>
		&maxscale_zoom8;
		&minscale_zoom8;
		<ShieldSymbolizer name="[name]" fontset_name="bold-fonts" size="8" fill="#2b2b2b" dy="-11" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="0" line_spacing="2" file="&symbols;/small-city.png" type="png" width="8" height="8" min_distance="10"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'town' or [place]='large_town'</Filter>
		&maxscale_zoom9;
		&minscale_zoom10;
		<ShieldSymbolizer name="[name]" fontset_name="bold-fonts" size="9" fill="#2b2b2b" dy="-11" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="0" line_spacing="2" file="&symbols;/small-city.png" type="png" width="8" height="8" min_distance="10"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'town' or [place]='large_town'</Filter>
		&maxscale_zoom11;
		&minscale_zoom15;
		<ShieldSymbolizer name="[name]" fontset_name="bold-fonts" size="12" fill="#2b2b2b" dy="-13" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="0" line_spacing="2" file="&symbols;/small-city.png" type="png" width="8" height="8" min_distance="10"/>
	</Rule>
</Style>
<Style name="city 1">
	<Rule>
		<Filter>[place] = 'city' or [place]='metropolis'</Filter>
		&maxscale_zoom6;
		&minscale_zoom7;
		<ShieldSymbolizer name="[name]" fontset_name="bold-fonts" size="11" fill="#2b2b2b" dy="-12" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="0" line_spacing="2" file="&symbols;/small-city.png" type="png" width="10" height="8" min_distance="25"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'city' or [place]='metropolis'</Filter>
		&maxscale_zoom8;
		&minscale_zoom9;
		<ShieldSymbolizer name="[name]" fontset_name="bold-fonts" size="13" fill="#2b2b2b" dy="-13" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="0" line_spacing="2" file="&symbols;/large-city.png" type="png" width="10" height="10" min_distance="20"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'city' or [place]='metropolis'</Filter>
		&maxscale_zoom10;
		&minscale_zoom13;
		<ShieldSymbolizer name="[name]" fontset_name="bold-fonts" size="14" fill="#2b2b2b" dy="-15" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="0" line_spacing="2" file="&symbols;/large-city.png" type="png" width="10" height="10" min_distance="5"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'city' or [place]='metropolis'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<ShieldSymbolizer name="[name]" fontset_name="bold-fonts" size="16" fill="#2b2b2b" dy="-17" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="0" line_spacing="2" character_spacing="5" text_transform="uppercase" file="&symbols;/large-city.png" type="png" width="10" height="10" min_distance="20"/>
	</Rule>
</Style>
<Style name="capital">
	<Rule>
		<Filter>[place] = 'city' or [place]='metropolis'</Filter>
		&maxscale_zoom6;
		&minscale_zoom6;
		<ShieldSymbolizer name="[name]" fontset_name="bold-fonts" size="13" fill="#2b2b2b" dy="-17" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="0" line_spacing="2" file="&symbols;/national-capital.png" type="png" width="14" height="14" min_distance="25"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'city' or [place]='metropolis'</Filter>
		&maxscale_zoom7;
		&minscale_zoom13;
		<ShieldSymbolizer name="[name]" fontset_name="bold-fonts" size="15" fill="#2b2b2b" dy="-17" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="0" line_spacing="2" file="&symbols;/national-capital.png" type="png" width="14" height="14"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'city' or [place]='metropolis'</Filter>
		&maxscale_zoom14;
		&minscale_zoom15;
		<ShieldSymbolizer name="[name]" fontset_name="bold-fonts" size="15" fill="#2b2b2b" dy="-17" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="0" line_spacing="2" character_spacing="5" text_transform="uppercase" file="&symbols;/national-capital.png" type="png" width="14" height="14"/>
	</Rule>
</Style>
<Style name="state">
	<Rule>
		<Filter>[place] = 'state'</Filter>
		&maxscale_zoom5;
		&minscale_zoom10;
		<TextSymbolizer name="[name]" fontset_name="book-fonts" size="10" fill="#805433" dy="0" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" text_transform="uppercase" min_distance="20"/>
	</Rule>
</Style>
<Style name="county">
	<Rule>
		<Filter>[place] = 'county'</Filter>
		&maxscale_zoom10;
		&minscale_zoom10;
		<TextSymbolizer name="[name]" fontset_name="book-fonts" size="10" fill="#787878" dy="0" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" text_transform="uppercase" line_spacing="2" character_spacing="2"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'county'</Filter>
		&maxscale_zoom11;
		&minscale_zoom11;
		<TextSymbolizer name="[name]" fontset_name="book-fonts" size="12" fill="#5a5a5a" dy="0" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" text_transform="uppercase" line_spacing="2" character_spacing="2"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'county'</Filter>
		&maxscale_zoom12;
		&minscale_zoom12;
		<TextSymbolizer name="[name]" fontset_name="book-fonts" size="14" fill="#5a5a5a" dy="0" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="20" text_transform="uppercase" line_spacing="2" character_spacing="2"/>
	</Rule>
</Style>
<Style name="country">
	<Rule>
		<Filter>[place] = 'country'</Filter>
		&maxscale_zoom3;
		&minscale_zoom3;
		<TextSymbolizer name="[name]" fontset_name="book-fonts" size="9" fill="#918378" dy="0" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="30" min_distance="20" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'country'</Filter>
		&maxscale_zoom4;
		&minscale_zoom5;
		<TextSymbolizer name="[name]" fontset_name="book-fonts" size="10" fill="#918378" dy="0" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="30" line_spacing="4"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'country'</Filter>
		&maxscale_zoom6;
		&minscale_zoom7;
		<TextSymbolizer name="[name]" fontset_name="book-fonts" size="12" fill="#918378" dy="0" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="30" text_transform="uppercase" line_spacing="4"/>
	</Rule>
</Style>
<Style name="continent">
	<Rule>
		<Filter>[place] = 'continent'</Filter>
		&maxscale_zoom1;
		&minscale_zoom1;
		<TextSymbolizer name="[name]" fontset_name="book-fonts" size="9" fill="#918378" dy="0" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="30" line_spacing="4" text_transform="uppercase"/>
	</Rule>
	<Rule>
		<Filter>[place] = 'continent'</Filter>
		&maxscale_zoom2;
		&minscale_zoom5;
		<TextSymbolizer name="[name]" fontset_name="book-fonts" size="9" fill="#918378" dy="0" halo_radius="1" halo_fill="rgba(255,255,255,0.35)" wrap_width="30" character_spacing="5" line_spacing="10" text_transform="uppercase"/>
	</Rule>
</Style>
<Layer name="placenames-large" status="on" srs="&osm2pgsql_projection;">
	<StyleName>continent</StyleName>
	<StyleName>country</StyleName>
	<StyleName>county</StyleName>
	<StyleName>state</StyleName>
	<StyleName>capital</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,place,replace(replace(name,'(',''),')','') as name,ref
      from &prefix;_point
      where place in ('continent','country','county','state')
      or (place in ('city','metropolis') and capital='yes')
    ) as placenames
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="placenames-medium" status="on" srs="&osm2pgsql_projection;">
	<StyleName>city 1</StyleName>
	<StyleName>city 2</StyleName>
	<StyleName>city 3</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,place,name
      from &prefix;_point
      where place in ('city','metropolis','town','large_town','small_town')
      and (capital is null or capital&lt;&gt;'yes')
    ) as placenames
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="placenames-small" status="on" srs="&osm2pgsql_projection;">
	<StyleName>city 4</StyleName>
	<StyleName>neighborhood</StyleName>
	<StyleName>locality</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,place,name
      from &prefix;_point
      where place in ('suburb','village','large_village','hamlet','locality')
    ) as placenames
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="symbol-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>symbol-text</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway,name,
		  ref,replace(ref,'Exit ','') as shield_name
      from &prefix;_point
      where "highway" in ('motorway_junction')
      ) as point
		</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="ferry-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>ferry-text</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,route,name
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
      (select way,name,leisure,landuse,"natural",waterway,'yes'::text as point
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
      (select way,waterway,disused,lock,name,
      case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
      from &prefix;_line
      where waterway is not null
      ) as water_lines
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
<Layer name="landmark-poly-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>landmark-poly-text</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,way_area,aeroway,amenity,building,landuse,leisure,man_made,military,name,"natural",power,shop,tourism
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
      (select way,amenity,access,highway,leisure,landuse,man_made,"natural",place,railway,tourism,ele,name,ref,military,aeroway,waterway,'yes'::text as point
       from &prefix;_point
       where amenity is not null
          or leisure is not null
          or landuse is not null
          or tourism is not null
          or railway is not null
          or "natural" is not null
          or place='island'
          or highway='motorway_junction'
          or aeroway in ('apron','aerodrome')
      ) as text
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
