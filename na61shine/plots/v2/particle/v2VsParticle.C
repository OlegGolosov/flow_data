void v2VsParticle()
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
   
   Double_t Graph_fx3033[11] = {
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
   Double_t Graph_fy3033[11] = {
   9.499963e-05,
   0.01591223,
   0.0286136,
   0.03596909,
   0.04406472,
   0.06854267,
   0.06790716,
   0.08773457,
   0.06765951,
   0.09739342,
   0.1366781};
   Double_t Graph_felx3033[11] = {
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
   Double_t Graph_fely3033[11] = {
   0.001567495,
   0.001787512,
   0.003125218,
   0.003807435,
   0.005274153,
   0.007650763,
   0.01149949,
   0.01207806,
   0.02456564,
   0.02277505,
   0.0808602};
   Double_t Graph_fehx3033[11] = {
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
   Double_t Graph_fehy3033[11] = {
   0.001567495,
   0.001787512,
   0.003125218,
   0.003807435,
   0.005274153,
   0.007650763,
   0.01149949,
   0.01207806,
   0.02456564,
   0.02277505,
   0.0808602};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3033,Graph_fy3033,Graph_felx3033,Graph_fehx3033,Graph_fely3033,Graph_fehy3033);
   grae->SetName("Graph");
   grae->SetTitle("#pi^{-}");
   grae->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","#pi^{-}",100,0,3.07);
   Graph_Graph3033->SetMinimum(-0.02337357);
   Graph_Graph3033->SetMaximum(0.2394394);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3033->SetLineColor(ci);
   Graph_Graph3033->GetXaxis()->SetLabelFont(42);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3033->GetXaxis()->SetTitleFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelFont(42);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3033->GetYaxis()->SetTitleFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelFont(42);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3033);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3034[11] = {
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
   Double_t Graph_fy3034[11] = {
   0.0009985806,
   0.0006291317,
   0.01677932,
   0.02908406,
   0.04971654,
   0.06659023,
   0.07877676,
   0.1016715,
   0.1149016,
   0.08422997,
   0.1242834};
   Double_t Graph_felx3034[11] = {
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
   Double_t Graph_fely3034[11] = {
   0.003261642,
   0.002163482,
   0.001995399,
   0.001631301,
   0.002683873,
   0.003243163,
   0.003912215,
   0.007140598,
   0.01563437,
   0.03554397,
   0.05037452};
   Double_t Graph_fehx3034[11] = {
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
   Double_t Graph_fehy3034[11] = {
   0.003261642,
   0.002163482,
   0.001995399,
   0.001631301,
   0.002683873,
   0.003243163,
   0.003912215,
   0.007140598,
   0.01563437,
   0.03554397,
   0.05037452};
   grae = new TGraphAsymmErrors(11,Graph_fx3034,Graph_fy3034,Graph_felx3034,Graph_fehx3034,Graph_fely3034,Graph_fehy3034);
   grae->SetName("Graph");
   grae->SetTitle("p");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","p",100,0,3.09);
   Graph_Graph3034->SetMinimum(-0.01995516);
   Graph_Graph3034->SetMaximum(0.19235);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3034->SetLineColor(ci);
   Graph_Graph3034->GetXaxis()->SetLabelFont(42);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3034->GetXaxis()->SetTitleFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelFont(42);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3034->GetYaxis()->SetTitleFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelFont(42);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3034);
   
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
   pt_LaTex = pt->AddText("PSD centrality 15-35%");
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
   pt_LaTex = pt->AddText("#it{v}_{2}  {#Psi_{proj}, SP_{y}}, PSD");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.15,0.5,0.4,0.68,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph","#pi^{-}","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","p","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(33);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   leg->Draw();
   TLine *line = new TLine(0,0,2.5,0);
   line->SetLineStyle(2);
   line->Draw();
   noname->Modified();
   noname->cd();
   noname->SetSelected(noname);
}
