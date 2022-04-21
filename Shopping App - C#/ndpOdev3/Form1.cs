/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**				BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				   NESNEYE DAYALI PROGRAMLAMA DERSİ
**					2019-2020 BAHAR DÖNEMİ
**	
**				ÖDEV NUMARASI..........: 3. ÖDEV
**				ÖĞRENCİ ADI............: MUHAMMET TALHA ERGÜN
**				ÖĞRENCİ NUMARASI.......: G191210002
**              DERSİN ALINDIĞI GRUP...: İkinci Öğretim C Grubu
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

namespace ndpOdev3
{

    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void numericUpDown1_ValueChanged(object sender, EventArgs e)
        {

        }

        int buzdolabiStok, tvStok, laptopStok, ceptelStok, buzdolabiYedek, tvYedek, laptopYedek, ceptelYedek;
        private void Form1_Load(object sender, EventArgs e)
        {
            Buzdolabi buzdolabi = new Buzdolabi();
            labelBuzdolabiFiyat.Text = Convert.ToString(buzdolabi.HamFiyat);
            labelBuzdolabiStok.Text = Convert.ToString(buzdolabi.StokAdedi);
            buzdolabiStok = buzdolabi.StokAdedi;
            buzdolabiYedek = buzdolabi.StokAdedi;

            LedTv tv = new LedTv();
            labelTvFiyat.Text = Convert.ToString(tv.HamFiyat);
            labelStokTv.Text = Convert.ToString(tv.StokAdedi);
            tvStok = tv.StokAdedi;
            tvYedek = tv.StokAdedi;

            Laptop laptop = new Laptop();
            labelLaptopFiyat.Text = Convert.ToString(laptop.HamFiyat);
            labelLaptopStok.Text = Convert.ToString(laptop.StokAdedi);
            laptopStok = laptop.StokAdedi;
            laptopYedek = laptop.StokAdedi;

            CepTel tel = new CepTel();
            labelCepTelFiyat.Text = Convert.ToString(tel.HamFiyat);
            labelTelefonStok.Text = Convert.ToString(tel.StokAdedi);
            ceptelStok = tel.StokAdedi;
            ceptelYedek = tel.StokAdedi;

            numericUpDownBuzdolabi.Maximum = buzdolabiStok;
            numericUpDownTv.Maximum = tvStok;
            numericUpDownLaptop.Maximum = laptopStok;
            numericUpDownTelefon.Maximum = ceptelStok;
        }

        private void button1_Click(object sender, EventArgs e) // Sepete Ekle butonuna tıklandığında yapılacak işlemler.
        {
            if (listBoxAdet.Items.Count < 1) // Sepet doluysa üstüne eklenmesini engelleyen koşul.
            {
                Buzdolabi buzdolabi = new Buzdolabi();
                LedTv tv = new LedTv();
                Laptop laptop = new Laptop();
                CepTel tel = new CepTel();

                buzdolabi.SecilenAdet = Convert.ToInt32(numericUpDownBuzdolabi.Value);
                tv.SecilenAdet = Convert.ToInt32(numericUpDownTv.Value);
                laptop.SecilenAdet = Convert.ToInt32(numericUpDownLaptop.Value);
                tel.SecilenAdet = Convert.ToInt32(numericUpDownTelefon.Value);

                buzdolabi.kdvliFiyat = buzdolabi.HamFiyat * 1.05 * buzdolabi.SecilenAdet;
                tv.kdvliFiyat = tv.HamFiyat * 1.18 * tv.SecilenAdet;
                laptop.kdvliFiyat = laptop.HamFiyat * 1.15 * laptop.SecilenAdet;
                tel.kdvliFiyat = tel.HamFiyat * 1.20 * tel.SecilenAdet;

                Urun urun = new Urun();
                urun.toplamKdvliFiyat = buzdolabi.kdvliFiyat + tv.kdvliFiyat + laptop.kdvliFiyat + tel.kdvliFiyat;
                labelToplam.Text = Convert.ToString(urun.toplamKdvliFiyat);

                if (numericUpDownBuzdolabi.Value > 0) // Secilen adet 0 olduğunda sepete eklenmesini engelleyen koşul.
                {
                    listBoxAdet.Items.Add(buzdolabi.SecilenAdet);
                    listBoxUrun.Items.Add("Buzdolabi");
                    listBoxFiyat.Items.Add(buzdolabi.kdvliFiyat);
                    buzdolabiStok = buzdolabiStok - buzdolabi.SecilenAdet;
                    labelBuzdolabiStok.Text = Convert.ToString(buzdolabiStok);
                }

                if (numericUpDownTv.Value > 0) // Secilen adet 0 olduğunda sepete eklenmesini engelleyen koşul.
                {
                    listBoxAdet.Items.Add(tv.SecilenAdet);
                    listBoxUrun.Items.Add("Led TV");
                    listBoxFiyat.Items.Add(tv.kdvliFiyat);
                    tvStok = tvStok - tv.SecilenAdet;
                    labelStokTv.Text = Convert.ToString(tvStok);
                }
                if (numericUpDownLaptop.Value > 0) // Secilen adet 0 olduğunda sepete eklenmesini engelleyen koşul.
                {
                    listBoxAdet.Items.Add(laptop.SecilenAdet);
                    listBoxUrun.Items.Add("Laptop");
                    listBoxFiyat.Items.Add(laptop.kdvliFiyat);
                    laptopStok = laptopStok - laptop.SecilenAdet;
                    labelLaptopStok.Text = Convert.ToString(laptopStok);
                }
                if (numericUpDownTelefon.Value > 0) // Secilen adet 0 olduğunda sepete eklenmesini engelleyen koşul.
                {
                    listBoxAdet.Items.Add(tel.SecilenAdet);
                    listBoxUrun.Items.Add("Cep Telefonu");
                    listBoxFiyat.Items.Add(tel.kdvliFiyat);
                    ceptelStok = ceptelStok - tel.SecilenAdet;
                    labelTelefonStok.Text = Convert.ToString(ceptelStok);
                }
            }

            else // Sepet dolu olduğunda ekrana mesaj yazdıran koşul.
            {
                MessageBox.Show("Sepete tekrar ürün eklemek için sepeti boşaltmanız gerekmektedir.");
            }
        }

        private void buttonTemizle_Click(object sender, EventArgs e) // Sepeti Temizle butonuna tıklandığında yapılacak işlemler.
        {
            if (listBoxAdet.Items.Count > 0) // Sepet doluysa sepeti temizleyen koşul.
            {
                listBoxAdet.Items.Clear();
                listBoxUrun.Items.Clear();
                listBoxFiyat.Items.Clear();
                labelToplam.Text = "";

                buzdolabiStok = buzdolabiStok + Convert.ToInt32(numericUpDownBuzdolabi.Value);
                numericUpDownBuzdolabi.Value = 0;
                labelBuzdolabiStok.Text = Convert.ToString(buzdolabiYedek);

                tvStok = tvStok + Convert.ToInt32(numericUpDownTv.Value);
                numericUpDownTv.Value = 0;
                labelStokTv.Text = Convert.ToString(tvYedek);

                laptopStok = laptopStok + Convert.ToInt32(numericUpDownLaptop.Value);
                numericUpDownLaptop.Value = 0;
                labelLaptopStok.Text = Convert.ToString(laptopYedek);

                ceptelStok = ceptelStok + Convert.ToInt32(numericUpDownTelefon.Value);
                numericUpDownTelefon.Value = 0;
                labelTelefonStok.Text = Convert.ToString(ceptelYedek);
            }
        }
    }

    class Urun
    {
        public string Ad, Marka, Model, Ozellik;
        public int StokAdedi, HamFiyat, SecilenAdet;
        public double kdvliFiyat, toplamKdvliFiyat;
    }

    class Buzdolabi : Urun
    {
        int IcHacim;
        string EnerjiSinifi;

        Random rastgele = new Random((int)DateTime.Now.Ticks);
        public Buzdolabi()
        {
            HamFiyat = 3400;
            StokAdedi = rastgele.Next(1, 100);
        }
    }

    class LedTv : Urun
    {
        int EkranBoyutu;
        string EkranCozunurlugu;
         
        Random rast = new Random((int)DateTime.Now.Ticks);
        public LedTv()
        {
            HamFiyat = 2700;
            StokAdedi = rast.Next(1, 100);
        }
    }

    class CepTel : Urun
    {
        int DahiliHafiza, RamKapasitesi, PilGucu;

        Random rstg = new Random((int)DateTime.Now.Ticks);
        public CepTel()
        {
            HamFiyat = 7400;
            StokAdedi = rstg.Next(1, 100);
        }
    }

    class Laptop : Urun
    {
        int EkranBoyutu, DahiliHafiza, RamKapasitesi;
        string EkranCozunurluk;

        Random rstgl = new Random((int)DateTime.Now.Ticks);
        public Laptop()
        {
            HamFiyat = 4300;
            StokAdedi = rstgl.Next(1,100);           
        }
    }  
}