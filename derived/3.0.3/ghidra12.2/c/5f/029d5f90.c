
long FUN_029d5f90(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar8 = *param_2;
  if ((int)uVar8 < 0) {
    return 0;
  }
  if (uVar8 < 200) {
    uVar4 = *param_1;
    if (uVar4 == 0) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 2);
    if ((int)uVar4 < 2) {
LAB_029d604c:
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      iVar7 = uVar4 - 1;
      do {
        uVar6 = (uint)uVar9;
        iVar1 = iVar7 + uVar6;
        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
          iVar1 = iVar1 + 1;
        }
        uVar2 = iVar1 >> 1;
        uVar9 = (ulong)uVar2;
        uVar3 = *(uint *)(lVar5 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar9 << 4));
        if (uVar8 == uVar3) goto LAB_029d6074;
        if ((int)uVar3 < (int)uVar8) {
          uVar6 = uVar2 + 1;
        }
        else {
          iVar7 = uVar2 - 1;
        }
        uVar9 = (ulong)uVar6;
      } while ((int)uVar6 < iVar7);
    }
  }
  else {
    uVar4 = param_1[4];
    if (uVar4 == 0) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 6);
    if ((int)uVar4 < 2) goto LAB_029d604c;
    uVar9 = 0;
    iVar7 = uVar4 - 1;
    do {
      uVar6 = (uint)uVar9;
      iVar1 = iVar7 + uVar6;
      if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
        iVar1 = iVar1 + 1;
      }
      uVar2 = iVar1 >> 1;
      uVar9 = (ulong)uVar2;
      uVar3 = *(uint *)(lVar5 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar9 << 4));
      if (uVar8 == uVar3) goto LAB_029d6074;
      if ((int)uVar3 < (int)uVar8) {
        uVar6 = uVar2 + 1;
      }
      else {
        iVar7 = uVar2 - 1;
      }
      uVar9 = (ulong)uVar6;
    } while ((int)uVar6 < iVar7);
  }
  if (uVar8 != *(uint *)(lVar5 + (-(uVar9 >> 0x1f) & 0xfffffff000000000 | uVar9 << 4))) {
    return 0;
  }
  iVar7 = (int)uVar9;
joined_r0x029d6078:
  if (iVar7 < 0) {
    return 0;
  }
  uVar8 = (uint)uVar9;
  if (uVar4 <= uVar8) {
    uVar8 = 0;
  }
  return lVar5 + (ulong)uVar8 * 0x10;
LAB_029d6074:
  iVar7 = (int)uVar9;
  goto joined_r0x029d6078;
}

