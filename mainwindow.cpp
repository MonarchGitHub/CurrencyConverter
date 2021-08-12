#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Choose Currency");
    ui->comboBox->addItem("USD (US Dollars)");
    ui->comboBox->addItem("Rupee (Indian Rupee)");
    ui->comboBox->addItem("Euro (EU Currency)");
    ui->comboBox->addItem("Yen (Japanese Currency)");
    ui->comboBox->addItem("Rub (Russian Rouble)");

    ui->comboBox_2->addItem("Choose Currency");
    ui->comboBox_2->addItem("USD (US Dollars)");
    ui->comboBox_2->addItem("Rupee (Indian Rupee)");
    ui->comboBox_2->addItem("Euro (EU Currency)");
    ui->comboBox_2->addItem("Yen (Japanese Currency)");
    ui->comboBox_2->addItem("Rub (Russian Rouble)");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    QString first = ui->comboBox->currentText();
    QString  second = ui->comboBox_2->currentText();

   if(first==second){

  QString amount= ui->lineEdit->text();
  ui->lineEdit_2->setText(amount);

   }

   else if(first=="USD (US Dollars)"){  //(1/10) start of US loop

       ui->label_3->setText("Our currency rankings show that the most popular US Dollar exchange"
" rate is the USD to EUR rate. The currency code for US Dollars is USD."
" The currency symbol is $.");

  if(second=="Rupee (Indian Rupee)"){


  QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*74.43;
 ui->lineEdit_2->setText(QString::number(curr));

 }

  else if(second=="Euro (EU Currency)"){


  QString amount= ui->lineEdit->text();
  float n = amount.toFloat();
  float curr;
  curr=n*0.85;
  ui->lineEdit_2->setText(QString::number(curr));

 }

  else if (second == "Yen (Japanese Currency)")
  {

      QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 110.38;
      ui->lineEdit_2->setText(QString::number(curr));
  }

  else if (second == "Rub (Russian Rouble)")
  {

      QString amount = ui->lineEdit->text();
      float n = amount.toFloat();
      float curr;
      curr = n * 74.01;
      ui->lineEdit_2->setText(QString::number(curr));
  }
}                                          // (2/10) end of US loop

   else if(first=="Rupee (Indian Rupee)"){ // (3/10) start of IND loop

       ui->label_3->setText("Our currency rankings show that the most popular"
" Indian Rupee exchange rate is the INR to USD rate."
" The currency code for Indian Rupees is INR. The currency symbol is ₹");

        if (second == "Yen (Japanese Currency)")
       {

           QString amount = ui->lineEdit->text();
           float n = amount.toFloat();
           float curr;
           curr = n * 1.49;
           ui->lineEdit_2->setText(QString::number(curr));
       }

        else if (second == "Euro (EU Currency)")
        {

            QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.011;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "USD (US Dollars)")
        {

            QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.013;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "Rub (Russian Rouble)")
        {

            QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.99;
            ui->lineEdit_2->setText(QString::number(curr));
        }


   }                                    //(4/10) end of IND loop

   else if(first=="Euro (EU Currency)"){ // (5/10) start of EU loop

       ui->label_3->setText("Our currency rankings show that the most popular"
" Euro exchange rate is the EUR to USD rate."
" The currency code for Euros is EUR. The currency symbol is €.");

        if (second == "Yen (Japanese Currency)")
       {

           QString amount = ui->lineEdit->text();
           float n = amount.toFloat();
           float curr;
           curr = n * 130.10;
           ui->lineEdit_2->setText(QString::number(curr));
       }

        else if (second == "Rupee (Indian Rupee)")
        {

            QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 87.64;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "USD (US Dollars)")
        {

            QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 1.18;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "Rub (Russian Rouble)")
        {

            QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 87.21;
            ui->lineEdit_2->setText(QString::number(curr));
        }


   }                                             //(6/10) end of EUR loop


   else if(first=="Yen (Japanese Currency)"){ // (7/10) start of JP loop

       ui->label_3->setText("Our currency rankings show that the"
" most popular Japanese Yen exchange rate is the JPY to EUR rate."
" The currency code for Japanese Yen is JPY. The currency symbol is ¥.");

        if (second == "Euro (EU Currency)")
       {

           QString amount = ui->lineEdit->text();
           float n = amount.toFloat();
           float curr;
           curr = n * 0.0077;
           ui->lineEdit_2->setText(QString::number(curr));
       }

        else if (second == "Rupee (Indian Rupee)")
        {

            QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.67;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "USD (US Dollars)")
        {

            QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.0091;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "Rub (Russian Rouble)")
        {

            QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.67;
            ui->lineEdit_2->setText(QString::number(curr));
        }


   }                                         //(8/10) End of Jpy loop


   else if(first=="Rub (Russian Rouble)"){ // (9/10) start of RUS loop

       ui->label_3->setText("Our currency rankings show that the most popular Russian Ruble"
" exchange rate is the RUB to EUR rate. The currency code for Russian Rubles is RUB. The currency symbol is ₽.");

        if (second == "Yen (Japanese Currency)")
       {

           QString amount = ui->lineEdit->text();
           float n = amount.toFloat();
           float curr;
           curr = n * 1.49;
           ui->lineEdit_2->setText(QString::number(curr));
       }

        else if (second == "Euro (EU Currency)")
        {

            QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.011;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "USD (US Dollars)")
        {

            QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 0.014;
            ui->lineEdit_2->setText(QString::number(curr));
        }

        else if (second == "Rupee (Indian Rupee)")
        {

            QString amount = ui->lineEdit->text();
            float n = amount.toFloat();
            float curr;
            curr = n * 1.01;
            ui->lineEdit_2->setText(QString::number(curr));
        }


   }                                                      //(10/10) end of RUS loop

    ui->label_5->setText("Conversion Complete");

}

void MainWindow::on_label_3_linkActivated(const QString &link)
{

}

