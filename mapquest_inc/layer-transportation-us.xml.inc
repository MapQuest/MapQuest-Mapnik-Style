<!--high-level road network: zooms 5-7-->
<Style name="roads-lowzoom" filter-mode="first">
        <Rule>
                &maxscale_zoom5;
                &minscale_zoom5;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(130,160,200)" stroke-width="0.65" stroke-opacity="0.48" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom6;
                &minscale_zoom6;
                <Filter>[highway] = 'trunk'</Filter>
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(166,159,133)" stroke-opacity="0.4" stroke-width="0.4" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom6;
                &minscale_zoom6;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(110,140,200)" stroke-width="1" stroke-opacity="0.6" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom7;
                &minscale_zoom7;
                <Filter>[highway] = 'trunk'</Filter>
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(230,178,22)" stroke-width=".6" stroke-opacity="0.75" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom7;
                &minscale_zoom7;
                <Filter>[toll] = 'yes'</Filter>
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(119,179,131)" stroke-width="1.25" stroke-opacity="0.75" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom7;
                &minscale_zoom7;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(61,109,204)" stroke-width="1.25" stroke-opacity="0.75" stroke-linecap="round"/>
        </Rule>
</Style>

<!--standard interchange casing-->
<Style name="standard-ramp-casing">
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(184,158,125)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(184,158,125)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(184,158,125)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(184,158,125)" stroke-width="10" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(184,158,125)" stroke-width="14" stroke-linecap="round"/>
        </Rule>
</Style>
<!--freeway interchange casing-->
<Style name="freeway-ramp-casing">
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="10" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="14" stroke-linecap="round"/>
        </Rule>
</Style>
<!--tollway interchange casing-->
<Style name="tollway-ramp-casing">
        <Rule>
                &maxscale_zoom10;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="6" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="10" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="14" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 5 casing-->
<Style name="street-5-casing-lowzoom" filter-mode="first">
	<Rule>
		<Filter>[highway] = 'service'</Filter>
                &maxscale_zoom12;
                &minscale_zoom12;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="0.5" stroke-opacity="0.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom12;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="0.8" stroke-opacity="0.8" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service'</Filter>
                &maxscale_zoom13;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="0.8" stroke-opacity="0.8" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom13;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
</Style>
<Style name="street-5-casing" filter-mode="first">
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'parking_aisle' or [service] = 'driveway' or [service] = 'drive-through')</Filter>
                &maxscale_zoom14;
                &minscale_zoom14;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="0.5" stroke-opacity="0.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'parking_aisle' or [service] = 'driveway' or [service] = 'drive-through')</Filter>
                &maxscale_zoom15;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="0.8" stroke-opacity="0.8" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'alley' or [service] = 'emergency_access')</Filter>
                &maxscale_zoom14;
                &minscale_zoom14;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="0.8" stroke-opacity="0.8" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'alley' or [service] = 'emergency_access')</Filter>
                &maxscale_zoom15;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service'</Filter>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(175,175,175)" stroke-width="2.75" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(175,175,175)" stroke-width="4.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'parking_aisle' or [service] = 'driveway' or [service] = 'drive-through')</Filter>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="2.25" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'alley' or [service] = 'emergency_access')</Filter>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="3.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service'</Filter>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="8.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'parking_aisle' or [service] = 'driveway' or [service] = 'drive-through')</Filter>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'alley' or [service] = 'emergency_access')</Filter>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="5" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service'</Filter>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="6.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="10.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service'</Filter>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="11" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(190,190,190)" stroke-width="14.5" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 4 casing-->
<Style name="street-4-casing">
        <Rule>
                &maxscale_zoom10;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(191,179,143)" stroke-width="2.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(204,173,112)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(204,173,112)" stroke-width="5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(204,173,112)" stroke-width="10" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(204,173,112)" stroke-width="12" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(204,173,112)" stroke-width="16.5" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 3 casing-->
<Style name="street-3-casing">
        <Rule>
                &maxscale_zoom8;
                &minscale_zoom8;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(166,159,112)" stroke-width="0.7" stroke-opacity="0.8" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom9;
                &minscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(166,159,112)" stroke-width="0.8" stroke-linecap="round"/>
        </Rule>
	<Rule>
                &maxscale_zoom10;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="3.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="10.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="12.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="16.5" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 2 casing-->
<Style name="street-2-casing">
        <Rule>
                &maxscale_zoom8;
                &minscale_zoom8;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(217,152,54)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom9;
                &minscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(217,152,54)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom10;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="10" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="12.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(208,161,74)" stroke-width="16.5" stroke-linecap="round"/>
        </Rule>
</Style>
<!--cul-de-sac-->
<Style name="cul-de-sac">
	<Rule>
		&maxscale_zoom15;
		&minscale_zoom15;
		<MarkersSymbolizer fill="rgb(255,255,255)" stroke="rgb(175,175,175)" stroke-width="1" width="4" height="4" placement="point" marker-type="ellipse"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom16;
		<MarkersSymbolizer fill="rgb(255,255,255)" stroke="rgb(190,190,190)" stroke-width="1.5" width="6" height="6" placement="point" marker-type="ellipse"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		&minscale_zoom17;
		<MarkersSymbolizer fill="rgb(255,255,255)" stroke="rgb(190,190,190)" stroke-width="1.5" width="8" height="8" placement="point" marker-type="ellipse"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<MarkersSymbolizer fill="rgb(255,255,255)" stroke="rgb(190,190,190)" stroke-width="1.75" width="10" height="10" placement="point" marker-type="ellipse"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <MarkersSymbolizer fill="rgb(255,255,255)" stroke="rgb(190,190,190)" stroke-width="4" width="14" height="14" placement="point" marker-type="ellipse"/>
        </Rule>
</Style>
<!--standard interchange-->
<Style name="standard-ramp">
	<Rule>
		&maxscale_zoom11;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(179,165,159)" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom16;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom17;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(220,191,149)" stroke-width="10" stroke-linecap="round"/>
        </Rule>
</Style>
<!--freeway interchange-->
<Style name="freeway-ramp">
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="1" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="2" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(108,144,227)" stroke-width="10" stroke-linecap="round"/>
        </Rule>
</Style>
<!--tollway interchange-->
<Style name="tollway-ramp">
        <Rule>
                &maxscale_zoom10;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
		&minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="6" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="10" stroke-linecap="round"/>
        </Rule>	
</Style>
<!--street 5-->
<Style name="street-5-lowzoom" filter-mode="first">
	<Rule>
		<Filter>[highway] = 'service'</Filter>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="1.75" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="2.5" stroke-linecap="round"/>
        </Rule>
</Style>
<Style name="street-5" filter-mode="first">
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'parking_aisle' or [service] = 'driveway' or [service] = 'drive-through')</Filter>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'alley' or [service] = 'emergency_access')</Filter>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service'</Filter>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="5.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'parking_aisle' or [service] = 'driveway' or [service] = 'drive-through')</Filter>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="2.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service' and ([service] = 'alley' or [service] = 'emergency_access')</Filter>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service'</Filter>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="4.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="7" stroke-linecap="round"/>
        </Rule>
        <Rule>
		<Filter>[highway] = 'service'</Filter>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="9" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(255,255,255)" stroke-width="11" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 4-->
<Style name="street-4">
        <Rule>
                &maxscale_zoom10;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(244,250,160)" stroke-width="1" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(244,250,160)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(246,240,163)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(246,240,163)" stroke-width="7" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(246,240,163)" stroke-width="9" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(246,240,163)" stroke-width="13" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 3-->
<Style name="street-3">
	<Rule>
                &maxscale_zoom10;
                &minscale_zoom11;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="1.5" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,142)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,142)" stroke-width="7" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,142)" stroke-width="9" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,142)" stroke-width="13" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 2-->
<Style name="street-2">
	<Rule>
                &maxscale_zoom8;
                &minscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(242,194,121)" stroke-width="1.5" stroke-linecap="round"/>
        </Rule>
	<Rule>
                &maxscale_zoom10;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,112)" stroke-width="2" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom14;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,142)" stroke-width="3" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom16;
                &minscale_zoom17;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,142)" stroke-width="7" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom18;
                &minscale_zoom18;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,142)" stroke-width="9" stroke-linecap="round"/>
        </Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(245,210,142)" stroke-width="13" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 1 casing-->
<Style name="street-1-casing">
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(45,72,128)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom13;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(45,72,128)" stroke-width="6" stroke-linecap="round"/>
        </Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="8" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="12" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="16" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(73,95,140)" stroke-width="20" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 1-->
<Style name="street-1">
        <Rule>
                &maxscale_zoom8;
                &minscale_zoom9;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(71,107,178)" stroke-width="4" stroke-linecap="round"/>
        </Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="7" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="10" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(108,145,217)" stroke-width="14" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 1 centerline-->
<Style name="street-1-centerline">
	<Rule>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(182,202,242)" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="1"/>
	</Rule>
        <Rule>
                &maxscale_zoom12;
                &minscale_zoom15;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="1.5" stroke-linecap="round"/>
        </Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(211,219,235)" stroke-width="6" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 1 toll casing-->
<Style name="street-1-toll-casing">
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(38,128,38)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(38,128,38)" stroke-width="6" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="8" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="12" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="16" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(72,124,72)" stroke-width="20" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 1 toll-->
<Style name="street-1-toll">
	<Rule>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(77,153,77)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(136,204,102)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(136,204,102)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="8" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="10" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(134,194,105)" stroke-width="14" stroke-linecap="round"/>
        </Rule>
</Style>
<!--street 1 toll centerline-->
<Style name="street-1-toll-centerline">
	<Rule>
		&maxscale_zoom8;
		&minscale_zoom9;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(156,204,133)" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom10;
		&minscale_zoom11;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(217,229,211)" stroke-width="1"/>
	</Rule>
	<Rule>
		&maxscale_zoom12;
		&minscale_zoom13;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(217,229,211)" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom14;
		&minscale_zoom15;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(213,232,216)" stroke-width="1.5" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom16;
		&minscale_zoom17;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(213,232,216)" stroke-width="3" stroke-linecap="round"/>
	</Rule>
	<Rule>
		&maxscale_zoom18;
		&minscale_zoom18;
		<LineSymbolizer stroke-linejoin="round" stroke="rgb(213,232,216)" stroke-width="4" stroke-linecap="round"/>
	</Rule>
        <Rule>
                &maxscale_zoom19;
                <LineSymbolizer stroke-linejoin="round" stroke="rgb(213,232,216)" stroke-width="6" stroke-linecap="round"/>
        </Rule> 
</Style>

<Layer name="roads-lowzoom" status="on" srs="&osm2pgsql_projection;">
        <StyleName>roads-lowzoom</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way, highway,
                 case when toll in ('yes', 'true', '1') then 'yes'::text else 'no' end as toll
                 from &prefix;_roads
                 where highway in ('motorway', 'trunk')
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
&layer-transportation-common;
<Layer name="standard-ramp-casing" status="on" srs="&osm2pgsql_projection;">
        <StyleName>standard-ramp-casing</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way, highway
                 from &prefix;_line
                 where highway in ('trunk_link', 'primary_link', 'secondary_link', 'tertiary_link', 'residential_link', 'unclassified_link')
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="freeway-ramp-casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>freeway-ramp-casing</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way, highway
		 from &prefix;_roads
		 where highway = 'motorway_link' and (toll is null or toll not in ('yes', 'true', '1')) 
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="tollway-ramp-casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>tollway-ramp-casing</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_roads
		 where highway = 'motorway_link' and toll in ('yes', 'true', '1')
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-5-casing-lowzoom" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-5-casing-lowzoom</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_line
		 where highway in ('residential', 'living_street', 'unclassified', 'road', 'service')	
		   and (service is null or service not in ('alley', 'emergency_access', 'driveway', 'drive-through', 'parking_aisle'))
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-5-casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-5-casing</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway,service
		 from &prefix;_line
		 where highway in ('residential', 'living_street', 'unclassified', 'road', 'service')
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-4-casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-4-casing</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_line
		 where highway in ('secondary', 'tertiary')
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-3-casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-3-casing</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_roads
		 where highway = 'primary'
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-2-casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-2-casing</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_roads
		 where highway = 'trunk'
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="standard-ramp" status="on" srs="&osm2pgsql_projection;">
        <StyleName>standard-ramp</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way,highway
                 from &prefix;_line
                 where highway in ('trunk_link', 'primary_link', 'secondary_link', 'tertiary_link', 'residential_link', 'unclassified_link')
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="freeway-ramp" status="on" srs="&osm2pgsql_projection;">
	<StyleName>freeway-ramp</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_roads
		 where highway = 'motorway_link' and (toll is null or toll not in ('yes', 'true', '1'))
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="tollway-ramp" status="on" srs="&osm2pgsql_projection;">
	<StyleName>tollway-ramp</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_roads
		 where highway = 'motorway_link' and toll in ('yes', 'true', '1')
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="cul-de-sac" status="on" srs="&osm2pgsql_projection;">
	<StyleName>cul-de-sac</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way from &prefix;_point where highway = 'turning_circle') as turning_circle
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-5-lowzoom" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-5-lowzoom</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_line
		 where highway in ('residential', 'living_street', 'unclassified', 'road', 'service')	
		   and (service is null or service not in ('alley', 'emergency_access', 'driveway', 'drive-through', 'parking_aisle'))
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-5" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-5</StyleName>
	<Datasource>
	<Parameter name="table">
	      (select way,highway,service
	       from &prefix;_line
	       where highway in ('residential', 'living_street', 'unclassified', 'road', 'service')
	      ) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-4" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-4</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_line
		 where highway in ('secondary', 'tertiary')
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-3" status="on" srs="&osm2pgsql_projection;">
        <StyleName>street-3</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way,highway
                 from &prefix;_roads
                 where highway = 'primary'
                ) as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="street-2" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-2</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_roads
		 where highway = 'trunk'
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-1" cache-features="on" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-1-casing</StyleName>
	<StyleName>street-1</StyleName>
	<StyleName>street-1-centerline</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_roads
		 where highway = 'motorway' and (toll is null or toll not in ('yes', 'true', '1'))
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="street-1-toll" cache-features="on" status="on" srs="&osm2pgsql_projection;">
	<StyleName>street-1-toll-casing</StyleName>
	<StyleName>street-1-toll</StyleName>
	<StyleName>street-1-toll-centerline</StyleName>
	<Datasource>
	<Parameter name="table">
		(select way,highway
		 from &prefix;_roads
		 where highway = 'motorway' and toll in ('yes', 'true', '1')
		) as roads
	</Parameter>
	&datasource-settings;
	</Datasource>
</Layer>
<Layer name="tram" status="on" srs="&osm2pgsql_projection;">
        <StyleName>tram</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way
                 from &prefix;_line
                 where railway = 'tram') as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
<Layer name="monorail" status="on" srs="&osm2pgsql_projection;">
        <StyleName>monorail</StyleName>
        <Datasource>
        <Parameter name="table">
                (select way
                 from &prefix;_line
                 where railway = 'monorail') as roads
        </Parameter>
        &datasource-settings;
        </Datasource>
</Layer>
