void v2_STAR_PID_200GeV()
{
	const int NcentBins = 2;
	
  const Double_t grpterr [] = {0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.};
	
	//Pions 0-30%
	const Double_t grptPions1 [] = {0.297907,0.492866,0.690653,0.889496,1.08897,1.28901,1.48959,1.69066,1.89195,2.09306,2.29368,2.49374,2.69322,2.89209,3.15569};
	const Double_t grv2Pions1 [] = {0.0184304,0.0370962,0.0558068,0.0724099,0.0865959,0.0984994,0.1085,0.116453,0.122441,0.126904,0.130085,0.131591,0.131527,0.130885,0.128647};
	const Double_t grv2Pions1err [] = {1.13064E-05,1.27324E-05,1.68521E-05,2.29022E-05,3.17044E-05,4.28841E-05,5.7667E-05,7.76028E-05,0.000104727,0.000139905,0.00018398,0.000238228,0.000308113,0.000397363,0.00039864};
	//Pions 30-80%
	const Double_t grptPions2 [] = {0.296344,0.491774,0.689944,0.889098,1.08884,1.28908,1.48982,1.69095,1.8922,2.09321,2.29376,2.49379,2.69331,2.89231,3.15966};
	const Double_t grv2Pions2 [] = {0.0339467,0.0666081,0.0988174,0.127372,0.151497,0.170666,0.185524,0.196579,0.204307,0.210018,0.212378,0.212588,0.213263,0.211498,0.20945};
	const Double_t grv2Pions2err [] = {2.34281E-05,2.73416E-05,3.67402E-05,5.06365E-05,7.06427E-05,9.54699E-05,0.000128206,0.000170832,0.000227194,0.000299379,0.000386853,0.000493787,0.000622862,0.000786597,0.000742643};
	//Kaons 0-30%
	const Double_t grptKaons1 [] = {0.322902,0.508007,0.699117,0.894832,1.09259,1.29153,1.49133,1.69175,1.89253,2.09327,2.29369,2.49363,2.69302,2.89172,3.15093};
	const Double_t grv2Kaons1 [] = {0.00668514,0.0207879,0.0400546,0.0583317,0.0743247,0.0875373,0.0988798,0.108084,0.115262,0.121302,0.124558,0.125252,0.125375,0.126818,0.119545};
	const Double_t grv2Kaons1err [] = {7.73545E-05,4.57851E-05,4.34186E-05,4.8399E-05,5.83094E-05,7.38576E-05,9.18389E-05,0.00011895,0.000163899,0.00023843,0.0003495,0.000529585,0.000786294,0.00116448,0.00130002};
	//Kaons 30-80%
	const Double_t grptKaons2 [] = {0.322707,0.507536,0.69877,0.89456,1.0924,1.29144,1.49136,1.69192,1.89278,2.09354,2.29393,2.49381,2.69317,2.89187,3.15204};
	const Double_t grv2Kaons2 [] = {0.0216895,0.0458347,0.0759608,0.105294,0.130621,0.150809,0.166534,0.177147,0.183584,0.188542,0.191467,0.192649,0.193537,0.191997,0.187463};
	const Double_t grv2Kaons2err [] = {0.000152653,9.44342E-05,9.33423E-05,0.000107158,0.000131721,0.000167155,0.000209531,0.000276147,0.000386458,0.000545863,0.000767848,0.00109034,0.0015411,0.00213139,0.00216558};
	//Protons 0-30%
	const Double_t grptProtons1 [] = {0.347014,0.514731,0.704801,0.900119,1.09741,1.29566,1.49444,1.69357,1.89295,2.09254,2.29229,2.49222,2.69227,2.89235,3.16807};
	const Double_t grv2Protons1 [] = {-0.00115798,0.00319871,0.015011,0.0319976,0.0513305,0.0709942,0.0890141,0.105406,0.119711,0.132208,0.142753,0.151478,0.158461,0.164262,0.169294};
	const Double_t grv2Protons1err [] = {0.000217061,8.10806E-05,6.45332E-05,6.06983E-05,6.28644E-05,6.92384E-05,7.99488E-05,9.59446E-05,0.000118884,0.000149679,0.000199958,0.000327206,0.000420322,0.000541591,0.000551845};
	//Protons 30-80%
	const Double_t grptProtons2 [] = {0.344916,0.512616,0.70288,0.898301,1.09568,1.29403,1.49299,1.6924,1.89222,2.09246,2.29306,2.49383,2.69446,2.89456,3.16976};
	const Double_t grv2Protons2 [] = {0.0126846,0.0251793,0.049046,0.0794221,0.113227,0.14635,0.176288,0.20249,0.225007,0.242049,0.257216,0.263631,0.272476,0.27405,0.283428};
	const Double_t grv2Protons2err [] = {0.000388321,0.000148014,0.000124362,0.000124212,0.000136028,0.000156258,0.000186006,0.000227426,0.000284421,0.000359272,0.000476424,0.00076694,0.000975813,0.00124196,0.00123991};
	
	const int nbins = 15;

  TGraphErrors *grPub[NcentBins][3];

  grPub[0][0] = new TGraphErrors(nbins, &grptPions1[0], &grv2Pions1[0], &grpterr[0], &grv2Pions1err[0]);
	grPub[0][0]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[0][0]->GetYaxis()->SetTitle("v_{2}");
	grPub[0][0]->GetYaxis()->SetRangeUser(0.,0.159);
	grPub[0][0]->SetMarkerStyle(21);
	grPub[0][0]->SetMarkerSize(1.5);
	grPub[1][0] = new TGraphErrors(nbins, &grptPions2[0], &grv2Pions2[0], &grpterr[0], &grv2Pions2err[0]);
	grPub[1][0]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[1][0]->GetYaxis()->SetTitle("v_{2}");
	grPub[1][0]->GetYaxis()->SetRangeUser(0.011,0.23);
	grPub[1][0]->SetMarkerStyle(21);
	grPub[1][0]->SetMarkerSize(1.5);
	grPub[0][1] = new TGraphErrors(nbins, &grptKaons1[0], &grv2Kaons1[0], &grpterr[0], &grv2Kaons1err[0]);
	grPub[0][1]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[0][1]->GetYaxis()->SetTitle("v_{2}");
	grPub[0][1]->GetYaxis()->SetRangeUser(0.,0.145);
	grPub[0][1]->SetMarkerStyle(21);
	grPub[0][1]->SetMarkerSize(1.5);
	grPub[1][1] = new TGraphErrors(nbins, &grptKaons2[0], &grv2Kaons2[0], &grpterr[0], &grv2Kaons2err[0]);
	grPub[1][1]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[1][1]->GetYaxis()->SetTitle("v_{2}");
	grPub[1][1]->GetYaxis()->SetRangeUser(0.,0.242);
	grPub[1][1]->SetMarkerStyle(21);
	grPub[1][1]->SetMarkerSize(1.5);
	grPub[0][2] = new TGraphErrors(nbins, &grptProtons1[0], &grv2Protons1[0], &grpterr[0], &grv2Protons1err[0]);
	grPub[0][2]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[0][2]->GetYaxis()->SetTitle("v_{2}");
	grPub[0][2]->GetYaxis()->SetRangeUser(-0.021,0.199);
	grPub[0][2]->SetMarkerStyle(21);
	grPub[0][2]->SetMarkerSize(1.5);
	grPub[1][2] = new TGraphErrors(nbins, &grptProtons2[0], &grv2Protons2[0], &grpterr[0], &grv2Protons2err[0]);
	grPub[1][2]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[1][2]->GetYaxis()->SetTitle("v_{2}");
	grPub[1][2]->GetYaxis()->SetRangeUser(0.,0.345);
	grPub[1][2]->SetMarkerStyle(21);
	grPub[1][2]->SetMarkerSize(1.5);
}