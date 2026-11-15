
void FUN_0212cb44(long param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  byte *pbVar11;
  float *pfVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar8 = *param_2;
  if ((((uVar8 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar8)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_0212cc04;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0212cc04:
    uVar8 = 0;
  }
  if (plVar13 == (long *)0x0) {
    return;
  }
  lVar9 = plVar13[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb37d0);
  uVar1 = 0;
  if ((int)lVar9 == 1) {
    uVar1 = uVar8;
  }
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  lVar9 = plVar13[0xd];
  pfVar12 = *(float **)(param_1 + 8);
  fVar16 = *(float *)(lVar9 + 0x278);
  fVar17 = *pfVar12;
  fVar15 = *(float *)(lVar9 + 0x27c);
  fVar14 = *(float *)(lVar9 + 0x280);
  if (((fVar17 == fVar16) && (pfVar12[1] == fVar15)) && (pfVar12[2] == fVar14)) {
    return;
  }
  pfVar10 = *(float **)(param_1 + 0x18);
  if (((fVar17 == *pfVar10) && (pfVar12[1] == pfVar10[1])) && (pfVar12[2] == pfVar10[2])) {
    lVar9 = 0;
  }
  else if (((fVar17 == pfVar10[9]) && (pfVar12[1] == pfVar10[10])) && (pfVar12[2] == pfVar10[0xb]))
  {
    lVar9 = 1;
  }
  else if (((fVar17 == pfVar10[0x12]) && (pfVar12[1] == pfVar10[0x13])) &&
          (pfVar12[2] == pfVar10[0x14])) {
    lVar9 = 2;
  }
  else if (((fVar17 == pfVar10[0x1b]) && (pfVar12[1] == pfVar10[0x1c])) &&
          (pfVar12[2] == pfVar10[0x1d])) {
    lVar9 = 3;
  }
  else if (((fVar17 == pfVar10[0x24]) && (pfVar12[1] == pfVar10[0x25])) &&
          (pfVar12[2] == pfVar10[0x26])) {
    lVar9 = 4;
  }
  else if (((fVar17 == pfVar10[0x2d]) && (pfVar12[1] == pfVar10[0x2e])) &&
          (pfVar12[2] == pfVar10[0x2f])) {
    lVar9 = 5;
  }
  else if (((fVar17 == pfVar10[0x36]) && (pfVar12[1] == pfVar10[0x37])) &&
          (pfVar12[2] == pfVar10[0x38])) {
    lVar9 = 6;
  }
  else {
    if (fVar17 != pfVar10[0x3f]) {
      return;
    }
    if (pfVar12[1] != pfVar10[0x40]) {
      return;
    }
    if (pfVar12[2] != pfVar10[0x41]) {
      return;
    }
    lVar9 = 7;
  }
  if (((fVar16 == pfVar10[lVar9 * 9 + 3]) && (fVar15 == pfVar10[lVar9 * 9 + 4])) &&
     (fVar14 == pfVar10[lVar9 * 9 + 5])) {
    uVar8 = *param_2;
    goto LAB_0212ce60;
  }
  if (((fVar16 == pfVar10[lVar9 * 9 + 6]) && (fVar15 == pfVar10[lVar9 * 9 + 7])) &&
     (fVar14 == pfVar10[lVar9 * 9 + 8])) {
    uVar8 = *param_2;
    goto LAB_0212ce9c;
  }
  pfVar12 = (float *)FUN_0252d9bc(0);
  if (pfVar12 == (float *)0x0) {
    return;
  }
  if (((*pfVar12 != pfVar10[lVar9 * 9 + 3]) || (pfVar12[1] != pfVar10[lVar9 * 9 + 4])) ||
     (pfVar12[2] != pfVar10[lVar9 * 9 + 5])) {
    if (*pfVar12 != pfVar10[lVar9 * 9 + 6]) {
      return;
    }
    if (pfVar12[1] != pfVar10[lVar9 * 9 + 7]) {
      return;
    }
    if (pfVar12[2] != pfVar10[lVar9 * 9 + 8]) {
      return;
    }
    lVar9 = *(long *)PTR_DAT_04bb39b0;
    if (lVar9 == 0) {
      bVar3 = *PTR_DAT_04bb32e0;
LAB_0212d090:
      uVar8 = (uint)bVar3;
      if (uVar8 < 8) goto LAB_0212d104;
LAB_0212d098:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar9 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar9 + 0x473);
        pbVar11 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar11 = (byte *)(lVar9 + 0x471);
          }
        }
        uVar8 = (uint)*pbVar11;
        if (uVar8 < 8) goto LAB_0212d104;
      }
      uVar8 = (uint)(byte)*PTR_DAT_04bb5038;
      if (uVar8 < 8) goto LAB_0212d104;
    }
    else {
      pbVar11 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar9 + 0x15c) != 0) {
        pbVar11 = (byte *)(lVar9 + 0x158);
      }
      uVar8 = (uint)*pbVar11;
      if (7 < *pbVar11) {
        if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0212d090;
        }
        goto LAB_0212d098;
      }
LAB_0212d104:
      if (*(long *)PTR_DAT_04bb4718 != 0) {
        uVar8 = *(uint *)(*(long *)PTR_DAT_04bb4718 + (ulong)uVar8 * 4 + 0xde8);
        goto LAB_0212ce9c;
      }
    }
    uVar8 = *(uint *)PTR_DAT_04bb3238;
LAB_0212ce9c:
    *(uint *)(*(long *)(param_1 + 0x10) + 4) = uVar8;
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if (lVar9 == 0) {
    bVar3 = *PTR_DAT_04bb32e0;
LAB_0212cfe0:
    uVar8 = (uint)bVar3;
    if (uVar8 < 8) goto LAB_0212d054;
LAB_0212cfe8:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar9 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar9 + 0x473);
      pbVar11 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar2 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar11 = (byte *)(lVar9 + 0x471);
        }
      }
      uVar8 = (uint)*pbVar11;
      if (uVar8 < 8) goto LAB_0212d054;
    }
    uVar8 = (uint)(byte)*PTR_DAT_04bb5038;
    if (uVar8 < 8) goto LAB_0212d054;
  }
  else {
    pbVar11 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar9 + 0x158);
    }
    uVar8 = (uint)*pbVar11;
    if (7 < *pbVar11) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0212cfe0;
      }
      goto LAB_0212cfe8;
    }
LAB_0212d054:
    if (*(long *)PTR_DAT_04bb4718 != 0) {
      uVar8 = *(uint *)(*(long *)PTR_DAT_04bb4718 + (ulong)uVar8 * 4 + 0xde8);
      goto LAB_0212ce60;
    }
  }
  uVar8 = *(uint *)PTR_DAT_04bb3238;
LAB_0212ce60:
  **(uint **)(param_1 + 0x10) = uVar8;
  return;
}

