// Boost.Geometry
// Unit Test

// Contributed and/or modified by Adeel Ahmad.

// Use, modification and distribution is subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_GEOMETRY_TEST_DIRECT_CASES_ANTIPODAL_HPP
#define BOOST_GEOMETRY_TEST_DIRECT_CASES_ANTIPODAL_HPP

#include "direct_cases.hpp"

struct expected_results_antipodal
{
    coordinates p1;
    double distance;
    double azimuth12;
    expected_result karney;
};

expected_results_antipodal expected_antipodal[] =
{
    {
        { 0, 31.394417440639 }, 19980218.4055399, 34.266322930672,
        { 179.615601631202912322, -31.275540610835465807, 145.782701113414306756, 49490.8807994496209, -0.99598340069666346785 }
    },{
        { 0, 29.788792273749 }, 19887224.5407334, 74.302205994192,
        { 178.569451327813675741, -29.558013672069422725, 106.156240654579267308, 97043.7545600593058, -0.99585265538534928353 }
    },{
        { 0, 46.471843094141 }, 19944337.8863917, 63.693680310665,
        { 179.083144618009561276, -46.284166405924629853, 116.699978859005570535, 53139.140576552365, -0.99628290151178156009 }
    },{
        { 0, 63.016506345929 }, 20000925.7533636, 153.393656073038,
        { 179.862869954071637855, -63.02943882703369735, 26.619056019474552953, 12713.9284725111772, -0.99806730524837738994 }
    },{
        { 0, 19.796231412719 }, 19956338.1330537, 28.272934411318,
        { 179.546498474461283862, -19.470586923091672503, 151.789094611690988249, 87191.1749625132931, -0.99680355285706290225 }
    },{
        { 0, 6.373459459035 }, 19946581.6983394, 56.859050230583,
        { 179.240009269347556917, -6.204887833274217382, 123.169200847008284851, 53958.8698005263939, -0.99880439595523196061 }
    },{
        { 0, 66.380766469414 }, 19986277.7696849, 38.646950203356,
        { 179.632633596894388233, -66.27177494016956425, 141.550919825824399405, 22198.215635049214, -0.9984201835509521894 }
    },{
        { 0, 16.483421185231 }, 19962737.9842573, 163.431254767325,
        { 179.731567273052604726, -16.818424446748042212, 16.598399455529231288, 95318.4104529881431, -0.99723427960580335316 }
    },{
        { 0, 4.215702155486 }, 19932517.393764, 65.543168480886,
        { 179.093771177769992874, -4.051917290690976764, 114.482669479963380006, 55205.4553703842317, -0.99916694551569362748 }
    },{
        { 0, 40.71372085907 }, 19951133.3595356, 143.672151631634,
        { 179.404612926861498984, -41.047052242159400671, 36.54002600969304553, 70931.1530155553621, -0.99601226064330683485 }
    },{
        { 0, 15.465481491654 }, 19877383.8879911, 36.289185640976,
        { 179.020726605204181801, -14.622355549425900341, 143.875673907461159912, 156419.0806764376957, -0.99717590257108590368 }
    },{
        { 0, 17.586197343531 }, 19982280.4639115, 157.929615091529,
        { 179.722490735835379144, -17.731394230364437075, 22.089021105298661023, 69727.5357849255557, -0.99710409371925123878 }
    },{
        { 0, 5.7442768247 }, 19902873.7431814, 116.146983678305,
        { 178.85894724576868462, -6.039853564481335581, 63.91482549951374061, 87149.6188944111673, -0.99883071172416715289 }
    },{
        { 0, 32.002904282111 }, 19967670.3104795, 163.052160078191,
        { 179.744925422107715439, -32.297934520693132807, 17.004175883388454943, 78311.3164829640582, -0.99597193334487110761 }
    },{
        { 0, 55.902716926362 }, 19970525.337607, 98.927641063414,
        { 179.300685189522463007, -55.934320218634018206, 81.374264168520557301, 23554.0093185709067, -0.99721760041260698593 }
    },{
        { 0, 22.69939784398 }, 19959286.1903172, 74.253870776761,
        { 179.294173474584020749, -22.654875407651067149, 105.811588890213155275, 22369.7179951557679, -0.99650952667426662135 }
    },{
        { 0, 41.312328471121 }, 19962690.5721867, 11.277616109847,
        { 179.817186837717804928, -40.954523601529804886, 168.784288786443902199, 77252.6121237260201, -0.99601334953687414853 }
    },{
        { 0, 27.927415327453 }, 19961296.8828333, 23.166421459647,
        { 179.636508875679110143, -27.607314264234172721, 156.905194492817275222, 83096.5801709291101, -0.99610609795569049485 }
    },{
        { 0, 41.567228741451 }, 19944253.4454809, 176.66609526064,
        { 179.931812964300204608, -42.103039532074194347, 3.361859685835349219, 96859.08180779197, -0.99604624873858405021 }
    },{
        { 0, 37.384208978567 }, 19928705.5911445, 39.072534864532,
        { 179.225180174670992261, -36.916085670712060029, 141.212743814390850106, 92667.7834060578402, -0.99583616315460821156 }
    },{
        { 0, 59.011868682852 }, 19970442.3788306, 44.970301291063,
        { 179.424923485514312807, -58.82705468054708336, 135.333817989802309531, 38071.1136293083857, -0.99754686309848117354 }
    },{
        { 0, 35.515406087737 }, 19948918.9139751, 28.528972431952,
        { 179.50369572149476218, -35.119747127350258822, 151.622257906284404073, 84564.0387217601751, -0.9958683164291525225 }
    },{
        { 0, 58.170252463184 }, 19961407.0813807, 128.021116291844,
        { 179.254737571455023977, -58.372261836268550805, 52.399129705193347143, 43715.3070711393309, -0.99746161015888423762 }
    },{
        { 0, 34.012183807959 }, 19970955.843065, 168.944519134772,
        { 179.83713352180447672, -34.29640782899529639, 11.093048811826875835, 76493.5814538538151, -0.99594085068133375582 }
    },{
        { 0, 45.510762948553 }, 19940248.3450143, 99.886784003837,
        { 178.981682578823726535, -45.582753595227824235, 80.542330522982505877, 48555.1946627894972, -0.99622530350349169925 }
    },{
        { 0, 4.19841765451 }, 19970496.5132933, 89.561550657928,
        { 179.398024428225540172, -4.198416896099783242, 90.438456568689151881, 14.8790480103109, -0.99921964515553229891 }
    },{
        { 0, 40.890119148103 }, 19926563.5817492, 165.437641169967,
        { 179.6557148951668192, -41.553556264538302258, 14.713597527941311478, 111805.7305227545923, -0.99598758014963484353 }
    },{
        { 0, 28.096672787686 }, 19883901.8482359, 115.174366374632,
        { 178.606868012231657724, -28.472055035513955205, 65.257367020445564176, 107880.4353518862363, -0.99595011741363181912 }
    },{
        { 0, 6.50572154271 }, 19917276.4101551, 79.069492719523,
        { 178.926013840891647541, -6.411745140559297675, 100.985091481519557845, 57073.3242952680707, -0.99872883639262399758 }
    },{
        { 0, .468835109567 }, 19849380.7342734, 80.234636214474,
        { 178.325942223692180692, -.281751687044281805, 99.77243368342786593, 123845.4568822078908, -0.99961835625163353303 }
    },{
        { 0, 1.682746325049 }, 19890026.0274781, 10.076182752451,
        { 179.717131561406935483, -.677647430701204515, 169.927471515299313238, 177917.2104306563981, -0.9995304688134802884 }
    },{
        { 0, 10.711305126218 }, 19962987.2134077, 7.528253696796,
        { 179.874050163405229937, -10.349315378531556046, 172.480576051850009046, 104175.1095378254456, -0.99808700197799249398 }
    },{
        { 0, 53.374321544652 }, 19980478.1457438, 23.324715976877,
        { 179.729445806011012057, -53.196257519024042184, 156.777734080146664812, 41907.8869272231053, -0.99695322723379165009 }
    },{
        { 0, 39.680221664519 }, 19956191.7841809, 7.075406493429,
        { 179.87506206720154785, -39.256187213040660911, 172.967624741991546131, 86943.8110669895148, -0.99594142266924268192 }
    },{
        { 0, 1.377666714083 }, 19925401.4931301, 95.29199069739,
        { 178.994542525209058878, -1.415358715570225495, 84.7178724483824156, 45800.9140624827059, -0.99967079575227224542 }
    },{
        { 0, 48.751426624188 }, 19988599.1160495, 40.252328570137,
        { 179.661697715070846977, -48.688146707479475147, 139.808452951157199824, 26322.3790862461568, -0.99654000795747821329 }
    },{
        { 0, 59.443039048494 }, 19969935.9534732, 93.052184108221,
        { 179.247605418616998285, -59.454371825393424121, 87.331416513795326158, 25342.4691896499534, -0.99760844716107632824 }
    },{
        { 0, 4.122408476235 }, 19938291.6332293, 167.73479753304,
        { 179.749430572914989772, -4.689124208743755363, 12.274635577599782826, 127855.6475863583497, -0.99919442400871316678 }
    },{
        { 0, 46.422470082432 }, 19931980.7029341, 86.67365350297,
        { 178.857408435141563774, -46.390934261324541952, 93.852683224054943377, 56114.680046867064, -0.99626178341627869006 }
    },{
        { 0, 32.614423729024 }, 19926887.3785175, 24.943814520557,
        { 179.460593512880455451, -32.01874745886238612, 155.229917137448282531, 112355.3319340873104, -0.99584842355298219818 }
    },{
        { 0, 3.242895277973 }, 19964490.4789049, 30.247458779683,
        { 179.556428318080663113, -3.001106476068264917, 149.760178923092147784, 80929.0418317066044, -0.99938705290848561802 }
    },{
        { 0, 6.29069210113 }, 19877160.8505733, 94.34299459284,
        { 178.556859259685624933, -6.354208910915346725, 85.750059038253282986, 94127.1566760840083, -0.99866089792332934927 }
    },{
        { 0, 18.232086569498 }, 19927978.7462175, 164.41905055334,
        { 179.658073278238477245, -18.87394850776853555, 15.640779355822506503, 129771.1882449660559, -0.99696204469368099321 }
    },{
        { 0, 12.049849333181 }, 19908004.4552909, 9.418096768309,
        { 179.761046682699610657, -11.201990279782499264, 170.610608272305604585, 157761.5040571466343, -0.99777424243303902696 }
    },{
        { 0, 40.289465276136 }, 19985674.936106, 143.092606818963,
        { 179.644208494155329095, -40.370034926441385999, 36.958610382613096419, 36200.8933724688593, -0.99602880093986934096 }
    },{
        { 0, 2.197784650379 }, 19910509.7517973, 1.542117609437,
        { 179.961199531084784854, -1.353440827124394777, 178.458582198505846426, 160403.6285079348996, -0.99948867836200405712 }
    },{
        { 0, 1.966575272177 }, 19875595.6267266, 170.112968791865,
        { 179.699817324905962184, -3.101125282483752618, 9.89572776349855838, 192355.7206665719908, -0.99943592820130777721 }
    },{
        { 0, 25.078832492684 }, 19887997.7953866, 77.264585323781,
        { 178.600804840925824646, -24.897833702325682511, 103.101167809583406892, 92442.9124509225839, -0.99614702274067257193 }
    },{
        { 0, 31.740361941314 }, 19972325.3556069, 143.930820896999,
        { 179.553485210731879874, -31.909206787477701871, 36.145242998351638503, 54883.4113710054145, -0.99597837783719567195 }
    },{
        { 0, .05479250563 }, 19858049.4780499, 41.349430623518,
        { 178.822647462220726609, .836079031223269324, 138.645259065012502544, 169078.442370111714, -0.9997266451533399767 }
    },{
        { 0, 36.685139871608 }, 19968965.6773632, 89.167975517493,
        { 179.366667224014334712, -36.6833040833258687, 90.921025521408327068, 13327.2156799476918, -0.99592417628692353482 }
    },{
        { 0, 3.451199399671 }, 19938203.3838544, 91.541212417048,
        { 179.107509334399258305, -3.459003521120242021, 88.476282464773035164, 32316.1747698810781, -0.9993151254968675179 }
    },{
        { 0, 27.692898794247 }, 19883493.6699045, 88.406440883665,
        { 178.512356615673144314, -27.666009301228316555, 92.036345087713397961, 94128.7880896190836, -0.99595722110800843918 }
    },{
        { 0, 17.363238291869 }, 19980749.7638027, 39.697196316589,
        { 179.567921315455829491, -17.288872648596950413, 140.321938237586060826, 46975.9359427664379, -0.9971281847750985694 }
    },{
        { 0, 37.006775102539 }, 19949309.9180043, 116.455543532607,
        { 179.191103068859169842, -37.156365616364686838, 63.771817992036617793, 45856.1961421018701, -0.99590619058035212419 }
    },{
        { 0, 45.572883540957 }, 19940027.8586414, 137.627256708444,
        { 179.224707765088686272, -45.94675931323086696, 42.723991162977357301, 74208.4359612889496, -0.99624902751220101305 }
    },{
        { 0, 43.63393981955 }, 19931045.2914508, 91.203625101465,
        { 178.878236417027994157, -43.642335115130514773, 89.268780774643462256, 55253.5406349861764, -0.99608620009401716011 }
    },{
        { 0, 38.4995307019 }, 19918391.2222193, 141.232864609445,
        { 179.143856004445269342, -39.042223438550921467, 39.117947060740562295, 102217.2563106863077, -0.99588724635854519729 }
    },{
        { 0, 27.55015339382 }, 19986004.7358853, 137.025135713548,
        { 179.596220103573824099, -27.587412128122249651, 42.992898351962011956, 33938.7346646670654, -0.99616434874063342075 }
    },{
        { 0, 1.54507498314 }, 19978593.3191777, 36.816106412092,
        { 179.567115633151308577, -1.448861185025252004, 143.185763012309022403, 56320.5800276739168, -0.99970846248568390191 }
    },{
        { 0, 45.217063644222 }, 19987042.0782465, 18.114645812265,
        { 179.807382581661125, -45.086424050571516283, 161.928120141429818658, 45544.2915061261936, -0.99626823185730628563 }
    },{
        { 0, 13.473522450751 }, 19987364.078382, 156.839609002403,
        { 179.726941062277208626, -13.570372758027936877, 23.170293747820406391, 65329.9068132034472, -0.99767717345868900392 }
    },{
        { 0, 6.287741997374 }, 19912159.8245954, 132.954797451112,
        { 179.071252372259552052, -6.743450924917895817, 47.100789519677419746, 104772.4027498097375, -0.99875728461227553101 }
    },{
        { 0, 7.639709001531 }, 19976374.3699535, 29.731916588299,
        { 179.616156296978583335, -7.48702643786017917, 150.279582966919438164, 69224.6591757209539, -0.99861517221927087462 }
    },{
        { 0, 5.893688050348 }, 19886907.2520668, 14.653438882877,
        { 179.586212000450856399, -4.888408917114795625, 165.371181401863458848, 177183.5330818593022, -0.99875831501903877818 }
    },{
        { 0, 61.997076235476 }, 19976288.2901729, 149.562797049254,
        { 179.605779116829636081, -62.19593758437129915, 30.65850204223272625, 36696.2853801462176, -0.99792483695855294101 }
    },{
        { 0, 50.507637741656 }, 19979542.5263293, 171.564028344478,
        { 179.893569206021038536, -50.721890799900161112, 8.4746613464253591, 50644.5234828162697, -0.99670226818003293534 }
    },{
        { 0, 7.484475238477 }, 19867425.2906303, 57.020570370985,
        { 178.638400003000590878, -6.926155588124333461, 123.087267812322270238, 132929.2775641349633, -0.99841820367274103365 }
    },{
        { 0, 56.851165323215 }, 19988235.9960515, 112.345749045605,
        { 179.587046628550073045, -56.875248360744638525, 67.744017057185404441, 9971.0934553515518, -0.99734849887992094164 }
    },{
        { 0, 10.692273150738 }, 19893210.3050033, 102.824601316946,
        { 178.709520715733071393, -10.851727623036704339, 77.308514969817191459, 83032.7122948051111, -0.99796077650539405379 }
    },{
        { 0, 46.694739303788 }, 19975447.9283188, 174.663684259477,
        { 179.926838145841924189, -46.948618153686522669, 5.361568174833475454, 59614.5876209460645, -0.9963829846069084395 }
    },{
        { 0, 15.804386137005 }, 19855850.8800526, 74.932089158884,
        { 178.367587635209819128, -15.522042847777054984, 105.357235560913450667, 123350.4326645237628, -0.99706137589256171871 }
    },{
        { 0, 4.371450175299 }, 19979071.1035552, 164.163592252794,
        { 179.780887420199549421, -4.566109732313098407, 15.840695025950408814, 84137.2115482558728, -0.99919490909391039946 }
    },{
        { 0, 30.894388279688 }, 19968681.8321577, 77.35154610481,
        { 179.375426183521944524, -30.871308884744172663, 102.709506078439532936, 14048.0277985734058, -0.99599179229723178164 }
    },{
        { 0, 9.541166838639 }, 19848553.7844137, 118.441353539081,
        { 178.432934555386452839, -10.09982228112793472, 61.736686215549403663, 144831.1911566651614, -0.99800476808793336936 }
    },{
        { 0, 8.489292700054 }, 19995477.1669578, 171.963952699866,
        { 179.906698338023119097, -8.559237750032113623, 8.037517851139094467, 72192.60793572974, -0.9984792781676200546 }
    },{
        { 0, 19.562401114224 }, 19893208.1788508, 126.362762598128,
        { 178.838724116996037606, -20.05038360490599475, 53.875560227496658204, 112181.7524188837615, -0.99671734436245396083 }
    },{
        { 0, 42.260350252749 }, 19942715.0054774, 170.703419847646,
        { 179.807860448877064601, -42.79985897702184353, 9.377654670896439828, 96336.3477142010769, -0.99607495753304098329 }
    },{
        { 0, 24.511403144656 }, 19924809.5184876, 102.913211410163,
        { 178.957598444862223515, -24.616808725039883945, 77.297538210434837096, 55403.453072179318, -0.99629589741710011808 }
    },{
        { 0, 20.844284170708 }, 19909084.6340808, 44.172784008084,
        { 179.069258863637226633, -20.321320573298341477, 136.01627115731728436, 111009.0987238994608, -0.99659406562612795621 }
    },{
        { 0, 2.426010809098 }, 19840940.6924189, 94.315194952561,
        { 178.236397468862000784, -2.513715200833756776, 85.734896842737189557, 130002.6104886615638, -0.99922656404178245015 }
    },{
        { 0, 6.600682554664 }, 19878412.28273, 168.167678684515,
        { 179.646475458013797028, -7.699164822656561787, 11.861035812918738552, 187426.3958525886692, -0.99861342289130949901 }
    },{
        { 0, 23.372339802326 }, 19899498.4582543, 161.197647943542,
        { 179.499422665106094027, -24.239465200482591299, 18.932355367478826536, 151863.2545535951091, -0.99635421423038206257 }
    },{
        { 0, 16.194668264095 }, 19874825.6683239, 148.942349959054,
        { 179.115193814080201851, -17.129419031459576897, 31.225656401221968078, 166033.3161394594622, -0.99709176416695455281 }
    },{
        { 0, 1.528726471528 }, 19897803.9939987, 69.212891442493,
        { 178.791047180477802091, -1.282203000582034597, 110.802928803578167132, 85252.8333849204133, -0.99957999688525089876 }
    },{
        { 0, 6.297249676078 }, 19864042.0495193, 56.274639904925,
        { 178.623258703845895437, -5.709470001196540278, 123.817184177744186806, 137475.1283083659258, -0.99861474729636867664 }
    },{
        { 0, 17.393540327984 }, 19962624.6302607, 107.855062015266,
        { 179.330156510680163326, -17.431100690958209424, 72.181322855288535245, 19320.5501845044839, -0.99711019484200580365 }
    },{
        { 0, 46.284685151236 }, 19990422.3478916, 14.758013867151,
        { 179.852534804091121255, -46.176234945675219984, 165.271681964991897184, 42614.1796365710104, -0.99634649632519134421 }
    },{
        { 0, 14.924320176299 }, 19891861.8615337, 31.446544793174,
        { 179.195663739713760883, -14.125476432252858442, 148.678916887199611191, 149419.6596309045804, -0.99729741460688270394 }
    },{
        { 0, 23.668824656069 }, 19938736.4442268, 148.091483667618,
        { 179.409875478773990359, -24.107855233601412399, 32.02919257641173958, 97771.7687385830819, -0.99640366072092678706 }
    },{
        { 0, 46.986276695896 }, 19968596.0414782, 174.796708941456,
        { 179.92040916864362177, -47.301644191214905832, 5.234240076649939638, 66113.7417494369769, -0.99639889458222818952 }
    },{
        { 0, 65.946144289524 }, 19993734.5109736, 25.375428509648,
        { 179.808282612725835525, -65.871840130833632868, 154.703163938350061652, 18355.2254271672769, -0.99838571720931879039 }
    },{
        { 0, 10.950298933293 }, 19975919.5586889, 28.779018914489,
        { 179.624609619829763098, -10.787771536605316781, 151.238005588662201946, 70291.1998404303581, -0.99806099887646559932 }
    },{
        { 0, 13.609869340778 }, 19913213.8514358, 129.616021271129,
        { 179.035623147420893383, -14.023624108675206222, 50.506400999466711623, 97596.7664002074776, -0.99755852834357494618 }
    },{
        { 0, 48.701427557433 }, 19972955.2699173, 102.875149183407,
        { 179.385565054218238481, -48.735316652259656533, 77.294384444682547869, 18461.7742226227697, -0.99652223116852467477 }
    },{
        { 0, 31.519172055785 }, 19952318.3772514, 26.247105619999,
        { 179.555251675378549409, -31.140142027808697534, 153.865822276646938125, 86354.7117605101002, -0.99593468381798511135 }
    },{
        { 0, 31.863784754278 }, 19993324.8682601, 29.572313410211,
        { 179.722489476483407524, -31.826935359797657785, 150.440607907359037187, 41427.6181613499234, -0.9959831508497293262 }
    },{
        { 0, 76.434608546092 }, 19997750.023578, 167.428385412814,
        { 179.918287057674124459, -76.48787937532808951, 12.621032110142724567, 9619.5267710862108, -0.99943031992965880583 }
    },{
        { 0, 73.114273316483 }, 19992866.6147806, 78.154765899661,
        { 179.576736605988553624, -73.098788070892914568, 102.085693546950923465, 8580.6475692800946, -0.99913315932148838439 }
    },{
        { 0, 1.125639056292 }, 19852573.5442848, 67.184842289382,
        { 178.426819580880619395, -.694775021853292564, 112.831314850896246589, 132932.8743502563937, -0.99950982898040086067 }
    }
};

size_t const expected_size_antipodal = sizeof(expected_antipodal) / sizeof(expected_results_antipodal);

#endif // BOOST_GEOMETRY_TEST_DIRECT_CASES_ANTIPODAL_HPP
