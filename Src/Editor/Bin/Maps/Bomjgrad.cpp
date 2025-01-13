version=54;
class EditorData
{
	moveGridStep=1;
	angleGridStep=0.08726646;
	scaleGridStep=100;
	autoGroupingDist=10;
	toggles=46;
	class ItemIDProvider
	{
		nextID=2935;
	};
	class LayerIndexProvider
	{
		nextID=198;
	};
	class Camera
	{
		pos[]={4268.6787,76.048759,3956.6404};
		dir[]={-0.36286116,-0.91170079,-0.19339189};
		up[]={-0.80473793,0.41040203,-0.42889178};
		aside[]={-0.4703792,-6.1257742e-07,0.88257647};
	};
};
binarizationWanted=0;
sourceName="ReSDK_A3";
addons[]=
{
	"A3_Characters_F",
	"A3_Props_F_Orange_Humanitarian_Supplies",
	"cba_xeh",
	"rel_vox",
	"A3_Rocks_F_Sharp",
	"CUP_A2_EditorObjects",
	"A3_Structures_F_Households_Slum",
	"model_05",
	"exodus",
	"A3_Structures_F_Exp_Commercial_Market",
	"drova",
	"A3_Structures_F_Exp_Infrastructure_Pavements",
	"A3_Structures_F_Enoch_Military_Training",
	"A3_Structures_F_Enoch_Industrial_Agriculture",
	"NV_props",
	"RELICTA_models2",
	"Model_14_10",
	"egl_veg_gliese",
	"metro_life_lines",
	"ml_exonew",
	"A3_Props_F_Enoch_Infrastructure_Traffic",
	"A3_Structures_F_Exp_Civilian_Accessories"
};
class AddonsMetaData
{
	class List
	{
		items=21;
		class Item0
		{
			className="A3_Characters_F";
			name="Arma 3 Alpha - Characters and Clothing";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item1
		{
			className="A3_Props_F_Orange";
			name="Arma 3 Orange - Decorative and Mission Objects";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item2
		{
			className="rel_vox";
			name="rel_vox";
		};
		class Item3
		{
			className="A3_Rocks_F";
			name="Arma 3 - Rocks and Stones";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item4
		{
			className="CUP_A2_EditorObjects";
			name="CUP_A2_EditorObjects";
			author="MemphisBelle";
		};
		class Item5
		{
			className="A3_Structures_F_Households";
			name="Arma 3 - Houses";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item6
		{
			className="model_05";
			name="model_05";
		};
		class Item7
		{
			className="exodus";
			name="exodus";
		};
		class Item8
		{
			className="A3_Structures_F_Exp_Commercial";
			name="Arma 3 Apex - Commercial Buildings";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item9
		{
			className="drova";
			name="drova";
		};
		class Item10
		{
			className="A3_Structures_F_Exp_Infrastructure";
			name="Arma 3 Apex - Infrastructure Objects";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item11
		{
			className="A3_Structures_F_Enoch_Military";
			name="Arma 3 Contact Platform - Military Buildings and Structures";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item12
		{
			className="A3_Structures_F_Enoch_Industrial";
			name="Arma 3 Contact Platform - Industrial Structures";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item13
		{
			className="NV_props";
			name="NV_props";
		};
		class Item14
		{
			className="RELICTA_models2";
			name="RELICTA_models2";
			author="Sranych";
		};
		class Item15
		{
			className="Model_14_10";
			name="Model_14_10";
		};
		class Item16
		{
			className="egl_veg_gliese";
			name="Vegetation Gliese";
			author="EAGLE";
		};
		class Item17
		{
			className="metro_life_lines";
			name="metro_life_lines";
		};
		class Item18
		{
			className="ml_exonew";
			name="ml_exonew";
		};
		class Item19
		{
			className="A3_Props_F_Enoch";
			name="Arma 3 Contact Platform - Decorative and Mission Objects";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item20
		{
			className="A3_Structures_F_Exp_Civilian";
			name="Arma 3 Apex - Civilian Buildings";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
	};
};
dlcs[]=
{
	"Orange",
	"Expansion",
	"Enoch"
};
randomSeed=11605075;
class ScenarioData
{
	author="Septima";
	saving=0;
};
class CustomAttributes
{
	class Category0
	{
		name="Multiplayer";
		class Attribute0
		{
			property="RespawnTemplates";
			expression="true";
			class Value
			{
				class data
				{
					singleType="ARRAY";
					class value
					{
						items=1;
						class Item0
						{
							class data
							{
								singleType="STRING";
								value="None";
							};
						};
					};
				};
			};
		};
		nAttributes=1;
	};
	class Category1
	{
		name="Scenario";
		class Attribute0
		{
			property="EnableTargetDebug";
			expression="true";
			class Value
			{
				class data
				{
					singleType="SCALAR";
					value=1;
				};
			};
		};
		class Attribute1
		{
			property="EnableDebugConsole";
			expression="true";
			class Value
			{
				class data
				{
					singleType="SCALAR";
					value=2;
				};
			};
		};
		nAttributes=2;
	};
};
class Mission
{
	class Intel
	{
		timeOfChanges=1800.0002;
		startWeather=0;
		startWind=0;
		startWaves=0.1;
		forecastWeather=0;
		forecastWind=0;
		forecastWaves=0.1;
		forecastLightnings=0.1;
		rainForced=1;
		windForced=1;
		day=20;
		hour=13;
		minute=-20;
		startFogDecay=0.014;
		forecastFogDecay=0.014;
	};
	class Entities
	{
		items=428;
		class Item0
		{
			dataType="Group";
			side="West";
			class Entities
			{
				items=1;
				class Item0
				{
					dataType="Object";
					class PositionInfo
					{
						position[]={11.849326,5.092412,8141.3096};
						angles[]={0,1.5586488,0};
					};
					side="West";
					flags=7;
					class Attributes
					{
						isPlayer=1;
						class Inventory
						{
						};
					};
					id=1;
					type="B_Survivor_F";
					atlOffset=0.0909729;
					class CustomAttributes
					{
						class Attribute0
						{
							property="speaker";
							expression="_this setspeaker _value;";
							class Value
							{
								class data
								{
									singleType="STRING";
									value="Male04ENG";
								};
							};
						};
						class Attribute1
						{
							property="pitch";
							expression="_this setpitch _value;";
							class Value
							{
								class data
								{
									singleType="SCALAR";
									value=0.97000003;
								};
							};
						};
						class Attribute2
						{
							property="face";
							expression="_this setface _value;";
							class Value
							{
								class data
								{
									singleType="STRING";
									value="WhiteHead_06";
								};
							};
						};
						nAttributes=3;
					};
				};
			};
			class Attributes
			{
			};
			id=0;
			atlOffset=0.0909729;
		};
		class Item1
		{
			dataType="Group";
			side="West";
			class Entities
			{
				items=1;
				class Item0
				{
					dataType="Object";
					class PositionInfo
					{
						position[]={17.72065,5.0014391,8141.2852};
						angles[]={0,4.7971487,0};
					};
					side="West";
					flags=7;
					class Attributes
					{
						name="vasya";
						class Inventory
						{
						};
					};
					id=19;
					type="B_Survivor_F";
					class CustomAttributes
					{
						class Attribute0
						{
							property="speaker";
							expression="_this setspeaker _value;";
							class Value
							{
								class data
								{
									singleType="STRING";
									value="Male10ENG";
								};
							};
						};
						class Attribute1
						{
							property="pitch";
							expression="_this setpitch _value;";
							class Value
							{
								class data
								{
									singleType="SCALAR";
									value=0.95999998;
								};
							};
						};
						nAttributes=2;
					};
				};
			};
			class Attributes
			{
			};
			id=18;
		};
		class Item2
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={14,-994.9588,8100};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""missionName"",""Bomjgrad""],[""version"",4]]}";
			};
			id=2205;
			type="Land_Orange_01_F";
			atlOffset=-1000;
		};
		class Item3
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3721.5,25.554743,4031};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2415;
			type="block_strongstone";
			atlOffset=26;
		};
		class Item4
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,25.554743,4031};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2416;
			type="block_strongstone";
			atlOffset=26;
		};
		class Item5
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,25.554743,4021};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2417;
			type="block_strongstone";
			atlOffset=26;
		};
		class Item6
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3722,25.554743,4021};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2418;
			type="block_strongstone";
			atlOffset=26;
		};
		class Item7
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3722,25.554743,4041};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2419;
			type="block_strongstone";
			atlOffset=26;
		};
		class Item8
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,25.554743,4041};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2420;
			type="block_strongstone";
			atlOffset=26;
		};
		class Item9
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3701.875,25.554743,4040.875};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2421;
			type="block_strongstone";
			atlOffset=26;
		};
		class Item10
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3701.875,25.554743,4030.875};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2422;
			type="block_strongstone";
			atlOffset=26;
		};
		class Item11
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3701.875,25.554743,4020.875};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2423;
			type="block_strongstone";
			atlOffset=0.60021973;
		};
		class Item12
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3696,22.809879,4010};
				angles[]={0,4.7123909,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2428;
			type="Land_SharpRock_monolith";
			atlOffset=11;
		};
		class Item13
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3727,22.809879,4011};
				angles[]={0,4.7123909,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2429;
			type="Land_SharpRock_monolith";
			atlOffset=11;
		};
		class Item14
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3733,22.809879,4017};
				angles[]={0,3.1415992,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2430;
			type="Land_SharpRock_monolith";
			atlOffset=11;
		};
		class Item15
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3732.0005,22.809879,4039.0002};
				angles[]={0,3.1415992,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2431;
			type="Land_SharpRock_monolith";
			atlOffset=11;
		};
		class Item16
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3726,22.809879,4052};
				angles[]={0,1.5707986,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2432;
			type="Land_SharpRock_monolith";
			atlOffset=11;
		};
		class Item17
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3704.0007,22.809879,4050.9995};
				angles[]={0,1.5707986,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2433;
			type="Land_SharpRock_monolith";
			atlOffset=11;
		};
		class Item18
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3691,22.809879,4045.5};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2434;
			type="Land_SharpRock_monolith";
			atlOffset=11;
		};
		class Item19
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3692.5,22.809879,4017.5};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2435;
			type="Land_SharpRock_monolith";
			atlOffset=11;
		};
		class Item20
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,25.554743,4011};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2436;
			type="block_strongstone";
			atlOffset=26;
		};
		class Item21
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,28.054743,4001};
				angles[]={0.43633226,0,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2437;
			type="block_strongstone";
			atlOffset=28.5;
		};
		class Item22
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,29.554743,3993};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2438;
			type="block_strongstone";
			atlOffset=30;
		};
		class Item23
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,29.554743,3983};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2439;
			type="block_strongstone";
			atlOffset=30;
		};
		class Item24
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3736.9995,37.809879,4020.9998};
				angles[]={0,3.4033992,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2440;
			type="Land_SharpRock_monolith";
			atlOffset=26;
		};
		class Item25
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3736,37.809879,4043};
				angles[]={0,2.8797998,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2441;
			type="Land_SharpRock_monolith";
			atlOffset=26;
		};
		class Item26
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3729,37.809879,4006};
				angles[]={0,4.7123909,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2442;
			type="Land_SharpRock_monolith";
			atlOffset=0.27599335;
		};
		class Item27
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3695,37.809879,4005};
				angles[]={0,4.7123909,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2444;
			type="Land_SharpRock_monolith";
			atlOffset=26;
		};
		class Item28
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3689,37.809879,4015.5};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2445;
			type="Land_SharpRock_monolith";
			atlOffset=26;
		};
		class Item29
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3688,37.809879,4045.5};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2446;
			type="Land_SharpRock_monolith";
			atlOffset=26;
		};
		class Item30
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3693,37.809879,4054};
				angles[]={0,1.3089993,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2451;
			type="Land_SharpRock_monolith";
			atlOffset=4.6326923;
		};
		class Item31
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3725.5,37.809879,4055.5};
				angles[]={0,1.7453315,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2452;
			type="Land_SharpRock_monolith";
			atlOffset=26;
		};
		class Item32
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3692,25.554743,4031};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2453;
			type="block_strongstone";
			atlOffset=2.6633587;
		};
		class Item33
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3684,24.054743,4031};
				angles[]={0,0,0.34906581};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2454;
			type="block_strongstone";
			atlOffset=4.5351219;
		};
		class Item34
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3674.5,21.554743,4031};
				angles[]={0,0,0.17453295};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2455;
			type="block_strongstone";
			atlOffset=22;
		};
		class Item35
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3677.5,20.309879,4039};
				angles[]={0,1.6580703,0.26179937};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2456;
			type="Land_SharpRock_monolith";
			atlOffset=8.500001;
		};
		class Item36
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3676,19.309879,4022.5};
				angles[]={6.2831836,4.7996702,0.26180816};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2457;
			type="Land_SharpRock_monolith";
			atlOffset=7.500001;
		};
		class Item37
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3672,34.809879,4042.5};
				angles[]={6.2598362,1.5677419,0.26077989};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2458;
			type="Land_SharpRock_monolith";
			atlOffset=23;
		};
		class Item38
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3672.5,33.809879,4018.5};
				angles[]={6.2366867,4.6191115,0.25773922};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2459;
			type="Land_SharpRock_monolith";
			atlOffset=22;
		};
		class Item39
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702.5,26.809879,3989.5};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2460;
			type="Land_SharpRock_monolith";
			atlOffset=15;
		};
		class Item40
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3721.5,27.809879,3990.5};
				angles[]={0,3.1415992,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2461;
			type="Land_SharpRock_monolith";
			atlOffset=16;
		};
		class Item41
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3725,42.309879,3989};
				angles[]={0,3.1415992,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2462;
			type="Land_SharpRock_monolith";
			atlOffset=30.5;
		};
		class Item42
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3698.5,40.809879,3989.5};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2463;
			type="Land_SharpRock_monolith";
			atlOffset=29;
		};
		class Item43
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3663.5,20.554743,4030.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2464;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item44
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3653,20.554743,4030.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2465;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item45
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3663.5,20.554743,4041};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2466;
			type="block_strongstone";
			atlOffset=0.0073280334;
		};
		class Item46
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3653,20.554743,4041};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2467;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item47
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3663.5,20.554743,4020.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2468;
			type="block_strongstone";
			atlOffset=0.30167961;
		};
		class Item48
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3653,20.554743,4020.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2469;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item49
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3643,20.554743,4041};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2470;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item50
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3643,20.554743,4030.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2471;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item51
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3643,20.554743,4020.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2472;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item52
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3650,17.809879,4049.5};
				angles[]={0,1.5707986,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2474;
			type="Land_SharpRock_monolith";
			atlOffset=6.000001;
		};
		class Item53
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3652,31.309879,4051};
				angles[]={0,1.832598,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2475;
			type="Land_SharpRock_monolith";
			atlOffset=19.5;
		};
		class Item54
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3650.5,17.809879,4012};
				angles[]={0,4.7123909,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2476;
			type="Land_SharpRock_monolith";
			atlOffset=6.000001;
		};
		class Item55
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3651.5,31.309879,4007};
				angles[]={0,4.450592,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2478;
			type="Land_SharpRock_monolith";
			atlOffset=19.5;
		};
		class Item56
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3633,20.554743,4030};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2479;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item57
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3623,20.554743,4030};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2480;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item58
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3634,17.309879,4045.5};
				angles[]={0,2.6449561e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2481;
			type="Land_SharpRock_monolith";
			atlOffset=5.500001;
		};
		class Item59
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3634.5,18.309879,4014.5};
				angles[]={0,2.6449561e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2482;
			type="Land_SharpRock_monolith";
			atlOffset=6.500001;
		};
		class Item60
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3631.5,31.809879,4047};
				angles[]={0,0.26180199,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2483;
			type="Land_SharpRock_monolith";
			atlOffset=20;
		};
		class Item61
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3632.5,32.809879,4011};
				angles[]={0,5.8468561,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2485;
			type="Land_SharpRock_monolith";
			atlOffset=21;
		};
		class Item62
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3623.5,18.309879,4019.5};
				angles[]={0,4.7996597,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2486;
			type="Land_SharpRock_monolith";
			atlOffset=6.500001;
		};
		class Item63
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3625,18.309879,4038.5};
				angles[]={0,1.5707986,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2487;
			type="Land_SharpRock_monolith";
			atlOffset=6.500001;
		};
		class Item64
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3619.5,32.809879,4043};
				angles[]={0,1.5707986,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2488;
			type="Land_SharpRock_monolith";
			atlOffset=21;
		};
		class Item65
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3621.5,31.809879,4014.5};
				angles[]={0,4.7996597,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2490;
			type="Land_SharpRock_monolith";
			atlOffset=20;
		};
		class Item66
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3722.5,30.809879,3967};
				angles[]={0,2.9670663,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2491;
			type="Land_SharpRock_monolith";
			atlOffset=19;
		};
		class Item67
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702.5,30.309879,3970.5};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2492;
			type="Land_SharpRock_monolith";
			atlOffset=18.5;
		};
		class Item68
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,33.554741,3975};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2494;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item69
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,33.269386,3977.5};
				angles[]={6.2775297,1.5707618,0.0069216168};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LongWoodenLadder""]]}";
			};
			id=2495;
			type="14_pier_14_nav_boathouse_pierl";
			atlOffset=2.6102295;
		};
		class Item70
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,31.269384,3986};
				angles[]={6.2775297,1.5707618,0.0069216168};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LongWoodenLadder""]]}";
			};
			id=2497;
			type="14_pier_14_nav_boathouse_pierl";
			atlOffset=0.39475632;
		};
		class Item71
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712.5,33.554741,3965};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2499;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item72
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3728.5,45.809879,3970.5};
				angles[]={0,2.705267,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2501;
			type="Land_SharpRock_monolith";
			atlOffset=34;
		};
		class Item73
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3696.5,44.809879,3971};
				angles[]={0,0.43634,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2503;
			type="Land_SharpRock_monolith";
			atlOffset=33;
		};
		class Item74
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712.5,33.554741,3955};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2504;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item75
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712.5,33.554741,3944.5};
				angles[]={0,4.6251245,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2505;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item76
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702.5,33.554741,3944.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2506;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item77
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702.5,33.554741,3952.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2507;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item78
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3722.5,33.554741,3944.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2510;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item79
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3722.5,33.554741,3953.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2511;
			type="block_strongstone";
			atlOffset=2.3350563;
		};
		class Item80
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702.5,33.554741,3934.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2512;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item81
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702.5,33.554741,3924.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2513;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item82
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702.5,33.554741,3914};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2514;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item83
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712.5,33.554741,3934.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2515;
			type="block_strongstone";
			atlOffset=0.56308365;
		};
		class Item84
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3722.5,33.554741,3934.5};
				angles[]={0,4.5378585,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2516;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item85
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3732,33.554741,3934.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2517;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item86
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3732,33.554741,3953.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2518;
			type="block_strongstone";
			atlOffset=4.1024208;
		};
		class Item87
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3732,33.554741,3944.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2519;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item88
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3693.5,30.809879,3947};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2520;
			type="Land_SharpRock_monolith";
			atlOffset=19;
		};
		class Item89
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3693,30.809879,3923};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2521;
			type="Land_SharpRock_monolith";
			atlOffset=19;
		};
		class Item90
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3693.5,44.809879,3953.5};
				angles[]={0,0.17454061,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2522;
			type="Land_SharpRock_monolith";
			atlOffset=33;
		};
		class Item91
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3691.5,44.809879,3929};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2523;
			type="Land_SharpRock_monolith";
			atlOffset=33;
		};
		class Item92
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3740.5,30.809879,3938.5};
				angles[]={0,3.1416068,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2524;
			type="Land_SharpRock_monolith";
			atlOffset=19;
		};
		class Item93
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3738,30.809879,3958};
				angles[]={0,2.6180081,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2525;
			type="Land_SharpRock_monolith";
			atlOffset=19;
		};
		class Item94
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3744,45.809879,3938.5};
				angles[]={0,3.1416068,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2528;
			type="Land_SharpRock_monolith";
			atlOffset=34;
		};
		class Item95
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3741.5,45.809879,3958};
				angles[]={0,2.6180081,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2529;
			type="Land_SharpRock_monolith";
			atlOffset=34;
		};
		class Item96
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3743.0002,30.809879,3926.5};
				angles[]={0,4.7123981,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2530;
			type="Land_SharpRock_monolith";
			atlOffset=19;
		};
		class Item97
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3720.5,30.809879,3924};
				angles[]={0,4.7123981,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2531;
			type="Land_SharpRock_monolith";
			atlOffset=19;
		};
		class Item98
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3736.5,45.809879,3923};
				angles[]={0,4.1015348,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2534;
			type="Land_SharpRock_monolith";
			atlOffset=34;
		};
		class Item99
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3719,45.809879,3919.5};
				angles[]={0,4.7123981,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2535;
			type="Land_SharpRock_monolith";
			atlOffset=34;
		};
		class Item100
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,30.809879,3917.5};
				angles[]={0,3.228873,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2537;
			type="Land_SharpRock_monolith";
			atlOffset=19;
		};
		class Item101
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3710,26.054743,4056};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2538;
			type="block_strongstone";
			atlOffset=26.5;
		};
		class Item102
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3710,26.054743,4066};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2539;
			type="block_strongstone";
			atlOffset=26.5;
		};
		class Item103
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3710,17.554743,4076.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2540;
			type="block_strongstone";
			atlOffset=18;
		};
		class Item104
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702,33.554741,3904.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2544;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item105
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702,33.554741,3896};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2545;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item106
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702,33.554741,3887};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2546;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item107
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702,33.554741,3877.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2547;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item108
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3613,20.554743,4029.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2548;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item109
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3603,20.554743,4029.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2549;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item110
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3593,20.554743,4029.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2550;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item111
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3583,20.554743,4029.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2551;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item112
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3573,20.554743,4029.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2552;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item113
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3563,20.554743,4029.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2553;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item114
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3553.5,20.554743,4029.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2554;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item115
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3544,20.554743,4029.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2555;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item116
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3534,20.554743,4029.5};
				angles[]={0,1.7136335e-07,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2556;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item117
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3526.5,20.554743,4031};
				angles[]={0,0.34906584,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2557;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item118
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3518,20.554743,4035};
				angles[]={0,0.43633229,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2558;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item119
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3509.5,20.554743,4039};
				angles[]={0,0.43633226,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2559;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item120
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3501,20.554743,4043};
				angles[]={0,0.43633226,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2560;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item121
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3492.5,20.554743,4047};
				angles[]={0,0.52359873,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2561;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item122
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3486,20.554743,4051.5};
				angles[]={0,0.69813168,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2562;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item123
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3479.5,20.554743,4058};
				angles[]={0,0.78539813,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2564;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item124
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3473,20.554743,4064.5};
				angles[]={0,0.78539813,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2565;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item125
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3466.5,20.554743,4071};
				angles[]={0,0.78539813,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2566;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item126
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3459.5,20.554743,4078};
				angles[]={0,0.78539813,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2567;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item127
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3453,20.554743,4084.5};
				angles[]={0,0.69813168,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2568;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item128
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3446.5,20.554743,4088.5};
				angles[]={0,0.3490659,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2570;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item129
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3437,20.554743,4091};
				angles[]={0,0.26179945,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2571;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item130
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3427.5,20.554743,4093.5};
				angles[]={0,0.26179945,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2572;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item131
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3418.5,20.554743,4096};
				angles[]={0,0.26179945,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2573;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item132
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3410,20.554743,4097};
				angles[]={0,6.195919,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2574;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item133
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3402,20.554743,4095};
				angles[]={0,5.8468533,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2575;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item134
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3393.5,20.554743,4090.5};
				angles[]={0,5.7595868,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2576;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item135
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3385,20.554743,4085.5};
				angles[]={0,5.7595868,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2577;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item136
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3376.5,20.554743,4080.5};
				angles[]={0,5.7595868,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2578;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item137
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3487.5,20.554743,4039};
				angles[]={0,5.2359886,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2579;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item138
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3482.5002,20.554743,4030.3396};
				angles[]={0,5.2359886,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2580;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item139
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3477.5002,20.554743,4021.6797};
				angles[]={0,5.2359886,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2581;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item140
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3472.5002,20.554743,4013.019};
				angles[]={0,5.2359886,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2582;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item141
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3467.7498,20.554743,4004.792};
				angles[]={0,5.2359886,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2583;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item142
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3464,20.554743,3996.5};
				angles[]={0,5.0614562,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2584;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item143
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3450,20.554743,4097.5};
				angles[]={0,1.919862,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2586;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item144
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3453.4211,20.554743,4106.8975};
				angles[]={0,1.919862,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2587;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item145
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3456.8403,20.554743,4116.2939};
				angles[]={0,1.919862,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2588;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item146
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3460.261,20.554743,4125.6904};
				angles[]={0,1.919862,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2589;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item147
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3463.5098,20.554743,4134.6191};
				angles[]={0,1.919862,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2590;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item148
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3466.7585,20.554743,4143.5449};
				angles[]={0,1.919862,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2591;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item149
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3470.1792,20.554743,4152.9414};
				angles[]={0,1.919862,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2592;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item150
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3393,20.554743,4101.5};
				angles[]={0,1.0471976,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2593;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item151
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3387.9998,20.554743,4110.1606};
				angles[]={0,1.0471976,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2594;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item152
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3383.0002,20.554743,4118.8208};
				angles[]={0,1.0471976,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2595;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item153
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3378.0002,20.554743,4127.481};
				angles[]={0,1.0471976,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2596;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item154
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3373.2505,20.554743,4135.7085};
				angles[]={0,1.0471976,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2597;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item155
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3368.4998,20.554743,4143.9355};
				angles[]={0,1.0471976,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2598;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item156
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3363.4998,20.554743,4152.5952};
				angles[]={0,1.0471976,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2599;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item157
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3463,20.554743,3988};
				angles[]={0,3.0543327,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2600;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item158
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3464.5,20.554743,3978.5};
				angles[]={0,4.4505973,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2601;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item159
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3467.0879,20.554743,3968.8403};
				angles[]={0,4.4505973,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2602;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item160
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3469.6765,20.554743,3959.1814};
				angles[]={0,4.4505973,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2603;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item161
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3472.1345,20.554743,3950.0046};
				angles[]={0,4.4505973,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2604;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item162
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3474.5935,20.554743,3940.8284};
				angles[]={0,4.4505973,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2605;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item163
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3477.1816,20.554743,3931.1699};
				angles[]={0,4.4505973,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2606;
			type="block_strongstone";
			atlOffset=21;
		};
		class Item164
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3701.9995,33.554741,3870.5007};
				angles[]={0,4.7123914,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2607;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item165
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702,33.554741,3860.5};
				angles[]={0,4.7123914,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2608;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item166
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3701.9998,33.554741,3850.5007};
				angles[]={0,4.7123914,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2609;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item167
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702,33.554741,3840.5007};
				angles[]={0,4.7123914,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2610;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item168
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702,33.554741,3830.5005};
				angles[]={0,4.7123914,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2611;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item169
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702.0005,33.554741,3821};
				angles[]={0,4.7123914,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2612;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item170
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702.0005,33.554741,3811.5002};
				angles[]={0,4.7123914,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2613;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item171
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3701.9995,33.554741,3801.5002};
				angles[]={0,4.7123914,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2614;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item172
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3700.5,33.554741,3794.0005};
				angles[]={0,5.0614567,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2615;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item173
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3696.5,33.554741,3785.5007};
				angles[]={0,5.1487236,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2616;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item174
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3692.5005,33.554741,3777.0002};
				angles[]={0,5.1487236,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2617;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item175
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3688.4998,33.554741,3768.5002};
				angles[]={0,5.1487236,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2618;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item176
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3684.4995,33.554741,3760.0007};
				angles[]={0,5.2359905,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2619;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item177
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3680,33.554741,3753.5002};
				angles[]={0,5.410522,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2620;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item178
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3673.5,33.554741,3746.9993};
				angles[]={0,5.4977884,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2621;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item179
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3666.9993,33.554741,3740.4998};
				angles[]={0,5.4977884,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2622;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item180
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3660.5002,33.554741,3733.9998};
				angles[]={0,5.4977884,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2623;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item181
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3653.4995,33.554741,3727.0005};
				angles[]={0,5.4977884,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2624;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item182
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3647,33.554741,3720.5002};
				angles[]={0,5.410522,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2625;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item183
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3643,33.554741,3714};
				angles[]={0,5.0614567,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2626;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item184
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3640.5,33.554741,3704.5002};
				angles[]={0,4.9741907,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2627;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item185
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3637.9998,33.554741,3695.0002};
				angles[]={0,4.9741907,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2628;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item186
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3635.5002,33.554741,3686.0002};
				angles[]={0,4.9741907,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2629;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item187
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3634.4998,33.554741,3677.5002};
				angles[]={0,4.6251249,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2630;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item188
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3636.5002,33.554741,3669.5002};
				angles[]={0,4.276062,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2631;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item189
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3640.9998,33.554741,3661.0005};
				angles[]={0,4.1887951,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2632;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item190
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3645.9995,33.554741,3652.5005};
				angles[]={0,4.1887951,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2633;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item191
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3651,33.554741,3644.0002};
				angles[]={0,4.1887951,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2634;
			type="block_strongstone";
			atlOffset=34;
		};
		class Item192
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3710,17.554743,4087};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2635;
			type="block_strongstone";
			atlOffset=0.036371231;
		};
		class Item193
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3720,17.554743,4087};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2636;
			type="block_strongstone";
			atlOffset=0.0366745;
		};
		class Item194
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3720,17.554743,4076.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2637;
			type="block_strongstone";
			atlOffset=18;
		};
		class Item195
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3699.5,17.554743,4076.5};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2638;
			type="block_strongstone";
			atlOffset=18;
		};
		class Item196
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3699.5,17.554743,4087};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2639;
			type="block_strongstone";
			atlOffset=18;
		};
		class Item197
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3720,17.554743,4097};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2640;
			type="block_strongstone";
			atlOffset=18;
		};
		class Item198
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3710,17.554743,4097};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2641;
			type="block_strongstone";
			atlOffset=18;
		};
		class Item199
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3699.5,17.554743,4097};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2643;
			type="block_strongstone";
			atlOffset=18;
		};
		class Item200
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3721.5,29.309879,4068};
				angles[]={0,3.5779331,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2644;
			type="Land_SharpRock_monolith";
			atlOffset=17.5;
		};
		class Item201
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3729.5,29.64043,4083};
				angles[]={0,3.141602,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2645;
			type="Land_SharpRock_monolith";
			atlOffset=17.830551;
		};
		class Item202
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3716.5,29.64043,4100};
				angles[]={0,1.7453389,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2646;
			type="Land_SharpRock_monolith";
			atlOffset=17.830551;
		};
		class Item203
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3697,29.742508,4091.5};
				angles[]={0,0.69813693,-0};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2647;
			type="Land_SharpRock_monolith";
		};
		class Item204
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3697.6362,28.797756,4070.5};
				angles[]={0,6.0213914,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2648;
			type="Land_SharpRock_monolith";
			atlOffset=16.987877;
		};
		class Item205
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3602,18.809879,4018.5};
				angles[]={0,4.7996597,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2649;
			type="Land_SharpRock_monolith";
			atlOffset=7.000001;
		};
		class Item206
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3603.5,18.809879,4037.5};
				angles[]={0,1.5707986,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2650;
			type="Land_SharpRock_monolith";
			atlOffset=7.000001;
		};
		class Item207
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3579.5,19.809879,4018.5};
				angles[]={0,4.7996597,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2651;
			type="Land_SharpRock_monolith";
			atlOffset=8.000001;
		};
		class Item208
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3581,19.809879,4037.5};
				angles[]={0,1.5707986,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2652;
			type="Land_SharpRock_monolith";
			atlOffset=8.000001;
		};
		class Item209
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3705.125,32.200214,4019.625};
				angles[]={0,2.8797998,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse""]]}";
			};
			id=2654;
			type="Land_Slum_House03_F";
			atlOffset=0.0018939972;
		};
		class Item210
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3724.875,32.517242,4025.625};
				angles[]={0,1.2217305,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse1""]]}";
			};
			id=2655;
			type="hata_4";
			atlOffset=1.3997841;
		};
		class Item211
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3723,32.186466,4039};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse2""]]}";
			};
			id=2656;
			type="Land_Slum_House01_F";
			atlOffset=26.10656;
		};
		class Item212
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702.5,32.94862,4042.5};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse3""]]}";
			};
			id=2657;
			type="land_budkapsinaebana";
		};
		class Item213
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3719.5,31.328945,4046.5};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SteelCanopySmall""]]}";
			};
			id=2658;
			type="Land_cargo_addon01_V2_F";
		};
		class Item214
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3722.375,32.238808,4019.125};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SteelCanopySmall1""]]}";
			};
			id=2659;
			type="Land_WoodenShelter_01_F";
			atlOffset=0.022550583;
		};
		class Item215
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,52.809879,3983};
				angles[]={0,1.5708039,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2660;
			type="Land_SharpRock_monolith";
			atlOffset=8.7922668;
		};
		class Item216
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3689.5,44.309879,4029.5};
				angles[]={0,7.8082085e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2661;
			type="Land_SharpRock_monolith";
			atlOffset=6.4117985;
		};
		class Item217
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3628,39.809879,4029.5};
				angles[]={0,0.087274238,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2662;
			type="Land_SharpRock_monolith";
			atlOffset=6.8638496;
		};
		class Item218
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3709.5,47.309879,4055};
				angles[]={0,1.5708039,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2663;
			type="Land_SharpRock_monolith";
			atlOffset=7.8283768;
		};
		class Item219
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,46.309879,4005.5};
				angles[]={0,1.6580703,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2664;
			type="Land_SharpRock_monolith";
			atlOffset=7.4241066;
		};
		class Item220
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712,31.307833,4032};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""CampfireBig""]]}";
			};
			id=2665;
			type="Land_pepelishe";
			atlOffset=26.000013;
		};
		class Item221
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3709.625,31.125,4030.875};
				angles[]={0,1.134464,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SleepingMatras""]]}";
			};
			id=2670;
			type="matras_2";
			atlOffset=0.014953613;
		};
		class Item222
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3714,31.125,4034};
				angles[]={0,0.61086518,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SleepingMatras""]]}";
			};
			id=2672;
			type="matras_2";
			atlOffset=0.014928818;
		};
		class Item223
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3714.75,31.125,4029.125};
				angles[]={0,3.7524626,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SleepingMatras""]]}";
			};
			id=2673;
			type="matras_2";
			atlOffset=0.0060501099;
		};
		class Item224
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3710.5,30.936325,4034.125};
				angles[]={0.0089009115,3.9269712,6.2822924};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallStoneRoad""]]}";
			};
			id=2674;
			type="Land_GardenPavement_02_F";
			atlOffset=26;
		};
		class Item225
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3711.75,30.936325,4028.25};
				angles[]={6.2795086,1.8325671,0.0081550265};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallStoneRoad""]]}";
			};
			id=2675;
			type="Land_GardenPavement_02_F";
			atlOffset=26;
		};
		class Item226
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3701.5,32.200214,4022.5};
				angles[]={0,4.3633332,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse""]]}";
			};
			id=2676;
			type="Land_Slum_House03_F";
			atlOffset=0.027170181;
		};
		class Item227
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3724.5,32.325214,4030.5};
				angles[]={0,2.8797998,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse""]]}";
			};
			id=2677;
			type="Land_Slum_House03_F";
			atlOffset=0.12785912;
		};
		class Item228
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3695,30.980118,4031};
				angles[]={0.0050380281,4.7996225,6.2757945};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallStoneRoad""]]}";
			};
			id=2678;
			type="Land_GardenPavement_02_F";
			atlOffset=3.0459976;
		};
		class Item229
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3700.75,31.002838,4031.375};
				angles[]={0.0076898215,4.3632913,6.278615};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallStoneRoad""]]}";
			};
			id=2679;
			type="Land_GardenPavement_02_F";
			atlOffset=26.066513;
		};
		class Item230
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3705.875,30.977804,4031.125};
				angles[]={0.0043747015,4.8868904,6.2753839};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallStoneRoad""]]}";
			};
			id=2680;
			type="Land_GardenPavement_02_F";
			atlOffset=26.041479;
		};
		class Item231
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712.625,30.959923,4023.875};
				angles[]={0.0078034252,3.3161283,0.0043738419};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallStoneRoad""]]}";
			};
			id=2681;
			type="Land_GardenPavement_02_F";
			atlOffset=26.023598;
		};
		class Item232
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712.125,30.972416,4018.5};
				angles[]={0.0052238684,2.8797982,0.007261903};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallStoneRoad""]]}";
			};
			id=2682;
			type="Land_GardenPavement_02_F";
			atlOffset=26.036091;
		};
		class Item233
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3711.875,31.006334,4013.125};
				angles[]={0.0086695421,3.5779195,0.0022051602};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallStoneRoad""]]}";
			};
			id=2683;
			type="Land_GardenPavement_02_F";
			atlOffset=26.070009;
		};
		class Item234
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3706,22.28512,4079.25};
				angles[]={0.38412845,0,6.2702761};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MotherBunchOfShit""]]}";
			};
			id=2684;
			type="Land_ShellCrater_02_small_F";
			atlOffset=0.20980072;
		};
		class Item235
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3704.875,23.381586,4087.125};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BunchOfShit""]]}";
			};
			id=2685;
			type="Land_ManurePile_01_F";
			atlOffset=0.049255371;
		};
		class Item236
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3718.9863,22.3165,4083.1162};
				angles[]={6.2821498,0,0.0069996584};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MotherBunchOfShit""]]}";
			};
			id=2686;
			type="Land_ShellCrater_02_small_F";
			atlOffset=0.22349548;
		};
		class Item237
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3711.625,23.06423,4088.625};
				angles[]={6.2783232,5.6723132,0.0051400135};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DirtCraterLong""]]}";
			};
			id=2687;
			type="CraterLong_02_F";
			atlOffset=18;
		};
		class Item238
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712.875,22.790272,4079.25};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallDirtBrown""]]}";
			};
			id=2688;
			type="gryazyuka4";
			atlOffset=18;
		};
		class Item239
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3711.875,22.66012,4083.375};
				angles[]={0.062503994,0,0.078339338};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MotherBunchOfShit""]]}";
			};
			id=2689;
			type="Land_ShellCrater_02_small_F";
			atlOffset=0.22731209;
		};
		class Item240
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3713.375,23.18923,4072.875};
				angles[]={6.276474,4.5378718,6.2809534};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DirtCraterLong""]]}";
			};
			id=2690;
			type="CraterLong_02_F";
			atlOffset=0.0035037994;
		};
		class Item241
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3717.25,23.381586,4077.5};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BunchOfShit""]]}";
			};
			id=2691;
			type="Land_ManurePile_01_F";
			atlOffset=18;
		};
		class Item242
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3704.5,22.790272,4081.625};
				angles[]={0,0.95993108,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallDirtGrey""]]}";
			};
			id=2692;
			type="gryazyuka5";
			atlOffset=0.027305603;
		};
		class Item243
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3717.2483,22.790272,4093.6089};
				angles[]={0,4.7123909,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallDirtBrown""]]}";
			};
			id=2696;
			type="gryazyuka4";
			atlOffset=18;
		};
		class Item244
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3707.1208,23.053383,4086.5854};
				angles[]={5.7781029,0,5.0540061};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Arm""]]}";
			};
			id=2697;
			type="S_Arm";
			atlOffset=0.5563221;
		};
		class Item245
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3717.9819,23.389267,4084.929};
				angles[]={6.2127643,0,0.0022640675};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Arm""]]}";
			};
			id=2698;
			type="S_Arm";
			atlOffset=0.080078125;
		};
		class Item246
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712.1855,23.142338,4083.2693};
				angles[]={6.2821498,0,0.0069996584};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Arm""]]}";
			};
			id=2699;
			type="S_Arm";
			atlOffset=0.0012722015;
		};
		class Item247
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3708.9785,23.511177,4081.2029};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Head1""]]}";
			};
			id=2700;
			type="golova_trup1";
			atlOffset=0.25986671;
		};
		class Item248
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3717.8677,24.258934,4079.3291};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Head3""]]}";
			};
			id=2701;
			type="golova_trup3";
			atlOffset=0.99902534;
		};
		class Item249
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3716.3557,23.177675,4086.4993};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Head2""]]}";
			};
			id=2702;
			type="golova_trup2";
			atlOffset=0.07983017;
		};
		class Item250
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3713.2815,23.766808,4078.8726};
				angles[]={6.2702899,0,6.2551327};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Leg""]]}";
			};
			id=2703;
			type="S_Leg";
			atlOffset=4.5776367e-05;
		};
		class Item251
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3708.5408,24.056053,4078.0732};
				angles[]={0.13313456,0,6.0274506};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Leg""]]}";
			};
			id=2704;
			type="S_Leg";
			atlOffset=0.17561913;
		};
		class Item252
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3709.5024,23.540615,4081.6587};
				angles[]={6.2326155,0,0.26975197};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""FleshDebris1""]]}";
			};
			id=2705;
			type="S_Meat_Debris";
			atlOffset=0.50122643;
		};
		class Item253
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712.7617,24.178864,4081.1997};
				angles[]={5.8529391,0,6.2201071};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""FleshDebris1""]]}";
			};
			id=2706;
			type="S_Meat_Debris";
			atlOffset=0.097518921;
		};
		class Item254
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3705.4041,23.673796,4081.4414};
				angles[]={6.2463951,0,6.210041};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""FleshDebris1""]]}";
			};
			id=2707;
			type="S_Meat_Debris";
			atlOffset=2.4795532e-05;
		};
		class Item255
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3713.1858,23.433483,4088.0498};
				angles[]={6.2815661,0,0.0065963282};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""FleshDebris1""]]}";
			};
			id=2708;
			type="S_Meat_Debris";
			atlOffset=0.29545975;
		};
		class Item256
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3717.262,23.289919,4085.4612};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Bone""]]}";
			};
			id=2709;
			type="kosti";
			atlOffset=0.1796875;
		};
		class Item257
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3710.0737,23.144571,4084.2959};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Bone""]]}";
			};
			id=2710;
			type="kosti";
			atlOffset=0.024284363;
		};
		class Item258
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3707.5,23.14595,4086};
				angles[]={0,5.7595868,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Bone""]]}";
			};
			id=2711;
			type="kosti";
			atlOffset=0.033330917;
		};
		class Item259
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3710.5691,23.44429,4078.3611};
				angles[]={0,0.95993108,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Bone""]]}";
			};
			id=2712;
			type="kosti";
			atlOffset=0.075063705;
		};
		class Item260
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3711.4517,23.69508,4075.0115};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Bone""]]}";
			};
			id=2713;
			type="kosti";
			atlOffset=0.56386948;
		};
		class Item261
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3715.6665,23.794176,4078.7117};
				angles[]={0,5.4977875,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Bone""]]}";
			};
			id=2714;
			type="kosti";
			atlOffset=0.018083572;
		};
		class Item262
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3716.4934,23.651741,4080.875};
				angles[]={0,1.134464,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Bone""]]}";
			};
			id=2715;
			type="kosti";
			atlOffset=0.023635864;
		};
		class Item263
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3715.4138,23.532681,4083.7349};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Bone""]]}";
			};
			id=2716;
			type="kosti";
			atlOffset=0.37130737;
		};
		class Item264
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3713.3052,23.981142,4084.9556};
				angles[]={0,5.5850539,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Bone""]]}";
			};
			id=2717;
			type="kosti";
			atlOffset=0.026170731;
		};
		class Item265
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3715.7412,23.292885,4089.1941};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Bone""]]}";
			};
			id=2718;
			type="kosti";
			atlOffset=0.16011047;
		};
		class Item266
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3719.7944,23.494539,4084.7837};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Bone""]]}";
			};
			id=2719;
			type="kosti";
			atlOffset=0.069231033;
		};
		class Item267
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3710.5293,23.787453,4087.5632};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Bone""]]}";
			};
			id=2720;
			type="kosti";
			atlOffset=0.0012321472;
		};
		class Item268
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3710.5083,23.476959,4085.1501};
				angles[]={0,5.4977875,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Bone""]]}";
			};
			id=2721;
			type="kosti";
			atlOffset=0.041337967;
		};
		class Item269
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3711.5542,24.056528,4080.8669};
				angles[]={5.9524145,0,0.18846832};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""ClothDebris1""]]}";
			};
			id=2722;
			type="S_Cloth_Debris";
			atlOffset=0.080558777;
		};
		class Item270
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3641.4077,27.704128,4016.1746};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallMushroom2""]]}";
			};
			id=2723;
			type="egl_bb1";
			atlOffset=0.60606384;
		};
		class Item271
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3654.0386,27.230345,4017.6848};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallMushroom""]]}";
			};
			id=2725;
			type="egl_br1";
			atlOffset=0.48304749;
		};
		class Item272
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3705.8369,40.943199,3923.0061};
				angles[]={0,3.2288654,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse3""]]}";
			};
			id=2726;
			type="land_budkapsinaebana";
			atlOffset=34.086742;
		};
		class Item273
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3718.4377,40.401001,3935.1404};
				angles[]={0,6.195919,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse1""]]}";
			};
			id=2727;
			type="hata_4";
			atlOffset=1.2799225;
		};
		class Item274
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3713.6321,40.208973,3936.0396};
				angles[]={0,1.5708032,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse""]]}";
			};
			id=2728;
			type="Land_Slum_House03_F";
			atlOffset=0.045070648;
		};
		class Item275
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3721.9131,40.234528,3934.5801};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse2""]]}";
			};
			id=2729;
			type="Land_Slum_House01_F";
			atlOffset=0.067302704;
		};
		class Item276
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3714.5322,43.103497,3933.7913};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse2""]]}";
			};
			id=2730;
			type="Land_Slum_House01_F";
			atlOffset=2.908329;
		};
		class Item277
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3711.658,40.189167,3934.3386};
				angles[]={0,4.7124004,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse""]]}";
			};
			id=2731;
			type="Land_Slum_House03_F";
			atlOffset=0.025871277;
		};
		class Item278
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3729.3442,40.165535,3953.6787};
				angles[]={0,1.5708032,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse""]]}";
			};
			id=2732;
			type="Land_Slum_House03_F";
			atlOffset=34.090321;
		};
		class Item279
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3725.749,40.296173,3949.8916};
				angles[]={0,3.0543327,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse""]]}";
			};
			id=2733;
			type="Land_Slum_House03_F";
			atlOffset=0.10032654;
		};
		class Item280
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3724.0134,40.183491,3951.9595};
				angles[]={0,6.1959314,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse""]]}";
			};
			id=2734;
			type="Land_Slum_House03_F";
			atlOffset=34.108276;
		};
		class Item281
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3730.7971,40.9548,3935.5225};
				angles[]={0,2.0071285,-0};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse3""]]}";
			};
			id=2735;
			type="land_budkapsinaebana";
		};
		class Item282
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3704.9041,40.236027,3956.1279};
			};
			side="Empty";
			flags=5;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SteelCanopySmall1""]]}";
			};
			id=2736;
			type="Land_WoodenShelter_01_F";
			atlOffset=0.026252747;
		};
		class Item283
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3706.6594,41.128742,3951.4568};
				angles[]={0,1.5708032,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse""]]}";
			};
			id=2738;
			type="Land_Slum_House03_F";
			atlOffset=0.84552002;
		};
		class Item284
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3704.6853,41.108936,3949.7559};
				angles[]={0,4.7124004,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse""]]}";
			};
			id=2739;
			type="Land_Slum_House03_F";
			atlOffset=0.80591583;
		};
		class Item285
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3711.7876,40.200916,3950.6431};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SteelCanopySmall1""]]}";
			};
			id=2742;
			type="Land_WoodenShelter_01_F";
			atlOffset=34.087109;
		};
		class Item286
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3720.0864,40.47662,3948.3135};
				angles[]={0,6.195919,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse1""]]}";
			};
			id=2743;
			type="hata_4";
			atlOffset=1.3348083;
		};
		class Item287
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3646.0386,27.45879,4040.1511};
				angles[]={6.2821498,0,0.0069996584};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallClothShelter""]]}";
			};
			id=2744;
			type="Land_ClothShelter_01_F";
			atlOffset=21.028763;
		};
		class Item288
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3652.0559,27.106314,4038.3701};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse""]]}";
			};
			id=2745;
			type="Land_Slum_House03_F";
			atlOffset=21.031101;
		};
		class Item289
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3642.2625,26.85914,4018.3477};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""WoodenToiletSmall""]]}";
			};
			id=2746;
			type="sartir_kabinka";
			atlOffset=3.1523647;
		};
		class Item290
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3655.9878,27.890621,4021.5037};
				angles[]={0,3.1415923,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallSheetMetalHouse3""]]}";
			};
			id=2747;
			type="land_budkapsinaebana";
			atlOffset=21.034164;
		};
		class Item291
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3647.7781,27.455639,4020.4871};
				angles[]={0.026193295,0,0.038493063};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallClothShelter""]]}";
			};
			id=2748;
			type="Land_ClothShelter_01_F";
			atlOffset=0.075788498;
		};
		class Item292
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3631.1897,27.619297,4025.3572};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""PlywoodThinWall""]]}";
			};
			id=2749;
			type="land_fanerka_vata";
			atlOffset=21.033073;
		};
		class Item293
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3631.261,27.614182,4032.0317};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""PlywoodThinWall""]]}";
			};
			id=2751;
			type="land_fanerka_vata";
			atlOffset=0.68102455;
		};
		class Item294
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3630.4226,26.664276,4030.4915};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""WoodenSmallFence3""]]}";
			};
			id=2753;
			type="tunnels_props_wood_tupik_small_02";
			atlOffset=5.9079056;
		};
		class Item295
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3629.2517,26.2372,4028.7026};
				angles[]={6.2764759,4.7996674,6.2821503};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""WoodenSmallFence4""]]}";
			};
			id=2754;
			type="Land_WoodenWindBreak_01_F";
			atlOffset=20.605589;
		};
		class Item296
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3631.0994,26.867231,4026.9517};
				angles[]={0,1.5707963,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""WoodenSmallFence1""]]}";
			};
			id=2755;
			type="derewobarik";
			atlOffset=2.4010468;
		};
		class Item297
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3635.666,26.073444,4029.3921};
				angles[]={0,4.6251245,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LongRottenBoards""]]}";
			};
			id=2756;
			type="Land_Plank_01_8m_F";
			atlOffset=21.02973;
		};
		class Item298
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3649.5886,26.07255,4030.2002};
				angles[]={0,1.5707963,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LongRottenBoards""]]}";
			};
			id=2757;
			type="Land_Plank_01_8m_F";
			atlOffset=21.028835;
		};
		class Item299
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3642.5193,26.072577,4030.2134};
				angles[]={0,1.5707963,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""ShortRottenBoards""]]}";
			};
			id=2758;
			type="Land_Plank_01_4m_F";
			atlOffset=21.028862;
		};
		class Item300
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3657.5608,26.071634,4030.2146};
				angles[]={0,1.4835298,-0};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""ShortRottenBoards""]]}";
			};
			id=2759;
			type="Land_Plank_01_4m_F";
			atlOffset=21.02792;
		};
		class Item301
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3690.8005,43.444134,3902.2456};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2760;
			type="Land_SharpRock_monolith";
			atlOffset=31.634254;
		};
		class Item302
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3713.1157,43.505028,3901.8555};
				angles[]={0,3.1416109,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2761;
			type="Land_SharpRock_monolith";
			atlOffset=31.695148;
		};
		class Item303
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3714.3687,43.567337,3879.9263};
				angles[]={0,3.1416109,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2763;
			type="Land_SharpRock_monolith";
			atlOffset=31.757458;
		};
		class Item304
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3692.0535,43.506443,3880.3164};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2764;
			type="Land_SharpRock_monolith";
			atlOffset=31.696564;
		};
		class Item305
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3713.29,43.524353,3858.5173};
				angles[]={0,3.1416109,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2765;
			type="Land_SharpRock_monolith";
			atlOffset=31.714474;
		};
		class Item306
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3690.9749,43.463459,3858.9075};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2766;
			type="Land_SharpRock_monolith";
			atlOffset=31.65358;
		};
		class Item307
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712.9719,43.590416,3842.1973};
				angles[]={0,3.1416109,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2767;
			type="Land_SharpRock_monolith";
			atlOffset=31.780537;
		};
		class Item308
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3690.6567,43.529522,3842.5874};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2768;
			type="Land_SharpRock_monolith";
			atlOffset=31.719643;
		};
		class Item309
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3712.8733,45.263283,3822.5439};
				angles[]={0,3.1416109,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2769;
			type="Land_SharpRock_monolith";
			atlOffset=33.453403;
		};
		class Item310
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3690.5581,44.951855,3822.9341};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2770;
			type="Land_SharpRock_monolith";
			atlOffset=33.141975;
		};
		class Item311
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3711.4087,44.913136,3803.6111};
				angles[]={0,3.1416109,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2771;
			type="Land_SharpRock_monolith";
			atlOffset=33.103256;
		};
		class Item312
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3691.2842,45.155823,3806.6743};
				angles[]={0,7.7113509e-06,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2772;
			type="Land_SharpRock_monolith";
			atlOffset=33.345943;
		};
		class Item313
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3705.3501,44.582035,3779.4622};
				angles[]={0,3.6652119,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2773;
			type="Land_SharpRock_monolith";
			atlOffset=32.772156;
		};
		class Item314
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3686.2197,44.225311,3790.9578};
				angles[]={0,0.52360642,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2774;
			type="Land_SharpRock_monolith";
			atlOffset=32.415432;
		};
		class Item315
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3695.2622,44.940166,3760.144};
				angles[]={0,3.7524788,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2775;
			type="Land_SharpRock_monolith";
			atlOffset=33.130287;
		};
		class Item316
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3678.2051,44.580791,3772.178};
				angles[]={0,0.61087298,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2776;
			type="Land_SharpRock_monolith";
			atlOffset=32.770912;
		};
		class Item317
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3682.408,45.056244,3742.0066};
				angles[]={0,3.927011,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2779;
			type="Land_SharpRock_monolith";
			atlOffset=33.246365;
		};
		class Item318
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3668.001,44.366127,3758.4585};
				angles[]={0,0.78540581,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2780;
			type="Land_SharpRock_monolith";
			atlOffset=32.556248;
		};
		class Item319
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3670.3701,44.168404,3727.6062};
				angles[]={0,3.839746,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2781;
			type="Land_SharpRock_monolith";
			atlOffset=32.358524;
		};
		class Item320
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3653.5266,45.928436,3742.249};
				angles[]={0,0.69813943,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2782;
			type="Land_SharpRock_monolith";
			atlOffset=34.118557;
		};
		class Item321
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3656.7395,44.146294,3715.252};
				angles[]={0,3.8397443,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2783;
			type="Land_SharpRock_monolith";
			atlOffset=32.336414;
		};
		class Item322
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3641.3123,45.951889,3729.2};
				angles[]={0,0.69813937,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2784;
			type="Land_SharpRock_monolith";
			atlOffset=34.14201;
		};
		class Item323
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3650.6118,45.983376,3703.6523};
				angles[]={0,3.4034114,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2785;
			type="Land_SharpRock_monolith";
			atlOffset=34.173496;
		};
		class Item324
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3630.571,45.922482,3709.218};
				angles[]={0,0.26180708,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2786;
			type="Land_SharpRock_monolith";
			atlOffset=34.112602;
		};
		class Item325
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3647.5693,46.108723,3685.5642};
				angles[]={0,3.3161457,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2787;
			type="Land_SharpRock_monolith";
			atlOffset=34.298843;
		};
		class Item326
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3625.6609,46.047829,3689.8232};
				angles[]={0,0.17454068,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2788;
			type="Land_SharpRock_monolith";
			atlOffset=34.237949;
		};
		class Item327
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3646.3848,45.968422,3676.3799};
				angles[]={0,2.7925451,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2789;
			type="Land_SharpRock_monolith";
			atlOffset=34.158543;
		};
		class Item328
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3626.2249,45.907528,3669.408};
				angles[]={0,5.9341273,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2790;
			type="Land_SharpRock_monolith";
			atlOffset=34.097649;
		};
		class Item329
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3653.354,46.140236,3662.7168};
				angles[]={0,2.6180122,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2791;
			type="Land_SharpRock_monolith";
			atlOffset=34.330357;
		};
		class Item330
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3633.8337,46.079342,3651.8972};
				angles[]={0,5.7595944,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2792;
			type="Land_SharpRock_monolith";
			atlOffset=34.269463;
		};
		class Item331
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3663.3425,45.992401,3645.6052};
				angles[]={0,2.6180122,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2793;
			type="Land_SharpRock_monolith";
			atlOffset=34.182522;
		};
		class Item332
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3643.8223,45.931507,3634.7856};
				angles[]={0,5.7595949,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2794;
			type="Land_SharpRock_monolith";
			atlOffset=34.121628;
		};
		class Item333
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3701.8572,56.40472,3921.9285};
				angles[]={0,4.7123981,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2795;
			type="Land_SharpRock_monolith";
			atlOffset=7.0742455;
		};
		class Item334
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702.4768,51.758392,3904.6853};
				angles[]={0,3.1416152,1.5707964};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2797;
			type="Land_SharpRock_monolith";
			atlOffset=5.8538284;
		};
		class Item335
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702.9312,50.917938,3884.3396};
				angles[]={0,3.1416152,1.5707964};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2800;
			type="Land_SharpRock_monolith";
			atlOffset=5.0026703;
		};
		class Item336
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3702.3079,51.294048,3866.4448};
				angles[]={0,3.1416152,1.5707964};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2801;
			type="Land_SharpRock_monolith";
			atlOffset=5.38657;
		};
		class Item337
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3701.0273,54.127445,3843.9158};
				angles[]={0,3.1416152,1.5707964};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2802;
			type="Land_SharpRock_monolith";
			atlOffset=8.1904678;
		};
		class Item338
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3703.0498,55.394211,3821.552};
				angles[]={0,3.1416152,1.5707964};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2803;
			type="Land_SharpRock_monolith";
			atlOffset=9.4793892;
		};
		class Item339
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3703.4438,56.953739,3801.2517};
				angles[]={0,3.1416152,1.5707964};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2804;
			type="Land_SharpRock_monolith";
			atlOffset=0.4348526;
		};
		class Item340
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3696.9255,56.783737,3779.363};
				angles[]={1.5707965,4.7124119,1.0471983};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2805;
			type="Land_SharpRock_monolith";
			atlOffset=2.5499001;
		};
		class Item341
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3686.0935,57.483784,3763.2065};
				angles[]={1.5707965,4.7124119,1.0471983};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2806;
			type="Land_SharpRock_monolith";
			atlOffset=11.546974;
		};
		class Item342
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3672.655,57.364414,3745.7861};
				angles[]={1.5707965,4.7124119,1.0471983};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2807;
			type="Land_SharpRock_monolith";
			atlOffset=11.463661;
		};
		class Item343
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3660.6003,56.555672,3732.1809};
				angles[]={1.5707965,4.7124119,1.0471983};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2808;
			type="Land_SharpRock_monolith";
			atlOffset=10.663887;
		};
		class Item344
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3646.8425,56.830254,3716.4382};
				angles[]={1.5707965,4.7124119,1.0471983};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2809;
			type="Land_SharpRock_monolith";
			atlOffset=5.2224464;
		};
		class Item345
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3638.7773,58.685688,3698.5};
				angles[]={1.5707965,4.7124119,1.0471983};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2810;
			type="Land_SharpRock_monolith";
			atlOffset=12.748909;
		};
		class Item346
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3636.9055,58.371307,3678.0925};
				angles[]={4.712389,1.570819,1.3962636};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2811;
			type="Land_SharpRock_monolith";
			atlOffset=12.459675;
		};
		class Item347
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3643.9478,58.829731,3658.7786};
				angles[]={4.712389,1.570819,0.95993161};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2812;
			type="Land_SharpRock_monolith";
			atlOffset=12.926163;
		};
		class Item348
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={3654.0063,60.202751,3639.8979};
				angles[]={4.712389,1.570819,0.95993161};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2813;
			type="Land_SharpRock_monolith";
			atlOffset=14.34457;
		};
		class Item349
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4257,10.364743,3968};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2814;
			type="block_strongstone";
			atlOffset=10.81;
		};
		class Item350
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4257,10.554743,3958};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2815;
			type="block_strongstone";
			atlOffset=11;
		};
		class Item351
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4257,10.554743,3978};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2816;
			type="block_strongstone";
			atlOffset=11;
		};
		class Item352
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4267,10.554743,3968};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2817;
			type="block_strongstone";
			atlOffset=11;
		};
		class Item353
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4267,10.554743,3958};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2818;
			type="block_strongstone";
			atlOffset=11;
		};
		class Item354
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4267,10.554743,3978};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2819;
			type="block_strongstone";
			atlOffset=11;
		};
		class Item355
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4247,10.554743,3968};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2820;
			type="block_strongstone";
			atlOffset=11;
		};
		class Item356
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4247,10.554743,3958};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2821;
			type="block_strongstone";
			atlOffset=11;
		};
		class Item357
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4247,10.554743,3978};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2822;
			type="block_strongstone";
			atlOffset=11;
		};
		class Item358
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4237,7.8098783,3954};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2826;
			type="Land_SharpRock_monolith";
			atlOffset=-4;
		};
		class Item359
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4236,7.8098783,3983};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2827;
			type="Land_SharpRock_monolith";
			atlOffset=-4;
		};
		class Item360
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4270,7.8098783,3947};
				angles[]={0,4.712389,0};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2829;
			type="Land_SharpRock_monolith";
			atlOffset=-4;
		};
		class Item361
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4241,7.8029513,3946.5};
				angles[]={0.0056619025,4.7123523,6.2762585};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2830;
			type="Land_SharpRock_monolith";
			atlOffset=-4.006927;
		};
		class Item362
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4244,7.8098783,3987};
				angles[]={0,1.5707963,-0};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2831;
			type="Land_SharpRock_monolith";
			atlOffset=-4;
		};
		class Item363
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4272,7.8098783,3989};
				angles[]={0,1.5707964,0};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2832;
			type="Land_SharpRock_monolith";
			atlOffset=-4;
		};
		class Item364
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4278,7.8098783,3976};
				angles[]={0,3.1415975,0};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2833;
			type="Land_SharpRock_monolith";
			atlOffset=-4;
		};
		class Item365
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4278,7.8098783,3956.4995};
				angles[]={0,3.1415975,0};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2834;
			type="Land_SharpRock_monolith";
			atlOffset=-4;
		};
		class Item366
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4257,10.554743,3948};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2835;
			type="block_strongstone";
			atlOffset=0.53437042;
		};
		class Item367
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4237,10.554743,3968};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2838;
			type="block_strongstone";
			atlOffset=5.1676197;
		};
		class Item368
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4257,10.554743,3988};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2840;
			type="block_strongstone";
			atlOffset=1.211401;
		};
		class Item369
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4249,11.809878,3929};
				angles[]={0.34906581,0,-0};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2845;
			type="Land_SharpRock_monolith";
		};
		class Item370
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4266,11.809878,3929};
				angles[]={0.34906578,3.1415992,0};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2846;
			type="Land_SharpRock_monolith";
		};
		class Item371
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4257,12.554743,3936.5};
				angles[]={0.34906581,0,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2854;
			type="block_strongstone";
			atlOffset=13;
		};
		class Item372
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4229,9.0547428,3968};
				angles[]={0,0,0.34906581};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2856;
			type="block_strongstone";
			atlOffset=9.5;
		};
		class Item373
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4219.5,6.5547428,3968};
				angles[]={0,0,0.17453295};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2857;
			type="block_strongstone";
			atlOffset=7;
		};
		class Item374
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4257.001,6.5547428,4005.9998};
				angles[]={0.17453301,1.570796,0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2858;
			type="block_strongstone";
			atlOffset=7;
		};
		class Item375
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4257,9.0547428,3996.5};
				angles[]={0.34906581,3.1416004,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2860;
			type="block_strongstone";
			atlOffset=9.5;
		};
		class Item376
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4257,15.46427,3927.2925};
				angles[]={0.2617994,0,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2861;
			type="block_strongstone";
			atlOffset=15.909527;
		};
		class Item377
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4224,5.8098783,3959};
				angles[]={0,4.7123904,0.26179934};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2862;
			type="Land_SharpRock_monolith";
			atlOffset=-6;
		};
		class Item378
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4224,5.8098783,3977};
				angles[]={0,1.5707961,0.26179937};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2863;
			type="Land_SharpRock_monolith";
			atlOffset=-6;
		};
		class Item379
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4266,5.8098783,4001};
				angles[]={0.26179937,3.1415923,0};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2867;
			type="Land_SharpRock_monolith";
			atlOffset=-6;
		};
		class Item380
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4248,5.8098783,4001};
				angles[]={0.2617994,0,0};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2868;
			type="Land_SharpRock_monolith";
			atlOffset=-6;
		};
		class Item381
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4273,17.809879,3991};
				angles[]={0,1.5707964,0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2869;
			type="Land_SharpRock_monolith";
			atlOffset=6.000001;
		};
		class Item382
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4241,17.809879,3991};
				angles[]={0,1.5707964,0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2871;
			type="Land_SharpRock_monolith";
			atlOffset=6.000001;
		};
		class Item383
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4281,17.809879,3977};
				angles[]={0,3.1415925,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2872;
			type="Land_SharpRock_monolith";
			atlOffset=6.000001;
		};
		class Item384
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4281,17.809879,3955};
				angles[]={0,3.1415925,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2873;
			type="Land_SharpRock_monolith";
			atlOffset=6.000001;
		};
		class Item385
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4273,17.809879,3944};
				angles[]={0,4.7123923,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2874;
			type="Land_SharpRock_monolith";
			atlOffset=6.000001;
		};
		class Item386
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4240,17.809879,3944};
				angles[]={0,4.7123923,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2875;
			type="Land_SharpRock_monolith";
			atlOffset=6.000001;
		};
		class Item387
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4123,8.5883312,3955};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\sharp\sharprock_apart.p3d""]]],[""class"",""IStruct""]]}";
			};
			id=2877;
			type="Land_SharpRock_apart";
			atlOffset=1.0000005;
		};
		class Item388
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4123,4.9915342,3944};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\sharp\sharpstones_erosion.p3d""]]],[""class"",""IStruct""]]}";
			};
			id=2882;
			type="Land_SharpStones_erosion";
		};
		class Item389
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4124,5.2423668,3936};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\sharp\sharpstone_02.p3d""]]],[""class"",""IStruct""]]}";
			};
			id=2884;
			type="Land_SharpStone_02";
		};
		class Item390
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4120,44.72002,4121};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\sharp\sharprock_wallv.p3d""]]],[""class"",""IStruct""]]}";
			};
			id=2886;
			type="Land_SharpRock_wallV";
			atlOffset=18;
		};
		class Item391
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4119,18.885805,4067};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\sharp\sharprock_wallh.p3d""]]],[""class"",""IStruct""]]}";
			};
			id=2888;
			type="Land_SharpRock_wallH";
			atlOffset=4;
		};
		class Item392
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4124,5.3318758,3931};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\sharp\sharpstone_01.p3d""]]],[""class"",""IStruct""]]}";
			};
			id=2890;
			type="Land_SharpStone_01";
		};
		class Item393
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4123,14.809878,4014};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\sharp\sharprock_monolith.p3d""]]],[""class"",""IStruct""]]}";
			};
			id=2892;
			type="Land_SharpRock_monolith";
			atlOffset=3;
		};
		class Item394
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4124,5.1571054,3927};
			};
			side="Empty";
			flags=4;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\sharp\sharpstone_03.p3d""]]],[""class"",""IStruct""]]}";
			};
			id=2894;
			type="Land_SharpStone_03";
		};
		class Item395
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4121,19.096447,3979};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\sharp\sharprock_spike.p3d""]]],[""class"",""IStruct""]]}";
			};
			id=2896;
			type="Land_SharpRock_spike";
			atlOffset=6.999999;
		};
		class Item396
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4252,16.36689,3940.5107};
				angles[]={0.087266445,1.8325956,6.519258e-09};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\sharp\sharpstone_02.p3d""]]],[""class"",""IStruct""]]}";
			};
			id=2897;
			type="Land_SharpStone_02";
			atlOffset=11.124523;
		};
		class Item397
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4233,17.809879,3952};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2898;
			type="Land_SharpRock_monolith";
			atlOffset=6.000001;
		};
		class Item398
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4232,17.809879,3984};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2899;
			type="Land_SharpRock_monolith";
			atlOffset=6.000001;
		};
		class Item399
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4246,20.809879,3929};
				angles[]={0.34906581,0,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2900;
			type="Land_SharpRock_monolith";
			atlOffset=9.000001;
		};
		class Item400
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4269,20.809879,3929};
				angles[]={0.34906578,3.1415992,0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2901;
			type="Land_SharpRock_monolith";
			atlOffset=9.000001;
		};
		class Item401
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4252.875,16.117842,3943.239};
				angles[]={0.087266445,1.2217305,6.519258e-09};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\sharp\sharpstone_02.p3d""]]],[""class"",""IStruct""]]}";
			};
			id=2902;
			type="Land_SharpStone_02";
			atlOffset=1.6875;
		};
		class Item402
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4245,15.809878,4002};
				angles[]={0.2617994,0,0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2903;
			type="Land_SharpRock_monolith";
			atlOffset=4;
		};
		class Item403
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4269,15.809878,4004};
				angles[]={0.26179937,3.1415923,0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2904;
			type="Land_SharpRock_monolith";
			atlOffset=4;
		};
		class Item404
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4221,14.809878,3956};
				angles[]={0,4.7123904,0.26179934};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2905;
			type="Land_SharpRock_monolith";
			atlOffset=3;
		};
		class Item405
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4220,14.809878,3980};
				angles[]={0,1.5707961,0.26179937};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2906;
			type="Land_SharpRock_monolith";
			atlOffset=3;
		};
		class Item406
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4257,16.0781,3968};
			};
			side="Empty";
			flags=1;
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""CampfireBig""]]}";
			};
			id=2907;
			type="Land_pepelishe";
			atlOffset=10.770267;
		};
		class Item407
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4258,16.36474,3899};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2909;
			type="block_strongstone";
			atlOffset=16.809998;
		};
		class Item408
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4248,16.554743,3899};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2912;
			type="block_strongstone";
			atlOffset=17;
		};
		class Item409
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4248,16.554743,3909};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2913;
			type="block_strongstone";
			atlOffset=17;
		};
		class Item410
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4258,16.554743,3909};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2914;
			type="block_strongstone";
			atlOffset=17;
		};
		class Item411
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4268,16.554743,3909};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2915;
			type="block_strongstone";
			atlOffset=17;
		};
		class Item412
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4268,16.554743,3899};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2916;
			type="block_strongstone";
			atlOffset=17;
		};
		class Item413
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4270,13.809877,3889};
				angles[]={0,4.712389,0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2918;
			type="Land_SharpRock_monolith";
			atlOffset=1.999999;
		};
		class Item414
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4278,13.809877,3902};
				angles[]={0,3.1415975,0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2920;
			type="Land_SharpRock_monolith";
			atlOffset=1.999999;
		};
		class Item415
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4273,13.809877,3920};
				angles[]={0,1.5707964,0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2921;
			type="Land_SharpRock_monolith";
			atlOffset=1.999999;
		};
		class Item416
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4245,13.809877,3918};
				angles[]={0,1.5707963,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2922;
			type="Land_SharpRock_monolith";
			atlOffset=1.999999;
		};
		class Item417
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4237,13.809877,3914};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2923;
			type="Land_SharpRock_monolith";
			atlOffset=1.999999;
		};
		class Item418
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4222,13.809877,3876};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2924;
			type="Land_SharpRock_monolith";
			atlOffset=1.999999;
		};
		class Item419
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4261,13.809878,3888};
				angles[]={0,4.712389,0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2925;
			type="Land_SharpRock_monolith";
			atlOffset=2;
		};
		class Item420
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4225,23.809879,3866};
				angles[]={0,4.7123923,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2926;
			type="Land_SharpRock_monolith";
			atlOffset=12;
		};
		class Item421
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4218,23.809879,3874};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2927;
			type="Land_SharpRock_monolith";
			atlOffset=12;
		};
		class Item422
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4233,23.809879,3915};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2928;
			type="Land_SharpRock_monolith";
			atlOffset=12;
		};
		class Item423
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4242,23.809879,3922};
				angles[]={0,1.5707964,0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2929;
			type="Land_SharpRock_monolith";
			atlOffset=12;
		};
		class Item424
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4274,23.809879,3922};
				angles[]={0,1.5707964,0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2930;
			type="Land_SharpRock_monolith";
			atlOffset=12;
		};
		class Item425
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4282,23.809879,3904};
				angles[]={0,3.1415925,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2931;
			type="Land_SharpRock_monolith";
			atlOffset=12;
		};
		class Item426
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4273,23.809879,3886};
				angles[]={0,4.7123923,-0};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigSmoothStone""]]}";
			};
			id=2933;
			type="Land_SharpRock_monolith";
			atlOffset=12;
		};
		class Item427
		{
			dataType="Object";
			class PositionInfo
			{
				position[]={4258,16.554743,3919};
			};
			side="Empty";
			class Attributes
			{
				init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockStone""]]}";
			};
			id=2934;
			type="block_strongstone";
			atlOffset=1.2114029;
		};
	};
};
