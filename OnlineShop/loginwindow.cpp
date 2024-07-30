#include "loginwindow.h"
#include "ui_loginwindow.h"

using namespace std;

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}



void LoginWindow::on_Ok_pushButton_clicked()
{
    if(ui->Name_lineEdit->text().isEmpty() || ui->PhoneNumber_lineEdit->text().isEmpty()){
        QMessageBox * message = new QMessageBox(this);
        message->setStyleSheet("background:#5C84AF;color:#00264A;font-weight:bold;");
        message->setText("You must fill all fields");
        message->show();
    }

    else{

        User user;

        ifstream usersInformation("Users.txt");
        if(!usersInformation.is_open())
            QMessageBox::warning(this , "Error!" , "Can't open file");

        string line , phoneNumber;

        while(getline(usersInformation , line)){

            istringstream x(line);
            getline(x , phoneNumber , ',');

            if(ui->SignUp_radioButton->isChecked() == true){

                if(ui->PhoneNumber_lineEdit->text().toStdString() == phoneNumber){
                    QMessageBox * message = new QMessageBox(this);
                    message->setStyleSheet("background:#5C84AF;color:#00264A;font-weight:bold;");
                    message->setText("Already there is an account with this phone number");
                    message->show();

                }

                else{

                    ofstream usersInformation("Users.txt" , ios::app);
                    if(!usersInformation.is_open())
                        QMessageBox::warning(this , "Error!" , "Can't open file");

                    user.setName(ui->Name_lineEdit->text().toStdString());
                    user.setPhoneNumber(ui->PhoneNumber_lineEdit->text().toStdString());

                    usersInformation << user.getName() << ',' << user.getPhoneNumber() << ',' << endl;

                    //vorood  be safheye tablighat

                }
            }

            else if(ui->SignIn_radioButton->isChecked() == true){
                user.setPhoneNumber(phoneNumber);
                string name;
                getline(x , name , ',');
                user.setName(name);
                //vorood be safheye bad

            }
        }
    }
}

