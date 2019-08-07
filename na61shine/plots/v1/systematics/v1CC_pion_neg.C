void v1CC_pion_neg()
{
//=========Macro generated from canvas: noname/noname
//=========  (Thu Jun  6 01:31:29 2019) by ROOT version 6.14/08
   TCanvas *noname = new TCanvas("noname", "noname",50,114,800,600);
   noname->Range(-0.4220779,-0.03670886,2.824675,0.1151899);
   noname->SetFillColor(0);
   noname->SetBorderMode(0);
   noname->SetBorderSize(2);
   noname->SetLeftMargin(0.13);
   noname->SetFrameBorderMode(0);
   noname->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx3022[11] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.6,
   2,
   2.4,
   2.8};
   Double_t Graph_fy3022[11] = {
   -0.006642591,
   -0.00692892,
   -0.01014358,
   -0.004587781,
   0.0122575,
   0.02762763,
   0.04194301,
   0.05774335,
   0.04932612,
   0.1208636,
   0.004257669};
   Double_t Graph_felx3022[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fely3022[11] = {
   0.001018489,
   0.00145104,
   0.001906585,
   0.002595134,
   0.004503575,
   0.00519673,
   0.007245923,
   0.01269679,
   0.01722681,
   0.02696741,
   0.06244519};
   Double_t Graph_fehx3022[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fehy3022[11] = {
   0.001018489,
   0.00145104,
   0.001906585,
   0.002595134,
   0.004503575,
   0.00519673,
   0.007245923,
   0.01269679,
   0.01722681,
   0.02696741,
   0.06244519};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3022,Graph_fy3022,Graph_felx3022,Graph_fehx3022,Graph_fely3022,Graph_fehy3022);
   grae->SetName("Graph");
   grae->SetTitle("R_{1} [PSD1]");
   grae->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","R_{1} [PSD1]",100,0,3.07);
   Graph_Graph3022->SetMinimum(-0.07878937);
   Graph_Graph3022->SetMaximum(0.1684329);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3022->SetLineColor(ci);
   Graph_Graph3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3022);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3023[11] = {
   0.11,
   0.31,
   0.51,
   0.71,
   0.91,
   1.11,
   1.31,
   1.61,
   2.01,
   2.41,
   2.81};
   Double_t Graph_fy3023[11] = {
   -0.005855552,
   -0.007378732,
   -0.009603959,
   -0.001904556,
   0.009610929,
   0.02400831,
   0.03723348,
   0.05025826,
   0.04639983,
   0.0667236,
   0.03858453};
   Double_t Graph_felx3023[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fely3023[11] = {
   0.0008473991,
   0.0008687074,
   0.001638422,
   0.002066353,
   0.002133492,
   0.005061517,
   0.006145841,
   0.006913417,
   0.01429117,
   0.02834944,
   0.0408825};
   Double_t Graph_fehx3023[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fehy3023[11] = {
   0.0008473991,
   0.0008687074,
   0.001638422,
   0.002066353,
   0.002133492,
   0.005061517,
   0.006145841,
   0.006913417,
   0.01429117,
   0.02834944,
   0.0408825};
   grae = new TGraphAsymmErrors(11,Graph_fx3023,Graph_fy3023,Graph_felx3023,Graph_fehx3023,Graph_fely3023,Graph_fehy3023);
   grae->SetName("Graph");
   grae->SetTitle("R_{1} [PSD2]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","R_{1} [PSD2]",100,0,3.08);
   Graph_Graph3023->SetMinimum(-0.02187392);
   Graph_Graph3023->SetMaximum(0.1057046);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3023->SetLineColor(ci);
   Graph_Graph3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3023);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3024[11] = {
   0.12,
   0.32,
   0.52,
   0.72,
   0.92,
   1.12,
   1.32,
   1.62,
   2.02,
   2.42,
   2.82};
   Double_t Graph_fy3024[11] = {
   -0.004918071,
   -0.007583862,
   -0.008559618,
   -0.004183957,
   0.01072883,
   0.01921173,
   0.02830703,
   0.0548253,
   0.05486915,
   0.06219235,
   0.07204278};
   Double_t Graph_felx3024[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fely3024[11] = {
   0.0008376697,
   0.001066612,
   0.001478123,
   0.002214522,
   0.003012101,
   0.004004637,
   0.005845279,
   0.007014277,
   0.01189272,
   0.0275841,
   0.03799342};
   Double_t Graph_fehx3024[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fehy3024[11] = {
   0.0008376697,
   0.001066612,
   0.001478123,
   0.002214522,
   0.003012101,
   0.004004637,
   0.005845279,
   0.007014277,
   0.01189272,
   0.0275841,
   0.03799342};
   grae = new TGraphAsymmErrors(11,Graph_fx3024,Graph_fy3024,Graph_felx3024,Graph_fehx3024,Graph_fely3024,Graph_fehy3024);
   grae->SetName("Graph");
   grae->SetTitle("R_{1} [PSD3]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","R_{1} [PSD3]",100,0,3.09);
   Graph_Graph3024->SetMinimum(-0.02204513);
   Graph_Graph3024->SetMaximum(0.1220436);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3024->SetLineColor(ci);
   Graph_Graph3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3024);
   
   multigraph->Add(grae,"pZ");
   multigraph->Draw("Ap");
   multigraph->GetXaxis()->SetTitle("p_{T} (GeV/#it{c})");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.045);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("v_{1}");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.045);
   multigraph->GetYaxis()->SetTitleOffset(0);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TPaveText *pt = new TPaveText(0.55,0.2,0.85,0.29,"brNDC");
   pt->SetName("");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(11);
   pt->SetTextSize(0.04);
   TText *pt_LaTex = pt->AddText("0 < #it{y} < 1.2");
   pt_LaTex = pt->AddText("PSD centrality 10-25%");
   pt->Draw();
   
   pt = new TPaveText(0.15,0.78,0.4,0.87,"brNDC");
   pt->SetName("");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(11);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("NA61/SHINE performance");
   pt_LaTex = pt->AddText("Pb+Pb @ 13#it{A} GeV/#it{c}");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.15,0.45,0.4,0.6,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph","R_{1} [PSD1]","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","R_{1} [PSD2]","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","R_{1} [PSD3]","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   pt = new TPaveText(0.15,0.6,0.4,0.68,"brNDC");
   pt->SetName("");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   pt_LaTex = pt->AddText("p  #it{v}_{1}  {#Psi_{proj}, SP}");
   pt_LaTex = pt->AddText("XY combined");
   pt->Draw();
   TLine *line = new TLine(0,0,2.5,0);
   line->SetLineStyle(2);
   line->Draw();
   noname->Modified();
   noname->cd();
   noname->SetSelected(noname);
}
