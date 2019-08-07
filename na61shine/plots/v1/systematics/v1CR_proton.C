void v1CR_proton()
{
//=========Macro generated from canvas: noname/noname
//=========  (Thu Jun  6 01:31:29 2019) by ROOT version 6.14/08
   TCanvas *noname = new TCanvas("noname", "noname",50,114,800,600);
   noname->Range(-0.4220779,-0.0478481,2.824675,0.2053165);
   noname->SetFillColor(0);
   noname->SetBorderMode(0);
   noname->SetBorderSize(2);
   noname->SetLeftMargin(0.13);
   noname->SetFrameBorderMode(0);
   noname->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx3016[11] = {
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
   Double_t Graph_fy3016[11] = {
   -0.0006677962,
   0.02352794,
   0.03641812,
   0.06171519,
   0.08236978,
   0.09770288,
   0.1060033,
   0.1127419,
   0.09864553,
   0.0736775,
   0.06150571};
   Double_t Graph_felx3016[11] = {
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
   Double_t Graph_fely3016[11] = {
   0.001171697,
   0.001243109,
   0.0006214032,
   0.001068094,
   0.001433937,
   0.001447829,
   0.002646038,
   0.002308434,
   0.005700327,
   0.01185099,
   0.01749428};
   Double_t Graph_fehx3016[11] = {
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
   Double_t Graph_fehy3016[11] = {
   0.001171697,
   0.001243109,
   0.0006214032,
   0.001068094,
   0.001433937,
   0.001447829,
   0.002646038,
   0.002308434,
   0.005700327,
   0.01185099,
   0.01749428};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3016,Graph_fy3016,Graph_felx3016,Graph_fehx3016,Graph_fely3016,Graph_fehy3016);
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
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","R_{1}^{X}",100,0,3.07);
   Graph_Graph3016->SetMinimum(-0.01352847);
   Graph_Graph3016->SetMaximum(0.1267393);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3016->SetLineColor(ci);
   Graph_Graph3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3016);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3017[11] = {
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
   Double_t Graph_fy3017[11] = {
   0.002847288,
   0.0181413,
   0.03044491,
   0.05698514,
   0.08486642,
   0.1079748,
   0.1341131,
   0.1395159,
   0.135794,
   0.1143935,
   0.05198851};
   Double_t Graph_felx3017[11] = {
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
   Double_t Graph_fely3017[11] = {
   0.002804274,
   0.001726669,
   0.001610492,
   0.001448558,
   0.001922219,
   0.002894375,
   0.004331662,
   0.005883123,
   0.0130388,
   0.03226499,
   0.04071505};
   Double_t Graph_fehx3017[11] = {
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
   Double_t Graph_fehy3017[11] = {
   0.002804274,
   0.001726669,
   0.001610492,
   0.001448558,
   0.001922219,
   0.002894375,
   0.004331662,
   0.005883123,
   0.0130388,
   0.03226499,
   0.04071505};
   grae = new TGraphAsymmErrors(11,Graph_fx3017,Graph_fy3017,Graph_felx3017,Graph_fehx3017,Graph_fely3017,Graph_fehy3017);
   grae->SetName("Graph");
   grae->SetTitle("R_{1}^{Y}");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","R_{1}^{Y}",100,0,3.08);
   Graph_Graph3017->SetMinimum(3.871309e-05);
   Graph_Graph3017->SetMaximum(0.1637117);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3017->SetLineColor(ci);
   Graph_Graph3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3017);
   
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
   pt_LaTex = pt->AddText("p  #it{v}_{1}  {#Psi_{proj}, SP}");
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
