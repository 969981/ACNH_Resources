
undefined8 FUN_009b9580(long param_1,long *param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  
  if (*(long *)(DAT_04d07da8 + 0x48) == 0) {
    return 0;
  }
  uVar8 = *(uint *)(param_1 + 0x94);
  piVar1 = (int *)(param_1 + 0x1c);
  if ((0x1b < (int)uVar8) || (iVar9 = *(int *)(param_1 + 0x98), 9 < iVar9)) {
    iVar9 = 0;
    uVar8 = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0x7c) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined8 *)(param_1 + 0x6c) = 0;
    *(undefined8 *)(param_1 + 0x74) = 0;
    *(undefined8 *)(param_1 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 100) = 0;
    *(undefined8 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
  }
  if ((int)param_2[2] < 1) {
LAB_009b96c4:
    if (uVar8 == 0) {
      return 0;
    }
    *(int *)(param_1 + 0x98) = iVar9 + 1;
    piVar11 = piVar1 + uVar8;
    if (0x1d < uVar8) {
      piVar11 = piVar1;
    }
    iVar6 = *piVar11;
  }
  else {
    iVar6 = 0;
    if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
      iVar6 = (int)param_2[1];
    }
    uVar4 = *(uint *)(*param_2 + ((long)*(int *)((long)param_2 + 0xc) - (long)iVar6) * 0x1060 +
                     0xfc0);
    if ((uVar4 & 0x440000) == 0) {
      if ((uVar4 & 0x880000) == 0) {
        if ((uVar4 & 0x110000) == 0) {
          if ((uVar4 & 0x220000) == 0) goto LAB_009b96c4;
          iVar6 = 6;
        }
        else {
          iVar6 = 2;
        }
      }
      else {
        iVar5 = 4;
        if ((uVar4 & 0x220000) != 0) {
          iVar5 = 5;
        }
        iVar6 = 3;
        if ((uVar4 & 0x110000) == 0) {
          iVar6 = iVar5;
        }
      }
    }
    else if ((uVar4 & 0x110000) == 0) {
      iVar6 = 0;
      if ((uVar4 & 0x220000) != 0) {
        iVar6 = 7;
      }
    }
    else {
      iVar6 = 1;
    }
    uVar10 = (ulong)uVar8;
    if (0x1d < uVar8) {
      uVar10 = 0;
    }
    if (piVar1[uVar10] != iVar6) {
      uVar10 = (ulong)(uVar8 + 1);
      if (0x1d < uVar8 + 1) {
        uVar10 = 0;
      }
      piVar1[uVar10] = iVar6;
      iVar9 = *(int *)(param_1 + 0x94);
      *(int *)(param_1 + 0x94) = iVar9 + 1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      if (iVar9 < -1) {
        return 0;
      }
      uVar10 = 0;
      bVar7 = 0;
      piVar11 = (int *)(param_1 + 0x20);
      if ((param_3 & 1) == 0) {
        do {
          piVar3 = piVar11 + -1;
          if (0x1d < uVar10) {
            piVar3 = piVar1;
          }
          piVar2 = piVar11;
          if (0x1c < uVar10) {
            piVar2 = piVar1;
          }
          if ((*piVar2 < *piVar3) && (*piVar3 < 6 || 1 < *piVar2)) {
            bVar7 = bVar7 + 1;
          }
          uVar10 = uVar10 + 1;
          piVar11 = piVar11 + 1;
        } while (iVar9 + 2 != uVar10);
      }
      else {
        do {
          piVar3 = piVar11 + -1;
          if (0x1d < uVar10) {
            piVar3 = piVar1;
          }
          iVar6 = *piVar3;
          piVar3 = piVar11;
          if (0x1c < uVar10) {
            piVar3 = piVar1;
          }
          iVar5 = *piVar3;
          if ((iVar6 != iVar5) && ((iVar6 <= iVar5 || ((5 < iVar6 && (iVar5 < 2)))))) {
            bVar7 = bVar7 + 1;
          }
          uVar10 = uVar10 + 1;
          piVar11 = piVar11 + 1;
        } while (iVar9 + 2 != uVar10);
      }
      if (bVar7 < 4) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x94) = 0;
      *(undefined8 *)(param_1 + 0x8c) = 0;
      piVar1[0] = 0;
      piVar1[1] = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
      *(undefined8 *)(param_1 + 0x5c) = 0;
      *(undefined8 *)(param_1 + 100) = 0;
      *(undefined8 *)(param_1 + 0x6c) = 0;
      *(undefined8 *)(param_1 + 0x74) = 0;
      *(undefined8 *)(param_1 + 0x7c) = 0;
      *(undefined8 *)(param_1 + 0x84) = 0;
      return 1;
    }
    *(int *)(param_1 + 0x98) = iVar9 + 1;
  }
  piVar11 = piVar1 + (uVar8 + 1);
  if (0x1d < uVar8 + 1) {
    piVar11 = piVar1;
  }
  *piVar11 = iVar6;
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  return 0;
}

