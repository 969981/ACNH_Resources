
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02919a00(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  short sVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  short local_64 [2];
  ulong local_60;
  float local_58;
  byte local_18 [4];
  undefined4 local_14;
  
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar12 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_02919a74:
    if (*pbVar12 < 8) goto LAB_02919af0;
LAB_02919a80:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02919ae8:
      pbVar12 = PTR_DAT_04bb5038;
      goto LAB_02919af0;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar14 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar12 = (byte *)(lVar14 + 0x471);
      }
    }
    local_18[0] = *pbVar12;
    if (7 < local_18[0]) goto LAB_02919ae8;
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02919a74;
      }
      goto LAB_02919a80;
    }
LAB_02919af0:
    local_18[0] = *pbVar12;
    if (7 < local_18[0]) {
      local_18[0] = 0xff;
      goto LAB_02919c00;
    }
  }
  local_14 = CONCAT31(local_14._1_3_,local_18[0]);
  iVar7 = FUN_02582fe0(&local_14);
  if (iVar7 != -1) {
    local_60 = local_60 & 0xffffffff00000000;
    uVar9 = FUN_02b5e950(&local_60,iVar7);
    if ((uVar9 & 1) != 0) {
      uVar9 = FUN_02b5fa90(local_64,local_60 & 0xffffffff);
      sVar5 = local_64[0];
      if (((uVar9 & 1) != 0) && (local_64[0] != 0)) {
        FUN_02b62bd0(&local_14,local_64[0]);
        local_58 = 0.0;
        local_60 = 0;
        uVar9 = FUN_02b630b0(&local_60,sVar5);
        if ((uVar9 & 1) != 0) {
          fVar16 = (float)NEON_ucvtf(local_14);
          fVar17 = sinf(fVar16 * 1.4629181e-09);
          fVar18 = cosf(fVar16 * 1.4629181e-09);
          fVar6 = local_58;
          fVar16 = (float)local_60;
          uVar2 = *param_1;
          if (((*PTR_DAT_04bb3998 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar7 != 0)) {
            FUN_00773950(PTR_DAT_04bb3990);
            __cxa_guard_release(PTR_DAT_04bb3998);
          }
          if ((int)*(uint *)PTR_DAT_04bb3990 < 1) {
            uVar13 = 0xffffffff;
          }
          else {
            uVar9 = 0;
            uVar13 = 0xffffffff;
            do {
              if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar9 * 4) == 0x3c150efd) {
                uVar13 = (uint)uVar9;
                break;
              }
              uVar9 = uVar9 + 1;
            } while (*(uint *)PTR_DAT_04bb3990 != uVar9);
          }
          if (uVar2 == uVar13) {
            *(short *)(*(long *)PTR_DAT_04bb5008 + 0x25ab0) = local_64[0];
          }
          puVar15 = DAT_055c1b60;
          if (DAT_055c1b60 == &DAT_055c1b58) {
            puVar11 = &DAT_055c1098;
          }
          else {
            do {
              puVar11 = puVar15 + -8;
              if (*(int *)(puVar15 + -1) == 0x6622bd46) goto LAB_02919e4c;
              puVar11 = puVar15 + 1;
              puVar15 = (undefined8 *)*puVar11;
            } while ((undefined8 *)*puVar11 != &DAT_055c1b58);
            puVar11 = &DAT_055c1098;
          }
LAB_02919e4c:
          if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
            return 0;
          }
          uVar9 = FUN_02930ce0(&DAT_055c10d0,puVar11,local_18);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
          if (7 < local_18[0]) {
            local_18[0] = 0xff;
          }
          DAT_055c116c = 0;
          DAT_055c1174._0_4_ = fVar16 + fVar17 * 0.0 * 0.0 + fVar18 * 0.0 + (fVar17 + 0.0) * 12.5;
          DAT_055c1174._4_4_ = 0;
          DAT_055c117c = fVar6 + (fVar18 * 0.0 * 0.0 - fVar17 * 0.0) + fVar18 * 12.5;
          DAT_055c1180 = 0;
          DAT_055c1184 = *param_1;
          DAT_055c1188 = local_18[0];
          _DAT_055c1198 = 0;
          DAT_055c119a = 0;
          return 1;
        }
      }
    }
  }
LAB_02919c00:
  pbVar12 = PTR_DAT_04bb3998;
  iVar7 = *(int *)(*(long *)PTR_DAT_04bb5c90 + 0x80);
  iVar19 = *(int *)(*(long *)PTR_DAT_04bb5c90 + 0x84);
  if (((*PTR_DAT_04bb3998 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar8 != 0))
  {
    FUN_00773950(PTR_DAT_04bb3990);
    __cxa_guard_release(PTR_DAT_04bb3998);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
    uVar9 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar9 * 4) == 0x2ec94ec5) goto LAB_02919c6c;
      uVar9 = uVar9 + 1;
    } while (*(uint *)PTR_DAT_04bb3990 != uVar9);
  }
  uVar9 = 0;
LAB_02919c6c:
  if ((*pbVar12 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3998);
    pbVar12 = PTR_DAT_04bb3998;
    if (iVar8 != 0) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
      pbVar12 = PTR_DAT_04bb3998;
    }
  }
  puVar4 = PTR_DAT_04bb3990;
  uVar2 = *param_1;
  if (*(uint *)PTR_DAT_04bb3990 <= uVar2) {
    uVar2 = 0;
  }
  if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + (long)(int)uVar2 * 4) == -0x1a927402) {
    if (((*pbVar12 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar8 != 0)) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
    }
    uVar2 = *(uint *)puVar4;
    if (0 < (int)uVar2) {
      uVar9 = 0;
      do {
        if (*(int *)(*(long *)(puVar4 + 8) + uVar9 * 4) == -0x1a927402) goto LAB_02919ce0;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    uVar9 = 0;
  }
LAB_02919ce0:
  puVar15 = DAT_055c1b60;
  if (DAT_055c1b60 == &DAT_055c1b58) {
    puVar11 = &DAT_055c1098;
  }
  else {
    do {
      puVar11 = puVar15 + -8;
      if (*(int *)(puVar15 + -1) == 0x6622bd46) goto LAB_02919d3c;
      puVar11 = puVar15 + 1;
      puVar15 = (undefined8 *)*puVar11;
    } while ((undefined8 *)*puVar11 != &DAT_055c1b58);
    puVar11 = &DAT_055c1098;
  }
LAB_02919d3c:
  if ((**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') ||
     (uVar10 = FUN_02930ce0(&DAT_055c10d0,puVar11,local_18), (uVar10 & 1) == 0)) {
    return 0;
  }
  if (7 < local_18[0]) {
    local_18[0] = 0xff;
  }
  DAT_055c119a = 0;
  _DAT_055c1198 = 0;
  DAT_055c1188 = local_18[0];
  DAT_055c1184 = (int)uVar9;
  DAT_055c1180 = 0;
  DAT_055c117c = (float)iVar19 * 5.0 + 5.0;
  DAT_055c1174._4_4_ = 0;
  DAT_055c1174._0_4_ = (float)(iVar7 + 3) * 5.0 + 5.0;
  DAT_055c116c = 0;
  return 1;
}

