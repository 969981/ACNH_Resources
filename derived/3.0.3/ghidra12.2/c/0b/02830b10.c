
long FUN_02830b10(long param_1,undefined4 *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = param_1 + 0xb79c;
  uVar2 = FUN_0282a5c0(lVar4);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = param_1 + 0xba58;
    uVar2 = FUN_0282a5c0(lVar4);
    if ((uVar2 & 1) == 0) {
      uVar3 = 1;
    }
    else {
      lVar4 = param_1 + 0xbd14;
      uVar2 = FUN_0282a5c0(lVar4);
      if ((uVar2 & 1) == 0) {
        uVar3 = 2;
      }
      else {
        lVar4 = param_1 + 0xbfd0;
        uVar2 = FUN_0282a5c0(lVar4);
        if ((uVar2 & 1) == 0) {
          uVar3 = 3;
        }
        else {
          lVar4 = param_1 + 0xc28c;
          uVar2 = FUN_0282a5c0(lVar4);
          if ((uVar2 & 1) == 0) {
            uVar3 = 4;
          }
          else {
            lVar4 = param_1 + 0xc548;
            uVar2 = FUN_0282a5c0(lVar4);
            if ((uVar2 & 1) == 0) {
              uVar3 = 5;
            }
            else {
              lVar4 = param_1 + 0xc804;
              uVar2 = FUN_0282a5c0(lVar4);
              if ((uVar2 & 1) == 0) {
                uVar3 = 6;
              }
              else {
                uVar2 = FUN_0282a5c0(param_1 + 0xcac0);
                bVar1 = (uVar2 & 1) != 0;
                uVar3 = 7;
                if (bVar1) {
                  uVar3 = 0xffffffff;
                }
                lVar4 = 0;
                if (!bVar1) {
                  lVar4 = param_1 + 0xcac0;
                }
              }
            }
          }
        }
      }
    }
  }
  *param_2 = uVar3;
  return lVar4;
}

