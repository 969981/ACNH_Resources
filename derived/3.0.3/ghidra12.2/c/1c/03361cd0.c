
void FUN_03361cd0(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  
  if (*(int *)(DAT_05355a60 + 0x474) == 0) {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  uVar4 = param_1[0x1f6];
  if (*(int *)(DAT_05355a60 + 0x474) == param_4) {
    *param_2 = uVar4 - 1;
    uVar4 = param_1[0x1f6];
  }
  else {
    if (0 < (int)uVar4) {
      if (param_4 <= *param_1) {
        iVar2 = 0;
        uVar3 = 0;
LAB_03361df0:
        *param_2 = (int)uVar3;
        *param_3 = param_4 - iVar2;
        return;
      }
      if (uVar4 != 1) {
        uVar3 = 0;
        piVar6 = param_1;
        do {
          piVar6 = piVar6 + 1;
          uVar5 = uVar3 & 0xffffffff;
          if (0x1f6 < uVar3 + 1) {
            uVar5 = 0;
          }
          piVar1 = piVar6;
          if (0x1f5 < uVar3 + 1) {
            piVar1 = param_1;
          }
          iVar2 = param_1[uVar5] + 1;
          if ((iVar2 == param_4) &&
             (iVar2 = param_4,
             *(short *)(*(long *)(DAT_05355a60 + 0x468) + (long)param_1[uVar5] * 2) != 10)) {
            iVar2 = (int)uVar3;
            *param_2 = iVar2;
            uVar4 = iVar2 + 1;
            if (param_1[0x1f6] < (int)uVar4) goto LAB_03361e14;
            if (iVar2 == 0) {
              iVar2 = 1;
            }
            else {
              uVar5 = (ulong)(iVar2 - 1);
              if (0x1f7 < uVar4) {
                uVar5 = 0;
              }
              iVar2 = -param_1[uVar5];
            }
            uVar3 = uVar3 & 0xffffffff;
            goto LAB_03361dd4;
          }
          uVar3 = uVar3 + 1;
          if (param_4 <= *piVar1) goto LAB_03361df0;
        } while ((ulong)uVar4 - 1 != uVar3);
      }
    }
    *param_2 = uVar4 - 1;
    uVar4 = param_1[0x1f6];
  }
  if ((int)uVar4 < 1) {
LAB_03361e14:
    *param_3 = 0;
    return;
  }
  uVar3 = (ulong)(uVar4 - 1);
  if (uVar4 - 1 == 0) {
    iVar2 = 1;
  }
  else {
    uVar5 = (ulong)(uVar4 - 2);
    if (0x1f7 < uVar4) {
      uVar5 = 0;
    }
    iVar2 = -param_1[uVar5];
  }
LAB_03361dd4:
  if (0x1f6 < uVar4) {
    uVar3 = 0;
  }
  *param_3 = param_1[uVar3] + iVar2;
  return;
}

