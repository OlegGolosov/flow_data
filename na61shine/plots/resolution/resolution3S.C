void resolution3S()
{
//=========Macro generated from canvas: noname/noname
//=========  (Thu Jun  6 01:31:28 2019) by ROOT version 6.14/08
   TCanvas *noname = new TCanvas("noname", "noname",50,114,800,600);
   noname->Range(-14.35065,-0.04177215,96.03896,0.3379747);
   noname->SetFillColor(0);
   noname->SetBorderMode(0);
   noname->SetBorderSize(2);
   noname->SetLeftMargin(0.13);
   noname->SetFrameBorderMode(0);
   noname->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("Resolution");
   multigraph->SetTitle("");
   
   Double_t RES_psd1_3S_X_fx3001[9] = {
   2.5,
   7.5,
   12.5,
   20,
   30,
   40,
   52.5,
   70,
   90};
   Double_t RES_psd1_3S_X_fy3001[9] = {
   0.1167021,
   0.15377,
   0.1683346,
   0.1705491,
   0.1663157,
   0.1627897,
   0.1443796,
   0.1252603,
   0.1168098};
   Double_t RES_psd1_3S_X_felx3001[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd1_3S_X_fely3001[9] = {
   0.001538521,
   0.001284153,
   0.001152382,
   0.0005747103,
   0.000724057,
   0.001125611,
   0.0006915261,
   0.0003233363,
   0.0005249157};
   Double_t RES_psd1_3S_X_fehx3001[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd1_3S_X_fehy3001[9] = {
   0.001538521,
   0.001284153,
   0.001152382,
   0.0005747103,
   0.000724057,
   0.001125611,
   0.0006915261,
   0.0003233363,
   0.0005249157};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,RES_psd1_3S_X_fx3001,RES_psd1_3S_X_fy3001,RES_psd1_3S_X_felx3001,RES_psd1_3S_X_fehx3001,RES_psd1_3S_X_fely3001,RES_psd1_3S_X_fehy3001);
   grae->SetName("RES_psd1_3S_X");
   grae->SetTitle("R_{1,X} [PSD1]");
   grae->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_RES_psd1_3S_X3001 = new TH1F("Graph_RES_psd1_3S_X3001","R_{1,X} [PSD1]",100,0,98.75);
   Graph_RES_psd1_3S_X3001->SetMinimum(0.1095675);
   Graph_RES_psd1_3S_X3001->SetMaximum(0.1767198);
   Graph_RES_psd1_3S_X3001->SetDirectory(0);
   Graph_RES_psd1_3S_X3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RES_psd1_3S_X3001->SetLineColor(ci);
   Graph_RES_psd1_3S_X3001->GetXaxis()->SetLabelFont(42);
   Graph_RES_psd1_3S_X3001->GetXaxis()->SetLabelSize(0.035);
   Graph_RES_psd1_3S_X3001->GetXaxis()->SetTitleSize(0.035);
   Graph_RES_psd1_3S_X3001->GetXaxis()->SetTitleFont(42);
   Graph_RES_psd1_3S_X3001->GetYaxis()->SetLabelFont(42);
   Graph_RES_psd1_3S_X3001->GetYaxis()->SetLabelSize(0.035);
   Graph_RES_psd1_3S_X3001->GetYaxis()->SetTitleSize(0.035);
   Graph_RES_psd1_3S_X3001->GetYaxis()->SetTitleOffset(0);
   Graph_RES_psd1_3S_X3001->GetYaxis()->SetTitleFont(42);
   Graph_RES_psd1_3S_X3001->GetZaxis()->SetLabelFont(42);
   Graph_RES_psd1_3S_X3001->GetZaxis()->SetLabelSize(0.035);
   Graph_RES_psd1_3S_X3001->GetZaxis()->SetTitleSize(0.035);
   Graph_RES_psd1_3S_X3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_RES_psd1_3S_X3001);
   
   multigraph->Add(grae,"pZ");
   
   Double_t RES_psd1_3S_Y_fx3002[9] = {
   2.75,
   7.75,
   12.75,
   20.25,
   30.25,
   40.25,
   52.75,
   70.25,
   90.25};
   Double_t RES_psd1_3S_Y_fy3002[9] = {
   0.1219483,
   0.1618784,
   0.1745012,
   0.1792012,
   0.1785276,
   0.1735074,
   0.1571299,
   0.1360506,
   0.1242554};
   Double_t RES_psd1_3S_Y_felx3002[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd1_3S_Y_fely3002[9] = {
   0.002042535,
   0.001967127,
   0.001262058,
   0.0005657496,
   0.0009407738,
   0.0007840686,
   0.0005825264,
   0.0005331596,
   0.0005283915};
   Double_t RES_psd1_3S_Y_fehx3002[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd1_3S_Y_fehy3002[9] = {
   0.002042535,
   0.001967127,
   0.001262058,
   0.0005657496,
   0.0009407738,
   0.0007840686,
   0.0005825264,
   0.0005331596,
   0.0005283915};
   grae = new TGraphAsymmErrors(9,RES_psd1_3S_Y_fx3002,RES_psd1_3S_Y_fy3002,RES_psd1_3S_Y_felx3002,RES_psd1_3S_Y_fehx3002,RES_psd1_3S_Y_fely3002,RES_psd1_3S_Y_fehy3002);
   grae->SetName("RES_psd1_3S_Y");
   grae->SetTitle("R_{1,Y} [PSD1]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_RES_psd1_3S_Y3002 = new TH1F("Graph_RES_psd1_3S_Y3002","R_{1,Y} [PSD1]",100,0,99);
   Graph_RES_psd1_3S_Y3002->SetMinimum(0.1139196);
   Graph_RES_psd1_3S_Y3002->SetMaximum(0.185753);
   Graph_RES_psd1_3S_Y3002->SetDirectory(0);
   Graph_RES_psd1_3S_Y3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RES_psd1_3S_Y3002->SetLineColor(ci);
   Graph_RES_psd1_3S_Y3002->GetXaxis()->SetLabelFont(42);
   Graph_RES_psd1_3S_Y3002->GetXaxis()->SetLabelSize(0.035);
   Graph_RES_psd1_3S_Y3002->GetXaxis()->SetTitleSize(0.035);
   Graph_RES_psd1_3S_Y3002->GetXaxis()->SetTitleFont(42);
   Graph_RES_psd1_3S_Y3002->GetYaxis()->SetLabelFont(42);
   Graph_RES_psd1_3S_Y3002->GetYaxis()->SetLabelSize(0.035);
   Graph_RES_psd1_3S_Y3002->GetYaxis()->SetTitleSize(0.035);
   Graph_RES_psd1_3S_Y3002->GetYaxis()->SetTitleOffset(0);
   Graph_RES_psd1_3S_Y3002->GetYaxis()->SetTitleFont(42);
   Graph_RES_psd1_3S_Y3002->GetZaxis()->SetLabelFont(42);
   Graph_RES_psd1_3S_Y3002->GetZaxis()->SetLabelSize(0.035);
   Graph_RES_psd1_3S_Y3002->GetZaxis()->SetTitleSize(0.035);
   Graph_RES_psd1_3S_Y3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_RES_psd1_3S_Y3002);
   
   multigraph->Add(grae,"pZ");
   
   Double_t RES_psd2_3S_X_fx3003[9] = {
   3,
   8,
   13,
   20.5,
   30.5,
   40.5,
   53,
   70.5,
   90.5};
   Double_t RES_psd2_3S_X_fy3003[9] = {
   0.2597352,
   0.2481825,
   0.2473347,
   0.2450491,
   0.2365039,
   0.2175919,
   0.1901994,
   0.1582781,
   0.1415931};
   Double_t RES_psd2_3S_X_felx3003[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd2_3S_X_fely3003[9] = {
   0.004532946,
   0.00135202,
   0.001264031,
   0.0004835002,
   0.0009721281,
   0.0006365496,
   0.0007095089,
   0.000421718,
   0.0005003864};
   Double_t RES_psd2_3S_X_fehx3003[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd2_3S_X_fehy3003[9] = {
   0.004532946,
   0.00135202,
   0.001264031,
   0.0004835002,
   0.0009721281,
   0.0006365496,
   0.0007095089,
   0.000421718,
   0.0005003864};
   grae = new TGraphAsymmErrors(9,RES_psd2_3S_X_fx3003,RES_psd2_3S_X_fy3003,RES_psd2_3S_X_felx3003,RES_psd2_3S_X_fehx3003,RES_psd2_3S_X_fely3003,RES_psd2_3S_X_fehy3003);
   grae->SetName("RES_psd2_3S_X");
   grae->SetTitle("R_{1,X} [PSD2]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_RES_psd2_3S_X3003 = new TH1F("Graph_RES_psd2_3S_X3003","R_{1,X} [PSD2]",100,0,99.25);
   Graph_RES_psd2_3S_X3003->SetMinimum(0.1287752);
   Graph_RES_psd2_3S_X3003->SetMaximum(0.2765857);
   Graph_RES_psd2_3S_X3003->SetDirectory(0);
   Graph_RES_psd2_3S_X3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RES_psd2_3S_X3003->SetLineColor(ci);
   Graph_RES_psd2_3S_X3003->GetXaxis()->SetLabelFont(42);
   Graph_RES_psd2_3S_X3003->GetXaxis()->SetLabelSize(0.035);
   Graph_RES_psd2_3S_X3003->GetXaxis()->SetTitleSize(0.035);
   Graph_RES_psd2_3S_X3003->GetXaxis()->SetTitleFont(42);
   Graph_RES_psd2_3S_X3003->GetYaxis()->SetLabelFont(42);
   Graph_RES_psd2_3S_X3003->GetYaxis()->SetLabelSize(0.035);
   Graph_RES_psd2_3S_X3003->GetYaxis()->SetTitleSize(0.035);
   Graph_RES_psd2_3S_X3003->GetYaxis()->SetTitleOffset(0);
   Graph_RES_psd2_3S_X3003->GetYaxis()->SetTitleFont(42);
   Graph_RES_psd2_3S_X3003->GetZaxis()->SetLabelFont(42);
   Graph_RES_psd2_3S_X3003->GetZaxis()->SetLabelSize(0.035);
   Graph_RES_psd2_3S_X3003->GetZaxis()->SetTitleSize(0.035);
   Graph_RES_psd2_3S_X3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_RES_psd2_3S_X3003);
   
   multigraph->Add(grae,"pZ");
   
   Double_t RES_psd2_3S_Y_fx3004[9] = {
   3.25,
   8.25,
   13.25,
   20.75,
   30.75,
   40.75,
   53.25,
   70.75,
   90.75};
   Double_t RES_psd2_3S_Y_fy3004[9] = {
   0.2600197,
   0.2484606,
   0.2513782,
   0.250437,
   0.2435716,
   0.2210572,
   0.1912534,
   0.1571561,
   0.1399692};
   Double_t RES_psd2_3S_Y_felx3004[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd2_3S_Y_fely3004[9] = {
   0.004114114,
   0.001544095,
   0.0007648449,
   0.0005888232,
   0.0006263826,
   0.000776582,
   0.0005683626,
   0.0004353613,
   0.0006283149};
   Double_t RES_psd2_3S_Y_fehx3004[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd2_3S_Y_fehy3004[9] = {
   0.004114114,
   0.001544095,
   0.0007648449,
   0.0005888232,
   0.0006263826,
   0.000776582,
   0.0005683626,
   0.0004353613,
   0.0006283149};
   grae = new TGraphAsymmErrors(9,RES_psd2_3S_Y_fx3004,RES_psd2_3S_Y_fy3004,RES_psd2_3S_Y_felx3004,RES_psd2_3S_Y_fehx3004,RES_psd2_3S_Y_fely3004,RES_psd2_3S_Y_fehy3004);
   grae->SetName("RES_psd2_3S_Y");
   grae->SetTitle("R_{1,Y} [PSD2]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(25);
   
   TH1F *Graph_RES_psd2_3S_Y3004 = new TH1F("Graph_RES_psd2_3S_Y3004","R_{1,Y} [PSD2]",100,0,99.5);
   Graph_RES_psd2_3S_Y3004->SetMinimum(0.1268616);
   Graph_RES_psd2_3S_Y3004->SetMaximum(0.2766131);
   Graph_RES_psd2_3S_Y3004->SetDirectory(0);
   Graph_RES_psd2_3S_Y3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RES_psd2_3S_Y3004->SetLineColor(ci);
   Graph_RES_psd2_3S_Y3004->GetXaxis()->SetLabelFont(42);
   Graph_RES_psd2_3S_Y3004->GetXaxis()->SetLabelSize(0.035);
   Graph_RES_psd2_3S_Y3004->GetXaxis()->SetTitleSize(0.035);
   Graph_RES_psd2_3S_Y3004->GetXaxis()->SetTitleFont(42);
   Graph_RES_psd2_3S_Y3004->GetYaxis()->SetLabelFont(42);
   Graph_RES_psd2_3S_Y3004->GetYaxis()->SetLabelSize(0.035);
   Graph_RES_psd2_3S_Y3004->GetYaxis()->SetTitleSize(0.035);
   Graph_RES_psd2_3S_Y3004->GetYaxis()->SetTitleOffset(0);
   Graph_RES_psd2_3S_Y3004->GetYaxis()->SetTitleFont(42);
   Graph_RES_psd2_3S_Y3004->GetZaxis()->SetLabelFont(42);
   Graph_RES_psd2_3S_Y3004->GetZaxis()->SetLabelSize(0.035);
   Graph_RES_psd2_3S_Y3004->GetZaxis()->SetTitleSize(0.035);
   Graph_RES_psd2_3S_Y3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_RES_psd2_3S_Y3004);
   
   multigraph->Add(grae,"pZ");
   
   Double_t RES_psd3_3S_X_fx3005[9] = {
   3.5,
   8.5,
   13.5,
   21,
   31,
   41,
   53.5,
   71,
   91};
   Double_t RES_psd3_3S_X_fy3005[9] = {
   0.1141948,
   0.1760776,
   0.2095347,
   0.2255994,
   0.2250168,
   0.2075371,
   0.1780294,
   0.142474,
   0.1188929};
   Double_t RES_psd3_3S_X_felx3005[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd3_3S_X_fely3005[9] = {
   0.001786588,
   0.001299786,
   0.00115255,
   0.0006083549,
   0.0009483541,
   0.0009612876,
   0.0006612875,
   0.0007618832,
   0.0004970907};
   Double_t RES_psd3_3S_X_fehx3005[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd3_3S_X_fehy3005[9] = {
   0.001786588,
   0.001299786,
   0.00115255,
   0.0006083549,
   0.0009483541,
   0.0009612876,
   0.0006612875,
   0.0007618832,
   0.0004970907};
   grae = new TGraphAsymmErrors(9,RES_psd3_3S_X_fx3005,RES_psd3_3S_X_fy3005,RES_psd3_3S_X_felx3005,RES_psd3_3S_X_fehx3005,RES_psd3_3S_X_fely3005,RES_psd3_3S_X_fehy3005);
   grae->SetName("RES_psd3_3S_X");
   grae->SetTitle("R_{1,X} [PSD3]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_RES_psd3_3S_X3005 = new TH1F("Graph_RES_psd3_3S_X3005","R_{1,X} [PSD3]",100,0,99.75);
   Graph_RES_psd3_3S_X3005->SetMinimum(0.1010282);
   Graph_RES_psd3_3S_X3005->SetMaximum(0.2375877);
   Graph_RES_psd3_3S_X3005->SetDirectory(0);
   Graph_RES_psd3_3S_X3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RES_psd3_3S_X3005->SetLineColor(ci);
   Graph_RES_psd3_3S_X3005->GetXaxis()->SetLabelFont(42);
   Graph_RES_psd3_3S_X3005->GetXaxis()->SetLabelSize(0.035);
   Graph_RES_psd3_3S_X3005->GetXaxis()->SetTitleSize(0.035);
   Graph_RES_psd3_3S_X3005->GetXaxis()->SetTitleFont(42);
   Graph_RES_psd3_3S_X3005->GetYaxis()->SetLabelFont(42);
   Graph_RES_psd3_3S_X3005->GetYaxis()->SetLabelSize(0.035);
   Graph_RES_psd3_3S_X3005->GetYaxis()->SetTitleSize(0.035);
   Graph_RES_psd3_3S_X3005->GetYaxis()->SetTitleOffset(0);
   Graph_RES_psd3_3S_X3005->GetYaxis()->SetTitleFont(42);
   Graph_RES_psd3_3S_X3005->GetZaxis()->SetLabelFont(42);
   Graph_RES_psd3_3S_X3005->GetZaxis()->SetLabelSize(0.035);
   Graph_RES_psd3_3S_X3005->GetZaxis()->SetTitleSize(0.035);
   Graph_RES_psd3_3S_X3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_RES_psd3_3S_X3005);
   
   multigraph->Add(grae,"pZ");
   
   Double_t RES_psd3_3S_Y_fx3006[9] = {
   3.75,
   8.75,
   13.75,
   21.25,
   31.25,
   41.25,
   53.75,
   71.25,
   91.25};
   Double_t RES_psd3_3S_Y_fy3006[9] = {
   0.1112104,
   0.1747113,
   0.2051692,
   0.2212861,
   0.220064,
   0.2031666,
   0.1697011,
   0.1328698,
   0.1098255};
   Double_t RES_psd3_3S_Y_felx3006[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd3_3S_Y_fely3006[9] = {
   0.00257296,
   0.0008972143,
   0.000832817,
   0.0005295541,
   0.0006511502,
   0.0006952056,
   0.0007017741,
   0.0006825272,
   0.0005689466};
   Double_t RES_psd3_3S_Y_fehx3006[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd3_3S_Y_fehy3006[9] = {
   0.00257296,
   0.0008972143,
   0.000832817,
   0.0005295541,
   0.0006511502,
   0.0006952056,
   0.0007017741,
   0.0006825272,
   0.0005689466};
   grae = new TGraphAsymmErrors(9,RES_psd3_3S_Y_fx3006,RES_psd3_3S_Y_fy3006,RES_psd3_3S_Y_felx3006,RES_psd3_3S_Y_fehx3006,RES_psd3_3S_Y_fely3006,RES_psd3_3S_Y_fehy3006);
   grae->SetName("RES_psd3_3S_Y");
   grae->SetTitle("R_{1,Y} [PSD3]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(27);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_RES_psd3_3S_Y3006 = new TH1F("Graph_RES_psd3_3S_Y3006","R_{1,Y} [PSD3]",100,0,100);
   Graph_RES_psd3_3S_Y3006->SetMinimum(0.09731957);
   Graph_RES_psd3_3S_Y3006->SetMaximum(0.2331335);
   Graph_RES_psd3_3S_Y3006->SetDirectory(0);
   Graph_RES_psd3_3S_Y3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RES_psd3_3S_Y3006->SetLineColor(ci);
   Graph_RES_psd3_3S_Y3006->GetXaxis()->SetLabelFont(42);
   Graph_RES_psd3_3S_Y3006->GetXaxis()->SetLabelSize(0.035);
   Graph_RES_psd3_3S_Y3006->GetXaxis()->SetTitleSize(0.035);
   Graph_RES_psd3_3S_Y3006->GetXaxis()->SetTitleFont(42);
   Graph_RES_psd3_3S_Y3006->GetYaxis()->SetLabelFont(42);
   Graph_RES_psd3_3S_Y3006->GetYaxis()->SetLabelSize(0.035);
   Graph_RES_psd3_3S_Y3006->GetYaxis()->SetTitleSize(0.035);
   Graph_RES_psd3_3S_Y3006->GetYaxis()->SetTitleOffset(0);
   Graph_RES_psd3_3S_Y3006->GetYaxis()->SetTitleFont(42);
   Graph_RES_psd3_3S_Y3006->GetZaxis()->SetLabelFont(42);
   Graph_RES_psd3_3S_Y3006->GetZaxis()->SetLabelSize(0.035);
   Graph_RES_psd3_3S_Y3006->GetZaxis()->SetTitleSize(0.035);
   Graph_RES_psd3_3S_Y3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_RES_psd3_3S_Y3006);
   
   multigraph->Add(grae,"pZ");
   multigraph->Draw("Ap");
   multigraph->GetXaxis()->SetTitle("PSD Centrality (%)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.045);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("R_{1}");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.045);
   multigraph->GetYaxis()->SetTitleOffset(0.9);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.2,0.15,0.6,0.3,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("RES_psd1_3S_X","R_{1,X} [PSD1]","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RES_psd1_3S_Y","R_{1,Y} [PSD1]","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RES_psd2_3S_X","R_{1,X} [PSD2]","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RES_psd2_3S_Y","R_{1,Y} [PSD2]","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RES_psd3_3S_X","R_{1,X} [PSD3]","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RES_psd3_3S_Y","R_{1,Y} [PSD3]","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(27);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.5,0.78,0.9,0.87,"brNDC");
   pt->SetName("");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(11);
   pt->SetTextSize(0.04);
   TText *pt_LaTex = pt->AddText("NA61/SHINE performance");
   pt_LaTex = pt->AddText("Pb+Pb @ 13#it{A} GeV/#it{c}");
   pt->Draw();
   
   pt = new TPaveText(0.2,0.3,0.6,0.35,"brNDC");
   pt->SetName("");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   pt_LaTex = pt->AddText("3 PSD subevents");
   pt->Draw();
   noname->Modified();
   noname->cd();
   noname->SetSelected(noname);
}
