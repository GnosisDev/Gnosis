/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *versionLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *copyrightLabel;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(593, 319);
        horizontalLayout_2 = new QHBoxLayout(AboutDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label);

        versionLabel = new QLabel(AboutDialog);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setCursor(QCursor(Qt::IBeamCursor));
        versionLabel->setText(QString::fromUtf8("0.3.666-beta"));
        versionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(versionLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        copyrightLabel = new QLabel(AboutDialog);
        copyrightLabel->setObjectName(QString::fromUtf8("copyrightLabel"));
        copyrightLabel->setCursor(QCursor(Qt::IBeamCursor));
        copyrightLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(copyrightLabel);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setCursor(QCursor(Qt::IBeamCursor));
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(true);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About Gnosis", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AboutDialog", "<b>Gnosis</b> version", 0, QApplication::UnicodeUTF8));
        copyrightLabel->setText(QApplication::translate("AboutDialog", "Copyright \302\251 2009-2014 The Bitcoin developers\n"
"Copyright \302\251 2012-2014 The NovaCoin developers\n"
"Copyright \302\251 2014 The BlackCoin developers\n"
"Copyright \302\251 2014 The Shadowcoin developers\n"
"Copyright \302\251 2014 The Gnosis developers", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AboutDialog", "\n"
"This is experimental software.\n"
"\n"
"Distributed under the MIT/X11 software license, see the accompanying file COPYING or <a href=\"http://www.opensource.org/licenses/mit-license.php\">http://www.opensource.org/licenses/mit-license.php</a>.\n"
"\n"
"This product includes software developed by the OpenSSL Project for use in the OpenSSL Toolkit (<a href=\"https://www.openssl.org/\">https://www.openssl.org/</a>) and cryptographic software written by Eric Young (<a href=\"mailto:eay@cryptsoft.com\">eay@cryptsoft.com</a>) and UPnP software written by Thomas Bernard.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
