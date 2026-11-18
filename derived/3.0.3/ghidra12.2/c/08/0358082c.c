
void FUN_0358082c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
  if (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x298) < 2) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      iVar1 = *(int *)(lVar5 + 0x2e8);
      uVar7 = *(int *)(lVar5 + 0x444) + iVar1 * *(int *)(lVar5 + 0x440);
      iVar6 = *(int *)(lVar5 + 0x430);
      if ((*(int *)(lVar5 + 0x418) != 2) &&
         (fVar9 = *(float *)(lVar5 + 0x424) - *(float *)(lVar5 + 0x428),
         iVar6 = *(int *)(lVar5 + 0x420), fVar9 <= 0.0001 && -0.0001 <= fVar9)) {
        iVar6 = *(int *)(lVar5 + 0x430);
      }
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (int)uVar7 / iVar1;
      }
      uVar3 = iVar2 - iVar6;
      if ((int)uVar3 < 0) {
        uVar8 = 0xffffffff00000000;
      }
      else {
        iVar6 = 0;
        if (iVar1 != 0) {
          iVar6 = *(int *)(lVar5 + 0x2f0) / iVar1;
        }
        if (iVar6 < (int)uVar3) {
          uVar3 = 0xffffffff;
        }
        uVar8 = (ulong)uVar3 << 0x20;
      }
    }
    if (DAT_05771228 == param_2) {
      lVar5 = 0;
    }
    else if (DAT_05771298 == param_2) {
      lVar5 = 1;
    }
    else if (DAT_05771308 == param_2) {
      lVar5 = 2;
    }
    else if (DAT_05771378 == param_2) {
      lVar5 = 3;
    }
    else if (DAT_057713e8 == param_2) {
      lVar5 = 4;
    }
    else if (DAT_05771458 == param_2) {
      lVar5 = 5;
    }
    else if (DAT_057714c8 == param_2) {
      lVar5 = 6;
    }
    else if (DAT_05771538 == param_2) {
      lVar5 = 7;
    }
    else if (DAT_057715a8 == param_2) {
      lVar5 = 8;
    }
    else if (DAT_05771618 == param_2) {
      lVar5 = 9;
    }
    else {
      if (DAT_05771688 != param_2) {
        FUN_033d0598(&DAT_0548e140);
        return;
      }
      lVar5 = 10;
    }
    lVar4 = FUN_033d0598(&DAT_0548e140);
    *(ulong *)(lVar4 + lVar5 * 8 + 0x338) = uVar8 | uVar7;
  }
  return;
}

