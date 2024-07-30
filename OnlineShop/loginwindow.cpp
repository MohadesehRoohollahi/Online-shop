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

        if(ui->SignUp_radioButton->isChecked() == true){

            ofstream usersInformations("Users.txt" , ios::app);
            if(!usersInformations.is_open()){
                QMessageBox * message = new QMessageBox(this);
                message->setStyleSheet("background:#5C84AF;color:#00264A;font-weight:bold;");
                message->setText("Cannot open the file");
                message->show();
            }

            user.setName(ui->Name_lineEdit->text().toStdString());
            user.setPhoneNumber(ui->PhoneNumber_lineEdit->text().toStdString());

            usersInformations << user.getPhoneNumber() << ',' << user.getName() << ',' << endl;

            QMessageBox * message = new QMessageBox(this);
            message->setStyleSheet("background:#5C84AF;color:#00264A;font-weight:bold;");
            message->setText("You signed up successfully");
            message->show();

            ui->Name_lineEdit->setText("");
            ui->PhoneNumber_lineEdit->setText("");
            //vorood  be safheye tablighat
        }

        else if(ui->SignIn_radioButton->isChecked() == true){

            ifstream usersInformations("Users.txt");
            if(!usersInformations.is_open()){
                QMessageBox * message = new QMessageBox(this);
                message->setStyleSheet("background:#5C84AF;color:#00264A;font-weight:bold;");
                message->setText("Cannot open the file");
                message->show();
            }

            string line , phoneNumber;
            bool found = false;

            while(getline(usersInformations , line)){

                istringstream x(line);
                getline(x , phoneNumber , ',');

                if(ui->PhoneNumber_lineEdit->text().toStdString() == phoneNumber){
                    found = true;
                    user.setPhoneNumber(phoneNumber);
                    string name;
                    getline(x , name , ',');
                    user.setName(name);

                    MainWindow * newPage = new MainWindow;
                    this->close();
                    newPage->show();

                    break;
                }
            }

            if(!found){
                QMessageBox * message = new QMessageBox(this);
                message->setStyleSheet("background:#5C84AF;color:#00264A;font-weight:bold;");
                message->setText("There is not such a user in system");
                message->show();
            }
        }
    }
}

