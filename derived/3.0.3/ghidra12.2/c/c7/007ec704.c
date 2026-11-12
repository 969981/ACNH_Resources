
bool FUN_007ec704(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  undefined1 uVar2;
  uint *puVar3;
  short *psVar4;
  
  sVar1 = *param_2;
  if (sVar1 == DAT_04cb6038) {
    return false;
  }
  if (param_3 == 2) {
    if ((*param_1 == sVar1) && (*(uint *)(param_1 + 2) < 2)) {
      return true;
    }
    if ((param_1[4] == sVar1) && (*(uint *)(param_1 + 6) < 2)) {
      return true;
    }
    if ((param_1[8] == sVar1) && (*(uint *)(param_1 + 10) < 2)) {
      return true;
    }
    if ((param_1[0xc] == sVar1) && (*(uint *)(param_1 + 0xe) < 2)) {
      return true;
    }
    if ((param_1[0x10] == sVar1) && (*(uint *)(param_1 + 0x12) < 2)) {
      return true;
    }
    if ((param_1[0x14] == sVar1) && (*(uint *)(param_1 + 0x16) < 2)) {
      return true;
    }
    if ((param_1[0x18] == sVar1) && (*(uint *)(param_1 + 0x1a) < 2)) {
      return true;
    }
    if ((param_1[0x1c] == sVar1) && (*(uint *)(param_1 + 0x1e) < 2)) {
      return true;
    }
    if ((param_1[0x20] == sVar1) && (*(uint *)(param_1 + 0x22) < 2)) {
      return true;
    }
    if ((param_1[0x24] == sVar1) && (*(uint *)(param_1 + 0x26) < 2)) {
      return true;
    }
    if ((param_1[0x28] == sVar1) && (*(uint *)(param_1 + 0x2a) < 2)) {
      return true;
    }
    if ((param_1[0x2c] == sVar1) && (*(uint *)(param_1 + 0x2e) < 2)) {
      return true;
    }
    if ((param_1[0x30] == sVar1) && (*(uint *)(param_1 + 0x32) < 2)) {
      return true;
    }
    if ((param_1[0x34] == sVar1) && (*(uint *)(param_1 + 0x36) < 2)) {
      return true;
    }
    if ((param_1[0x38] == sVar1) && (*(uint *)(param_1 + 0x3a) < 2)) {
      return true;
    }
    if ((param_1[0x3c] == sVar1) && (*(uint *)(param_1 + 0x3e) < 2)) {
      return true;
    }
    if ((param_1[0x40] == sVar1) && (*(uint *)(param_1 + 0x42) < 2)) {
      return true;
    }
    if ((param_1[0x44] == sVar1) && (*(uint *)(param_1 + 0x46) < 2)) {
      return true;
    }
    if ((param_1[0x48] == sVar1) && (*(uint *)(param_1 + 0x4a) < 2)) {
      return true;
    }
    if ((param_1[0x4c] == sVar1) && (*(uint *)(param_1 + 0x4e) < 2)) {
      return true;
    }
    if ((param_1[0x50] == sVar1) && (*(uint *)(param_1 + 0x52) < 2)) {
      return true;
    }
    if ((param_1[0x54] == sVar1) && (*(uint *)(param_1 + 0x56) < 2)) {
      return true;
    }
    if ((param_1[0x58] == sVar1) && (*(uint *)(param_1 + 0x5a) < 2)) {
      return true;
    }
    return param_1[0x5c] == sVar1 && *(uint *)(param_1 + 0x5e) < 2;
  }
  if (*param_1 == sVar1) {
LAB_007ec754:
    puVar3 = (uint *)(param_1 + 2);
  }
  else {
    if (param_1[4] == sVar1) {
LAB_007ec788:
      puVar3 = (uint *)(param_1 + 6);
      goto LAB_007ec7c4;
    }
    if (param_1[8] == sVar1) {
      psVar4 = param_1;
    }
    else {
      psVar4 = param_1 + 0xc;
      if (*psVar4 == sVar1) {
LAB_007ec808:
        param_1 = psVar4;
        goto LAB_007ec754;
      }
      if (param_1[0x10] == sVar1) {
LAB_007ec83c:
        param_1 = psVar4;
        goto LAB_007ec788;
      }
      if (param_1[0x14] != sVar1) {
        psVar4 = param_1 + 0x18;
        if (*psVar4 == sVar1) goto LAB_007ec808;
        if (param_1[0x1c] == sVar1) goto LAB_007ec83c;
        if (param_1[0x20] != sVar1) {
          psVar4 = param_1 + 0x24;
          if (*psVar4 == sVar1) goto LAB_007ec808;
          if (param_1[0x28] == sVar1) goto LAB_007ec83c;
          if (param_1[0x2c] != sVar1) {
            psVar4 = param_1 + 0x30;
            if (*psVar4 == sVar1) goto LAB_007ec808;
            if (param_1[0x34] == sVar1) goto LAB_007ec83c;
            if (param_1[0x38] != sVar1) {
              psVar4 = param_1 + 0x3c;
              if (*psVar4 == sVar1) goto LAB_007ec808;
              if (param_1[0x40] == sVar1) goto LAB_007ec83c;
              if (param_1[0x44] != sVar1) {
                psVar4 = param_1 + 0x48;
                if (*psVar4 == sVar1) goto LAB_007ec808;
                if (param_1[0x4c] == sVar1) goto LAB_007ec83c;
                if (param_1[0x50] != sVar1) {
                  psVar4 = param_1 + 0x54;
                  if (*psVar4 == sVar1) goto LAB_007ec808;
                  if (param_1[0x58] == sVar1) goto LAB_007ec83c;
                  if (param_1[0x5c] != sVar1) {
                    return false;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar3 = (uint *)(psVar4 + 10);
  }
LAB_007ec7c4:
  uVar2 = 1;
  if (1 < *puVar3) {
    uVar2 = 2;
  }
  return (bool)uVar2;
}

