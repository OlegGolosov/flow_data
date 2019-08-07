void v1CC_proton()
{
//=========Macro generated from canvas: noname/noname
//=========  (Thu Jun  6 01:31:28 2019) by ROOT version 6.14/08
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
   
   Double_t Graph_fx3013[11] = {
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
   Double_t Graph_fy3013[11] = {
   -0.001622797,
   0.01821621,
   0.03402352,
   0.06035204,
   0.08699068,
   0.1056055,
   0.1241313,
   0.132473,
   0.1172373,
   0.09327687,
   0.04192945};
   Double_t Graph_felx3013[11] = {
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
   Double_t Graph_fely3013[11] = {
   0.001994847,
   0.001218897,
   0.001416179,
   0.00119795,
   0.001715884,
   0.002389791,
   0.003484834,
   0.005153079,
   0.01055226,
   0.02294739,
   0.04297268};
   Double_t Graph_fehx3013[11] = {
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
   Double_t Graph_fehy3013[11] = {
   0.001994847,
   0.001218897,
   0.001416179,
   0.00119795,
   0.001715884,
   0.002389791,
   0.003484834,
   0.005153079,
   0.01055226,
   0.02294739,
   0.04297268};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_fx3013,Graph_fy3013,Graph_felx3013,Graph_fehx3013,Graph_fely3013,Graph_fehy3013);
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
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","R_{1} [PSD1]",100,0,3.07);
   Graph_Graph3013->SetMinimum(-0.01774201);
   Graph_Graph3013->SetMaximum(0.1517504);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3013->SetLineColor(ci);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3014[11] = {
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
   Double_t Graph_fy3014[11] = {
   0.0007283636,
   0.01950461,
   0.03372453,
   0.06070168,
   0.0841439,
   0.1040974,
   0.1209683,
   0.1271074,
   0.1187697,
   0.1027214,
   0.06411319};
   Double_t Graph_felx3014[11] = {
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
   Double_t Graph_fely3014[11] = {
   0.001528366,
   0.001092649,
   0.0009019437,
   0.0009929462,
   0.001530199,
   0.001964507,
   0.00249167,
   0.004187178,
   0.006672432,
   0.01752022,
   0.02360635};
   Double_t Graph_fehx3014[11] = {
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
   Double_t Graph_fehy3014[11] = {
   0.001528366,
   0.001092649,
   0.0009019437,
   0.0009929462,
   0.001530199,
   0.001964507,
   0.00249167,
   0.004187178,
   0.006672432,
   0.01752022,
   0.02360635};
   grae = new TGraphAsymmErrors(11,Graph_fx3014,Graph_fy3014,Graph_felx3014,Graph_fehx3014,Graph_fely3014,Graph_fehy3014);
   grae->SetName("Graph");
   grae->SetTitle("R_{1} [PSD2]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#009900");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#009900");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","R_{1} [PSD2]",100,0,3.08);
   Graph_Graph3014->SetMinimum(-0.01400946);
   Graph_Graph3014->SetMaximum(0.1445041);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3014->SetLineColor(ci);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);
   
   multigraph->Add(grae,"pZ");
   
   Double_t Graph_fx3015[11] = {
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
   Double_t Graph_fy3015[11] = {
   0.004163671,
   0.02478302,
   0.0325465,
   0.05699678,
   0.07971971,
   0.09881371,
   0.115075,
   0.1188062,
   0.1156523,
   0.08610829,
   0.06419868};
   Double_t Graph_felx3015[11] = {
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
   Double_t Graph_fely3015[11] = {
   0.002392233,
   0.0008109255,
   0.0009149328,
   0.000814442,
   0.001204155,
   0.001369479,
   0.002865708,
   0.004482823,
   0.008081005,
   0.01400148,
   0.0219999};
   Double_t Graph_fehx3015[11] = {
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
   Double_t Graph_fehy3015[11] = {
   0.002392233,
   0.0008109255,
   0.0009149328,
   0.000814442,
   0.001204155,
   0.001369479,
   0.002865708,
   0.004482823,
   0.008081005,
   0.01400148,
   0.0219999};
   grae = new TGraphAsymmErrors(11,Graph_fx3015,Graph_fy3015,Graph_felx3015,Graph_fehx3015,Graph_fely3015,Graph_fehy3015);
   grae->SetName("Graph");
   grae->SetTitle("R_{1} [PSD3]");
   grae->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","R_{1} [PSD3]",100,0,3.09);
   Graph_Graph3015->SetMinimum(0.001594295);
   Graph_Graph3015->SetMaximum(0.1359294);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3015->SetLineColor(ci);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
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
