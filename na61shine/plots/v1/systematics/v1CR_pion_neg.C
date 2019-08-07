void v1CR_pion_neg()
{
//=========Macro generated from canvas: noname/noname
//=========  (Thu Jun  6 01:31:30 2019) by ROOT version 6.14/08
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
   
   Double_t Graph_fx3025[11] = {
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
   Double_t Graph_fy3025[11] = {
   -0.00524781,
   -0.006832625,
   -0.007617695,
   -0.002562055,
   0.01054528,
   0.02494948,
   0.03640617,
   0.04644603,
   0.06326286,
   0.07242062,
   0.01743958};
   Double_t Graph_felx3025[11] = {
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
   Double_t Graph_fely3025[11] = {
   0.0009576292,
   0.0006623381,
   0.001242027,
   0.001720734,
   0.002407991,
   0.003892059,
   0.004933227,
   0.005732951,
   0.01147437,
   0.01876343,
   0.03427822};
   Double_t Graph_fehx3025[11] = {
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
   Double_t Graph_fehy3025[11] = {
   0.0009576292,
   0.0006623381,
   0.001242027,
   0.001720734,
   0.002407991,
   0.003892059,
   0.004933227,
   0.005732951,
   0.01147437,
   0.01876343,
   0.03427822};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3025,Graph_fy3025,Graph_felx3025,Graph_fehx3025,Graph_fely3025,Graph_fehy3025);
   grae->SetName("Graph");
   grae->SetTitle("R_{1}^{X}");
   grae->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","R_{1}^{X}",100,0,3.07);
   Graph_Graph3025->SetMinimum(-0.02764091);
   Graph_Graph3025->SetMaximum(0.1019863);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3025->SetLineColor(ci);
   Graph_Graph3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3025);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3026[11] = {
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
   Double_t Graph_fy3026[11] = {
   -0.006362999,
   -0.007761717,
   -0.01125374,
   -0.004555474,
   0.01118623,
   0.0222823,
   0.03524951,
   0.06210525,
   0.03713387,
   0.09409908,
   0.0591504};
   Double_t Graph_felx3026[11] = {
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
   Double_t Graph_fely3026[11] = {
   0.001170586,
   0.001823871,
   0.002583388,
   0.003878048,
   0.004700164,
   0.006230122,
   0.01186152,
   0.01594865,
   0.02241535,
   0.05460257,
   0.08381446};
   Double_t Graph_fehx3026[11] = {
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
   Double_t Graph_fehy3026[11] = {
   0.001170586,
   0.001823871,
   0.002583388,
   0.003878048,
   0.004700164,
   0.006230122,
   0.01186152,
   0.01594865,
   0.02241535,
   0.05460257,
   0.08381446};
   grae = new TGraphAsymmErrors(11,Graph_fx3026,Graph_fy3026,Graph_felx3026,Graph_fehx3026,Graph_fely3026,Graph_fehy3026);
   grae->SetName("Graph");
   grae->SetTitle("R_{1}^{Y}");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","R_{1}^{Y}",100,0,3.08);
   Graph_Graph3026->SetMinimum(-0.04200063);
   Graph_Graph3026->SetMaximum(0.1660382);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3026->SetLineColor(ci);
   Graph_Graph3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3026);
   
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
   
   pt = new TPaveText(0.15,0.6,0.4,0.68,"brNDC");
   pt->SetName("");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(11);
   pt->SetTextFont(42);
   pt->SetTextSize(0.035);
   pt_LaTex = pt->AddText("#pi^{-}  #it{v}_{1}  {#Psi_{proj}, SP}");
   pt_LaTex = pt->AddText("PSD combined");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.15,0.45,0.4,0.6,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph","R_{1}^{X}","lpf");
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
   entry=leg->AddEntry("Graph","R_{1}^{Y}","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
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
