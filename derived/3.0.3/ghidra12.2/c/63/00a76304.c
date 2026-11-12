
undefined8 FUN_00a76304(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_2 < 0x12) && ((1 << (ulong)(param_2 & 0x1f) & 0x2e000U) != 0)) {
    if ((*(int *)(param_1 + 0x614) == 0) || (*(uint *)(param_1 + 0x610) != param_2)) {
      if ((*(int *)(param_1 + 0x63c) == 0) || (*(uint *)(param_1 + 0x638) != param_2)) {
        if ((*(int *)(param_1 + 0x664) == 0) || (*(uint *)(param_1 + 0x660) != param_2)) {
          if ((*(int *)(param_1 + 0x68c) == 0) || (*(uint *)(param_1 + 0x688) != param_2)) {
            if ((*(int *)(param_1 + 0x6b4) == 0) || (*(uint *)(param_1 + 0x6b0) != param_2)) {
              if ((*(int *)(param_1 + 0x6dc) == 0) || (*(uint *)(param_1 + 0x6d8) != param_2)) {
                if ((*(int *)(param_1 + 0x704) == 0) || (*(uint *)(param_1 + 0x700) != param_2)) {
                  if ((*(int *)(param_1 + 0x72c) == 0) || (*(uint *)(param_1 + 0x728) != param_2)) {
                    if ((*(int *)(param_1 + 0x754) == 0) || (*(uint *)(param_1 + 0x750) != param_2))
                    {
                      uVar1 = 0xffffffff;
                    }
                    else {
                      uVar1 = 8;
                    }
                  }
                  else {
                    uVar1 = 7;
                  }
                }
                else {
                  uVar1 = 6;
                }
              }
              else {
                uVar1 = 5;
              }
            }
            else {
              uVar1 = 4;
            }
          }
          else {
            uVar1 = 3;
          }
        }
        else {
          uVar1 = 2;
        }
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

