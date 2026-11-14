
void FUN_0180e530(undefined4 param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_c;
  
  if (DAT_05292338 == 0) {
    iVar3 = 1;
    local_c = 1;
  }
  else {
    iVar1 = *(int *)(DAT_05292338 + 0xe48);
    if (iVar1 == 0x14) {
      local_c = *(int *)(DAT_05292338 + 0xf64);
    }
    else {
      if (iVar1 == 1) {
        local_c = 0;
        iVar3 = 0;
        goto LAB_0180e5b8;
      }
      if ((iVar1 < 2) || (5 < iVar1)) {
        if ((iVar1 < 6) || (0x10 < iVar1)) {
          if ((iVar1 < 0x11) || (0x12 < iVar1)) {
            iVar3 = 1;
            if (iVar1 != 0x14) {
              iVar3 = 2;
            }
            local_c = 3;
            if (iVar1 != 0x13) {
              local_c = iVar3;
            }
          }
          else {
            local_c = 3;
          }
        }
        else {
          local_c = 2;
        }
      }
      else {
        local_c = 1;
      }
    }
    if (iVar1 == 0x14) {
      iVar3 = *(int *)(DAT_05292338 + 0xf68);
    }
    else if (iVar1 == 1) {
      iVar3 = 0;
    }
    else if ((iVar1 < 2) || (5 < iVar1)) {
      if ((iVar1 < 6) || (0x10 < iVar1)) {
        if ((0x10 < iVar1) && (iVar1 < 0x13)) goto LAB_0180e7a4;
        iVar5 = 1;
        if (iVar1 != 0x14) {
          iVar5 = 2;
        }
        iVar3 = 3;
        if (iVar1 != 0x13) {
          iVar3 = iVar5;
        }
      }
      else {
        iVar3 = 2;
      }
    }
    else {
LAB_0180e7a4:
      iVar3 = 1;
    }
  }
LAB_0180e5b8:
  switch(param_1) {
  case 0:
    *param_2 = (uint)(local_c == 3);
    param_2[1] = (uint)(1 < local_c);
    param_2[8] = (uint)(1 < local_c);
    param_2[9] = (uint)(local_c == 3);
    param_2[7] = (uint)(0 < local_c);
    param_2[2] = (uint)(0 < local_c);
    param_2[3] = 1;
    uVar2 = 4;
    uVar4 = 4;
    break;
  case 1:
  case 3:
    *param_2 = (uint)(iVar3 == 3);
    param_2[1] = (uint)(1 < iVar3);
    param_2[8] = (uint)(1 < iVar3);
    param_2[9] = (uint)(iVar3 == 3);
    param_2[7] = (uint)(0 < iVar3);
    param_2[2] = (uint)(0 < iVar3);
    param_2[3] = 1;
    uVar2 = 2;
    uVar4 = 3;
    break;
  case 2:
    *param_2 = (uint)(local_c == 3);
    param_2[1] = (uint)(1 < local_c);
    param_2[8] = (uint)(1 < local_c);
    param_2[9] = (uint)(local_c == 3);
    param_2[2] = (uint)(0 < local_c);
    param_2[3] = 1;
    param_2[7] = (uint)(0 < local_c);
    uVar2 = 4;
    if ((param_3 & 1) == 0) {
      uVar2 = 1;
    }
    uVar4 = uVar2;
    break;
  default:
    goto switchD_0180e5dc_default;
  }
  param_2[4] = uVar2;
  param_2[5] = uVar4;
  param_2[6] = 1;
switchD_0180e5dc_default:
  return;
}

