void v2_PHENIX_PID_200GeV()
{
	const int NcentBins = 5;
	
  const Double_t grpterr [] = {0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.};
	
  //Pions 0-10%
	const std::vector<Double_t> grptPions1 = {3.49e-01,4.48e-01,5.48e-01,6.47e-01,7.47e-01,8.47e-01,9.47e-01,1.09261 ,1.29257 ,1.49249 ,1.693   ,1.89267 ,2.09212 ,2.29153 ,2.49117 ,2.69076 ,2.8904  ,3.21006 ,3.71388};
	const std::vector<Double_t> grv2Pions1 = {1.72e-02 ,2.27e-02 ,2.72e-02 ,3.33e-02 ,3.65e-02 ,4.15e-02 ,4.66e-02 ,0.0515616,0.0590907,0.0627434,0.0676289,0.0720071,0.0732551,0.0757326,0.0751934,0.0735022,0.0752588,0.0694433,0.0575078};
	const std::vector<Double_t> grv2Pions1err = {3.98e-04   ,4.43e-04   ,5.07e-04   ,5.89e-04   ,6.85e-04   ,8.01e-04   ,9.42e-04   ,0.000144088,0.000194978,0.000262933,0.000352223,0.000468008,0.000636115,0.000887045,0.00125822 ,0.00181097 ,0.00264262 ,0.00328201 ,0.00530527 };
	//Pions 10-20%
	const std::vector<Double_t> grptPions2 = {3.48e-01,4.48e-01,5.48e-01,6.47e-01,7.48e-01,8.47e-01,9.47e-01,1.09273 ,1.29267 ,1.49264 ,1.69316 ,1.89282 ,2.0924  ,2.29175 ,2.49133 ,2.69086 ,2.89058 ,3.2117  ,3.71531 };
	const std::vector<Double_t> grv2Pions2 = {3.11e-02 ,3.90e-02 ,4.84e-02 ,5.69e-02 ,6.61e-02 ,7.41e-02 ,8.24e-02 ,0.0894946,0.102303 ,0.113243 ,0.121546 ,0.127667 ,0.132516 ,0.134671 ,0.133675 ,0.135861 ,0.13597  ,0.131011 ,0.125156 };
	const std::vector<Double_t> grv2Pions2err = {2.85e-04   ,3.19e-04   ,3.65e-04   ,4.23e-04   ,4.92e-04   ,5.75e-04   ,6.75e-04   ,0.000125297,0.00016872 ,0.000226315,0.000301406,0.000397758,0.000536516,0.00074216 ,0.00104403 ,0.00149471 ,0.00216928 ,0.00263277 ,0.00419394 };
  //Pions 20-30%
	const std::vector<Double_t> grptPions3 = {3.48e-01,4.48e-01,5.48e-01,6.47e-01,7.48e-01,8.47e-01,9.47e-01,1.09275 ,1.29275 ,1.49276 ,1.69325 ,1.89295 ,2.09252 ,2.29186 ,2.49146 ,2.69109 ,2.89109 ,3.21302 ,3.7177  };
	const std::vector<Double_t> grv2Pions3 = {4.02e-02,5.18e-02,6.43e-02,7.52e-02,8.73e-02,9.82e-02,1.08e-01,0.120745,0.136908,0.149733,0.160059,0.167729,0.171409,0.174874,0.176115,0.177974,0.172063,0.17399 ,0.160046};
	const std::vector<Double_t> grv2Pions3err = {3.14e-04   ,3.52e-04   ,4.03e-04   ,4.68e-04   ,5.45e-04   ,6.36e-04   ,7.47e-04   ,0.000140033,0.000187995,0.000251397,0.000333125,0.000437805,0.000587363,0.000805875,0.00112674 ,0.00160717 ,0.00232628 ,0.00276678 ,0.00435837 };
  //Pions 30-40%
	const std::vector<Double_t> grptPions4 = {3.48e-01,4.48e-01,5.48e-01,6.47e-01,7.47e-01,8.47e-01,9.47e-01,1.09277 ,1.29278 ,1.49281 ,1.69333 ,1.89307 ,2.0926  ,2.29205 ,2.49152 ,2.69102 ,2.89112 ,3.21328 ,3.7169  };
	const std::vector<Double_t> grv2Pions4 = {4.58e-02,6.00e-02,7.49e-02,8.83e-02,1.02e-01,1.14e-01,1.25e-01,0.1417  ,0.159262,0.173498,0.183417,0.19114 ,0.19772 ,0.19894 ,0.198051,0.197105,0.197934,0.193961,0.179556};
	const std::vector<Double_t> grv2Pions4err = {4.15e-04   ,4.67e-04   ,5.35e-04   ,6.22e-04   ,7.26e-04   ,8.48e-04   ,9.97e-04   ,0.000176723,0.000237121,0.000316568,0.000418468,0.000548471,0.000731395,0.000999529,0.00139347 ,0.00197593 ,0.00284581 ,0.00335813 ,0.00526669 };
	//Pions 40-50%
	const std::vector<Double_t> grptPions5 = {3.48e-01,4.48e-01,5.48e-01,6.47e-01,7.47e-01,8.47e-01,9.47e-01,1.09266 ,1.29274 ,1.49287 ,1.69334 ,1.89317 ,2.09277 ,2.29226 ,2.49164 ,2.69128 ,2.89092 ,3.21333 ,3.72026 };
	const std::vector<Double_t> grv2Pions5 = {4.77e-02,6.41e-02,8.10e-02,9.60e-02,1.11e-01,1.22e-01,1.35e-01,0.152934,0.171211,0.185322,0.195982,0.203246,0.207502,0.208436,0.212761,0.20678 ,0.20623 ,0.201233,0.186907};
	const std::vector<Double_t> grv2Pions5err = {6.39e-04   ,7.22e-04   ,8.30e-04   ,9.69e-04   ,1.13e-03   ,1.33e-03   ,1.56e-03   ,0.000252307,0.000339175,0.000452994,0.000597692,0.000782117,0.00103961 ,0.00141501 ,0.00195781 ,0.00276678 ,0.00396067 ,0.00459846 ,0.00705915 };

	//Protons 0-10%
	const std::vector<Double_t> grptProtons1 = {0.51585,0.704813,0.900742,1.09828,1.29657,1.49522,1.6949,1.89446,2.09404,2.29394,2.49392,2.69389,2.89377,3.20023,3.70353};
	const std::vector<Double_t> grv2Protons1 = {0.000727983,0.00566308 ,0.0136281  ,0.0250257  ,0.0370768  ,0.048881   ,0.0608268  ,0.0697447  ,0.0773137  ,0.0842604  ,0.0916704  ,0.0954557  ,0.0987706  ,0.0940916  ,0.107556};
	const std::vector<Double_t> grv2Protons1err = {0.000425097,0.000297131,0.00026809 ,0.000274267,0.000305175,0.000358791,0.00043779 ,0.000542177,0.000684051,0.000876243,0.00111554 ,0.00142348 ,0.00181917 ,0.00274343 ,0.00507457};
	//Protons 10-20%
	const std::vector<Double_t> grptProtons2 = {0.516645,0.704855,0.900702,1.09819 ,1.29647 ,1.49523 ,1.69494 ,1.89452 ,2.09414 ,2.29406 ,2.49412 ,2.69417 ,2.89381 ,3.20168 ,3.70478};
	const std::vector<Double_t> grv2Protons2 = {0.00677168,0.01606   ,0.0316519 ,0.0512269 ,0.0715798 ,0.0923915 ,0.110862  ,0.127135  ,0.141641  ,0.152214  ,0.162737  ,0.170938  ,0.174922  ,0.176266  ,0.174752};
	const std::vector<Double_t> grv2Protons2err = {0.000375119,0.00025927 ,0.000234072,0.000240063,0.000267707,0.000315281,0.00038428 ,0.000475185,0.000597513,0.000761426,0.000966586,0.00122583 ,0.00155681 ,0.00225786 ,0.00409344};
  //Protons 20-30%
	const std::vector<Double_t> grptProtons3 = {0.517179,0.704799,0.900476,1.09801 ,1.2964  ,1.49517 ,1.69491 ,1.89444 ,2.09417 ,2.29418 ,2.49412 ,2.69448 ,2.89405 ,3.20322 ,3.70646};
	const std::vector<Double_t> grv2Protons3 = {0.0146011,0.0287415,0.0501943,0.0765736,0.102903 ,0.128385 ,0.151448 ,0.172332 ,0.189292 ,0.202852 ,0.214018 ,0.22266  ,0.231335 ,0.229975 ,0.226598};
	const std::vector<Double_t> grv2Protons3err = {0.000415342,0.00028569 ,0.000259465,0.000268095,0.000301076,0.000355991,0.000434895,0.000537836,0.000675337,0.000859374,0.00108696 ,0.00137507 ,0.00173406 ,0.00244728 ,0.0043918};
  //Protons 30-40%
	const std::vector<Double_t> grptProtons4 = {0.517613,0.704487,0.900176,1.0977  ,1.2961  ,1.49498 ,1.69477 ,1.8945  ,2.09408 ,2.2941  ,2.49415 ,2.69411 ,2.89387 ,3.20483 ,3.70651};
	const std::vector<Double_t> grv2Protons4 = {0.0230178,0.0416355,0.0674413,0.0968543,0.127414 ,0.155728 ,0.180918 ,0.202575 ,0.219786 ,0.235053 ,0.245889 ,0.25771  ,0.263304 ,0.264227 ,0.268922 };
	const std::vector<Double_t> grv2Protons4err = {0.000507777,0.000349677,0.000321383,0.000336257,0.000381593,0.000455035,0.000558587,0.000693808,0.000872771,0.00110887 ,0.00140092 ,0.00176488 ,0.00223795 ,0.00308625 ,0.00544049};
	//Protons 40-50%
	const std::vector<Double_t> grptProtons5 = {0.517754,0.704098,0.899685,1.09725 ,1.29575 ,1.4948  ,1.6946  ,1.89425 ,2.09404 ,2.29406 ,2.49405 ,2.69428 ,2.89435 ,3.20421 ,3.70627};
	const std::vector<Double_t> grv2Protons5 = {0.0313179,0.053348 ,0.0821874,0.113548 ,0.145572 ,0.174179 ,0.198991 ,0.220783 ,0.241295 ,0.252408 ,0.262559 ,0.268631 ,0.280613 ,0.275137 ,0.285715};
	const std::vector<Double_t> grv2Protons5err = {0.000686593,0.000477364,0.000446765,0.000476327,0.000548624,0.000662217,0.000819948,0.00102523 ,0.00129269 ,0.0016511  ,0.00208042 ,0.00263179 ,0.00331715 ,0.00449828 ,0.00789795 };

  TGraphErrors *grPub[NcentBins][3];
  
  grPub[0][0] = new TGraphErrors(grptPions1.size(), &grptPions1[0], &grv2Pions1[0], &grpterr[0], &grv2Pions1err[0]);
	grPub[0][0]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[0][0]->GetYaxis()->SetTitle("v_{2}");
	grPub[0][0]->SetMarkerStyle(21);
	grPub[0][0]->SetMarkerSize(1.5);
	grPub[1][0] = new TGraphErrors(grptPions2.size(), &grptPions2[0], &grv2Pions2[0], &grpterr[0], &grv2Pions2err[0]);
	grPub[1][0]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[1][0]->GetYaxis()->SetTitle("v_{2}");
	grPub[1][0]->SetMarkerStyle(21);
	grPub[1][0]->SetMarkerSize(1.5);
  grPub[2][0] = new TGraphErrors(grptPions3.size(), &grptPions3[0], &grv2Pions3[0], &grpterr[0], &grv2Pions3err[0]);
	grPub[2][0]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[2][0]->GetYaxis()->SetTitle("v_{2}");
	grPub[2][0]->SetMarkerStyle(21);
	grPub[2][0]->SetMarkerSize(1.5);
  grPub[3][0] = new TGraphErrors(grptPions4.size(), &grptPions4[0], &grv2Pions4[0], &grpterr[0], &grv2Pions4err[0]);
	grPub[3][0]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[3][0]->GetYaxis()->SetTitle("v_{2}");
	grPub[3][0]->SetMarkerStyle(21);
	grPub[3][0]->SetMarkerSize(1.5);
  grPub[4][0] = new TGraphErrors(grptPions5.size(), &grptPions5[0], &grv2Pions5[0], &grpterr[0], &grv2Pions5err[0]);
	grPub[4][0]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[4][0]->GetYaxis()->SetTitle("v_{2}");
	grPub[4][0]->SetMarkerStyle(21);
	grPub[4][0]->SetMarkerSize(1.5);
	
	grPub[0][2] = new TGraphErrors(grptProtons1.size(), &grptProtons1[0], &grv2Protons1[0], &grpterr[0], &grv2Protons1err[0]);
	grPub[0][2]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[0][2]->GetYaxis()->SetTitle("v_{2}");
	grPub[0][2]->SetMarkerStyle(21);
	grPub[0][2]->SetMarkerSize(1.5);
	grPub[1][2] = new TGraphErrors(grptProtons2.size(), &grptProtons2[0], &grv2Protons2[0], &grpterr[0], &grv2Protons2err[0]);
	grPub[1][2]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[1][2]->GetYaxis()->SetTitle("v_{2}");
	grPub[1][2]->SetMarkerStyle(21);
	grPub[1][2]->SetMarkerSize(1.5);
  grPub[2][2] = new TGraphErrors(grptProtons3.size(), &grptProtons3[0], &grv2Protons3[0], &grpterr[0], &grv2Protons3err[0]);
	grPub[2][2]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[2][2]->GetYaxis()->SetTitle("v_{2}");
	grPub[2][2]->SetMarkerStyle(21);
	grPub[2][2]->SetMarkerSize(1.5);
  grPub[3][2] = new TGraphErrors(grptProtons4.size(), &grptProtons4[0], &grv2Protons4[0], &grpterr[0], &grv2Protons4err[0]);
	grPub[3][2]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[3][2]->GetYaxis()->SetTitle("v_{2}");
	grPub[3][2]->SetMarkerStyle(21);
	grPub[3][2]->SetMarkerSize(1.5);
  grPub[4][2] = new TGraphErrors(grptProtons5.size(), &grptProtons5[0], &grv2Protons5[0], &grpterr[0], &grv2Protons5err[0]);
	grPub[4][2]->GetXaxis()->SetTitle("p_{T}, [GeV/c]");
	grPub[4][2]->GetYaxis()->SetTitle("v_{2}");
	grPub[4][2]->SetMarkerStyle(21);
	grPub[4][2]->SetMarkerSize(1.5);
}