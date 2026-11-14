
bool FUN_018204dc(long param_1)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  byte *pbVar7;
  float fVar8;
  float fVar9;
  byte local_2c [4];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x3d0) == 0) {
    return false;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x300);
  if ((lVar6 == 0) || (*(float *)(lVar6 + 0x2b0) <= *(float *)(lVar6 + 0x2b4))) {
    return false;
  }
  if (*(int *)(*(long *)PTR_DAT_04bb47e0 + 0x624) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(*(long *)PTR_DAT_04bb47e0 + 0x624) !=
            *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  if (DAT_04cd19d8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_018205ac:
    if (7 < *pbVar7) {
LAB_018205b8:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar6 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar7 = (byte *)(lVar6 + 0x471);
          }
        }
        local_2c[0] = *pbVar7;
        if (local_2c[0] < 8) goto LAB_0182063c;
      }
      pbVar7 = &DAT_0548e168;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_018205ac;
      }
      goto LAB_018205b8;
    }
  }
  local_2c[0] = *pbVar7;
  if (7 < local_2c[0]) {
    return true;
  }
LAB_0182063c:
  FUN_0253395c(auStack_28,local_2c,*(undefined4 *)PTR_DAT_04bb3238);
  iVar4 = FUN_01705ce0(auStack_28);
  if (iVar4 != 3) {
    bVar3 = true;
  }
  if ((!bVar3) && (pfVar5 = (float *)FUN_0252d9bc(0), pfVar5 != (float *)0x0)) {
    fVar8 = *pfVar5 - *(float *)(*(long *)(param_1 + 0x300) + 0x278);
    fVar9 = pfVar5[2] - *(float *)(*(long *)(param_1 + 0x300) + 0x280);
    return *(float *)(*(long *)(param_1 + 0x3d8) + 0x298) <= SQRT(fVar9 * fVar9 + fVar8 * fVar8);
  }
  return true;
}

