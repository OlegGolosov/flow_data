void v1VsCentrality_proton()
{
//=========Macro generated from canvas: noname/noname
//=========  (Thu Jun  6 01:31:30 2019) by ROOT version 6.14/08
   TCanvas *noname = new TCanvas("noname", "noname",50,114,800,600);
   noname->Range(-0.4220779,-0.03227848,2.824675,0.1702532);
   noname->SetFillColor(0);
   noname->SetBorderMode(0);
   noname->SetBorderSize(2);
   noname->SetLeftMargin(0.13);
   noname->SetFrameBorderMode(0);
   noname->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx3027[11] = {
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
   Double_t Graph_fy3027[11] = {
   0.006884058,
   0.02189508,
   0.02623833,
   0.03734015,
   0.05768844,
   0.06446789,
   0.07734592,
   0.07233051,
   0.0605293,
   0.04620635,
   0.0180508};
   Double_t Graph_felx3027[11] = {
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
   Double_t Graph_fely3027[11] = {
   0.002698433,
   0.001717603,
   0.001568353,
   0.002030053,
   0.002948816,
   0.002863595,
   0.003809484,
   0.004519385,
   0.01054563,
   0.01693978,
   0.03542434};
   Double_t Graph_fehx3027[11] = {
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
   Double_t Graph_fehy3027[11] = {
   0.002698433,
   0.001717603,
   0.001568353,
   0.002030053,
   0.002948816,
   0.002863595,
   0.003809484,
   0.004519385,
   0.01054563,
   0.01693978,
   0.03542434};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3027,Graph_fy3027,Graph_felx3027,Graph_fehx3027,Graph_fely3027,Graph_fehy3027);
   grae->SetName("Graph");
   grae->SetTitle("0-10%");
   grae->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","0-10%",100,0,3.07);
   Graph_Graph3027->SetMinimum(-0.02722644);
   Graph_Graph3027->SetMaximum(0.0910083);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3027->SetLineColor(ci);
   Graph_Graph3027->GetXaxis()->SetLabelFont(42);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3027->GetXaxis()->SetTitleFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3027->GetYaxis()->SetTitleFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3027);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3028[11] = {
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
   Double_t Graph_fy3028[11] = {
   -0.0008649583,
   0.02395269,
   0.03612406,
   0.06132576,
   0.08196471,
   0.09695986,
   0.1054368,
   0.1129503,
   0.09559709,
   0.07021873,
   0.05182304};
   Double_t Graph_felx3028[11] = {
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
   Double_t Graph_fely3028[11] = {
   0.001382305,
   0.001175309,
   0.0007450719,
   0.0009240663,
   0.001543449,
   0.001439243,
   0.003154334,
   0.002236023,
   0.006512362,
   0.009784321,
   0.02408882};
   Double_t Graph_fehx3028[11] = {
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
   Double_t Graph_fehy3028[11] = {
   0.001382305,
   0.001175309,
   0.0007450719,
   0.0009240663,
   0.001543449,
   0.001439243,
   0.003154334,
   0.002236023,
   0.006512362,
   0.009784321,
   0.02408882};
   grae = new TGraphAsymmErrors(11,Graph_fx3028,Graph_fy3028,Graph_felx3028,Graph_fehx3028,Graph_fely3028,Graph_fehy3028);
   grae->SetName("Graph");
   grae->SetTitle("10-25%");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9933");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","10-25%",100,0,3.09);
   Graph_Graph3028->SetMinimum(-0.01399063);
   Graph_Graph3028->SetMaximum(0.1269297);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3028->SetLineColor(ci);
   Graph_Graph3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3028);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3029[11] = {
   0.14,
   0.34,
   0.54,
   0.74,
   0.94,
   1.14,
   1.34,
   1.64,
   2.04,
   2.44,
   2.84};
   Double_t Graph_fy3029[11] = {
   0.00170475,
   0.02285027,
   0.0391165,
   0.0622281,
   0.08381949,
   0.1013516,
   0.1090823,
   0.1229948,
   0.09624867,
   0.1022478,
   0.08796046};
   Double_t Graph_felx3029[11] = {
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
   Double_t Graph_fely3029[11] = {
   0.001776681,
   0.00130155,
   0.001544109,
   0.001497025,
   0.002042684,
   0.003083511,
   0.004094266,
   0.005753531,
   0.00993936,
   0.02070635,
   0.03607869};
   Double_t Graph_fehx3029[11] = {
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
   Double_t Graph_fehy3029[11] = {
   0.001776681,
   0.00130155,
   0.001544109,
   0.001497025,
   0.002042684,
   0.003083511,
   0.004094266,
   0.005753531,
   0.00993936,
   0.02070635,
   0.03607869};
   grae = new TGraphAsymmErrors(11,Graph_fx3029,Graph_fy3029,Graph_felx3029,Graph_fehx3029,Graph_fely3029,Graph_fehy3029);
   grae->SetName("Graph");
   grae->SetTitle("25-45%");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","25-45%",100,0,3.11);
   Graph_Graph3029->SetMinimum(-0.01295395);
   Graph_Graph3029->SetMaximum(0.1416303);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3029->SetLineColor(ci);
   Graph_Graph3029->GetXaxis()->SetLabelFont(42);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3029->GetXaxis()->SetTitleFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelFont(42);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3029->GetYaxis()->SetTitleFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelFont(42);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3029->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3029);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3030[11] = {
   0.16,
   0.36,
   0.56,
   0.76,
   0.96,
   1.16,
   1.36,
   1.66,
   2.06,
   2.46,
   2.86};
   Double_t Graph_fy3030[11] = {
   0.001299819,
   0.01806166,
   0.03627079,
   0.0441669,
   0.06110378,
   0.0776179,
   0.08571646,
   0.09417676,
   0.1103838,
   -0.07879906,
   0.1834313};
   Double_t Graph_felx3030[11] = {
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
   Double_t Graph_fely3030[11] = {
   0.002913004,
   0.003153493,
   0.00253091,
   0.004139325,
   0.004275434,
   0.01010456,
   0.01035819,
   0.01233525,
   0.03145417,
   0.05253354,
   0.1155068};
   Double_t Graph_fehx3030[11] = {
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
   Double_t Graph_fehy3030[11] = {
   0.002913004,
   0.003153493,
   0.00253091,
   0.004139325,
   0.004275434,
   0.01010456,
   0.01035819,
   0.01233525,
   0.03145417,
   0.05253354,
   0.1155068};
   grae = new TGraphAsymmErrors(11,Graph_fx3030,Graph_fy3030,Graph_felx3030,Graph_fehx3030,Graph_fely3030,Graph_fehy3030);
   grae->SetName("Graph");
   grae->SetTitle("45-60%");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","45-60%",100,0,3.13);
   Graph_Graph3030->SetMinimum(-0.1743597);
   Graph_Graph3030->SetMaximum(0.3419652);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3030->SetLineColor(ci);
   Graph_Graph3030->GetXaxis()->SetLabelFont(42);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3030->GetXaxis()->SetTitleFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelFont(42);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3030->GetYaxis()->SetTitleFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelFont(42);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3030->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3030);
   
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
   
   TPaveText *pt = new TPaveText(0.55,0.15,0.85,0.24,"brNDC");
   pt->SetName("");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(11);
   pt->SetTextSize(0.04);
   TText *pt_LaTex = pt->AddText("0 < #it{y} < 1.2");
   pt_LaTex = pt->AddText("PSD centrality");
   pt->Draw();
   
   pt = new TPaveText(0.15,0.78,0.4,0.87,"brNDC");
   pt->SetName("");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(11);
   pt->SetTextSize(0.04);
   pt_LaTex = pt->AddText("NA61/SHINE preliminary");
   pt_LaTex = pt->AddText("Pb+Pb @ 13#it{A} GeV/#it{c}");
   pt->Draw();
   
   pt = new TPaveText(0.15,0.68,0.4,0.72,"brNDC");
   pt->SetName("");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   pt_LaTex = pt->AddText("p #it{v}_{1}  {#Psi_{proj}, SP_{x}}, PSD");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.15,0.5,0.4,0.68,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph","0-10%","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","10-25%","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","25-45%","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","45-60%","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLine *line = new TLine(0,0,2.5,0);
   line->SetLineStyle(2);
   line->Draw();
   noname->Modified();
   noname->cd();
   noname->SetSelected(noname);
}
