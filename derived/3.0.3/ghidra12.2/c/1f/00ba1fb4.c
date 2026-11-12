
undefined4 FUN_00ba1fb4(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0277d7b4(&DAT_04e09e78,param_1);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_0277d7b4(&DAT_04e09e80,param_1);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_0277d7b4(&DAT_04e09e88,param_1);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_0277d7b4(&DAT_04e09e90,param_1);
        if ((uVar1 & 1) == 0) {
          uVar1 = FUN_0277d7b4(&DAT_04e09e98,param_1);
          if ((uVar1 & 1) == 0) {
            uVar1 = FUN_0277d7b4(&DAT_04e09ea0,param_1);
            if ((uVar1 & 1) == 0) {
              uVar1 = FUN_0277d7b4(&DAT_04e09ea8,param_1);
              if ((uVar1 & 1) == 0) {
                uVar1 = FUN_0277d7b4(&DAT_04e09eb0,param_1);
                uVar2 = 7;
                if ((uVar1 & 1) == 0) {
                  uVar2 = 0xffffffff;
                }
              }
              else {
                uVar2 = 6;
              }
            }
            else {
              uVar2 = 5;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

