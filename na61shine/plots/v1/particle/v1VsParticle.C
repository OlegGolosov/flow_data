void v1VsParticle()
{
//=========Macro generated from canvas: noname/noname
//=========  (Sat Jun  8 23:53:42 2019) by ROOT version 6.14/08
   TCanvas *noname = new TCanvas("noname", "noname",200,264,800,600);
   noname->Range(-0.4220779,-0.0778481,2.824675,0.1753165);
   noname->SetFillColor(0);
   noname->SetBorderMode(0);
   noname->SetBorderSize(2);
   noname->SetLeftMargin(0.13);
   noname->SetFrameBorderMode(0);
   noname->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx3031[11] = {
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
   Double_t Graph_fy3031[11] = {
   -0.00718556,
   -0.01339934,
   -0.01534291,
   -0.009057328,
   0.008267486,
   0.02334677,
   0.03862637,
   0.04887167,
   0.05679111,
   0.04776109,
   0.1024793};
   Double_t Graph_felx3031[11] = {
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
   Double_t Graph_fely3031[11] = {
   0.0009410298,
   0.001039064,
   0.001481268,
   0.001657199,
   0.003364433,
   0.004098866,
   0.008514188,
   0.008089071,
   0.01298261,
   0.03268679,
   0.09017208};
   Double_t Graph_fehx3031[11] = {
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
   Double_t Graph_fehy3031[11] = {
   0.0009410298,
   0.001039064,
   0.001481268,
   0.001657199,
   0.003364433,
   0.004098866,
   0.008514188,
   0.008089071,
   0.01298261,
   0.03268679,
   0.09017208};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3031,Graph_fy3031,Graph_felx3031,Graph_fehx3031,Graph_fely3031,Graph_fehy3031);
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
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","#pi^{-}",100,0,3.07);
   Graph_Graph3031->SetMinimum(-0.03777173);
   Graph_Graph3031->SetMaximum(0.213599);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3031->SetLineColor(ci);
   Graph_Graph3031->GetXaxis()->SetLabelFont(42);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3031->GetXaxis()->SetTitleFont(42);
   Graph_Graph3031->GetYaxis()->SetLabelFont(42);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3031->GetYaxis()->SetTitleFont(42);
   Graph_Graph3031->GetZaxis()->SetLabelFont(42);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3031->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3031);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3032[11] = {
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
   Double_t Graph_fy3032[11] = {
   -0.0004517507,
   0.02348627,
   0.0392702,
   0.06388911,
   0.08467739,
   0.1010506,
   0.1124201,
   0.1189271,
   0.09583308,
   0.07056255,
   0.04886022};
   Double_t Graph_felx3032[11] = {
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
   Double_t Graph_fely3032[11] = {
   0.001746808,
   0.001085374,
   0.001034256,
   0.001113352,
   0.0009650247,
   0.001529832,
   0.002437711,
   0.003249423,
   0.006067681,
   0.01319639,
   0.01585485};
   Double_t Graph_fehx3032[11] = {
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
   Double_t Graph_fehy3032[11] = {
   0.001746808,
   0.001085374,
   0.001034256,
   0.001113352,
   0.0009650247,
   0.001529832,
   0.002437711,
   0.003249423,
   0.006067681,
   0.01319639,
   0.01585485};
   grae = new TGraphAsymmErrors(11,Graph_fx3032,Graph_fy3032,Graph_felx3032,Graph_fehx3032,Graph_fely3032,Graph_fehy3032);
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
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","p",100,0,3.07);
   Graph_Graph3032->SetMinimum(-0.01463607);
   Graph_Graph3032->SetMaximum(0.1346141);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3032->SetLineColor(ci);
   Graph_Graph3032->GetXaxis()->SetLabelFont(42);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3032->GetXaxis()->SetTitleFont(42);
   Graph_Graph3032->GetYaxis()->SetLabelFont(42);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3032->GetYaxis()->SetTitleFont(42);
   Graph_Graph3032->GetZaxis()->SetLabelFont(42);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3032->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3032);
   
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
   pt_LaTex = pt->AddText("#it{v}_{1}  {#Psi_{proj}, SP_{x}}, PSD");
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
