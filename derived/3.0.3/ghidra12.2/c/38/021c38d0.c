
bool FUN_021c38d0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *param_2 >> 8 | *param_2 << 8;
  if (((short)*param_1 < 0) || (*param_1 != uVar1)) {
    if (((short)param_1[1] < 0) || (param_1[1] != uVar1)) {
      if (((short)param_1[2] < 0) || (param_1[2] != uVar1)) {
        if (((short)param_1[3] < 0) || (param_1[3] != uVar1)) {
          if (((short)param_1[4] < 0) || (param_1[4] != uVar1)) {
            if (((short)param_1[5] < 0) || (param_1[5] != uVar1)) {
              if (((short)param_1[6] < 0) || (param_1[6] != uVar1)) {
                if (((short)param_1[7] < 0) || (param_1[7] != uVar1)) {
                  if (((short)param_1[8] < 0) || (param_1[8] != uVar1)) {
                    if ((short)param_1[9] < 0) {
                      return false;
                    }
                    if (param_1[9] != uVar1) {
                      return false;
                    }
                    iVar2 = 9;
                  }
                  else {
                    iVar2 = 8;
                  }
                }
                else {
                  iVar2 = 7;
                }
              }
              else {
                iVar2 = 6;
              }
            }
            else {
              iVar2 = 5;
            }
          }
          else {
            iVar2 = 4;
          }
        }
        else {
          iVar2 = 3;
        }
      }
      else {
        iVar2 = 2;
      }
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  return *(int *)(param_1 + 0x18) == iVar2;
}

