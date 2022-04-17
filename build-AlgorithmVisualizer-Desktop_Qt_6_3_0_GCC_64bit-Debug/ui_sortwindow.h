/********************************************************************************
** Form generated from reading UI file 'sortwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTWINDOW_H
#define UI_SORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer_3;
    QSlider *speedSlider;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *amountBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *startButton;
    QPushButton *fastSortButton;
    QSpacerItem *verticalSpacer_2;
    QGraphicsView *graphView;

    void setupUi(QWidget *SortWindow)
    {
        if (SortWindow->objectName().isEmpty())
            SortWindow->setObjectName(QString::fromUtf8("SortWindow"));
        SortWindow->setWindowModality(Qt::NonModal);
        SortWindow->resize(1200, 950);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SortWindow->sizePolicy().hasHeightForWidth());
        SortWindow->setSizePolicy(sizePolicy);
        SortWindow->setMinimumSize(QSize(1100, 900));
        SortWindow->setMaximumSize(QSize(1200, 950));
        SortWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        SortWindow->setLayoutDirection(Qt::LeftToRight);
        SortWindow->setAutoFillBackground(true);
        SortWindow->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutWidget = new QWidget(SortWindow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(-50, 10, 1507, 902));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(0, 0, 200, 100);
        verticalSpacer = new QSpacerItem(1, 400, QSizePolicy::Minimum, QSizePolicy::Preferred);

        horizontalLayout_4->addItem(verticalSpacer);

        frame = new QFrame(horizontalLayoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(true);
        frame->setMinimumSize(QSize(150, 700));
        frame->setMaximumSize(QSize(200, 800));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 8, 20, 17);
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMinimumSize(QSize(180, 100));
        textBrowser->setMaximumSize(QSize(180, 220));

        verticalLayout->addWidget(textBrowser);

        horizontalSpacer_4 = new QSpacerItem(40, 4, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_4);

        listWidget = new QListWidget(frame);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMinimumSize(QSize(181, 100));
        listWidget->setMaximumSize(QSize(200, 140));
        QPalette palette;
        QBrush brush(QColor(117, 34, 126, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(114, 159, 207, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 192, 248, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(214, 159, 208, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(86, 63, 84, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(115, 85, 112, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        QBrush brush8(QColor(48, 140, 198, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        QBrush brush9(QColor(0, 0, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush9);
        QBrush brush10(QColor(255, 0, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush10);
        QBrush brush11(QColor(214, 191, 211, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush7);
        QBrush brush12(QColor(255, 255, 220, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush12);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        QBrush brush13(QColor(202, 202, 202, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        QBrush brush14(QColor(159, 159, 159, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        QBrush brush15(QColor(184, 184, 184, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush16(QColor(118, 118, 118, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush16);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush10);
        QBrush brush17(QColor(247, 247, 247, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        QBrush brush18(QColor(0, 0, 0, 255));
        brush18.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush18);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush19(QColor(177, 177, 177, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush19);
        QBrush brush20(QColor(145, 145, 145, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush20);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        QBrush brush21(QColor(0, 0, 0, 255));
        brush21.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush21);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush12);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        listWidget->setPalette(palette);
        QFont font;
        font.setBold(false);
        font.setItalic(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        listWidget->setFont(font);
        listWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget->setFocusPolicy(Qt::WheelFocus);
        listWidget->setContextMenuPolicy(Qt::NoContextMenu);
        listWidget->setAcceptDrops(true);
        listWidget->setLayoutDirection(Qt::LeftToRight);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207) ;\n"
"color: rgb(117, 34, 126)"));
        listWidget->setAutoScrollMargin(10);
        listWidget->setMovement(QListView::Free);
        listWidget->setFlow(QListView::TopToBottom);
        listWidget->setProperty("isWrapping", QVariant(true));
        listWidget->setLayoutMode(QListView::Batched);
        listWidget->setBatchSize(91);
        listWidget->setSortingEnabled(false);

        verticalLayout->addWidget(listWidget);

        horizontalSpacer_3 = new QSpacerItem(40, 4, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);

        speedSlider = new QSlider(frame);
        speedSlider->setObjectName(QString::fromUtf8("speedSlider"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        QBrush brush22(QColor(173, 127, 168, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush22);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush22);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush12);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        QBrush brush23(QColor(0, 0, 0, 128));
        brush23.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush23);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        QBrush brush24(QColor(239, 239, 239, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush24);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush16);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        QBrush brush25(QColor(0, 0, 0, 128));
        brush25.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush25);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush22);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush22);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush22);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush19);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        QBrush brush26(QColor(0, 0, 0, 128));
        brush26.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        speedSlider->setPalette(palette1);
        speedSlider->setCursor(QCursor(Qt::PointingHandCursor));
        speedSlider->setMouseTracking(false);
        speedSlider->setAutoFillBackground(false);
        speedSlider->setInputMethodHints(Qt::ImhNone);
        speedSlider->setMinimum(10);
        speedSlider->setMaximum(250);
        speedSlider->setSingleStep(3);
        speedSlider->setValue(125);
        speedSlider->setSliderPosition(125);
        speedSlider->setTracking(true);
        speedSlider->setOrientation(Qt::Horizontal);
        speedSlider->setInvertedAppearance(true);
        speedSlider->setInvertedControls(false);
        speedSlider->setTickPosition(QSlider::TicksAbove);
        speedSlider->setTickInterval(10);

        verticalLayout->addWidget(speedSlider);

        horizontalSpacer_2 = new QSpacerItem(40, 4, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        amountBox = new QSpinBox(frame);
        amountBox->setObjectName(QString::fromUtf8("amountBox"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush22);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush22);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush12);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        QBrush brush27(QColor(0, 0, 0, 128));
        brush27.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush24);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        QBrush brush28(QColor(0, 0, 0, 128));
        brush28.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush28);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        QBrush brush29(QColor(0, 0, 0, 128));
        brush29.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush29);
#endif
        amountBox->setPalette(palette2);
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        amountBox->setFont(font1);
        amountBox->setCursor(QCursor(Qt::ArrowCursor));
        amountBox->setWrapping(true);
        amountBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        amountBox->setAccelerated(false);
        amountBox->setMinimum(10);
        amountBox->setMaximum(500);
        amountBox->setSingleStep(10);
        amountBox->setValue(80);

        verticalLayout->addWidget(amountBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        startButton = new QPushButton(frame);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setMinimumSize(QSize(15, 40));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush22);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush30(QColor(238, 238, 236, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush30);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush22);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush12);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        QBrush brush31(QColor(238, 238, 236, 128));
        brush31.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush24);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush16);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        QBrush brush32(QColor(238, 238, 236, 128));
        brush32.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush32);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush22);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush22);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush22);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush19);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        QBrush brush33(QColor(238, 238, 236, 128));
        brush33.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush33);
#endif
        startButton->setPalette(palette3);
        startButton->setAutoFillBackground(true);

        verticalLayout->addWidget(startButton);

        fastSortButton = new QPushButton(frame);
        fastSortButton->setObjectName(QString::fromUtf8("fastSortButton"));
        fastSortButton->setMinimumSize(QSize(15, 40));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush22);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush30);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush22);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        QBrush brush34(QColor(238, 238, 236, 128));
        brush34.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush34);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush24);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush24);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush16);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        QBrush brush35(QColor(238, 238, 236, 128));
        brush35.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush35);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush22);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush22);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        QBrush brush36(QColor(238, 238, 236, 128));
        brush36.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush36);
#endif
        fastSortButton->setPalette(palette4);
        fastSortButton->setAutoFillBackground(true);

        verticalLayout->addWidget(fastSortButton);


        horizontalLayout_4->addWidget(frame);

        verticalSpacer_2 = new QSpacerItem(1, 400, QSizePolicy::Minimum, QSizePolicy::Preferred);

        horizontalLayout_4->addItem(verticalSpacer_2);

        graphView = new QGraphicsView(horizontalLayoutWidget);
        graphView->setObjectName(QString::fromUtf8("graphView"));
        graphView->setMinimumSize(QSize(850, 650));
        graphView->setMaximumSize(QSize(900, 720));
        graphView->setFrameShadow(QFrame::Raised);
        QBrush brush37(QColor(114, 159, 207, 255));
        brush37.setStyle(Qt::Dense1Pattern);
        graphView->setBackgroundBrush(brush37);
        graphView->setSceneRect(QRectF(0, 0, 0, 0));
        graphView->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(graphView);


        retranslateUi(SortWindow);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(SortWindow);
    } // setupUi

    void retranslateUi(QWidget *SortWindow)
    {
        SortWindow->setWindowTitle(QCoreApplication::translate("SortWindow", "Form", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("SortWindow", "Selection Sort", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("SortWindow", "Insertion Sort", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("SortWindow", "Shell Sort", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("SortWindow", "Quick Sort", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("SortWindow", "Bubble Sort", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("SortWindow", "HeapSort", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(accessibility)
        speedSlider->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        amountBox->setSuffix(QString());
        amountBox->setPrefix(QString());
        startButton->setText(QCoreApplication::translate("SortWindow", "Start", nullptr));
        fastSortButton->setText(QCoreApplication::translate("SortWindow", "Fast sort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SortWindow: public Ui_SortWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTWINDOW_H
