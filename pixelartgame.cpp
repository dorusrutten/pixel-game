#include <raylib.h>
#include <stdio.h>

void kinkie()
{
int characterspeed = 6;
    int framecount = 0;
    int framecount1 = 0;
    int framecount2 = 0;
    int width = 200;
    int height = 100;
//_____________________________________

     Texture2D kinkieidle1;
     Texture2D kinkieidle2;
     Texture2D kinkieidle3;
     Texture2D kinkieidle4;
     Texture2D kinkieidle5;

     Texture2D kinkieleft1;
     Texture2D kinkieleft2;
     
     Texture2D kinkieright2;
     Texture2D kinkieright1;

     Texture2D kinkieforward1;
     Texture2D kinkieforward2;

     Texture2D kinkiebackwards1;
     Texture2D kinkiebackwards2;
     Texture2D wallpaper;

    

                // Set our game to run at 144 frames-per-second
    //--------------------------------------------------------------------------------------
    kinkieleft1 = LoadTexture("pixel art\\kinkieleft2.png");
    kinkieleft2 = LoadTexture("pixel art\\kinkieleft1.png");
    kinkieforward1 = LoadTexture("pixel art\\kinkiebackwards 1.png");
    kinkieforward2 = LoadTexture("pixel art\\kinkiebackwards 2.png");
    kinkieidle1= LoadTexture("pixel art\\kinkieidle1.png");
    kinkieidle2= LoadTexture("pixel art\\kinkieidle2.png");
    kinkieidle3= LoadTexture("pixel art\\kinkieidle3.png");
    kinkieidle4= LoadTexture("pixel art\\kinkieidle4.png");
    kinkieidle5= LoadTexture("pixel art\\kinkieidle5.png");
    kinkieright1 = LoadTexture("pixel art\\kinkieright1.png");
    kinkieright2 = LoadTexture("pixel art\\kinkieright2.png");
    kinkiebackwards1 = LoadTexture("pixel art\\kinkieforward1.png");
    kinkiebackwards2 = LoadTexture("pixel art\\kinkieforward2.png");
    wallpaper = LoadTexture("pixel art\\wallpaper.png");

    float posX1 = kinkieleft1.width;
    float posY1 = kinkieleft1.height;

    posX1 = kinkieleft2.width;
    posY1 = kinkieleft2.height;
//
    posX1 = kinkieright1.width;
    posX1 = kinkieright1.height;
    
    posY1 = kinkieright2.width;
    posY1 = kinkieright2.height;
//
    posX1 = kinkieidle1.width;
    posY1 = kinkieidle1.height;

    posX1 = kinkieidle2.width;
    posY1 = kinkieidle2.height;

    posX1 = kinkieidle3.width;
    posY1 = kinkieidle3.height;

    posX1 = kinkieidle4.width;
    posY1 = kinkieidle4.height;

    posX1 = kinkieidle5.width;
    posY1 = kinkieidle5.height;
//
    posX1 = kinkieforward1.width;
    posY1 = kinkieforward1.height;

    posX1 = kinkieforward2.width;
    posY1 = kinkieforward2.height;
//
    posY1 = kinkiebackwards1.width;
    posY1 = kinkiebackwards1.height;

    posY1 = kinkiebackwards2.width;
    posY1 = kinkiebackwards2.height;







  if(!IsKeyDown(KEY_D) && !IsKeyDown(KEY_A) && !IsKeyDown(KEY_W) && !IsKeyDown(KEY_S)){; printf("\n%d",framecount1);
        if (framecount1<=60)
        {DrawTextureEx(kinkieidle1,  (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount1 < 120 && framecount1 >= 60)
        { DrawTextureEx(kinkieidle2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount1 < 180 && framecount1 >= 120)
        { DrawTextureEx(kinkieidle3, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount1 < 240 && framecount1 >= 180)
        { DrawTextureEx(kinkieidle4, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount1 < 300 && framecount1 >= 240)
        { DrawTextureEx(kinkieidle5, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount1 >= 300){framecount1 = 0;}}


        if(IsKeyDown(KEY_D) && IsKeyDown(KEY_A) && !IsKeyDown(KEY_W) && !IsKeyDown(KEY_S)){;
        framecount2++; printf("\n%d",framecount2);
        if (framecount2<=60)
        {DrawTextureEx(kinkieidle1,  (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 120 && framecount2 >= 60)
        { DrawTextureEx(kinkieidle2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 180 && framecount2 >= 120)
        { DrawTextureEx(kinkieidle3, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 240 && framecount2 >= 180)
        { DrawTextureEx(kinkieidle4, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 300 && framecount2 >= 240)
        { DrawTextureEx(kinkieidle5, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount2 >= 300){framecount2 = 0;}}


        if(!IsKeyDown(KEY_D) && !IsKeyDown(KEY_A) && IsKeyDown(KEY_W) && IsKeyDown(KEY_S)){framecount1++;
        framecount2++; printf("\n%d",framecount2);
        if (framecount2<=60)
        {DrawTextureEx(kinkieidle1,  (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 120 && framecount2 >= 60)
        { DrawTextureEx(kinkieidle2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 180 && framecount2 >= 120)
        { DrawTextureEx(kinkieidle3, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 240 && framecount2 >= 180)
        { DrawTextureEx(kinkieidle4, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 300 && framecount2 >= 240)
        { DrawTextureEx(kinkieidle5, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount2 >= 300){framecount2 = 0;}}

        if(!IsKeyDown(KEY_D) && IsKeyDown(KEY_A) && IsKeyDown(KEY_W) && IsKeyDown(KEY_S)){framecount1++;
        framecount2++; printf("\n%d",framecount2);
        if (framecount2<=60)
        {DrawTextureEx(kinkieidle1,  (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 120 && framecount2 >= 60)
        { DrawTextureEx(kinkieidle2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 180 && framecount2 >= 120)
        { DrawTextureEx(kinkieidle3, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 240 && framecount2 >= 180)
        { DrawTextureEx(kinkieidle4, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 300 && framecount2 >= 240)
        { DrawTextureEx(kinkieidle5, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount2 >= 300){framecount2 = 0;}}

        if(IsKeyDown(KEY_D) && !IsKeyDown(KEY_A) && IsKeyDown(KEY_W) && IsKeyDown(KEY_S)){framecount1++;
        framecount2++; printf("\n%d",framecount2);
        if (framecount2<=60)
        {DrawTextureEx(kinkieidle1,  (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 120 && framecount2 >= 60)
        { DrawTextureEx(kinkieidle2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 180 && framecount2 >= 120)
        { DrawTextureEx(kinkieidle3, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 240 && framecount2 >= 180)
        { DrawTextureEx(kinkieidle4, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 300 && framecount2 >= 240)
        { DrawTextureEx(kinkieidle5, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount2 >= 300){framecount2 = 0;}}

        if(IsKeyDown(KEY_D) && IsKeyDown(KEY_A) && !IsKeyDown(KEY_W) && IsKeyDown(KEY_S)){framecount1++;
        framecount2++; printf("\n%d",framecount2);
        if (framecount2<=60)
        {DrawTextureEx(kinkieidle1,  (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 120 && framecount2 >= 60)
        { DrawTextureEx(kinkieidle2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 180 && framecount2 >= 120)
        { DrawTextureEx(kinkieidle3, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 240 && framecount2 >= 180)
        { DrawTextureEx(kinkieidle4, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 300 && framecount2 >= 240)
        { DrawTextureEx(kinkieidle5, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount2 >= 300){framecount2 = 0;}}

        if(IsKeyDown(KEY_D) && IsKeyDown(KEY_A) && IsKeyDown(KEY_W) && !IsKeyDown(KEY_S)){framecount1++;
        framecount2++; printf("\n%d",framecount2);
        if (framecount2<=60)
        {DrawTextureEx(kinkieidle1,  (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 120 && framecount2 >= 60)
        { DrawTextureEx(kinkieidle2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 180 && framecount2 >= 120)
        { DrawTextureEx(kinkieidle3, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 240 && framecount2 >= 180)
        { DrawTextureEx(kinkieidle4, (Vector2){posX1,posY1},0, 6, WHITE);}
        if (framecount2 < 300 && framecount2 >= 240)
        { DrawTextureEx(kinkieidle5, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount2 >= 300){framecount2 = 0;}}


//___________________________________________________________________________________________________________________________//
         framecount++; 
        if(IsKeyDown(KEY_D) && !IsKeyDown(KEY_A) && !IsKeyDown(KEY_W) && !IsKeyDown(KEY_S)){posX1 +=characterspeed;
        if(framecount <= 15){DrawTextureEx(kinkieleft1, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount >= 15){DrawTextureEx(kinkieleft2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount > 30){framecount = 0;}}

        if(!IsKeyDown(KEY_D) && IsKeyDown(KEY_A) && !IsKeyDown(KEY_W) && !IsKeyDown(KEY_S) ) {posX1 -=characterspeed;
        if(framecount <= 15){DrawTextureEx(kinkieright1, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount >= 15){DrawTextureEx(kinkieright2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount > 30){framecount = 0;}}

        if(!IsKeyDown(KEY_D) && !IsKeyDown(KEY_A) && IsKeyDown(KEY_W) && !IsKeyDown(KEY_S) )   {posY1 -=characterspeed;
        if(framecount <= 15){DrawTextureEx(kinkieforward1, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount >= 15){DrawTextureEx(kinkieforward2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount > 30){framecount = 0;}}

        if(!IsKeyDown(KEY_D) && !IsKeyDown(KEY_A) && !IsKeyDown(KEY_W) && IsKeyDown(KEY_S)) {posY1 +=characterspeed;
        if(framecount <= 15){DrawTextureEx(kinkiebackwards1, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount >= 15){DrawTextureEx(kinkiebackwards2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount > 30){framecount = 0;}}

        if( IsKeyDown(KEY_D) && IsKeyDown(KEY_W) && !IsKeyDown(KEY_S) && !IsKeyDown(KEY_A) ){posX1 += characterspeed; posY1 -= characterspeed;
        if(framecount <= 15){DrawTextureEx(kinkieleft1, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount >= 15){DrawTextureEx(kinkieleft2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount > 30){framecount = 0;}}

        if( IsKeyDown(KEY_D) && !IsKeyDown(KEY_W) && IsKeyDown(KEY_S) && !IsKeyDown(KEY_A) ){posX1 += characterspeed; posY1 += characterspeed;
        if(framecount <= 15){DrawTextureEx(kinkieleft1, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount >= 15){DrawTextureEx(kinkieleft2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount > 30){framecount = 0;}}

        if( !IsKeyDown(KEY_D) && IsKeyDown(KEY_W) && !IsKeyDown(KEY_S) && IsKeyDown(KEY_A) ){posX1 -= characterspeed; posY1 -= characterspeed;
        if(framecount <= 15){DrawTextureEx(kinkieright1, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount >= 15){DrawTextureEx(kinkieright2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount > 30){framecount = 0;}}

        if( !IsKeyDown(KEY_D) && !IsKeyDown(KEY_W) && IsKeyDown(KEY_S) && IsKeyDown(KEY_A) ){posX1 -= characterspeed; posY1 += characterspeed;
        if(framecount <= 15){DrawTextureEx(kinkieright1, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount >= 15){DrawTextureEx(kinkieright2, (Vector2){posX1,posY1},0, 6, WHITE);}
        if(framecount > 30){framecount = 0;}}




        
   




}

    





int main(){
     
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    
 InitWindow(screenWidth, screenHeight, "gog");
    InitAudioDevice();
   
    SetTargetFPS(60);  
 
      
    





    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {    

    
    
    
      
        BeginDrawing();
        ClearBackground(RAYWHITE);
      


        EndDrawing();
        //----------------------------------------------------------------------------------
    } CloseAudioDevice();
    CloseWindow();
    }



