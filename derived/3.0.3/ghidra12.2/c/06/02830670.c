
long FUN_02830670(long param_1,undefined4 *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = param_1 + 0x92d0;
  uVar2 = FUN_02828f30(lVar4);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = param_1 + 0x958c;
    uVar2 = FUN_02828f30(lVar4);
    if ((uVar2 & 1) == 0) {
      uVar3 = 1;
    }
    else {
      lVar4 = param_1 + 0x9848;
      uVar2 = FUN_02828f30(lVar4);
      if ((uVar2 & 1) == 0) {
        uVar3 = 2;
      }
      else {
        lVar4 = param_1 + 0x9b04;
        uVar2 = FUN_02828f30(lVar4);
        if ((uVar2 & 1) == 0) {
          uVar3 = 3;
        }
        else {
          lVar4 = param_1 + 0x9dc0;
          uVar2 = FUN_02828f30(lVar4);
          if ((uVar2 & 1) == 0) {
            uVar3 = 4;
          }
          else {
            lVar4 = param_1 + 0xa07c;
            uVar2 = FUN_02828f30(lVar4);
            if ((uVar2 & 1) == 0) {
              uVar3 = 5;
            }
            else {
              lVar4 = param_1 + 0xa338;
              uVar2 = FUN_02828f30(lVar4);
              if ((uVar2 & 1) == 0) {
                uVar3 = 6;
              }
              else {
                uVar2 = FUN_02828f30(param_1 + 0xa5f4);
                bVar1 = (uVar2 & 1) != 0;
                uVar3 = 7;
                if (bVar1) {
                  uVar3 = 0xffffffff;
                }
                lVar4 = 0;
                if (!bVar1) {
                  lVar4 = param_1 + 0xa5f4;
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

