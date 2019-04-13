# Let-s-start-microcomputer-in-hardmode-samples
## 回路例
![回路例](https://github.com/zilmina/Let-s-start-microcomputer-in-hardmode-samples/blob/master/image/circuit.png)
## 使い方
このリポジトリには5つのサンプルプロジェクトを/sample以下に収めています。
利用時には
**右上の"Clone or Download"からダウンロードして必ず、「パス名に日本語が入らない」位置に配置してください**
---
## Renesas Flash　Programmer V3のインストール
 * https://www.renesas.com/jp/ja/products/software-tools/tools/programmer/renesas-flash-programmer-programming-gui.html#productInfoにアクセス
 
  * 「【無償版】Renesas Flash Programmer V3.05.01」からダウンロード
  * MyRenesasにログインしダウウンロードを続行
  * インストーラ―に従いインストール。
---
## Renesas Flash　Programmer V3の初期設定
 * PCにUSBシリアル通信モジュール（http://akizukidenshi.com/catalog/g/gM-08461/）を接続
 * アプリケーションを起動
 * ファイルー＞新しいプロジェクトの作成を選択
 * マイクロコントローラを”RX63x”に設定
 * プロジェクト名を設定、
 * 「通信」のツールは「COM」に設定
 * ツール詳細からUSBシリアル変換器のCOMポートを選択
 * マイコンのモード切替スイッチをブートモードを選択してマイコンに電源を入れる。（すなはち）
 * Renesas　Flash　Programmerで"接続（O）"を選択。
 * 接続に成功するとメインクロックを聞かれるので接続した発信子の周波数（今回は10MHz）を設定
 ---
 ##  Renesas Flash　Programmer V3の使い方
 * プログラムファイルにプログラムをビルドしたときに生成される.motファイル（SPIのサンプルプロジェクトなら場所はsample_codes\spi\HardwareDebug\spi.mot）を選択
 * マイコンのモード切替スイッチをブートモードを選択してマイコンに電源を入れる。（すなはち）
 * スタートを選択
 * 書き込み終了まで待機
 * 電源を入れなおすとプログラムが実行されます！
