
undefined8 FUN_02aca4f0(uint *param_1,float *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  byte local_18 [4];
  undefined4 local_14;
  
  fVar13 = (float)NEON_ucvtf(param_2[3]);
  fVar14 = sinf(fVar13 * 1.4629181e-09);
  fVar15 = cosf(fVar13 * 1.4629181e-09);
  iVar4 = 0;
  fVar13 = fVar14 * 0.0;
  fVar16 = *param_2 + fVar13 * 0.0 + fVar15 * 0.0 + (fVar14 + 0.0) * 7.5;
  fVar17 = param_2[1] + (fVar13 * 0.0 + 1.0) * 0.0 + fVar15 * 0.0 * 0.0 + fVar13 * 7.5;
  fVar13 = 3.4028235e+38;
  fVar14 = param_2[2] + (fVar15 * 0.0 * 0.0 - fVar14 * 0.0) + fVar15 * 7.5;
  puVar12 = (uint *)(*(long *)PTR_DAT_04bb5008 + 0x1fd0);
  do {
    puVar10 = (uint *)(*(long *)PTR_DAT_04bb5008 + 0x1fd0) + (long)iVar4 * 5;
    iVar4 = iVar4 + 1;
    fVar18 = fVar17 - (float)puVar10[3];
    fVar15 = fVar16 - (float)puVar10[2];
    fVar19 = fVar14 - (float)puVar10[4];
    fVar15 = SQRT(fVar18 * fVar18 + fVar15 * fVar15 + fVar19 * fVar19);
    if (fVar13 <= fVar15) {
      puVar10 = puVar12;
      fVar15 = fVar13;
    }
    fVar13 = fVar15;
    puVar12 = puVar10;
  } while (iVar4 != 0x24);
  fVar17 = (float)puVar10[3] - fVar17;
  fVar16 = (float)puVar10[2] - fVar16;
  fVar14 = (float)puVar10[4] - fVar14;
  if (6.0 < SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar14 * fVar14)) {
    return 0;
  }
  local_14 = 0;
  uVar6 = FUN_02b68b20(&local_14,(short)puVar10[1]);
  if ((uVar6 & 1) == 0) {
    return 1;
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_02aca6a0:
    if (*pbVar8 < 8) goto LAB_02aca718;
LAB_02aca6ac:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02aca710:
      pbVar8 = PTR_DAT_04bb5038;
      goto LAB_02aca718;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar12 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar12 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar12 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    local_18[0] = *pbVar8;
    if (7 < local_18[0]) goto LAB_02aca710;
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02aca6a0;
      }
      goto LAB_02aca6ac;
    }
LAB_02aca718:
    local_18[0] = *pbVar8;
    if (7 < local_18[0]) {
      local_18[0] = 0xff;
    }
  }
  uVar6 = FUN_0266cce0(local_14,local_18);
  if ((uVar6 & 1) == 0) {
    return 1;
  }
  uVar5 = *puVar10;
  *param_1 = uVar5;
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 5;
  }
  if ((((uVar5 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar5)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar5 = 1;
      goto joined_r0x02aca7e0;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02aca7e0;
    }
  }
  uVar5 = 0;
joined_r0x02aca7e0:
  if (plVar11 == (long *)0x0) {
    return 5;
  }
  lVar9 = plVar11[0x2a];
  if (((*PTR_DAT_04bc3010 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc3010), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc3008 = PTR_DAT_04bc3018 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc3010);
  }
  uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bc3008);
  puVar3 = PTR_DAT_04bb43c0;
  uVar1 = 0;
  if ((int)lVar9 == 1) {
    uVar1 = uVar5;
  }
  if ((uVar6 & 1) == 0) {
    return 5;
  }
  if (uVar1 == 0) {
    return 5;
  }
  if ((*(byte *)(plVar11 + 0x52) >> 1 & 1) == 0) {
    return 2;
  }
  if (((char)plVar11[0x7a] != '\0') && ((short)plVar11[0x78] == -2)) {
    return 3;
  }
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(plVar11 + 0x78);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      return 3;
    }
  }
  return 4;
}

