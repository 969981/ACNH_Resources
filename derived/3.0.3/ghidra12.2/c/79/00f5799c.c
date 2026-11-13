
bool FUN_00f5799c(uint *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  float *pfVar8;
  long lVar9;
  byte *pbVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  float fVar15;
  byte local_34 [4];
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    plVar11 = (long *)0x0;
    bVar4 = false;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    uVar14 = *param_1;
    if ((((uVar14 == 0) ||
         (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
        ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar14)) {
      plVar11 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar3;
      iVar6 = (**(code **)(*plVar7 + 0x60))();
      if (iVar6 < 0x11) {
        uVar13 = 1;
        uVar12 = 1;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_00f57a70;
        uVar13 = 0x101000100 >> (((ulong)*(uint *)(lVar9 + 0x5e8) & 7) << 3);
        uVar12 = (uint)uVar13;
      }
    }
    else {
LAB_00f57a70:
      uVar13 = 0;
      uVar12 = 0;
    }
    if (plVar11 == (long *)0x0) {
      bVar4 = false;
      uVar14 = 0;
    }
    else {
      bVar4 = (int)plVar11[0x2a] == 1;
      uVar14 = *(uint *)(plVar11 + 0x49) >> 4 & 1;
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar13 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
      if ((uVar13 & 1) == 0) {
        uVar12 = 0;
      }
      uVar13 = (ulong)uVar12;
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_00f57b30:
    if (7 < *pbVar10) {
LAB_00f57b3c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar9 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar9 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar10 = (byte *)(lVar9 + 0x471);
          }
        }
        local_34[0] = *pbVar10;
        if (local_34[0] < 8) goto LAB_00f57bbc;
      }
      pbVar10 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_00f57b30;
      }
      goto LAB_00f57b3c;
    }
  }
  local_34[0] = *pbVar10;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
LAB_00f57bbc:
  pfVar8 = (float *)FUN_0251b3b0(local_34,0);
  bVar5 = false;
  if (pfVar8 != (float *)0x0) {
    bVar5 = false;
    if ((((plVar11 != (long *)0x0) && (bVar4)) && ((uVar13 & 0xff) != 0)) && (uVar14 != 0)) {
      DAT_04fe79f0 = false;
      fVar15 = *(float *)(plVar11[0xd] + 0x278);
      if ((fVar15 + -5.0 <= *pfVar8) && (*pfVar8 <= fVar15 + 5.0)) {
        DAT_04fe79f0 = *(float *)(plVar11[0xd] + 0x280) <= pfVar8[2];
      }
      bVar5 = (bool)DAT_04fe79f0;
    }
  }
  return bVar5;
}

