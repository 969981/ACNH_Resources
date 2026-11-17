
void FUN_02f9a868(long param_1,char param_2,uint param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  int iVar11;
  ulong uVar12;
  float fVar13;
  undefined **local_50;
  int local_48;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
  if (((lVar9 != 0) && (-1 < (int)param_3)) && ((int)param_3 < *(int *)(lVar9 + 0x3cc))) {
    puVar10 = *(ushort **)(*(long *)(param_1 + 0x8a358) + (ulong)param_3 * 8);
    uVar5 = *puVar10;
    uVar6 = puVar10[4];
    if (*(uint *)(lVar9 + 0x298) < 2) {
      uVar12 = 0;
    }
    else {
      iVar4 = *(int *)(lVar9 + 0x2e8);
      iVar11 = *(int *)(lVar9 + 0x430);
      if ((*(int *)(lVar9 + 0x418) != 2) &&
         (fVar13 = *(float *)(lVar9 + 0x424) - *(float *)(lVar9 + 0x428),
         iVar11 = *(int *)(lVar9 + 0x420), fVar13 <= 0.0001 && -0.0001 <= fVar13)) {
        iVar11 = *(int *)(lVar9 + 0x430);
      }
      iVar7 = 0;
      if (iVar4 != 0) {
        iVar7 = (*(int *)(lVar9 + 0x444) + iVar4 * *(int *)(lVar9 + 0x440)) / iVar4;
      }
      uVar8 = iVar7 - iVar11;
      if ((int)uVar8 < 0) {
        uVar12 = 0xffffffff00000000;
      }
      else {
        iVar11 = 0;
        if (iVar4 != 0) {
          iVar11 = *(int *)(lVar9 + 0x2f0) / iVar4;
        }
        if (iVar11 < (int)uVar8) {
          uVar8 = 0xffffffff;
        }
        uVar12 = (ulong)uVar8 << 0x20;
      }
    }
    lVar9 = FUN_033d0598(&DAT_0548e140);
    puVar1 = (ulong *)(lVar9 + 0x10);
    local_50 = &PTR_LAB_04b26318;
    local_48 = 2;
    if (param_2 != '\x19') {
      local_48 = (int)param_2;
    }
    uVar8 = FUN_033d3bf4(puVar1,&local_50);
    uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
    puVar2 = (ulong *)((long)puVar1 + (ulong)uVar8 * 0xc);
    if (0xf < uVar8) {
      puVar2 = puVar1;
    }
    uVar3 = 0x4c7b;
    if (uVar6 != 0xfffe) {
      uVar3 = (ulong)uVar5;
    }
    *puVar2 = uVar12 | uVar3;
  }
  return;
}

