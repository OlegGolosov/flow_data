void v2VsCentrality_pion_neg()
{
//=========Macro generated from canvas: noname/noname
//=========  (Thu Jun  6 01:31:31 2019) by ROOT version 6.14/08
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
   
   Double_t Graph_fx3035[11] = {
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
   Double_t Graph_fy3035[11] = {
   0.005436147,
   0.008949644,
   0.01030502,
   0.01786241,
   0.01445128,
   -0.007206052,
   0.02223035,
   0.03123483,
   0.03372694,
   -0.03520361,
   0.1879536};
   Double_t Graph_felx3035[11] = {
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
   Double_t Graph_fely3035[11] = {
   0.002979582,
   0.002142433,
   0.004373705,
   0.007028846,
   0.009984577,
   0.009861869,
   0.0168443,
   0.01786505,
   0.02829958,
   0.07566463,
   0.152952};
   Double_t Graph_fehx3035[11] = {
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
   Double_t Graph_fehy3035[11] = {
   0.002979582,
   0.002142433,
   0.004373705,
   0.007028846,
   0.009984577,
   0.009861869,
   0.0168443,
   0.01786505,
   0.02829958,
   0.07566463,
   0.152952};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3035,Graph_fy3035,Graph_felx3035,Graph_fehx3035,Graph_fely3035,Graph_fehy3035);
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
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","0-10%",100,0,3.07);
   Graph_Graph3035->SetMinimum(-0.1560456);
   Graph_Graph3035->SetMaximum(0.3860829);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3035->SetLineColor(ci);
   Graph_Graph3035->GetXaxis()->SetLabelFont(42);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3035->GetXaxis()->SetTitleFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelFont(42);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3035->GetYaxis()->SetTitleFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelFont(42);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3035);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3036[11] = {
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
   Double_t Graph_fy3036[11] = {
   -0.001890982,
   0.01319337,
   0.02163874,
   0.01824328,
   0.02564004,
   0.04676215,
   0.04561438,
   0.04717507,
   0.0408768,
   0.08627691,
   0.02109085};
   Double_t Graph_felx3036[11] = {
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
   Double_t Graph_fely3036[11] = {
   0.001429988,
   0.002423742,
   0.00248537,
   0.003203817,
   0.005547448,
   0.006144996,
   0.01208376,
   0.01351894,
   0.02181227,
   0.04316103,
   0.05426008};
   Double_t Graph_fehx3036[11] = {
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
   Double_t Graph_fehy3036[11] = {
   0.001429988,
   0.002423742,
   0.00248537,
   0.003203817,
   0.005547448,
   0.006144996,
   0.01208376,
   0.01351894,
   0.02181227,
   0.04316103,
   0.05426008};
   grae = new TGraphAsymmErrors(11,Graph_fx3036,Graph_fy3036,Graph_felx3036,Graph_fehx3036,Graph_fely3036,Graph_fehy3036);
   grae->SetName("Graph");
   grae->SetTitle("10-25%");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9933");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","10-25%",100,0,3.09);
   Graph_Graph3036->SetMinimum(-0.04942995);
   Graph_Graph3036->SetMaximum(0.1456987);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3036->SetLineColor(ci);
   Graph_Graph3036->GetXaxis()->SetLabelFont(42);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3036->GetXaxis()->SetTitleFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelFont(42);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3036->GetYaxis()->SetTitleFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelFont(42);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3036);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3037[11] = {
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
   Double_t Graph_fy3037[11] = {
   0.003706486,
   0.01911273,
   0.02670237,
   0.04811184,
   0.04018944,
   0.07842634,
   0.08773721,
   0.1049017,
   0.06278861,
   0.1279906,
   -0.7054033};
   Double_t Graph_felx3037[11] = {
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
   Double_t Graph_fely3037[11] = {
   0.002225991,
   0.003453957,
   0.00270083,
   0.005256269,
   0.009680902,
   0.01086796,
   0.0174351,
   0.02009546,
   0.03463471,
   0.05973693,
   0.8283749};
   Double_t Graph_fehx3037[11] = {
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
   Double_t Graph_fehy3037[11] = {
   0.002225991,
   0.003453957,
   0.00270083,
   0.005256269,
   0.009680902,
   0.01086796,
   0.0174351,
   0.02009546,
   0.03463471,
   0.05973693,
   0.8283749};
   grae = new TGraphAsymmErrors(11,Graph_fx3037,Graph_fy3037,Graph_felx3037,Graph_fehx3037,Graph_fely3037,Graph_fehy3037);
   grae->SetName("Graph");
   grae->SetTitle("25-45%");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3037 = new TH1F("Graph_Graph3037","25-45%",100,0,3.11);
   Graph_Graph3037->SetMinimum(-1.705929);
   Graph_Graph3037->SetMaximum(0.3598781);
   Graph_Graph3037->SetDirectory(0);
   Graph_Graph3037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3037->SetLineColor(ci);
   Graph_Graph3037->GetXaxis()->SetLabelFont(42);
   Graph_Graph3037->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3037->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3037->GetXaxis()->SetTitleFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelFont(42);
   Graph_Graph3037->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3037->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3037->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3037->GetYaxis()->SetTitleFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelFont(42);
   Graph_Graph3037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3037);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3038[11] = {
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
   Double_t Graph_fy3038[11] = {
   0.008634215,
   0.02064151,
   0.0279415,
   0.07244378,
   0.03784588,
   0.05481196,
   0.04206133,
   0.0867971,
   0.0751712,
   0.5062973,
   0.0666661};
   Double_t Graph_felx3038[11] = {
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
   Double_t Graph_fely3038[11] = {
   0.003307227,
   0.004475604,
   0.008016479,
   0.009720526,
   0.01256318,
   0.02136316,
   0.02806135,
   0.04443199,
   0.07893973,
   0.2493145,
   0.6473174};
   Double_t Graph_fehx3038[11] = {
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
   Double_t Graph_fehy3038[11] = {
   0.003307227,
   0.004475604,
   0.008016479,
   0.009720526,
   0.01256318,
   0.02136316,
   0.02806135,
   0.04443199,
   0.07893973,
   0.2493145,
   0.6473174};
   grae = new TGraphAsymmErrors(11,Graph_fx3038,Graph_fy3038,Graph_felx3038,Graph_fehx3038,Graph_fely3038,Graph_fehy3038);
   grae->SetName("Graph");
   grae->SetTitle("45-60%");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3038 = new TH1F("Graph_Graph3038","45-60%",100,0,3.13);
   Graph_Graph3038->SetMinimum(-0.7142777);
   Graph_Graph3038->SetMaximum(0.8892381);
   Graph_Graph3038->SetDirectory(0);
   Graph_Graph3038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3038->SetLineColor(ci);
   Graph_Graph3038->GetXaxis()->SetLabelFont(42);
   Graph_Graph3038->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3038->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3038->GetXaxis()->SetTitleFont(42);
   Graph_Graph3038->GetYaxis()->SetLabelFont(42);
   Graph_Graph3038->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3038->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3038->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3038->GetYaxis()->SetTitleFont(42);
   Graph_Graph3038->GetZaxis()->SetLabelFont(42);
   Graph_Graph3038->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3038->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3038->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3038);
   
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
   pt_LaTex = pt->AddText("#pi^{-} #it{v}_{2}  {#Psi_{proj}, SP_{y}}, PSD");
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
