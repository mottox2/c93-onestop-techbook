#@# -*- coding: utf-8 -*-

= 図を埋め込む（Windows編）

本章では@<chap>{sec-image}に引き続き、図を作成する方法、原稿に埋め込む方法、および印刷用に高解像度の画像を作成する方法を紹介します。
@<chap>{sec-image}の構成に沿っていますが、違うのはWindowsでPowerPointを使っているところです。
OSやソフトが変わるとできることも変わってきますので、内容が簡略化され、Windowsに特化した情報が加筆されています。

=={sec-image-win7-install} PowerPointについて

PowerPointはプレゼンテーション用のスライド作成およびプレゼンテーションを行うソフトウェアです@<fn>{PPT_LOVE}。
Officeシリーズを購入すると大抵はバンドルされていますが、Office Personalには含まれていません@<fn>{OFFICE_PRODUCT}。
単体で購入することもできますが、かなり割高です@<fn>{PPT_PRICE}。
技術同人誌を書きたいと考えている方でWindowsを利用している方は、
高確率で所有していると思われますので、インストールの細かい方法は省略します。
//footnote[PPT_LOVE][一部？多くの？企業ではドキュメント作成にも用いられており、Excelに匹敵する万能ソフトでもあります。]
//footnote[OFFICE_PRODUCT][@<href>{https://products.office.com/ja-jp/buy/compare-microsoft-office-products?tab=1}]
//footnote[PPT_PRICE][@<href>{https://www.microsoft.com/ja-jp/store/collections/officesingleapps?SilentAuth=1&wa=wsignin1.0}]
//footnote[PPT_INIT][意外にこれをやらない人が多いのです。]

=={sec-image-win7-draw} PowerPointで作図する

PowerPointで作図してみましょう。
PowerPointを起動すると、タイトルスライドのみの新規スライドが表示されます。
スライドを右クリックし、レイアウトを白紙に変更しましょう@<fn>{PPT_INIT}。
//image[win7_draw_ppt_1][PowerPoint起動直後の画面][scale=0.7]{
//}
//image[win7_draw_ppt_2][スライドレイアウトの変更][scale=0.35]{
//}
リボンの挿入タブから図形を選択し、図形を描きましょう。
@<chap>{sec-image}に倣って約束された勝利のサイクルを描いてみました@<fn>{AFFIRMED_VICTORY_TRIANGLE}。
//image[win7_draw_ppt_3][PowerPointで利用できる図形][scale=0.35]{
//}
//image[win7_draw_ppt_4][約束された勝利のサイクル（PowerPoint版）]{
//}
ファイルタブの名前を付けて保存を選択して、スライドを保存します。
@<tt>{Ctrl+S}でも保存できます。名前は@<chap>{sec-image}に倣ってimages.pptxとしておきましょう。
//image[win7_draw_ppt_5][名前を付けて保存][scale=0.4]{
//}
//image[win7_draw_ppt_6][名前とファイルの種類の指定][scale=0.6]{
//}

//footnote[AFFIRMED_VICTORY_TRIANGLE][PowerPointでは円弧矢印を狙った通りに描くのがややこしいので、直線矢印にしました。これではサイクルというよりトライアングルですね。]

=={sec-image-win7-png} 図をPNG画像として保存する

PowerPointで作成した図形を画像に変換する方法は三通りあります。
一つ目は、スライドを画像として保存する方法です。
名前を付けて保存する際にファイルの種類をjpg, png, tiff, bmpのいずれかにすることで、スライド全て、あるいは1枚だけが画像に変換されて保存されます。
//image[win7_draw_ppt_7][スライドを画像として保存][scale=0.6]{
//}
二つ目は、図形を図（画像）として保存する方法です。
保存したい図形全てを選択した状態で図形を右クリックし、図として保存するを選択すると、図として保存ダイアログから保存できます。
//image[win7_draw_ppt_8][図形を図として保存][scale=0.4]{
//}
//image[win7_draw_ppt_9][図として保存ダイアログ][scale=0.6]{
//}
三つ目は、画像編集ソフト（ペイントなど）を使う方法です。
保存したい図形全てを選択した状態で図形を全てクリップボードにコピーしてペイントに貼り付けたあと、名前を付けて保存します。
//image[win7_draw_ppt_10][ペイントへの図の貼り付け][scale=0.45]{
//}
//image[win7_draw_ppt_11][図の保存][scale=0.35]{
//}

図形はimagesという名前のフォルダに保存し、@<chap>{sec-image}の@<list>{sec-image|review-image1}で説明されているRe:VIEW命令を使って原稿に埋め込みます。

=={sec-image-win7-width} 図形の幅を設定する

Re:VIEWの原稿に図を埋め込んだ際、思ったより大きくなった場合は、三通りの方法で大きさを調整できます。
一つ目は、Re:VIEWの命令で画像を埋め込む際に画像の倍率を指定する方法です。
これは@<hd>{sec-image|sec-image-width}、@<list>{sec-image|review-image2}を参照してください。

二つ目も@<chap>{sec-image}で紹介されている方法です。
次の手順で透明な四角形を図形の背景に置いて、図形の大きさを制御します。

 1. 挿入タブの図形から四角形を選択し、画像を覆うくらいの四角形を描きます（@<img>{win7_draw_ppt_12}）。
 2. 四角形を右クリックして最背面へ移動します（@<img>{win7_draw_ppt_13}）。
 3. 四角形を右クリックして図形の書式設定を選び、塗りつぶしなし、線なしに設定します。（@<img>{win7_draw_ppt_14}、@<img>{win7_draw_ppt_15}、@<img>{win7_draw_ppt_16}）
 4. 図形の書式設定からサイズを選び、図形の幅を設定します。紙面の幅に応じて幅を調整してください。このとき、単位まで書けばptでも指定できます（@<img>{win7_draw_ppt_17}）。

//image[win7_draw_ppt_12][サイズ調整用四角形の描画][scale=0.35]{
//}
//image[win7_draw_ppt_13][サイズ調整用四角形を最背面へ移動][scale=0.35]{
//}
//image[win7_draw_ppt_14][サイズ調整用四角形の書式設定][scale=0.35]{
//}
//image[win7_draw_ppt_15][サイズ調整用四角形の塗りつぶしの設定][scale=0.35]{
//}
//image[win7_draw_ppt_16][サイズ調整用四角形の枠線の設定][scale=0.35]{
//}
//image[win7_draw_ppt_17][サイズ調整用四角形のサイズの設定][scale=0.35]{
//}

三つ目は、スライドのサイズを紙面のサイズにして、狙った大きさの図を作る方法です。

 1. 新規にプレゼンテーションを作成します。
 2. デザインタブのページ設定をクリックし、ページ設定ダイアログからページのサイズと向きを指定します。このとき、メニューにあるA4やB5などを選ぶと、一回り小さいサイズのスライドになります。必ず、ユーザー設定で幅と高さを指定してください（@<img>{win7_draw_ppt_18}、@<img>{win7_draw_ppt_19}）。
 3. スライドを白紙にして、図を作ります。試しにスライドの大きさをA4サイズにして先ほど作った図形を貼り付けてみると、かなり大きかった事が分かります（@<img>{win7_draw_ppt_20}）。いい感じになるように縮小して、図として保存しましょう（@<img>{win7_draw_ppt_21}）。

//image[win7_draw_ppt_18][スライドのページ設定][scale=0.35]{
//}
//image[win7_draw_ppt_19][任意サイズのスライドの設定（A4サイズ）][scale=0.35]{
//}
//image[win7_draw_ppt_20][A4サイズに貼り付けられた図形][scale=0.45]{
//}
//image[win7_draw_ppt_21][適切な大きさへの図形サイズの変更][scale=0.45]{
//}

全ての方法で画像の大きさを適切に設定できます。
一つ目の方法は画像ごとの適切な大きさを見つけるのが試行錯誤的で、手間がかかります。
二つ目と三つ目は作図の段階で大きさが分かるという点では同じです。
いちいち四角形を置くより三つ目の方が楽なように感じますが、図形を高解像度にするときの手間が変わってきます。

=={sec-image-win7-dpi} 出力される画像の解像度を上げる

前小節の方法で変換された画像の解像度は、全て96 DPI@<fn>{WHAT_IS_DPI}です。
これはPowerPointの標準設定のようです@<fn>{STD_DPI}。
@<chap>{sec-image}では、三通りの方法で解像度を変更していましたが、そのうち三つ目（@<tt>{ImageMagick}の@<tt>{convert}コマンドを使う方法）はWindowsでも可能です。

ここではPowerPointの設定を変更して高解像度の画像を直接出力できるようにしてみましょう。
ただし、この方法は、本章で紹介した方法のうち、2番目の方法（名前を付けて保存する際に形式を画像にする方法）にしか反映されません。
また、この方法はレジストリと呼ばれる、Windowsの設定を一括して管理しているファイルを編集しますので、
万が一に備えてバックアップを取っておくことをお勧めします。

レジストリを編集するにはレジストリエディタを起動します。スタートメニューのプログラムとファイルの検索ボックスにregeditと入力します。
そうするとレジストリエディタが表示されるので、クリックして起動します。
ユーザーアカウント制御が割り込んできますが、はいを押して起動してください。
//image[win7_draw_reg_1][レジストリエディタの検索][scale=0.4]{
//}
@<img>{win7_draw_reg_2}のように、左ペインにフォルダのようなものが表示されています。これはキーと呼ばれ、設定の項目を一括して管理しています。
キーの名をダブルクリックするか、フォルダアイコンの左の三角形をクリックして、キーを展開していきます。
PowerPoint 2010の解像度に関する設定は、@<tt>{HKEY_CURRENT_USER\Software\Microsoft\Office\14.0\PowerPoint\Options}にあります@<fn>{PPT_KEY_VERSION}ので、一つずつたどっていってください。当該のキー名をクリックすると、右のペインに設定が表示されます。
//image[win7_draw_reg_2][レジストリのルート][scale=0.7]{
//}
//image[win7_draw_reg_3][キーの展開][scale=0.7]{
//}
//image[win7_draw_reg_4][レジストリで管理されているPowerPointの設定][scale=0.7]{
//}
ここに、画像への変換時の解像度に関する設定を追加します。
設定に関しては、Microsoft社が詳しい説明@<fn>{PPT_RESOLUTION}を公開していますので、一読しておいてください。
右ペインのどこかで右クリックし、新規→DWORD値（32ビット）値を選択します。右クリックする位置は、設定の名前以外ならどこでもかまいません。
設定項目が作られるので、名前を@<tt>{ExportBitmapResolution}とします。
//image[win7_draw_reg_5][レジストリの設定の新規作成][scale=0.7]{
//}
//image[win7_draw_reg_6][作成された設定項目（DWORD値）][scale=0.7]{
//}
//image[win7_draw_reg_7][作成された設定項目（DWORD値）と名前の決定（ExportBitmapResolution）][scale=0.7]{
//}
この設定の名前をダブルクリックすると値の編集ができるので、表記を10進数、値のデータを300にします。
必ず表記を先に設定してください。標準の表記は16進数なので、値のデータに300を入力してから10進数に変更すると16進数の300が10進数（768）に変換されてしまいます。
OKを押して設定を反映し、レジストリエディタを終了します。
//image[win7_draw_reg_8][DPI（10進数）をDWORD値として設定][scale=0.4]{
//}
#@#//image[win7_draw_reg_9][-][scale=0.7]{
#@#//}
//noindent
これで、PowerPointスライドを画像として保存するときの解像度が300 DPIに変更されました。

いちいちレジストリエディタを開くのは面倒ですが、レジストリには設定をファイルに書き出す機能とファイルに書かれた設定を取り込む機能があります。
レジストリの設定が記録された登録ファイル（拡張子が.reg）をダブルクリックするだけで、設定が取り込まれます。
本章著者の一人が用意できた環境用（Windows7 64bit、PowerPoint 2010）の登録ファイルを用意しています。
使い方は、登録ファイル（ExportBitmapResolution_300dpi_win7_x64_office2010.reg）をダウンロードし、Office製品を終了した状態でファイルをダブルクリックするだけです。
あくまで情報提供として用意しているだけなので、くれぐれも自己責任でお願いします。

試しに出力を比べてみましょう。
なにも設定しない場合（96 DPI）のとき、出力された画像ファイルのサイズは960@<m>{\times}720ピクセルでした（@<img>{win7_draw_reg_10}）。
解像度を300 DPIに指定すると、画像ファイルが3000@<m>{\times}2250ピクセルになりました（@<img>{win7_draw_reg_11}）。
一度解像度の設定をすると、その後はなにも気にせず高解像度の画像として保存できるのでとても楽なのですが、先に述べたとおりスライドを画像として保存する場合にしか有効になりません。
図形を右クリックして図として保存したり、図形をコピーしてペイントなどに貼り付ける場合には、相変わらず96 DPIになってしまいます。
そのため、高解像度の「スライドの画像」ではなく高解像度の「図形の画像」が欲しい場合には、画像に変換されたスライドをペイントなどの画像処理ソフトでトリミングする必要があります。
//image[win7_draw_reg_10][96 DPIで出力されたPNGファイルのプロパティ][scale=0.4]{
//}
//image[win7_draw_reg_11][300 DPIで出力されたPNGファイルのプロパティ][scale=0.4]{
//}

なお、この方法で解像度を際限なく高くすることはできません。
Windows版のPowerPointにはサイズの制約があり、上限は307 DPI、3072@<m>{\times}2304ピクセルです。

//footnote[WHAT_IS_DPI][DPIの説明については@<hd>{sec-image|sec-image-dpi}を参照してください。]
//footnote[STD_DPI][150 DPIで画像を出力すると書かれている記事を見たことがありますので、PowerPointのバージョンで標準の値が異なっている可能性があります。]
//footnote[PPT_KEY_VERSION][14.0というキーがPowerPointのバージョンを表しています。Microsoft社の解説によると、PowerPoint 2003と11.0、2007と12.0、2010と14.0、2013と15.0、2016と16.0が対応しているようです。13は不吉だからあえて飛ばしたのでしょうか？]
//footnote[PPT_RESOLUTION][@<href>{https://support.microsoft.com/ja-jp/help/827745/how-to-change-the-export-resolution-of-a-powerpoint-slide}]

=={sec-image-win7-switch} 低解像度画像と高解像度画像の切り替え

@<chap>{sec-image}でも指摘されているように、画像の解像度が高くなるとファイルサイズが増え、原稿のPDFファイルを作るのに時間がかかるようになります。
この問題に対して、@<chap>{sec-image}では原稿執筆中に低解像度の画像を参照するようにし、
原稿が完成して印刷用のPDFを作る時にだけ高解像度の画像を参照する方法が提案されています。
それを実現する方法として、低解像度用のフォルダ（images_low）と高解像度用のフォルダ（images_high）を用意し、
Re:VIEWが画像を参照するフォルダ（images）をシンボリックリンクで表現して切り替えられています。
あまり知られていませんが、Windowsでもシンボリックリンクを作ることができるのでこの方法が使えます。

Windowsでシンボリックリンクを作るには@<tt>{mklink}コマンドを使います。
@<tt>{mklink}でフォルダのシンボリックリンクを作るには、
//cmd{
> mklink /D シンボリックリンクフォルダ名 リンクされるフォルダ
//}
//noindent
とします@<fn>{MKLINK_DEF}。
フォルダへのリンクを解除するには、フォルダを削除する時と同じように@<tt>{rmdir}コマンドを使います。
//cmd{
> rmdir シンボリックリンクフォルダ名
//}
//noindent
低解像度の画像を使う場合には、例えば次のコマンドを実行します。
//cmd{
> mklink /D images images_low
//}
高解像度の画像に切り替えるには、一度低解像度画像のフォルダに対するリンクを削除してから、同様にシンボリックリンクを張ります。
//cmd{
> rmdir images
> mklink /D images images_high
//}
@<tt>{rmdir}はフォルダを削除するコマンドなので、リンク先のフォルダまで削除されるのではと少し怖くなりますが、それは起こりません。
@<tt>{rmdir}は空でないディレクトリの削除はできないので安心してやっちゃってください。
なお、シンボリックリンクを作るには管理者としてコマンドプロンプトを実行する必要があります。
コマンドプロンプトを管理者として実行するには、スタートメニューから全てのプログラム→アクセサリと辿り、コマンドプロンプトを右クリックして管理者として実行を選択します。
//image[win7_draw_cmd_1][管理者としてコマンドプロンプトを実行][scale=0.4]{
//}
PowerShellをコマンドプロンプトから呼ぶことで昇格することもできます。
//cmd{
> powershell -command "Start-Process -Verb runas cmd"
//}
//noindent
とてもとても残念なことに、同一コマンドプロンプト内で昇格することはできず、必ず新しいコマンドプロントが起動されます。
そのため、VSCodeの統合ターミナル内だけでシンボリックリンクを張ったり削除したりすることはできません。
また、VSCodeでは（すくなくともWindows版バージョン1.18.1では）フォルダへのシンボリックリンクを一つのファイルとして認識するようです。
そのため、シンボリックリンク先フォルダにあるファイルの変更は追跡してくれません。
リンク先のフォルダを（例えば低解像度から高解像度へ）切り替えても、画像が変更されたことを認識しないということです。
VSCodeのみを使ってソース管理していると、シンボリックリンクでフォルダを切り替えても図の変更が記録されない可能性があります。

//footnote[MKLINK_DEF][mklinkは標準でファイルに対するシンボリックリンクを張るので、フォルダにリンクを張る場合にはオプション/D（/dでも可）によってフォルダである事を明示する必要があります。]

=={sec-image-win7-summary} まとめ

本章では@<chap>{sec-image}のmacOSに引き続き、Windowsで画像を作る方法を紹介しました。
PowerPointを使って描いた図を画像として保存し、PDFに埋め込みました。
何通りかの方法を示しましたので、いくつか試してやりやすい方法を選んでみてください。
あるいは、自身のやり方を見つけてください。
ここで最も伝えたいことは、高価な画像処理ソフトを買わなくても何とかなる、Photoshopを持っていないことが技術系同人誌作成における障壁にはならない、ということです。
他のWindowsやPowerPointのバージョンで本章の内容を試された方、他によいやり方を知っている、世界レベルの方法を公開してやるという方がいれば、ぜひ公開してください。
