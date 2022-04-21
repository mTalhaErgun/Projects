namespace ndpOdev3
{
    partial class Form1
    {
        /// <summary>
        ///Gerekli tasarımcı değişkeni.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///Kullanılan tüm kaynakları temizleyin.
        /// </summary>
        ///<param name="disposing">yönetilen kaynaklar dispose edilmeliyse doğru; aksi halde yanlış.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer üretilen kod

        /// <summary>
        /// Tasarımcı desteği için gerekli metot - bu metodun 
        ///içeriğini kod düzenleyici ile değiştirmeyin.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.numericUpDownTelefon = new System.Windows.Forms.NumericUpDown();
            this.numericUpDownLaptop = new System.Windows.Forms.NumericUpDown();
            this.numericUpDownBuzdolabi = new System.Windows.Forms.NumericUpDown();
            this.numericUpDownTv = new System.Windows.Forms.NumericUpDown();
            this.labelTelefonStok = new System.Windows.Forms.Label();
            this.labelCepTelFiyat = new System.Windows.Forms.Label();
            this.labelLaptopStok = new System.Windows.Forms.Label();
            this.labelLaptopFiyat = new System.Windows.Forms.Label();
            this.labelBuzdolabiStok = new System.Windows.Forms.Label();
            this.labelBuzdolabiFiyat = new System.Windows.Forms.Label();
            this.labelStokTv = new System.Windows.Forms.Label();
            this.labelTvFiyat = new System.Windows.Forms.Label();
            this.label10 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label11 = new System.Windows.Forms.Label();
            this.label12 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.pictureBox3 = new System.Windows.Forms.PictureBox();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.pictureBox2 = new System.Windows.Forms.PictureBox();
            this.pictureBox4 = new System.Windows.Forms.PictureBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.labelToplam = new System.Windows.Forms.Label();
            this.label20 = new System.Windows.Forms.Label();
            this.label19 = new System.Windows.Forms.Label();
            this.label18 = new System.Windows.Forms.Label();
            this.label17 = new System.Windows.Forms.Label();
            this.listBoxFiyat = new System.Windows.Forms.ListBox();
            this.listBoxUrun = new System.Windows.Forms.ListBox();
            this.listBoxAdet = new System.Windows.Forms.ListBox();
            this.button1 = new System.Windows.Forms.Button();
            this.buttonTemizle = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDownTelefon)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDownLaptop)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDownBuzdolabi)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDownTv)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).BeginInit();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.numericUpDownTelefon);
            this.groupBox1.Controls.Add(this.numericUpDownLaptop);
            this.groupBox1.Controls.Add(this.numericUpDownBuzdolabi);
            this.groupBox1.Controls.Add(this.numericUpDownTv);
            this.groupBox1.Controls.Add(this.labelTelefonStok);
            this.groupBox1.Controls.Add(this.labelCepTelFiyat);
            this.groupBox1.Controls.Add(this.labelLaptopStok);
            this.groupBox1.Controls.Add(this.labelLaptopFiyat);
            this.groupBox1.Controls.Add(this.labelBuzdolabiStok);
            this.groupBox1.Controls.Add(this.labelBuzdolabiFiyat);
            this.groupBox1.Controls.Add(this.labelStokTv);
            this.groupBox1.Controls.Add(this.labelTvFiyat);
            this.groupBox1.Controls.Add(this.label10);
            this.groupBox1.Controls.Add(this.label7);
            this.groupBox1.Controls.Add(this.label11);
            this.groupBox1.Controls.Add(this.label12);
            this.groupBox1.Controls.Add(this.label8);
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.label9);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.label5);
            this.groupBox1.Controls.Add(this.label6);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.pictureBox3);
            this.groupBox1.Controls.Add(this.pictureBox1);
            this.groupBox1.Controls.Add(this.pictureBox2);
            this.groupBox1.Controls.Add(this.pictureBox4);
            this.groupBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.groupBox1.Location = new System.Drawing.Point(23, 23);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(439, 526);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Ürünlere Ait KDV\'siz Fiyatlar";
            // 
            // numericUpDownTelefon
            // 
            this.numericUpDownTelefon.Location = new System.Drawing.Point(321, 487);
            this.numericUpDownTelefon.Name = "numericUpDownTelefon";
            this.numericUpDownTelefon.Size = new System.Drawing.Size(45, 24);
            this.numericUpDownTelefon.TabIndex = 2;
            // 
            // numericUpDownLaptop
            // 
            this.numericUpDownLaptop.Location = new System.Drawing.Point(110, 487);
            this.numericUpDownLaptop.Name = "numericUpDownLaptop";
            this.numericUpDownLaptop.Size = new System.Drawing.Size(45, 24);
            this.numericUpDownLaptop.TabIndex = 2;
            // 
            // numericUpDownBuzdolabi
            // 
            this.numericUpDownBuzdolabi.Location = new System.Drawing.Point(321, 237);
            this.numericUpDownBuzdolabi.Name = "numericUpDownBuzdolabi";
            this.numericUpDownBuzdolabi.Size = new System.Drawing.Size(45, 24);
            this.numericUpDownBuzdolabi.TabIndex = 10;
            // 
            // numericUpDownTv
            // 
            this.numericUpDownTv.Location = new System.Drawing.Point(110, 237);
            this.numericUpDownTv.Name = "numericUpDownTv";
            this.numericUpDownTv.Size = new System.Drawing.Size(45, 24);
            this.numericUpDownTv.TabIndex = 1;
            this.numericUpDownTv.ValueChanged += new System.EventHandler(this.numericUpDown1_ValueChanged);
            // 
            // labelTelefonStok
            // 
            this.labelTelefonStok.AutoSize = true;
            this.labelTelefonStok.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.labelTelefonStok.Location = new System.Drawing.Point(317, 463);
            this.labelTelefonStok.Name = "labelTelefonStok";
            this.labelTelefonStok.Size = new System.Drawing.Size(0, 24);
            this.labelTelefonStok.TabIndex = 5;
            // 
            // labelCepTelFiyat
            // 
            this.labelCepTelFiyat.AutoSize = true;
            this.labelCepTelFiyat.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.labelCepTelFiyat.Location = new System.Drawing.Point(317, 439);
            this.labelCepTelFiyat.Name = "labelCepTelFiyat";
            this.labelCepTelFiyat.Size = new System.Drawing.Size(0, 24);
            this.labelCepTelFiyat.TabIndex = 5;
            // 
            // labelLaptopStok
            // 
            this.labelLaptopStok.AutoSize = true;
            this.labelLaptopStok.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.labelLaptopStok.Location = new System.Drawing.Point(106, 463);
            this.labelLaptopStok.Name = "labelLaptopStok";
            this.labelLaptopStok.Size = new System.Drawing.Size(0, 24);
            this.labelLaptopStok.TabIndex = 5;
            // 
            // labelLaptopFiyat
            // 
            this.labelLaptopFiyat.AutoSize = true;
            this.labelLaptopFiyat.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.labelLaptopFiyat.Location = new System.Drawing.Point(106, 439);
            this.labelLaptopFiyat.Name = "labelLaptopFiyat";
            this.labelLaptopFiyat.Size = new System.Drawing.Size(0, 24);
            this.labelLaptopFiyat.TabIndex = 5;
            // 
            // labelBuzdolabiStok
            // 
            this.labelBuzdolabiStok.AutoSize = true;
            this.labelBuzdolabiStok.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.labelBuzdolabiStok.Location = new System.Drawing.Point(317, 213);
            this.labelBuzdolabiStok.Name = "labelBuzdolabiStok";
            this.labelBuzdolabiStok.Size = new System.Drawing.Size(0, 24);
            this.labelBuzdolabiStok.TabIndex = 5;
            // 
            // labelBuzdolabiFiyat
            // 
            this.labelBuzdolabiFiyat.AutoSize = true;
            this.labelBuzdolabiFiyat.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.labelBuzdolabiFiyat.Location = new System.Drawing.Point(317, 189);
            this.labelBuzdolabiFiyat.Name = "labelBuzdolabiFiyat";
            this.labelBuzdolabiFiyat.Size = new System.Drawing.Size(0, 24);
            this.labelBuzdolabiFiyat.TabIndex = 5;
            // 
            // labelStokTv
            // 
            this.labelStokTv.AutoSize = true;
            this.labelStokTv.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.labelStokTv.Location = new System.Drawing.Point(106, 213);
            this.labelStokTv.Name = "labelStokTv";
            this.labelStokTv.Size = new System.Drawing.Size(0, 24);
            this.labelStokTv.TabIndex = 5;
            // 
            // labelTvFiyat
            // 
            this.labelTvFiyat.AutoSize = true;
            this.labelTvFiyat.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.labelTvFiyat.Location = new System.Drawing.Point(115, 189);
            this.labelTvFiyat.Name = "labelTvFiyat";
            this.labelTvFiyat.Size = new System.Drawing.Size(0, 24);
            this.labelTvFiyat.TabIndex = 5;
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label10.Location = new System.Drawing.Point(269, 487);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(54, 24);
            this.label10.TabIndex = 9;
            this.label10.Text = "Adet:";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label7.Location = new System.Drawing.Point(58, 487);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(54, 24);
            this.label7.TabIndex = 9;
            this.label7.Text = "Adet:";
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label11.Location = new System.Drawing.Point(269, 463);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(51, 24);
            this.label11.TabIndex = 8;
            this.label11.Text = "Stok:";
            // 
            // label12
            // 
            this.label12.AutoSize = true;
            this.label12.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label12.Location = new System.Drawing.Point(269, 439);
            this.label12.Name = "label12";
            this.label12.Size = new System.Drawing.Size(54, 24);
            this.label12.TabIndex = 7;
            this.label12.Text = "Fiyat:";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label8.Location = new System.Drawing.Point(58, 463);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(51, 24);
            this.label8.TabIndex = 8;
            this.label8.Text = "Stok:";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label4.Location = new System.Drawing.Point(269, 237);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(54, 24);
            this.label4.TabIndex = 9;
            this.label4.Text = "Adet:";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label9.Location = new System.Drawing.Point(58, 439);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(54, 24);
            this.label9.TabIndex = 7;
            this.label9.Text = "Fiyat:";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label3.Location = new System.Drawing.Point(58, 237);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(54, 24);
            this.label3.TabIndex = 6;
            this.label3.Text = "Adet:";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label5.Location = new System.Drawing.Point(269, 213);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(51, 24);
            this.label5.TabIndex = 8;
            this.label5.Text = "Stok:";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label6.Location = new System.Drawing.Point(266, 189);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(54, 24);
            this.label6.TabIndex = 7;
            this.label6.Text = "Fiyat:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label2.Location = new System.Drawing.Point(58, 213);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(51, 24);
            this.label2.TabIndex = 5;
            this.label2.Text = "Stok:";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label1.Location = new System.Drawing.Point(55, 189);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(54, 24);
            this.label1.TabIndex = 4;
            this.label1.Text = "Fiyat:";
            // 
            // pictureBox3
            // 
            this.pictureBox3.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox3.Image")));
            this.pictureBox3.Location = new System.Drawing.Point(6, 279);
            this.pictureBox3.Name = "pictureBox3";
            this.pictureBox3.Size = new System.Drawing.Size(206, 155);
            this.pictureBox3.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox3.TabIndex = 2;
            this.pictureBox3.TabStop = false;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(6, 38);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(206, 148);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            // 
            // pictureBox2
            // 
            this.pictureBox2.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox2.Image")));
            this.pictureBox2.Location = new System.Drawing.Point(218, 23);
            this.pictureBox2.Name = "pictureBox2";
            this.pictureBox2.Size = new System.Drawing.Size(215, 163);
            this.pictureBox2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox2.TabIndex = 1;
            this.pictureBox2.TabStop = false;
            // 
            // pictureBox4
            // 
            this.pictureBox4.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox4.Image")));
            this.pictureBox4.Location = new System.Drawing.Point(218, 279);
            this.pictureBox4.Name = "pictureBox4";
            this.pictureBox4.Size = new System.Drawing.Size(215, 155);
            this.pictureBox4.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox4.TabIndex = 3;
            this.pictureBox4.TabStop = false;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.labelToplam);
            this.groupBox2.Controls.Add(this.label20);
            this.groupBox2.Controls.Add(this.label19);
            this.groupBox2.Controls.Add(this.label18);
            this.groupBox2.Controls.Add(this.label17);
            this.groupBox2.Controls.Add(this.listBoxFiyat);
            this.groupBox2.Controls.Add(this.listBoxUrun);
            this.groupBox2.Controls.Add(this.listBoxAdet);
            this.groupBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.groupBox2.Location = new System.Drawing.Point(499, 23);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(352, 325);
            this.groupBox2.TabIndex = 1;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Sipariş Özeti";
            // 
            // labelToplam
            // 
            this.labelToplam.AutoSize = true;
            this.labelToplam.Location = new System.Drawing.Point(192, 286);
            this.labelToplam.Name = "labelToplam";
            this.labelToplam.Size = new System.Drawing.Size(0, 20);
            this.labelToplam.TabIndex = 7;
            // 
            // label20
            // 
            this.label20.AutoSize = true;
            this.label20.Location = new System.Drawing.Point(18, 286);
            this.label20.Name = "label20";
            this.label20.Size = new System.Drawing.Size(162, 20);
            this.label20.TabIndex = 6;
            this.label20.Text = "KDV\'li Toplam Fiyat:";
            // 
            // label19
            // 
            this.label19.AutoSize = true;
            this.label19.Location = new System.Drawing.Point(230, 36);
            this.label19.Name = "label19";
            this.label19.Size = new System.Drawing.Size(97, 20);
            this.label19.TabIndex = 5;
            this.label19.Text = "KDV\'li Fiyat";
            // 
            // label18
            // 
            this.label18.AutoSize = true;
            this.label18.Location = new System.Drawing.Point(120, 36);
            this.label18.Name = "label18";
            this.label18.Size = new System.Drawing.Size(45, 20);
            this.label18.TabIndex = 4;
            this.label18.Text = "Ürün";
            // 
            // label17
            // 
            this.label17.AutoSize = true;
            this.label17.Location = new System.Drawing.Point(18, 36);
            this.label17.Name = "label17";
            this.label17.Size = new System.Drawing.Size(43, 20);
            this.label17.TabIndex = 3;
            this.label17.Text = "Adet";
            // 
            // listBoxFiyat
            // 
            this.listBoxFiyat.FormattingEnabled = true;
            this.listBoxFiyat.ItemHeight = 20;
            this.listBoxFiyat.Location = new System.Drawing.Point(222, 59);
            this.listBoxFiyat.Name = "listBoxFiyat";
            this.listBoxFiyat.Size = new System.Drawing.Size(115, 184);
            this.listBoxFiyat.TabIndex = 2;
            // 
            // listBoxUrun
            // 
            this.listBoxUrun.FormattingEnabled = true;
            this.listBoxUrun.ItemHeight = 20;
            this.listBoxUrun.Location = new System.Drawing.Point(87, 59);
            this.listBoxUrun.Name = "listBoxUrun";
            this.listBoxUrun.Size = new System.Drawing.Size(115, 184);
            this.listBoxUrun.TabIndex = 1;
            // 
            // listBoxAdet
            // 
            this.listBoxAdet.FormattingEnabled = true;
            this.listBoxAdet.ItemHeight = 20;
            this.listBoxAdet.Location = new System.Drawing.Point(16, 59);
            this.listBoxAdet.Name = "listBoxAdet";
            this.listBoxAdet.Size = new System.Drawing.Size(49, 184);
            this.listBoxAdet.TabIndex = 0;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(45, 556);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(167, 39);
            this.button1.TabIndex = 2;
            this.button1.Text = "Ürünleri Sepete Ekle";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // buttonTemizle
            // 
            this.buttonTemizle.Location = new System.Drawing.Point(267, 556);
            this.buttonTemizle.Name = "buttonTemizle";
            this.buttonTemizle.Size = new System.Drawing.Size(167, 39);
            this.buttonTemizle.TabIndex = 3;
            this.buttonTemizle.Text = "Sepeti Temizle";
            this.buttonTemizle.UseVisualStyleBackColor = true;
            this.buttonTemizle.Click += new System.EventHandler(this.buttonTemizle_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(876, 607);
            this.Controls.Add(this.buttonTemizle);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Form1";
            this.Text = "SaüMarket";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDownTelefon)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDownLaptop)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDownBuzdolabi)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.numericUpDownTv)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).EndInit();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.PictureBox pictureBox3;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.PictureBox pictureBox2;
        private System.Windows.Forms.PictureBox pictureBox4;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Label label12;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label labelTelefonStok;
        private System.Windows.Forms.Label labelCepTelFiyat;
        private System.Windows.Forms.Label labelLaptopStok;
        private System.Windows.Forms.Label labelLaptopFiyat;
        private System.Windows.Forms.Label labelBuzdolabiStok;
        private System.Windows.Forms.Label labelBuzdolabiFiyat;
        private System.Windows.Forms.Label labelStokTv;
        private System.Windows.Forms.Label labelTvFiyat;
        private System.Windows.Forms.NumericUpDown numericUpDownTv;
        private System.Windows.Forms.NumericUpDown numericUpDownTelefon;
        private System.Windows.Forms.NumericUpDown numericUpDownLaptop;
        private System.Windows.Forms.NumericUpDown numericUpDownBuzdolabi;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Label labelToplam;
        private System.Windows.Forms.Label label20;
        private System.Windows.Forms.Label label19;
        private System.Windows.Forms.Label label18;
        private System.Windows.Forms.Label label17;
        private System.Windows.Forms.ListBox listBoxFiyat;
        private System.Windows.Forms.ListBox listBoxUrun;
        private System.Windows.Forms.ListBox listBoxAdet;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button buttonTemizle;
    }
}

