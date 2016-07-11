/*
Copyright(c) 2016 Panos Karabelas

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
copies of the Software, and to permit persons to whom the Software is furnished
to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

//============================
#include "DirectusTransform.h"
//============================

using namespace Directus::Math;

DirectusTransform::DirectusTransform(QWidget *parent) : QWidget(parent)
{
    m_gridLayout = new QGridLayout();

    m_transTitle = new QLabel("Transform");

    // = POSITION =================================
    m_transPosLabel = new QLabel("Position");
    m_transPosXLabel = new QLabel("X");
    m_transPosX = new QLineEdit();
    m_transPosYLabel = new QLabel("Y");
    m_transPosY = new QLineEdit();
    m_transPosZLabel = new QLabel("Z");
    m_transPosZ = new QLineEdit();
    //=============================================

    //= ROTATION ==================================
    m_transRotLabel = new QLabel("Rotation");
    m_transRotXLabel = new QLabel("X");
    m_transRotX = new QLineEdit();
    m_transRotYLabel = new QLabel("Y");
    m_transRotY = new QLineEdit();
    m_transRotZLabel = new QLabel("Z");
    m_transRotZ = new QLineEdit();
    //=============================================

    //= SCALE =====================================
    m_transScaLabel = new QLabel("Scale");
    m_transScaXLabel = new QLabel("X");
    m_transScaX = new QLineEdit();
    m_transScaYLabel = new QLabel("Y");
    m_transScaY = new QLineEdit();
    m_transScaZLabel = new QLabel("Z");
    m_transScaZ = new QLineEdit();
    //=============================================

    // addWidget(*Widget, row, column, rowspan, colspan)

    // 0th row
    m_gridLayout->addWidget(m_transTitle, 0, 0, 1, 1);

    // 1st row
    m_gridLayout->addWidget(m_transPosLabel,    1, 0, 1, 1);
    m_gridLayout->addWidget(m_transPosXLabel,   1, 1, 1, 1);
    m_gridLayout->addWidget(m_transPosX,        1, 2, 1, 1);
    m_gridLayout->addWidget(m_transPosYLabel,   1, 3, 1, 1);
    m_gridLayout->addWidget(m_transPosY,        1, 4, 1, 1);
    m_gridLayout->addWidget(m_transPosZLabel,   1, 5, 1, 1);
    m_gridLayout->addWidget(m_transPosZ,        1, 6, 1, 1);

    // 2nd row
    m_gridLayout->addWidget(m_transRotLabel,    2, 0, 1, 1);
    m_gridLayout->addWidget(m_transRotXLabel,   2, 1, 1, 1);
    m_gridLayout->addWidget(m_transRotX,        2, 2, 1, 1);
    m_gridLayout->addWidget(m_transRotYLabel,   2, 3, 1, 1);
    m_gridLayout->addWidget(m_transRotY,        2, 4, 1, 1);
    m_gridLayout->addWidget(m_transRotZLabel,   2, 5, 1, 1);
    m_gridLayout->addWidget(m_transRotZ,        2, 6, 1, 1);

    // 3rd row
    m_gridLayout->addWidget(m_transScaLabel,    3, 0, 1, 1);
    m_gridLayout->addWidget(m_transScaXLabel,   3, 1, 1, 1);
    m_gridLayout->addWidget(m_transScaX,        3, 2, 1, 1);
    m_gridLayout->addWidget(m_transScaYLabel,   3, 3, 1, 1);
    m_gridLayout->addWidget(m_transScaY,        3, 4, 1, 1);
    m_gridLayout->addWidget(m_transScaZLabel,   3, 5, 1, 1);
    m_gridLayout->addWidget(m_transScaZ,        3, 6, 1, 1);

    this->setParent(parent);
    this->setLayout(m_gridLayout);
    this->show();
}

void DirectusTransform::Map(Transform* transform)
{
    SetPosition(transform->GetPosition());
    SetRotation(transform->GetRotation());
    SetScale(transform->GetScale());
}

Vector3 DirectusTransform::GetPosition()
{
    Vector3 pos;

    return pos;
}

void DirectusTransform::SetPosition(Vector3 pos)
{

}

Quaternion DirectusTransform::GetRotation()
{
    Quaternion rot;

    return rot;
}

void DirectusTransform::SetRotation(Quaternion rot)
{

}

Vector3 DirectusTransform::GetScale()
{
    Vector3 sca;

    return sca;
}

void DirectusTransform::SetScale(Vector3 sca)
{

}
