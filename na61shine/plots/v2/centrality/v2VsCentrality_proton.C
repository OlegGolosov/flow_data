void v2VsCentrality_proton()
{
//=========Macro generated from canvas: noname/noname
//=========  (Thu Jun  6 01:31:31 2019) by ROOT version 6.14/08
   TCanvas *noname = new TCanvas("noname", "noname",50,114,800,600);
   noname->Range(-0.4220779,-0.04367089,2.824675,0.171519);
   noname->SetFillColor(0);
   noname->SetBorderMode(0);
   noname->SetBorderSize(2);
   noname->SetLeftMargin(0.13);
   noname->SetFrameBorderMode(0);
   noname->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx3039[11] = {
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
   Double_t Graph_fy3039[11] = {
   -0.002855951,
   0.003491491,
   0.005934215,
   0.01435035,
   0.01860988,
   0.02074359,
   0.029872,
   0.02638587,
   0.03560452,
   0.09721916,
   -0.08683297};
   Double_t Graph_felx3039[11] = {
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
   Double_t Graph_fely3039[11] = {
   0.008268063,
   0.004507227,
   0.002765378,
   0.003516386,
   0.007005751,
   0.00514017,
   0.009572933,
   0.01227984,
   0.02192401,
   0.05877396,
   0.113467};
   Double_t Graph_fehx3039[11] = {
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
   Double_t Graph_fehy3039[11] = {
   0.008268063,
   0.004507227,
   0.002765378,
   0.003516386,
   0.007005751,
   0.00514017,
   0.009572933,
   0.01227984,
   0.02192401,
   0.05877396,
   0.113467};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3039,Graph_fy3039,Graph_felx3039,Graph_fehx3039,Graph_fely3039,Graph_fehy3039);
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
   
   TH1F *Graph_Graph3039 = new TH1F("Graph_Graph3039","0-10%",100,0,3.07);
   Graph_Graph3039->SetMinimum(-0.2359293);
   Graph_Graph3039->SetMaximum(0.1916224);
   Graph_Graph3039->SetDirectory(0);
   Graph_Graph3039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3039->SetLineColor(ci);
   Graph_Graph3039->GetXaxis()->SetLabelFont(42);
   Graph_Graph3039->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3039->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3039->GetXaxis()->SetTitleFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelFont(42);
   Graph_Graph3039->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3039->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3039->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3039->GetYaxis()->SetTitleFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelFont(42);
   Graph_Graph3039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3039->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3039);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3040[11] = {
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
   Double_t Graph_fy3040[11] = {
   -0.001910977,
   0.002592637,
   0.01177144,
   0.02588212,
   0.04255651,
   0.05513658,
   0.06930593,
   0.08259918,
   0.09250532,
   0.05409773,
   0.144295};
   Double_t Graph_felx3040[11] = {
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
   Double_t Graph_fely3040[11] = {
   0.003245454,
   0.001647664,
   0.001387326,
   0.001630449,
   0.003215629,
   0.002271952,
   0.004996757,
   0.004706557,
   0.01281592,
   0.0247329,
   0.03526596};
   Double_t Graph_fehx3040[11] = {
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
   Double_t Graph_fehy3040[11] = {
   0.003245454,
   0.001647664,
   0.001387326,
   0.001630449,
   0.003215629,
   0.002271952,
   0.004996757,
   0.004706557,
   0.01281592,
   0.0247329,
   0.03526596};
   grae = new TGraphAsymmErrors(11,Graph_fx3040,Graph_fy3040,Graph_felx3040,Graph_fehx3040,Graph_fely3040,Graph_fehy3040);
   grae->SetName("Graph");
   grae->SetTitle("10-25%");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9933");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3040 = new TH1F("Graph_Graph3040","10-25%",100,0,3.09);
   Graph_Graph3040->SetMinimum(-0.02362817);
   Graph_Graph3040->SetMaximum(0.1980327);
   Graph_Graph3040->SetDirectory(0);
   Graph_Graph3040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3040->SetLineColor(ci);
   Graph_Graph3040->GetXaxis()->SetLabelFont(42);
   Graph_Graph3040->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3040->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3040->GetXaxis()->SetTitleFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelFont(42);
   Graph_Graph3040->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3040->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3040->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3040->GetYaxis()->SetTitleFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelFont(42);
   Graph_Graph3040->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3040->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3040->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3040);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3041[11] = {
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
   Double_t Graph_fy3041[11] = {
   0.001853186,
   0.001463357,
   0.01768087,
   0.02758844,
   0.05138351,
   0.072814,
   0.0778063,
   0.1104594,
   0.1061952,
   0.08202975,
   0.08265007};
   Double_t Graph_felx3041[11] = {
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
   Double_t Graph_fely3041[11] = {
   0.004606401,
   0.002652568,
   0.002445802,
   0.003203831,
   0.00378457,
   0.005079606,
   0.006914205,
   0.008231229,
   0.01504161,
   0.04356812,
   0.09051537};
   Double_t Graph_fehx3041[11] = {
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
   Double_t Graph_fehy3041[11] = {
   0.004606401,
   0.002652568,
   0.002445802,
   0.003203831,
   0.00378457,
   0.005079606,
   0.006914205,
   0.008231229,
   0.01504161,
   0.04356812,
   0.09051537};
   grae = new TGraphAsymmErrors(11,Graph_fx3041,Graph_fy3041,Graph_felx3041,Graph_fehx3041,Graph_fely3041,Graph_fehy3041);
   grae->SetName("Graph");
   grae->SetTitle("25-45%");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3041 = new TH1F("Graph_Graph3041","25-45%",100,0,3.11);
   Graph_Graph3041->SetMinimum(-0.02596837);
   Graph_Graph3041->SetMaximum(0.1912685);
   Graph_Graph3041->SetDirectory(0);
   Graph_Graph3041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3041->SetLineColor(ci);
   Graph_Graph3041->GetXaxis()->SetLabelFont(42);
   Graph_Graph3041->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3041->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3041->GetXaxis()->SetTitleFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelFont(42);
   Graph_Graph3041->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3041->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3041->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3041->GetYaxis()->SetTitleFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelFont(42);
   Graph_Graph3041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3041->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3041);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3042[11] = {
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
   Double_t Graph_fy3042[11] = {
   -0.01683246,
   0.003396195,
   0.0045475,
   0.0233652,
   0.03803685,
   0.06425565,
   0.04844687,
   0.09364695,
   0.1933363,
   0.2664803,
   -0.519166};
   Double_t Graph_felx3042[11] = {
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
   Double_t Graph_fely3042[11] = {
   0.007380679,
   0.005115358,
   0.005416772,
   0.005157364,
   0.00777247,
   0.007329985,
   0.01958396,
   0.02100541,
   0.05700848,
   0.1165816,
   0.4777686};
   Double_t Graph_fehx3042[11] = {
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
   Double_t Graph_fehy3042[11] = {
   0.007380679,
   0.005115358,
   0.005416772,
   0.005157364,
   0.00777247,
   0.007329985,
   0.01958396,
   0.02100541,
   0.05700848,
   0.1165816,
   0.4777686};
   grae = new TGraphAsymmErrors(11,Graph_fx3042,Graph_fy3042,Graph_felx3042,Graph_fehx3042,Graph_fely3042,Graph_fehy3042);
   grae->SetName("Graph");
   grae->SetTitle("45-60%");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3042 = new TH1F("Graph_Graph3042","45-60%",100,0,3.13);
   Graph_Graph3042->SetMinimum(-1.134934);
   Graph_Graph3042->SetMaximum(0.5210615);
   Graph_Graph3042->SetDirectory(0);
   Graph_Graph3042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3042->SetLineColor(ci);
   Graph_Graph3042->GetXaxis()->SetLabelFont(42);
   Graph_Graph3042->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3042->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3042->GetXaxis()->SetTitleFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelFont(42);
   Graph_Graph3042->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3042->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3042->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3042->GetYaxis()->SetTitleFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelFont(42);
   Graph_Graph3042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3042->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3042);
   
   multigraph->Add(grae,"pZ");
   multigraph->Draw("Ap");
   multigraph->GetXaxis()->SetTitle("p_{T} (GeV/#it{c})");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.045);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("v_{2}");
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
   pt_LaTex = pt->AddText("p #it{v}_{2}  {#Psi_{proj}, SP_{y}}, PSD");
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
