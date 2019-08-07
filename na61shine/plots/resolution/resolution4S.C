void resolution4S()
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
   
   Double_t RES_psd1_4S_X_fx3007[9] = {
   2.5,
   7.5,
   12.5,
   20,
   30,
   40,
   52.5,
   70,
   90};
   Double_t RES_psd1_4S_X_fy3007[9] = {
   0.08572844,
   0.1353564,
   0.1523234,
   0.1605574,
   0.161204,
   0.1583794,
   0.1399829,
   0.1164927,
   0.090733};
   Double_t RES_psd1_4S_X_felx3007[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd1_4S_X_fely3007[9] = {
   0.003207476,
   0.00202877,
   0.001651352,
   0.00119235,
   0.001478717,
   0.002117595,
   0.002481457,
   0.003865595,
   0.00761382};
   Double_t RES_psd1_4S_X_fehx3007[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd1_4S_X_fehy3007[9] = {
   0.003207476,
   0.00202877,
   0.001651352,
   0.00119235,
   0.001478717,
   0.002117595,
   0.002481457,
   0.003865595,
   0.00761382};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,RES_psd1_4S_X_fx3007,RES_psd1_4S_X_fy3007,RES_psd1_4S_X_felx3007,RES_psd1_4S_X_fehx3007,RES_psd1_4S_X_fely3007,RES_psd1_4S_X_fehy3007);
   grae->SetName("RES_psd1_4S_X");
   grae->SetTitle("R_{1,X} [PSD1]");
   grae->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_RES_psd1_4S_X3007 = new TH1F("Graph_RES_psd1_4S_X3007","R_{1,X} [PSD1]",100,0,98.75);
   Graph_RES_psd1_4S_X3007->SetMinimum(0.07450479);
   Graph_RES_psd1_4S_X3007->SetMaximum(0.1706989);
   Graph_RES_psd1_4S_X3007->SetDirectory(0);
   Graph_RES_psd1_4S_X3007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RES_psd1_4S_X3007->SetLineColor(ci);
   Graph_RES_psd1_4S_X3007->GetXaxis()->SetLabelFont(42);
   Graph_RES_psd1_4S_X3007->GetXaxis()->SetLabelSize(0.035);
   Graph_RES_psd1_4S_X3007->GetXaxis()->SetTitleSize(0.035);
   Graph_RES_psd1_4S_X3007->GetXaxis()->SetTitleFont(42);
   Graph_RES_psd1_4S_X3007->GetYaxis()->SetLabelFont(42);
   Graph_RES_psd1_4S_X3007->GetYaxis()->SetLabelSize(0.035);
   Graph_RES_psd1_4S_X3007->GetYaxis()->SetTitleSize(0.035);
   Graph_RES_psd1_4S_X3007->GetYaxis()->SetTitleOffset(0);
   Graph_RES_psd1_4S_X3007->GetYaxis()->SetTitleFont(42);
   Graph_RES_psd1_4S_X3007->GetZaxis()->SetLabelFont(42);
   Graph_RES_psd1_4S_X3007->GetZaxis()->SetLabelSize(0.035);
   Graph_RES_psd1_4S_X3007->GetZaxis()->SetTitleSize(0.035);
   Graph_RES_psd1_4S_X3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_RES_psd1_4S_X3007);
   
   multigraph->Add(grae,"pZ");
   
   Double_t RES_psd1_4S_Y_fx3008[9] = {
   2.75,
   7.75,
   12.75,
   20.25,
   30.25,
   40.25,
   52.75,
   70.25,
   90.25};
   Double_t RES_psd1_4S_Y_fy3008[9] = {
   0.1071306,
   0.1440591,
   0.1627169,
   0.1690257,
   0.1724313,
   0.1684932,
   0.1501368,
   0.1193464,
   0.0969657};
   Double_t RES_psd1_4S_Y_felx3008[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd1_4S_Y_fely3008[9] = {
   0.007016309,
   0.00379108,
   0.003550183,
   0.002183653,
   0.003054423,
   0.004519901,
   0.004177848,
   0.007700498,
   0.01810926};
   Double_t RES_psd1_4S_Y_fehx3008[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd1_4S_Y_fehy3008[9] = {
   0.007016309,
   0.00379108,
   0.003550183,
   0.002183653,
   0.003054423,
   0.004519901,
   0.004177848,
   0.007700498,
   0.01810926};
   grae = new TGraphAsymmErrors(9,RES_psd1_4S_Y_fx3008,RES_psd1_4S_Y_fy3008,RES_psd1_4S_Y_felx3008,RES_psd1_4S_Y_fehx3008,RES_psd1_4S_Y_fely3008,RES_psd1_4S_Y_fehy3008);
   grae->SetName("RES_psd1_4S_Y");
   grae->SetTitle("R_{1,Y} [PSD1]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_RES_psd1_4S_Y3008 = new TH1F("Graph_RES_psd1_4S_Y3008","R_{1,Y} [PSD1]",100,0,99);
   Graph_RES_psd1_4S_Y3008->SetMinimum(0.06919351);
   Graph_RES_psd1_4S_Y3008->SetMaximum(0.1851487);
   Graph_RES_psd1_4S_Y3008->SetDirectory(0);
   Graph_RES_psd1_4S_Y3008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RES_psd1_4S_Y3008->SetLineColor(ci);
   Graph_RES_psd1_4S_Y3008->GetXaxis()->SetLabelFont(42);
   Graph_RES_psd1_4S_Y3008->GetXaxis()->SetLabelSize(0.035);
   Graph_RES_psd1_4S_Y3008->GetXaxis()->SetTitleSize(0.035);
   Graph_RES_psd1_4S_Y3008->GetXaxis()->SetTitleFont(42);
   Graph_RES_psd1_4S_Y3008->GetYaxis()->SetLabelFont(42);
   Graph_RES_psd1_4S_Y3008->GetYaxis()->SetLabelSize(0.035);
   Graph_RES_psd1_4S_Y3008->GetYaxis()->SetTitleSize(0.035);
   Graph_RES_psd1_4S_Y3008->GetYaxis()->SetTitleOffset(0);
   Graph_RES_psd1_4S_Y3008->GetYaxis()->SetTitleFont(42);
   Graph_RES_psd1_4S_Y3008->GetZaxis()->SetLabelFont(42);
   Graph_RES_psd1_4S_Y3008->GetZaxis()->SetLabelSize(0.035);
   Graph_RES_psd1_4S_Y3008->GetZaxis()->SetTitleSize(0.035);
   Graph_RES_psd1_4S_Y3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_RES_psd1_4S_Y3008);
   
   multigraph->Add(grae,"pZ");
   
   Double_t RES_psd2_4S_X_fx3009[9] = {
   3,
   8,
   13,
   20.5,
   30.5,
   40.5,
   53,
   70.5,
   90.5};
   Double_t RES_psd2_4S_X_fy3009[9] = {
   0.1276948,
   0.1725249,
   0.1963862,
   0.20407,
   0.198219,
   0.1881685,
   0.1535362,
   0.1167843,
   0.06209582};
   Double_t RES_psd2_4S_X_felx3009[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd2_4S_X_fely3009[9] = {
   0.00664793,
   0.002592939,
   0.00337319,
   0.001121792,
   0.001979693,
   0.002111542,
   0.002686556,
   0.002895406,
   0.009990941};
   Double_t RES_psd2_4S_X_fehx3009[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd2_4S_X_fehy3009[9] = {
   0.00664793,
   0.002592939,
   0.00337319,
   0.001121792,
   0.001979693,
   0.002111542,
   0.002686556,
   0.002895406,
   0.009990941};
   grae = new TGraphAsymmErrors(9,RES_psd2_4S_X_fx3009,RES_psd2_4S_X_fy3009,RES_psd2_4S_X_felx3009,RES_psd2_4S_X_fehx3009,RES_psd2_4S_X_fely3009,RES_psd2_4S_X_fehy3009);
   grae->SetName("RES_psd2_4S_X");
   grae->SetTitle("R_{1,X} [PSD2]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_RES_psd2_4S_X3009 = new TH1F("Graph_RES_psd2_4S_X3009","R_{1,X} [PSD2]",100,0,99.25);
   Graph_RES_psd2_4S_X3009->SetMinimum(0.03679619);
   Graph_RES_psd2_4S_X3009->SetMaximum(0.2205005);
   Graph_RES_psd2_4S_X3009->SetDirectory(0);
   Graph_RES_psd2_4S_X3009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RES_psd2_4S_X3009->SetLineColor(ci);
   Graph_RES_psd2_4S_X3009->GetXaxis()->SetLabelFont(42);
   Graph_RES_psd2_4S_X3009->GetXaxis()->SetLabelSize(0.035);
   Graph_RES_psd2_4S_X3009->GetXaxis()->SetTitleSize(0.035);
   Graph_RES_psd2_4S_X3009->GetXaxis()->SetTitleFont(42);
   Graph_RES_psd2_4S_X3009->GetYaxis()->SetLabelFont(42);
   Graph_RES_psd2_4S_X3009->GetYaxis()->SetLabelSize(0.035);
   Graph_RES_psd2_4S_X3009->GetYaxis()->SetTitleSize(0.035);
   Graph_RES_psd2_4S_X3009->GetYaxis()->SetTitleOffset(0);
   Graph_RES_psd2_4S_X3009->GetYaxis()->SetTitleFont(42);
   Graph_RES_psd2_4S_X3009->GetZaxis()->SetLabelFont(42);
   Graph_RES_psd2_4S_X3009->GetZaxis()->SetLabelSize(0.035);
   Graph_RES_psd2_4S_X3009->GetZaxis()->SetTitleSize(0.035);
   Graph_RES_psd2_4S_X3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_RES_psd2_4S_X3009);
   
   multigraph->Add(grae,"pZ");
   
   Double_t RES_psd2_4S_Y_fx3010[9] = {
   3.25,
   8.25,
   13.25,
   20.75,
   30.75,
   40.75,
   53.25,
   70.75,
   90.75};
   Double_t RES_psd2_4S_Y_fy3010[9] = {
   0.1139323,
   0.1824041,
   0.2005092,
   0.2122123,
   0.2117567,
   0.208605,
   0.156087,
   0.1014968,
   0.08745914};
   Double_t RES_psd2_4S_Y_felx3010[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd2_4S_Y_fely3010[9] = {
   0.007946373,
   0.004389465,
   0.004000743,
   0.002197965,
   0.003690291,
   0.006582193,
   0.00439082,
   0.008773989,
   0.0384581};
   Double_t RES_psd2_4S_Y_fehx3010[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd2_4S_Y_fehy3010[9] = {
   0.007946373,
   0.004389465,
   0.004000743,
   0.002197965,
   0.003690291,
   0.006582193,
   0.00439082,
   0.008773989,
   0.0384581};
   grae = new TGraphAsymmErrors(9,RES_psd2_4S_Y_fx3010,RES_psd2_4S_Y_fy3010,RES_psd2_4S_Y_felx3010,RES_psd2_4S_Y_fehx3010,RES_psd2_4S_Y_fely3010,RES_psd2_4S_Y_fehy3010);
   grae->SetName("RES_psd2_4S_Y");
   grae->SetTitle("R_{1,Y} [PSD2]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(25);
   
   TH1F *Graph_RES_psd2_4S_Y3010 = new TH1F("Graph_RES_psd2_4S_Y3010","R_{1,Y} [PSD2]",100,0,99.5);
   Graph_RES_psd2_4S_Y3010->SetMinimum(0.03235644);
   Graph_RES_psd2_4S_Y3010->SetMaximum(0.2320916);
   Graph_RES_psd2_4S_Y3010->SetDirectory(0);
   Graph_RES_psd2_4S_Y3010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RES_psd2_4S_Y3010->SetLineColor(ci);
   Graph_RES_psd2_4S_Y3010->GetXaxis()->SetLabelFont(42);
   Graph_RES_psd2_4S_Y3010->GetXaxis()->SetLabelSize(0.035);
   Graph_RES_psd2_4S_Y3010->GetXaxis()->SetTitleSize(0.035);
   Graph_RES_psd2_4S_Y3010->GetXaxis()->SetTitleFont(42);
   Graph_RES_psd2_4S_Y3010->GetYaxis()->SetLabelFont(42);
   Graph_RES_psd2_4S_Y3010->GetYaxis()->SetLabelSize(0.035);
   Graph_RES_psd2_4S_Y3010->GetYaxis()->SetTitleSize(0.035);
   Graph_RES_psd2_4S_Y3010->GetYaxis()->SetTitleOffset(0);
   Graph_RES_psd2_4S_Y3010->GetYaxis()->SetTitleFont(42);
   Graph_RES_psd2_4S_Y3010->GetZaxis()->SetLabelFont(42);
   Graph_RES_psd2_4S_Y3010->GetZaxis()->SetLabelSize(0.035);
   Graph_RES_psd2_4S_Y3010->GetZaxis()->SetTitleSize(0.035);
   Graph_RES_psd2_4S_Y3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_RES_psd2_4S_Y3010);
   
   multigraph->Add(grae,"pZ");
   
   Double_t RES_psd3_4S_X_fx3011[9] = {
   3.5,
   8.5,
   13.5,
   21,
   31,
   41,
   53.5,
   71,
   91};
   Double_t RES_psd3_4S_X_fy3011[9] = {
   0.1554533,
   0.2000309,
   0.2315596,
   0.2396387,
   0.232152,
   0.2133163,
   0.183621,
   0.153197,
   0.153063};
   Double_t RES_psd3_4S_X_felx3011[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd3_4S_X_fely3011[9] = {
   0.006309087,
   0.002947324,
   0.002085995,
   0.001851801,
   0.001719404,
   0.003115628,
   0.003825524,
   0.004955426,
   0.01437348};
   Double_t RES_psd3_4S_X_fehx3011[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd3_4S_X_fehy3011[9] = {
   0.006309087,
   0.002947324,
   0.002085995,
   0.001851801,
   0.001719404,
   0.003115628,
   0.003825524,
   0.004955426,
   0.01437348};
   grae = new TGraphAsymmErrors(9,RES_psd3_4S_X_fx3011,RES_psd3_4S_X_fy3011,RES_psd3_4S_X_felx3011,RES_psd3_4S_X_fehx3011,RES_psd3_4S_X_fely3011,RES_psd3_4S_X_fehy3011);
   grae->SetName("RES_psd3_4S_X");
   grae->SetTitle("R_{1,X} [PSD3]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_RES_psd3_4S_X3011 = new TH1F("Graph_RES_psd3_4S_X3011","R_{1,X} [PSD3]",100,0,99.75);
   Graph_RES_psd3_4S_X3011->SetMinimum(0.1284094);
   Graph_RES_psd3_4S_X3011->SetMaximum(0.2517706);
   Graph_RES_psd3_4S_X3011->SetDirectory(0);
   Graph_RES_psd3_4S_X3011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RES_psd3_4S_X3011->SetLineColor(ci);
   Graph_RES_psd3_4S_X3011->GetXaxis()->SetLabelFont(42);
   Graph_RES_psd3_4S_X3011->GetXaxis()->SetLabelSize(0.035);
   Graph_RES_psd3_4S_X3011->GetXaxis()->SetTitleSize(0.035);
   Graph_RES_psd3_4S_X3011->GetXaxis()->SetTitleFont(42);
   Graph_RES_psd3_4S_X3011->GetYaxis()->SetLabelFont(42);
   Graph_RES_psd3_4S_X3011->GetYaxis()->SetLabelSize(0.035);
   Graph_RES_psd3_4S_X3011->GetYaxis()->SetTitleSize(0.035);
   Graph_RES_psd3_4S_X3011->GetYaxis()->SetTitleOffset(0);
   Graph_RES_psd3_4S_X3011->GetYaxis()->SetTitleFont(42);
   Graph_RES_psd3_4S_X3011->GetZaxis()->SetLabelFont(42);
   Graph_RES_psd3_4S_X3011->GetZaxis()->SetLabelSize(0.035);
   Graph_RES_psd3_4S_X3011->GetZaxis()->SetTitleSize(0.035);
   Graph_RES_psd3_4S_X3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_RES_psd3_4S_X3011);
   
   multigraph->Add(grae,"pZ");
   
   Double_t RES_psd3_4S_Y_fx3012[9] = {
   3.75,
   8.75,
   13.75,
   21.25,
   31.25,
   41.25,
   53.75,
   71.25,
   91.25};
   Double_t RES_psd3_4S_Y_fy3012[9] = {
   0.1265923,
   0.1963222,
   0.2200281,
   0.2346078,
   0.2278443,
   0.2092127,
   0.1776055,
   0.1514668,
   0.1407344};
   Double_t RES_psd3_4S_Y_felx3012[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd3_4S_Y_fely3012[9] = {
   0.01111301,
   0.004701983,
   0.004443683,
   0.002416395,
   0.003427814,
   0.00510584,
   0.005179751,
   0.007898985,
   0.03025422};
   Double_t RES_psd3_4S_Y_fehx3012[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t RES_psd3_4S_Y_fehy3012[9] = {
   0.01111301,
   0.004701983,
   0.004443683,
   0.002416395,
   0.003427814,
   0.00510584,
   0.005179751,
   0.007898985,
   0.03025422};
   grae = new TGraphAsymmErrors(9,RES_psd3_4S_Y_fx3012,RES_psd3_4S_Y_fy3012,RES_psd3_4S_Y_felx3012,RES_psd3_4S_Y_fehx3012,RES_psd3_4S_Y_fely3012,RES_psd3_4S_Y_fehy3012);
   grae->SetName("RES_psd3_4S_Y");
   grae->SetTitle("R_{1,Y} [PSD3]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(27);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_RES_psd3_4S_Y3012 = new TH1F("Graph_RES_psd3_4S_Y3012","R_{1,Y} [PSD3]",100,0,100);
   Graph_RES_psd3_4S_Y3012->SetMinimum(0.09782575);
   Graph_RES_psd3_4S_Y3012->SetMaximum(0.2496786);
   Graph_RES_psd3_4S_Y3012->SetDirectory(0);
   Graph_RES_psd3_4S_Y3012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_RES_psd3_4S_Y3012->SetLineColor(ci);
   Graph_RES_psd3_4S_Y3012->GetXaxis()->SetLabelFont(42);
   Graph_RES_psd3_4S_Y3012->GetXaxis()->SetLabelSize(0.035);
   Graph_RES_psd3_4S_Y3012->GetXaxis()->SetTitleSize(0.035);
   Graph_RES_psd3_4S_Y3012->GetXaxis()->SetTitleFont(42);
   Graph_RES_psd3_4S_Y3012->GetYaxis()->SetLabelFont(42);
   Graph_RES_psd3_4S_Y3012->GetYaxis()->SetLabelSize(0.035);
   Graph_RES_psd3_4S_Y3012->GetYaxis()->SetTitleSize(0.035);
   Graph_RES_psd3_4S_Y3012->GetYaxis()->SetTitleOffset(0);
   Graph_RES_psd3_4S_Y3012->GetYaxis()->SetTitleFont(42);
   Graph_RES_psd3_4S_Y3012->GetZaxis()->SetLabelFont(42);
   Graph_RES_psd3_4S_Y3012->GetZaxis()->SetLabelSize(0.035);
   Graph_RES_psd3_4S_Y3012->GetZaxis()->SetTitleSize(0.035);
   Graph_RES_psd3_4S_Y3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_RES_psd3_4S_Y3012);
   
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
   TLegendEntry *entry=leg->AddEntry("RES_psd1_4S_X","R_{1,X} [PSD1]","lpf");
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
   entry=leg->AddEntry("RES_psd1_4S_Y","R_{1,Y} [PSD1]","lpf");
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
   entry=leg->AddEntry("RES_psd2_4S_X","R_{1,X} [PSD2]","lpf");
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
   entry=leg->AddEntry("RES_psd2_4S_Y","R_{1,Y} [PSD2]","lpf");
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
   entry=leg->AddEntry("RES_psd3_4S_X","R_{1,X} [PSD3]","lpf");
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
   entry=leg->AddEntry("RES_psd3_4S_Y","R_{1,Y} [PSD3]","lpf");
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
   pt_LaTex = pt->AddText("3 PSD + 1 TPC subevents");
   pt->Draw();
   noname->Modified();
   noname->cd();
   noname->SetSelected(noname);
}
