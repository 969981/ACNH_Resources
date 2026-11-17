
void FUN_02e0d11c(long param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  if (((*(int *)(param_1 + 0x1c1b8) != 0) && (*(long *)(param_1 + 0x220) != 0)) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x220) + 0x570), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x298) < 2) {
      if (*(int *)(lVar6 + 0x3cc) < 1) {
        return;
      }
      iVar5 = *(int *)(lVar6 + 0x430);
      uVar4 = 0;
      iVar8 = 0;
      iVar3 = *(int *)(lVar6 + 0x2e8);
    }
    else {
      iVar3 = *(int *)(lVar6 + 0x2e8);
      uVar4 = *(int *)(lVar6 + 0x444) + iVar3 * *(int *)(lVar6 + 0x440);
      if ((int)uVar4 < 0) {
        return;
      }
      if (*(int *)(lVar6 + 0x3cc) <= (int)uVar4) {
        return;
      }
      iVar5 = *(int *)(lVar6 + 0x430);
      iVar7 = iVar5;
      if ((*(int *)(lVar6 + 0x418) != 2) &&
         (fVar9 = *(float *)(lVar6 + 0x424) - *(float *)(lVar6 + 0x428),
         iVar7 = *(int *)(lVar6 + 0x420), fVar9 <= 0.0001 && -0.0001 <= fVar9)) {
        iVar7 = iVar5;
      }
      iVar8 = 0;
      if (iVar3 != 0) {
        iVar8 = (int)uVar4 / iVar3;
      }
      iVar8 = iVar8 - iVar7;
      if (iVar8 < 0) {
        iVar8 = -1;
      }
      else {
        iVar7 = 0;
        if (iVar3 != 0) {
          iVar7 = *(int *)(lVar6 + 0x2f0) / iVar3;
        }
        if (iVar7 < iVar8) {
          iVar8 = -1;
        }
      }
    }
    iVar3 = iVar3 * iVar5;
    if (*(uint *)(lVar6 + 0x298) < 2) {
      iVar3 = 0;
    }
    uVar2 = **(undefined8 **)(*(long *)(param_1 + 0x1c1c0) + (ulong)uVar4 * 8);
    if (*(uint *)(param_1 + 0x1d5d0) <= param_2) {
      param_2 = 0;
    }
    piVar1 = (int *)(*(long *)(param_1 + 0x1d5d8) + (long)(int)param_2 * 0x10);
    *piVar1 = iVar8;
    piVar1[1] = iVar3;
    *(undefined8 *)(piVar1 + 2) = uVar2;
  }
  return;
}

