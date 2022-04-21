/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**				BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				   NESNEYE DAYALI PROGRAMLAMA DERSİ
**					2019-2020 BAHAR DÖNEMİ
**	
**				ÖDEV NUMARASI..........: Proje
**				ÖĞRENCİ ADI............: MUHAMMET TALHA ERGÜN
**				ÖĞRENCİ NUMARASI.......: G191210002
**              DERSİN ALINDIĞI GRUP...: C
****************************************************************************/


using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace G191210002_Proje
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        string[] resimler = Directory.GetFiles("atiklar", "*.jpg");
        Random rastgele = new Random();

        public interface IAtik
        {
            int Hacim { get; }
            System.Drawing.Image Image { get; }
        }
        public interface IAtikKutusu : IDolabilen
        {
            int BosaltmaPuani { get; }
                 
            void Bosalt();
        }
        public interface IDolabilen
        {
            int Kapasite { get; set; }
            int DoluHacim { get; }
            int DolulukOrani { get; }
        }

        class Atik : IAtik, IAtikKutusu, IDolabilen
        {
            public int camSiseHacim = 600, bardakHacim = 250, gazeteHacim = 250, dergiHacim = 200,
            domatesHacim = 150, salatalikHacim = 120, kolaHacim = 350, salcaHacim = 550;
            public int puan;

            int IAtikKutusu.BosaltmaPuani
            {
                get
                {
                    
                    throw new NotImplementedException();
                }
            }

            int IDolabilen.Kapasite
            {
                get
                {
                    throw new NotImplementedException();
                }
                set
                {

                }
            }

            int IDolabilen.DoluHacim
            {
                get
                {
                    throw new NotImplementedException();
                }
            }

            int IDolabilen.DolulukOrani
            {
                get
                {
                    throw new NotImplementedException();
                }
            }

            int IAtik.Hacim
            {
                get
                {
                    throw new NotImplementedException();
                }
            }

            Image IAtik.Image
            {
                get
                {
                    throw new NotImplementedException();
                }
            }

            public int sayacOrganik = 0, sayacKagit = 0, sayacCam = 0, sayacMetal = 0;
            void IAtikKutusu.Bosalt()
            {
                
            }
            
        }

        private void buttonYeniOyun_Click(object sender, EventArgs e)
        {
            Atik atik = new Atik();
            atik.puan = 0;
            labelSure.Text = "60";
            buttonYeniOyun.Enabled = false;
            buttonCam.Enabled = true;
            buttonOrganik.Enabled = true;
            buttonMetal.Enabled = true;
            buttonKagit.Enabled = true;
            buttonBosaltCam.Enabled = true;
            buttonBosaltOrganik.Enabled = true;
            buttonBosaltMetal.Enabled = true;
            buttonBosaltKagit.Enabled = true;

            pictureBox1.ImageLocation = resimler[rastgele.Next(0, resimler.Length)];
            timer1.Start();
        }

        private void buttonCikis_Click(object sender, EventArgs e)
        {
             Application.Exit();
        }

        int puan = 0;
        private void buttonOrganik_Click(object sender, EventArgs e)
        {
            Atik atik = new Atik();
            if (pictureBox1.ImageLocation == resimler[3] && progressBarOrganik.Value < 525) // Resimlerin hangi atık olduğunu kontrol eden koşul.
            {
                listBoxOrganik.Items.Add("Domates (150)");
                progressBarOrganik.Value += 150;
                puan += atik.domatesHacim;
                labelPuan.Text = Convert.ToString(puan);
                pictureBox1.ImageLocation = resimler[rastgele.Next(0, resimler.Length)];
            }

            else if (pictureBox1.ImageLocation == resimler[6] && progressBarOrganik.Value < 525) // Resimlerin hangi atık olduğunu kontrol eden koşul.
            {
                listBoxOrganik.Items.Add("Salatalik (120)");
                progressBarOrganik.Value += 120;
                puan += atik.salatalikHacim;
                labelPuan.Text = Convert.ToString(puan);
                pictureBox1.ImageLocation = resimler[rastgele.Next(0, resimler.Length)];
            }
            
        }

        private void buttonKagit_Click(object sender, EventArgs e)
        {
            Atik atik = new Atik();
            if (pictureBox1.ImageLocation == resimler[4] && progressBarKagit.Value < 900) // Resimlerin hangi atık olduğunu kontrol eden koşul.
            {
                listBoxKagit.Items.Add("Gazete (250)");
                progressBarKagit.Value += 250;
                puan += atik.gazeteHacim;
                labelPuan.Text = Convert.ToString(puan);
                pictureBox1.ImageLocation = resimler[rastgele.Next(0, resimler.Length)];
            }

            else if (pictureBox1.ImageLocation == resimler[2] && progressBarKagit.Value < 900) // Resimlerin hangi atık olduğunu kontrol eden koşul.
            {
                listBoxKagit.Items.Add("Dergi (200)");
                progressBarKagit.Value += 200;
                puan += atik.dergiHacim;
                labelPuan.Text = Convert.ToString(puan);
                pictureBox1.ImageLocation = resimler[rastgele.Next(0, resimler.Length)];
            }
        }

        private void buttonCam_Click(object sender, EventArgs e)
        {
            Atik atik = new Atik();
            if (pictureBox1.ImageLocation == resimler[1] && progressBarCam.Value < 1650) // Resimlerin hangi atık olduğunu kontrol eden koşul.
            {
                listBoxCam.Items.Add("Cam Sise (600)");
                progressBarCam.Value += 600;
                puan += atik.camSiseHacim;
                labelPuan.Text = Convert.ToString(puan);
                pictureBox1.ImageLocation = resimler[rastgele.Next(0, resimler.Length)];
            }

            else if (pictureBox1.ImageLocation == resimler[0] && progressBarCam.Value < 1650) // Resimlerin hangi atık olduğunu kontrol eden koşul.
            {
                listBoxCam.Items.Add("Bardak (250)");
                progressBarCam.Value += 250;
                puan += atik.bardakHacim;
                labelPuan.Text = Convert.ToString(puan);
                pictureBox1.ImageLocation = resimler[rastgele.Next(0, resimler.Length)];
            }
        }

        private void buttonMetal_Click(object sender, EventArgs e)
        {
            Atik atik = new Atik();
            if (pictureBox1.ImageLocation == resimler[5] && progressBarMetal.Value < 1725) // Resimlerin hangi atık olduğunu kontrol eden koşul.
            {
                listBoxMetal.Items.Add("Kola Kutusu (350)");
                progressBarMetal.Value += 350;
                puan += atik.kolaHacim;
                labelPuan.Text = Convert.ToString(puan);
                pictureBox1.ImageLocation = resimler[rastgele.Next(0, resimler.Length)];
            }

            else if (pictureBox1.ImageLocation == resimler[7] && progressBarMetal.Value < 1725) // Resimlerin hangi atık olduğunu kontrol eden koşul.
            {
                listBoxMetal.Items.Add("Salca Kutusu (550)");
                progressBarMetal.Value += 550;
                puan += atik.salcaHacim;
                labelPuan.Text = Convert.ToString(puan);
                pictureBox1.ImageLocation = resimler[rastgele.Next(0, resimler.Length)];
            }
        }

        private void buttonBosaltOrganik_Click(object sender, EventArgs e)
        {         
            if (progressBarOrganik.Value >= 525) // Organik barının dolmasını kontrol eden koşul.
            {
                listBoxOrganik.Items.Clear();
                progressBarOrganik.Value = 0;
                labelSure.Text = Convert.ToString(Convert.ToInt32(labelSure.Text) + 3);
            }                     
        }

        private void buttonBosaltKagit_Click(object sender, EventArgs e)
        {
            if (progressBarKagit.Value >= 900) // Kağıt barının dolmasını kontrol eden koşul.
            {
                listBoxKagit.Items.Clear();
                progressBarKagit.Value = 0;
                labelSure.Text = Convert.ToString(Convert.ToInt32(labelSure.Text) + 3);
                puan += 1000;
                labelPuan.Text = Convert.ToString(puan);
            }
        }

        private void buttonBosaltCam_Click(object sender, EventArgs e)
        {
            if (progressBarCam.Value >= 1650) // Cam barının dolmasını kontrol eden koşul.
            {
                listBoxCam.Items.Clear();
                progressBarCam.Value = 0;
                labelSure.Text = Convert.ToString(Convert.ToInt32(labelSure.Text) + 3);
                puan += 600;
                labelPuan.Text = Convert.ToString(puan);
            }
        }

        private void buttonBosaltMetal_Click(object sender, EventArgs e)
        {
            if (progressBarMetal.Value >= 1725) // Metal barının dolmasını kontrol eden koşul.
            {
                listBoxMetal.Items.Clear();
                progressBarMetal.Value = 0;
                labelSure.Text = Convert.ToString(Convert.ToInt32(labelSure.Text) + 3);
                puan += 800;
                labelPuan.Text = Convert.ToString(puan);
            }
        }
        
        private void timer1_Tick(object sender, EventArgs e)
        {
            int sayac;
            sayac = Convert.ToInt32(labelSure.Text);
            sayac--;
            labelSure.Text = Convert.ToString(sayac);
            if (sayac == 0) // Sürenin sıfırlanıp sıfırlanmadığını kontrol eden koşul.
            {
                timer1.Stop();
                buttonYeniOyun.Enabled = true;
                buttonCam.Enabled = false;
                buttonOrganik.Enabled = false;
                buttonMetal.Enabled = false;
                buttonKagit.Enabled = false;
                buttonBosaltCam.Enabled = false;
                buttonBosaltOrganik.Enabled = false;
                buttonBosaltMetal.Enabled = false;
                buttonBosaltKagit.Enabled = false;
            }
        }
    }
}
