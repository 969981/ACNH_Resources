
void FUN_0275cd8c(long param_1,int param_2,long param_3)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  short *psVar4;
  ulong uVar5;
  
  uVar3 = param_2 * 0x12;
  psVar2 = (short *)(param_1 + 0x41c);
  psVar4 = psVar2 + uVar3;
  if (0x8f < uVar3) {
    psVar4 = psVar2;
  }
  if (*psVar4 != -1) {
    uVar1 = uVar3 + 2;
    uVar5 = (ulong)uVar1;
    if (0x8f < uVar1) {
      uVar5 = 0;
    }
    psVar4 = psVar2 + uVar1;
    if (0x8f < uVar1) {
      psVar4 = psVar2;
    }
    if (psVar2[uVar5] != -1) {
      uVar1 = uVar3 + 4;
      uVar5 = (ulong)uVar1;
      if (0x8f < uVar1) {
        uVar5 = 0;
      }
      psVar4 = psVar2 + uVar1;
      if (0x8f < uVar1) {
        psVar4 = psVar2;
      }
      if (psVar2[uVar5] != -1) {
        uVar1 = uVar3 + 6;
        uVar5 = (ulong)uVar1;
        if (0x8f < uVar1) {
          uVar5 = 0;
        }
        psVar4 = psVar2 + uVar1;
        if (0x8f < uVar1) {
          psVar4 = psVar2;
        }
        if (psVar2[uVar5] != -1) {
          uVar1 = uVar3 + 8;
          uVar5 = (ulong)uVar1;
          if (0x8f < uVar1) {
            uVar5 = 0;
          }
          psVar4 = psVar2 + uVar1;
          if (0x8f < uVar1) {
            psVar4 = psVar2;
          }
          if (psVar2[uVar5] != -1) {
            uVar1 = uVar3 + 10;
            uVar5 = (ulong)uVar1;
            if (0x8f < uVar1) {
              uVar5 = 0;
            }
            psVar4 = psVar2 + uVar1;
            if (0x8f < uVar1) {
              psVar4 = psVar2;
            }
            if (psVar2[uVar5] != -1) {
              uVar1 = uVar3 + 0xc;
              uVar5 = (ulong)uVar1;
              if (0x8f < uVar1) {
                uVar5 = 0;
              }
              psVar4 = psVar2 + uVar1;
              if (0x8f < uVar1) {
                psVar4 = psVar2;
              }
              if (psVar2[uVar5] != -1) {
                uVar1 = uVar3 + 0xe;
                uVar5 = (ulong)uVar1;
                if (0x8f < uVar1) {
                  uVar5 = 0;
                }
                psVar4 = psVar2 + uVar1;
                if (0x8f < uVar1) {
                  psVar4 = psVar2;
                }
                if (psVar2[uVar5] != -1) {
                  uVar3 = uVar3 + 0x10;
                  uVar5 = (ulong)uVar3;
                  if (0x8f < uVar3) {
                    uVar5 = 0;
                  }
                  psVar4 = psVar2 + uVar3;
                  if (0x8f < uVar3) {
                    psVar4 = psVar2;
                  }
                  if (psVar2[uVar5] != -1) {
                    return;
                  }
                  goto LAB_0275ceb8;
                }
              }
            }
          }
        }
      }
    }
    uVar3 = uVar1;
  }
LAB_0275ceb8:
  uVar5 = (ulong)(uVar3 | 1);
  if (0x8f < (uVar3 | 1)) {
    uVar5 = 0;
  }
  *psVar4 = (short)*(undefined4 *)(param_3 + 8);
  psVar2[uVar5] = (short)*(undefined4 *)(param_3 + 0xc);
  return;
}

