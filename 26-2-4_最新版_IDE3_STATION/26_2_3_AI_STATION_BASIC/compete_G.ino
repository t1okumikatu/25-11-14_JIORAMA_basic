void compete_G(){
    //megasignal();
    //Broad();
    int s1=39;//12/13/21/31
    int m1=42;//3-11
    int f1=15;
    int s2=39;//12/13/21/31
    int m2=42;//3-11
    int f2=15;
    unsigned long nowTime = millis();                // 現在時刻セット
    
  // *** Start Contlor **********************************   
     //SubSetTime\\\\\\;
  //タイマー
  //SubSetTime = nowTime + TimeSub[cont];  // 経過時間+セット時間
  // ** "22","32" Train1 ###########################################
 //==================0-1=========================================
 //Data5  IN    Data6   OUT
  if(compete==2){
    megasignal();
   //============13 一旦停止=============
   if(Train1==98 && Train1Flag1==0 && compete==2){//3
         SubSetservoTime13= nowTime + 5000;
         Train1Flag1=1;
         IN=0;
          }
   if(nowTime > SubSetservoTime13 && Train1 == 98 &&  Train1Flag1==1 ){
          Send1=180; 
          SubSetservoTime13=0;
          Train1Flag1=1;
          } 
          //-------
    if(Train1 == 22 && Train1Flag1==1){//3
         Send1=0;   // 1号車、消灯　停止//ターマーなし
         Train1Flag1=0;
          }
    //---Train2------
    if(Train2==98 && Train1==22 && Train2Flag2==0 && compete==2){//3
         SubSetservoTime13= nowTime + 5000;
         Train2Flag2=1;
         IN=1;
          }
   if(nowTime > SubSetservoTime13 && Train2 == 98 &&  Train2Flag2==1 ){
          Send2=170; 
          SubSetservoTime13=0;
          Train2Flag2=1;
          } 
          //-------
    if(Train2 == 32 && Train2Flag2==1){//3
         Send2=0;   // 1号車、消灯　停止//ターマーなし
         Train2Flag2=0;
          }

  
   //---Train3------
    if(Train3==98 && Train1==22 && Train2==32 && Train3Flag3==0 && compete==2){//3
         SubSetservoTime13= nowTime + 5000;
         Train3Flag3=1;
         IN=0;
          }
   if(nowTime > SubSetservoTime13 && Train3 == 98 &&  Train3Flag3==1 ){
          Send3=160; 
          SubSetservoTime13=0;
          Train3Flag3=1;
          } 
          //-------
    if(Train3 == 21 && Train3Flag3==1){//3
         Send3=0;   // 1号車、消灯　停止//ターマーなし
         Train3Flag3=0;
          }
   //---Train4------
    if(Train4==98 && Train1==22 && Train2==32 && Train3==21 && Train4Flag4==0 && compete==2){//3
         SubSetservoTime13= nowTime + 5000;
         Train4Flag4=1;
         IN=1;
          }
   if(nowTime > SubSetservoTime13 && Train4 == 98 &&  Train4Flag4==1 ){
          Send4=150; 
          SubSetservoTime13=0;
          Train4Flag4=1;
          } 
          //-------
    if(Train4 == 31 && Train4Flag4==1){//3
         Send4=0;   // 1号車、消灯　停止//ターマーなし
         Train4Flag4=0;
          } 

  }
}
 