
undefined8
FUN_0010cf90(long param_1,long param_2,long param_3,long param_4,uint param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_38;
  uint local_34;
  
  if (param_1 == 0) {
    uVar3 = 0xffffae9c;
  }
  else if (param_3 == 0) {
    uVar3 = 0xffffbb9c;
  }
  else {
    uVar3 = 0xffffbe9c;
    if ((param_2 != 0) && (param_4 != 0)) {
      iVar2 = FUN_0010db60(param_3,8,0);
      if (iVar2 == 0) {
        iVar2 = FUN_0010db20(&local_34,4,param_3);
        if (iVar2 == 0) {
          uVar3 = 0xffffbd9b;
        }
        else {
          uVar1 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
          uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
          if ((uVar1 - 0x50000 < 2) || (uVar1 == 6)) {
            uVar3 = FUN_00129f60(param_1,uVar1,param_3,param_6);
            if (-1 < (int)(uint)uVar3) {
              if (param_5 < (uint)uVar3) {
                uVar3 = 0xffffac9c;
              }
              else {
                iVar2 = FUN_0010db60(param_3,8,0);
                if (iVar2 == 0) {
                  iVar2 = FUN_0010db20(&local_38,4,param_3);
                  if (iVar2 == 0) {
                    uVar3 = 0xffffbd9c;
                  }
                  else {
                    uVar1 = (local_38 & 0xff00ff00) >> 8 | (local_38 & 0xff00ff) << 8;
                    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
                    if ((uVar1 - 0x50000 < 2) || (uVar1 == 6)) {
                      uVar3 = FUN_0012a530(param_1,param_2,uVar1,param_3,param_4,param_5,param_6);
                    }
                    else {
                      uVar3 = 0xffffa69c;
                    }
                  }
                }
                else {
                  uVar3 = 0xffffbc9c;
                }
              }
            }
          }
          else {
            uVar3 = 0xffffa69b;
          }
        }
      }
      else {
        uVar3 = 0xffffbc9b;
      }
    }
  }
  return uVar3;
}

