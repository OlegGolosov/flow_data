void v1VsCentrality_pion_neg()
{
//=========Macro generated from canvas: noname/noname
//=========  (Thu Jun  6 01:31:29 2019) by ROOT version 6.14/08
   TCanvas *noname = new TCanvas("noname", "noname",50,114,800,600);
   noname->Range(-0.3038961,-0.1078481,2.033766,0.1453165);
   noname->SetFillColor(0);
   noname->SetBorderMode(0);
   noname->SetBorderSize(2);
   noname->SetLeftMargin(0.13);
   noname->SetFrameBorderMode(0);
   noname->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx3018[11] = {
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
   Double_t Graph_fy3018[11] = {
   -0.0004441512,
   0.001676967,
   0.0004777398,
   0.007417442,
   0.01449318,
   0.03136867,
   0.02204024,
   0.04430317,
   0.03029644,
   0.064533,
   0.04974402};
   Double_t Graph_felx3018[11] = {
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
   Double_t Graph_fely3018[11] = {
   0.001599084,
   0.001301355,
   0.002403572,
   0.00387464,
   0.005936493,
   0.007429683,
   0.01135352,
   0.01090847,
   0.02144638,
   0.03566937,
   0.05756636};
   Double_t Graph_fehx3018[11] = {
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
   Double_t Graph_fehy3018[11] = {
   0.001599084,
   0.001301355,
   0.002403572,
   0.00387464,
   0.005936493,
   0.007429683,
   0.01135352,
   0.01090847,
   0.02144638,
   0.03566937,
   0.05756636};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3018,Graph_fy3018,Graph_felx3018,Graph_fehx3018,Graph_fely3018,Graph_fehy3018);
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
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","0-10%",100,0,3.07);
   Graph_Graph3018->SetMinimum(-0.01933561);
   Graph_Graph3018->SetMaximum(0.1188236);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3018->SetLineColor(ci);
   Graph_Graph3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3018);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3019[11] = {
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
   Double_t Graph_fy3019[11] = {
   -0.00505764,
   -0.006884327,
   -0.007881273,
   -0.002957192,
   0.01097764,
   0.02504569,
   0.03473813,
   0.04753673,
   0.06586975,
   0.07902171,
   0.01115978};
   Double_t Graph_felx3019[11] = {
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
   Double_t Graph_fely3019[11] = {
   0.0007092624,
   0.0007127004,
   0.001279756,
   0.002354043,
   0.002386693,
   0.003674381,
   0.005253949,
   0.005849689,
   0.02032037,
   0.02304196,
   0.03980815};
   Double_t Graph_fehx3019[11] = {
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
   Double_t Graph_fehy3019[11] = {
   0.0007092624,
   0.0007127004,
   0.001279756,
   0.002354043,
   0.002386693,
   0.003674381,
   0.005253949,
   0.005849689,
   0.02032037,
   0.02304196,
   0.03980815};
   grae = new TGraphAsymmErrors(11,Graph_fx3019,Graph_fy3019,Graph_felx3019,Graph_fehx3019,Graph_fely3019,Graph_fehy3019);
   grae->SetName("Graph");
   grae->SetTitle("10-25%");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9933");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff9933");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","10-25%",100,0,3.09);
   Graph_Graph3019->SetMinimum(-0.04171957);
   Graph_Graph3019->SetMaximum(0.1151349);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3019->SetLineColor(ci);
   Graph_Graph3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3019);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3020[11] = {
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
   Double_t Graph_fy3020[11] = {
   -0.01394677,
   -0.02185341,
   -0.02419717,
   -0.02003208,
   0.001414657,
   0.006201806,
   0.05003861,
   0.03835149,
   0.04645765,
   0.008420383,
   -0.1885413};
   Double_t Graph_felx3020[11] = {
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
   Double_t Graph_fely3020[11] = {
   0.001215943,
   0.00158416,
   0.002665665,
   0.003210035,
   0.003757403,
   0.007245961,
   0.01085077,
   0.0107257,
   0.02383715,
   0.04066556,
   0.5069748};
   Double_t Graph_fehx3020[11] = {
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
   Double_t Graph_fehy3020[11] = {
   0.001215943,
   0.00158416,
   0.002665665,
   0.003210035,
   0.003757403,
   0.007245961,
   0.01085077,
   0.0107257,
   0.02383715,
   0.04066556,
   0.5069748};
   grae = new TGraphAsymmErrors(11,Graph_fx3020,Graph_fy3020,Graph_felx3020,Graph_fehx3020,Graph_fely3020,Graph_fehy3020);
   grae->SetName("Graph");
   grae->SetTitle("25-45%");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","25-45%",100,0,3.11);
   Graph_Graph3020->SetMinimum(-0.7969111);
   Graph_Graph3020->SetMaximum(0.4198285);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3020->SetLineColor(ci);
   Graph_Graph3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3020);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3021[11] = {
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
   Double_t Graph_fy3021[11] = {
   -0.02576411,
   -0.04505076,
   -0.04411515,
   -0.03535867,
   -0.005316064,
   -0.01099152,
   0.03350191,
   0.04229889,
   -0.003684233,
   0.06620527,
   -0.3398835};
   Double_t Graph_felx3021[11] = {
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
   Double_t Graph_fely3021[11] = {
   0.00288469,
   0.002402018,
   0.00421836,
   0.005807668,
   0.009705556,
   0.01506242,
   0.02220043,
   0.02035904,
   0.06108436,
   0.2737553,
   0.432681};
   Double_t Graph_fehx3021[11] = {
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
   Double_t Graph_fehy3021[11] = {
   0.00288469,
   0.002402018,
   0.00421836,
   0.005807668,
   0.009705556,
   0.01506242,
   0.02220043,
   0.02035904,
   0.06108436,
   0.2737553,
   0.432681};
   grae = new TGraphAsymmErrors(11,Graph_fx3021,Graph_fy3021,Graph_felx3021,Graph_fehx3021,Graph_fely3021,Graph_fehy3021);
   grae->SetName("Graph");
   grae->SetTitle("45-60%");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","45-60%",100,0,3.13);
   Graph_Graph3021->SetMinimum(-0.883817);
   Graph_Graph3021->SetMaximum(0.4512131);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3021->SetLineColor(ci);
   Graph_Graph3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3021);
   
   multigraph->Add(grae,"pZ");
   multigraph->Draw("ApZ");
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
   pt_LaTex = pt->AddText("#pi^{-} #it{v}_{1}  {#Psi_{proj}, SP_{x}}, PSD");
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
   TLine *line = new TLine(0,0,1.8,0);
   line->SetLineStyle(2);
   line->Draw();
   noname->Modified();
   noname->cd();
   noname->SetSelected(noname);
}
