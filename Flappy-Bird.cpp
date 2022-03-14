#include <iostream>
#include <iomanip>
using namespace std;

int main(){

private:
    float fBirdPosition = 0.0f;
    float fBirdVelocity = 0.0f;
    float fBirdAcceleration = 0.0f;

    float fGravity = 100.0f;

protected:

    virtual bool OnUserCreate()
    {
        return true;
    }

    //Called byolcConsoleGameEngine
    virtual bool OnUserUpdate(float fElapsedTime)
    {
        if (m_keys[VK_SPACE].bPressed)
        {
            fBirdAcceleration = 0.0f;
        }
        else
            fBirdAcceleration += fGravity * fElapsedTime;

        if (fBirdAcceleration >= fGravity){
            fBirdAcceleration = fGravity;
        }
        {
            /* code */
        }
        

        fBirdVelocity += fBirdAcceleration * fElapsedTime;
        fBirdPosition += fBirdVelocity * fElapsedTime;


        int nBirdX = (int)(ScreenWidth() / 3.0f);

        //Draw Bird
        if (fBirdVelocity > 0)
        {
            DrawString(nBirdX, fBirdPosition + 0, L"\\\\\\");
            DrawString(nBirdX, fBirdPosition + 1, L"<\\\\\\=Q");
        }
        else
        {
            DrawString(nBirdX, fBirdPosition + 0, L"<///=Q");
            DrawString(nBirdX, fBirdPosition + 1, L"///");        }
        

        return true;
    }

return 0;
}
