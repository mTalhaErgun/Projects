namespace G191210002_Proje
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
            this.components = new System.ComponentModel.Container();
            this.label1 = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.label2 = new System.Windows.Forms.Label();
            this.buttonYeniOyun = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.labelSure = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.labelPuan = new System.Windows.Forms.Label();
            this.buttonCikis = new System.Windows.Forms.Button();
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.buttonOrganik = new System.Windows.Forms.Button();
            this.listBoxOrganik = new System.Windows.Forms.ListBox();
            this.progressBarOrganik = new System.Windows.Forms.ProgressBar();
            this.buttonBosaltOrganik = new System.Windows.Forms.Button();
            this.buttonBosaltKagit = new System.Windows.Forms.Button();
            this.progressBarKagit = new System.Windows.Forms.ProgressBar();
            this.listBoxKagit = new System.Windows.Forms.ListBox();
            this.buttonKagit = new System.Windows.Forms.Button();
            this.label9 = new System.Windows.Forms.Label();
            this.buttonBosaltCam = new System.Windows.Forms.Button();
            this.progressBarCam = new System.Windows.Forms.ProgressBar();
            this.listBoxCam = new System.Windows.Forms.ListBox();
            this.buttonCam = new System.Windows.Forms.Button();
            this.label10 = new System.Windows.Forms.Label();
            this.buttonBosaltMetal = new System.Windows.Forms.Button();
            this.progressBarMetal = new System.Windows.Forms.ProgressBar();
            this.listBoxMetal = new System.Windows.Forms.ListBox();
            this.buttonMetal = new System.Windows.Forms.Button();
            this.label11 = new System.Windows.Forms.Label();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.BackColor = System.Drawing.Color.DimGray;
            this.label1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.label1.Location = new System.Drawing.Point(12, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(249, 232);
            this.label1.TabIndex = 0;
            // 
            // pictureBox1
            // 
            this.pictureBox1.BackColor = System.Drawing.SystemColors.ControlLight;
            this.pictureBox1.Location = new System.Drawing.Point(27, 23);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(217, 201);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox1.TabIndex = 1;
            this.pictureBox1.TabStop = false;
            // 
            // label2
            // 
            this.label2.BackColor = System.Drawing.Color.DimGray;
            this.label2.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.label2.Location = new System.Drawing.Point(12, 259);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(249, 468);
            this.label2.TabIndex = 2;
            // 
            // buttonYeniOyun
            // 
            this.buttonYeniOyun.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.buttonYeniOyun.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.buttonYeniOyun.ForeColor = System.Drawing.SystemColors.ControlLightLight;
            this.buttonYeniOyun.Location = new System.Drawing.Point(27, 271);
            this.buttonYeniOyun.Name = "buttonYeniOyun";
            this.buttonYeniOyun.Size = new System.Drawing.Size(217, 78);
            this.buttonYeniOyun.TabIndex = 3;
            this.buttonYeniOyun.Text = "YENİ OYUN";
            this.buttonYeniOyun.UseVisualStyleBackColor = false;
            this.buttonYeniOyun.Click += new System.EventHandler(this.buttonYeniOyun_Click);
            // 
            // label3
            // 
            this.label3.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label3.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.label3.Location = new System.Drawing.Point(27, 358);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(217, 51);
            this.label3.TabIndex = 4;
            this.label3.Text = "SÜRE";
            this.label3.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // labelSure
            // 
            this.labelSure.BackColor = System.Drawing.SystemColors.ControlLight;
            this.labelSure.Font = new System.Drawing.Font("Microsoft Sans Serif", 19F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.labelSure.ForeColor = System.Drawing.Color.DimGray;
            this.labelSure.Location = new System.Drawing.Point(27, 407);
            this.labelSure.Name = "labelSure";
            this.labelSure.Size = new System.Drawing.Size(217, 82);
            this.labelSure.TabIndex = 5;
            this.labelSure.Text = "60";
            this.labelSure.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // label5
            // 
            this.label5.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label5.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.label5.Location = new System.Drawing.Point(27, 499);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(217, 47);
            this.label5.TabIndex = 6;
            this.label5.Text = "PUAN";
            this.label5.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // labelPuan
            // 
            this.labelPuan.BackColor = System.Drawing.SystemColors.ControlLight;
            this.labelPuan.Font = new System.Drawing.Font("Microsoft Sans Serif", 24F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.labelPuan.ForeColor = System.Drawing.Color.DimGray;
            this.labelPuan.Location = new System.Drawing.Point(27, 546);
            this.labelPuan.Name = "labelPuan";
            this.labelPuan.Size = new System.Drawing.Size(217, 77);
            this.labelPuan.TabIndex = 7;
            this.labelPuan.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // buttonCikis
            // 
            this.buttonCikis.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.buttonCikis.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.buttonCikis.ForeColor = System.Drawing.SystemColors.ControlLightLight;
            this.buttonCikis.Location = new System.Drawing.Point(27, 636);
            this.buttonCikis.Name = "buttonCikis";
            this.buttonCikis.Size = new System.Drawing.Size(217, 75);
            this.buttonCikis.TabIndex = 8;
            this.buttonCikis.Text = "ÇIKIŞ";
            this.buttonCikis.UseVisualStyleBackColor = false;
            this.buttonCikis.Click += new System.EventHandler(this.buttonCikis_Click);
            // 
            // label7
            // 
            this.label7.BackColor = System.Drawing.Color.DimGray;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label7.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.label7.Location = new System.Drawing.Point(280, 9);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(390, 40);
            this.label7.TabIndex = 9;
            this.label7.Text = "ATIK KUTULARI";
            this.label7.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // label8
            // 
            this.label8.BackColor = System.Drawing.Color.DimGray;
            this.label8.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.label8.Location = new System.Drawing.Point(280, 60);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(189, 328);
            this.label8.TabIndex = 10;
            // 
            // buttonOrganik
            // 
            this.buttonOrganik.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.buttonOrganik.Enabled = false;
            this.buttonOrganik.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.buttonOrganik.ForeColor = System.Drawing.SystemColors.ControlLightLight;
            this.buttonOrganik.Location = new System.Drawing.Point(296, 75);
            this.buttonOrganik.Name = "buttonOrganik";
            this.buttonOrganik.Size = new System.Drawing.Size(157, 37);
            this.buttonOrganik.TabIndex = 11;
            this.buttonOrganik.Text = "ORGANİK ATIK";
            this.buttonOrganik.UseVisualStyleBackColor = false;
            this.buttonOrganik.Click += new System.EventHandler(this.buttonOrganik_Click);
            // 
            // listBoxOrganik
            // 
            this.listBoxOrganik.BackColor = System.Drawing.SystemColors.ControlLight;
            this.listBoxOrganik.Font = new System.Drawing.Font("Microsoft Sans Serif", 8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.listBoxOrganik.ForeColor = System.Drawing.Color.DimGray;
            this.listBoxOrganik.FormattingEnabled = true;
            this.listBoxOrganik.ItemHeight = 16;
            this.listBoxOrganik.Location = new System.Drawing.Point(296, 120);
            this.listBoxOrganik.Name = "listBoxOrganik";
            this.listBoxOrganik.Size = new System.Drawing.Size(157, 180);
            this.listBoxOrganik.TabIndex = 13;
            // 
            // progressBarOrganik
            // 
            this.progressBarOrganik.Location = new System.Drawing.Point(296, 306);
            this.progressBarOrganik.Maximum = 700;
            this.progressBarOrganik.Name = "progressBarOrganik";
            this.progressBarOrganik.Size = new System.Drawing.Size(157, 23);
            this.progressBarOrganik.TabIndex = 15;
            // 
            // buttonBosaltOrganik
            // 
            this.buttonBosaltOrganik.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.buttonBosaltOrganik.Enabled = false;
            this.buttonBosaltOrganik.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.buttonBosaltOrganik.ForeColor = System.Drawing.SystemColors.ControlLightLight;
            this.buttonBosaltOrganik.Location = new System.Drawing.Point(295, 335);
            this.buttonBosaltOrganik.Name = "buttonBosaltOrganik";
            this.buttonBosaltOrganik.Size = new System.Drawing.Size(158, 37);
            this.buttonBosaltOrganik.TabIndex = 16;
            this.buttonBosaltOrganik.Text = "BOŞALT";
            this.buttonBosaltOrganik.UseVisualStyleBackColor = false;
            this.buttonBosaltOrganik.Click += new System.EventHandler(this.buttonBosaltOrganik_Click);
            // 
            // buttonBosaltKagit
            // 
            this.buttonBosaltKagit.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.buttonBosaltKagit.Enabled = false;
            this.buttonBosaltKagit.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.buttonBosaltKagit.ForeColor = System.Drawing.SystemColors.ControlLightLight;
            this.buttonBosaltKagit.Location = new System.Drawing.Point(496, 335);
            this.buttonBosaltKagit.Name = "buttonBosaltKagit";
            this.buttonBosaltKagit.Size = new System.Drawing.Size(158, 37);
            this.buttonBosaltKagit.TabIndex = 21;
            this.buttonBosaltKagit.Text = "BOŞALT";
            this.buttonBosaltKagit.UseVisualStyleBackColor = false;
            this.buttonBosaltKagit.Click += new System.EventHandler(this.buttonBosaltKagit_Click);
            // 
            // progressBarKagit
            // 
            this.progressBarKagit.Location = new System.Drawing.Point(497, 306);
            this.progressBarKagit.Maximum = 1200;
            this.progressBarKagit.Name = "progressBarKagit";
            this.progressBarKagit.Size = new System.Drawing.Size(157, 23);
            this.progressBarKagit.TabIndex = 20;
            // 
            // listBoxKagit
            // 
            this.listBoxKagit.BackColor = System.Drawing.SystemColors.ControlLight;
            this.listBoxKagit.Font = new System.Drawing.Font("Microsoft Sans Serif", 8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.listBoxKagit.ForeColor = System.Drawing.Color.DimGray;
            this.listBoxKagit.FormattingEnabled = true;
            this.listBoxKagit.ItemHeight = 16;
            this.listBoxKagit.Location = new System.Drawing.Point(497, 120);
            this.listBoxKagit.Name = "listBoxKagit";
            this.listBoxKagit.Size = new System.Drawing.Size(157, 180);
            this.listBoxKagit.TabIndex = 19;
            // 
            // buttonKagit
            // 
            this.buttonKagit.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.buttonKagit.Enabled = false;
            this.buttonKagit.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.buttonKagit.ForeColor = System.Drawing.SystemColors.ControlLightLight;
            this.buttonKagit.Location = new System.Drawing.Point(497, 75);
            this.buttonKagit.Name = "buttonKagit";
            this.buttonKagit.Size = new System.Drawing.Size(157, 37);
            this.buttonKagit.TabIndex = 18;
            this.buttonKagit.Text = "KAĞIT";
            this.buttonKagit.UseVisualStyleBackColor = false;
            this.buttonKagit.Click += new System.EventHandler(this.buttonKagit_Click);
            // 
            // label9
            // 
            this.label9.BackColor = System.Drawing.Color.DimGray;
            this.label9.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.label9.Location = new System.Drawing.Point(481, 60);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(189, 328);
            this.label9.TabIndex = 17;
            // 
            // buttonBosaltCam
            // 
            this.buttonBosaltCam.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.buttonBosaltCam.Enabled = false;
            this.buttonBosaltCam.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.buttonBosaltCam.ForeColor = System.Drawing.SystemColors.ControlLightLight;
            this.buttonBosaltCam.Location = new System.Drawing.Point(295, 673);
            this.buttonBosaltCam.Name = "buttonBosaltCam";
            this.buttonBosaltCam.Size = new System.Drawing.Size(158, 37);
            this.buttonBosaltCam.TabIndex = 26;
            this.buttonBosaltCam.Text = "BOŞALT";
            this.buttonBosaltCam.UseVisualStyleBackColor = false;
            this.buttonBosaltCam.Click += new System.EventHandler(this.buttonBosaltCam_Click);
            // 
            // progressBarCam
            // 
            this.progressBarCam.Location = new System.Drawing.Point(296, 644);
            this.progressBarCam.Maximum = 2200;
            this.progressBarCam.Name = "progressBarCam";
            this.progressBarCam.Size = new System.Drawing.Size(157, 23);
            this.progressBarCam.TabIndex = 25;
            // 
            // listBoxCam
            // 
            this.listBoxCam.BackColor = System.Drawing.SystemColors.ControlLight;
            this.listBoxCam.Font = new System.Drawing.Font("Microsoft Sans Serif", 8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.listBoxCam.ForeColor = System.Drawing.Color.DimGray;
            this.listBoxCam.FormattingEnabled = true;
            this.listBoxCam.ItemHeight = 16;
            this.listBoxCam.Location = new System.Drawing.Point(296, 458);
            this.listBoxCam.Name = "listBoxCam";
            this.listBoxCam.Size = new System.Drawing.Size(157, 180);
            this.listBoxCam.TabIndex = 24;
            // 
            // buttonCam
            // 
            this.buttonCam.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.buttonCam.Enabled = false;
            this.buttonCam.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.buttonCam.ForeColor = System.Drawing.SystemColors.ControlLightLight;
            this.buttonCam.Location = new System.Drawing.Point(296, 413);
            this.buttonCam.Name = "buttonCam";
            this.buttonCam.Size = new System.Drawing.Size(157, 37);
            this.buttonCam.TabIndex = 23;
            this.buttonCam.Text = "CAM";
            this.buttonCam.UseVisualStyleBackColor = false;
            this.buttonCam.Click += new System.EventHandler(this.buttonCam_Click);
            // 
            // label10
            // 
            this.label10.BackColor = System.Drawing.Color.DimGray;
            this.label10.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.label10.Location = new System.Drawing.Point(280, 398);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(189, 328);
            this.label10.TabIndex = 22;
            // 
            // buttonBosaltMetal
            // 
            this.buttonBosaltMetal.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.buttonBosaltMetal.Enabled = false;
            this.buttonBosaltMetal.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.buttonBosaltMetal.ForeColor = System.Drawing.SystemColors.ControlLightLight;
            this.buttonBosaltMetal.Location = new System.Drawing.Point(496, 673);
            this.buttonBosaltMetal.Name = "buttonBosaltMetal";
            this.buttonBosaltMetal.Size = new System.Drawing.Size(158, 37);
            this.buttonBosaltMetal.TabIndex = 31;
            this.buttonBosaltMetal.Text = "BOŞALT";
            this.buttonBosaltMetal.UseVisualStyleBackColor = false;
            this.buttonBosaltMetal.Click += new System.EventHandler(this.buttonBosaltMetal_Click);
            // 
            // progressBarMetal
            // 
            this.progressBarMetal.Location = new System.Drawing.Point(497, 644);
            this.progressBarMetal.Maximum = 2300;
            this.progressBarMetal.Name = "progressBarMetal";
            this.progressBarMetal.Size = new System.Drawing.Size(157, 23);
            this.progressBarMetal.TabIndex = 30;
            // 
            // listBoxMetal
            // 
            this.listBoxMetal.BackColor = System.Drawing.SystemColors.ControlLight;
            this.listBoxMetal.Font = new System.Drawing.Font("Microsoft Sans Serif", 8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.listBoxMetal.ForeColor = System.Drawing.Color.DimGray;
            this.listBoxMetal.FormattingEnabled = true;
            this.listBoxMetal.ItemHeight = 16;
            this.listBoxMetal.Location = new System.Drawing.Point(497, 458);
            this.listBoxMetal.Name = "listBoxMetal";
            this.listBoxMetal.Size = new System.Drawing.Size(157, 180);
            this.listBoxMetal.TabIndex = 29;
            // 
            // buttonMetal
            // 
            this.buttonMetal.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.buttonMetal.Enabled = false;
            this.buttonMetal.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.buttonMetal.ForeColor = System.Drawing.SystemColors.ControlLightLight;
            this.buttonMetal.Location = new System.Drawing.Point(497, 413);
            this.buttonMetal.Name = "buttonMetal";
            this.buttonMetal.Size = new System.Drawing.Size(157, 37);
            this.buttonMetal.TabIndex = 28;
            this.buttonMetal.Text = "METAL";
            this.buttonMetal.UseVisualStyleBackColor = false;
            this.buttonMetal.Click += new System.EventHandler(this.buttonMetal_Click);
            // 
            // label11
            // 
            this.label11.BackColor = System.Drawing.Color.DimGray;
            this.label11.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.label11.Location = new System.Drawing.Point(481, 398);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(189, 328);
            this.label11.TabIndex = 27;
            // 
            // timer1
            // 
            this.timer1.Interval = 1000;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Gray;
            this.ClientSize = new System.Drawing.Size(683, 738);
            this.Controls.Add(this.buttonBosaltMetal);
            this.Controls.Add(this.progressBarMetal);
            this.Controls.Add(this.listBoxMetal);
            this.Controls.Add(this.buttonMetal);
            this.Controls.Add(this.label11);
            this.Controls.Add(this.buttonBosaltCam);
            this.Controls.Add(this.progressBarCam);
            this.Controls.Add(this.listBoxCam);
            this.Controls.Add(this.buttonCam);
            this.Controls.Add(this.label10);
            this.Controls.Add(this.buttonBosaltKagit);
            this.Controls.Add(this.progressBarKagit);
            this.Controls.Add(this.listBoxKagit);
            this.Controls.Add(this.buttonKagit);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.buttonBosaltOrganik);
            this.Controls.Add(this.progressBarOrganik);
            this.Controls.Add(this.listBoxOrganik);
            this.Controls.Add(this.buttonOrganik);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.buttonCikis);
            this.Controls.Add(this.labelPuan);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.labelSure);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.buttonYeniOyun);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button buttonYeniOyun;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label labelSure;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label labelPuan;
        private System.Windows.Forms.Button buttonCikis;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Button buttonOrganik;
        private System.Windows.Forms.ListBox listBoxOrganik;
        private System.Windows.Forms.ProgressBar progressBarOrganik;
        private System.Windows.Forms.Button buttonBosaltOrganik;
        private System.Windows.Forms.Button buttonBosaltKagit;
        private System.Windows.Forms.ProgressBar progressBarKagit;
        private System.Windows.Forms.ListBox listBoxKagit;
        private System.Windows.Forms.Button buttonKagit;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Button buttonBosaltCam;
        private System.Windows.Forms.ProgressBar progressBarCam;
        private System.Windows.Forms.ListBox listBoxCam;
        private System.Windows.Forms.Button buttonCam;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.Button buttonBosaltMetal;
        private System.Windows.Forms.ProgressBar progressBarMetal;
        private System.Windows.Forms.ListBox listBoxMetal;
        private System.Windows.Forms.Button buttonMetal;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Timer timer1;
    }
}

