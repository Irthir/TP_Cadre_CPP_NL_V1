#include "CCadre.h"

ostream& operator<<(ostream& os, const CCadre& cadre)
{
    os << "X = " << cadre.fX << " Y = " << cadre.fY << " Longueur = " << cadre.fLongueur << " Largeur = " << cadre.fLargeur << " Motif = " << cadre.cMotif << endl;
    return os;
}

float CCadre::Surface() const
{
    float fSurface = fLargeur * fLongueur;
    return fSurface;
}

float CCadre::Perimetre() const
{
    float fPerimetre = (fLargeur * 2) +  (fLongueur * 2);
    return fPerimetre;
}

bool CCadre::isCarre() const
{
    return (fLongueur == fLargeur);
}

void CCadre::Affiche()
{
    for (int nX = 0; nX < XREPERE; nX++)
    {
        for (int nY = 0; nY  < YREPERE; nY ++)
        {
            if (Appartient(nX, nY))
            {
                cout << cMotif;
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

 bool CCadre::Appartient(float X, float Y) const
{
    if ((X >= fX && X <= (fX + fLargeur)) && (Y >= fY && Y <= (fY + fLongueur)))
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool CCadre::Appartient(float X, float Y, float fax, float fay, float fbx, float fby, float fcx, float fcy)const
{
    //A revoir pour l'affichage.
    if ((X >= fax && X <= (fbx)) || (X <= fax && X >= (fbx)) && (Y >= fay && X <= (fby)) || (Y <= fay && Y >= (fby)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void CCadre::Rotation(float fTheta)
//But : Réaliser la rotation d'un rectangle par rapport à son point d'ancrage.
{
    fTheta = fTheta * 3.14159265359 / 180; //Passage de degré à radian.

    float fbx, fby, fcx, fcy; //Les trois points de notre Rectangles.

    fbx = fX + fLongueur;
    fby = fY + fLargeur;

    float fbxResult = cos(fTheta) * (fbx - fX) - sin(fTheta) * (fby - fY) + fX;
    float fbyResult = sin(fTheta) * (fbx - fX) - cos(fTheta) * (fby - fY) + fY;

    fcx = fX + fLargeur;
    fcy = fY + fLongueur;

    float fcxResult = cos(fTheta) * (fcx - fX) - sin(fTheta) * (fcy - fY) + fX;
    float fcyResult = sin(fTheta) * (fcx - fX) - cos(fTheta) * (fcy - fY) + fY;

    Affiche(fbxResult, fbyResult, fcxResult, fcyResult);
}

void CCadre::Affiche(float fbx, float fby, float fcx, float fcy)
{
    for (int nX = 0; nX < XREPERE; nX++)
    {
        for (int nY = 0; nY < YREPERE; nY++)
        {
            if (Appartient(nX, nY, fX, fY, fbx, fby, fcx, fcy))
            {
                cout << cMotif;
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}
