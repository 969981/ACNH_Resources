
void FUN_01aba7e0(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint *puVar8;
  undefined **ppuVar9;
  bool bVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  char *pcVar22;
  uint uVar23;
  uint local_19c;
  undefined *local_170;
  char *local_168;
  undefined4 local_160;
  char local_15c [31];
  undefined1 local_13d;
  undefined **local_138;
  uint local_130;
  undefined *local_128;
  undefined1 *local_120;
  undefined4 local_114;
  undefined *local_110;
  undefined1 *local_108;
  undefined4 local_100;
  undefined1 local_fc [127];
  undefined1 local_7d;
  undefined *local_78;
  char *local_70;
  
  if ((param_1 == (uint *)0x0) || (uVar6 = *param_1, uVar6 == 0)) {
    return;
  }
  uVar23 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bb2d88 + 0x10;
  puVar3 = PTR_DAT_04bb2028 + 0x10;
  puVar13 = PTR_DAT_04bb2028;
  puVar17 = (uint *)PTR_DAT_04bc0320;
  puVar12 = PTR_DAT_04bb2020;
LAB_01aba8bc:
  if (uVar23 < *param_1) {
    if (param_1[1] == 0) goto LAB_01aba8b0;
    if ((ushort)param_1[2] == 0) goto LAB_01aba8b0;
    iVar20 = 0xc;
    if (*(char *)((long)param_1 + 10) != '\0') {
      iVar20 = 0x1c;
    }
    puVar4 = (uint *)((ulong)(param_1[1] * uVar23 + (uint)(ushort)param_1[2] * 8 + iVar20) +
                     (long)param_1);
    if (puVar4 == (uint *)0x0) goto LAB_01aba8b0;
    puVar8 = (uint *)((long)puVar4 - (ulong)*puVar4);
    if (*puVar4 == 0) goto LAB_01aba8b0;
    if (puVar8 == (uint *)0x0) goto LAB_01aba8b0;
    if (*puVar8 == 0) goto LAB_01aba8b0;
    uVar18 = puVar8[1];
    if (uVar18 == 0) goto LAB_01aba8b0;
    if ((ulong)(ushort)puVar8[2] == 0) goto LAB_01aba8b0;
    lVar19 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      lVar19 = 0x1c;
    }
    lVar19 = (long)puVar8 + lVar19 + (ulong)(ushort)puVar8[2] * 8;
    if (lVar19 == 0) goto LAB_01aba8b0;
    uVar5 = 0;
    if ((ulong)uVar18 != 0) {
      uVar5 = (uint)((ulong)((long)puVar4 - lVar19) / (ulong)uVar18);
    }
    if (*puVar8 <= uVar5) {
      uVar5 = 0xffffffff;
    }
    if (*puVar17 <= uVar5) goto LAB_01aba8b0;
    if ((DAT_05300740 & 1) == 0) {
      DAT_05300740 = 1;
      uVar11 = 0xffffffff;
      DAT_05300744 = 0xffffffffffffffff;
      DAT_0530074c = 0xffffffffffffffff;
LAB_01abaa14:
      do {
        if (uVar11 != 0xffffffff) {
LAB_01aba898:
          puVar14 = (undefined8 *)(*(long *)(puVar17 + 2) + (long)(int)uVar5 * 10);
          *(undefined2 *)(puVar14 + 1) = 0;
          *puVar14 = 0;
          goto LAB_01aba8b0;
        }
        lVar19 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar19 = 0x1c;
        }
        if (lVar19 + (long)puVar8 == 0) goto LAB_01aba898;
        uVar11 = (ulong)(ushort)puVar8[2];
        DAT_05300744 = CONCAT44(0xfffffffe,(undefined4)DAT_05300744);
        if (uVar11 == 0) goto LAB_01aba898;
        puVar16 = (uint *)(lVar19 + (long)puVar8 + 4);
        while (puVar16[-1] != 0xe4361c86) {
          puVar16 = puVar16 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01aba898;
        }
        uVar11 = (ulong)*puVar16;
        uVar15 = 0;
        if (*puVar16 != 0xffffffff) {
          uVar15 = uVar11;
        }
        DAT_05300744 = CONCAT44((int)uVar15,(undefined4)DAT_05300744);
      } while ((int)uVar15 < 0);
    }
    else {
      uVar15 = DAT_05300744 >> 0x20;
      uVar11 = uVar15;
      if ((long)DAT_05300744 < 0) goto LAB_01abaa14;
    }
    local_70 = (char *)((long)puVar4 + uVar15);
    puVar14 = (undefined8 *)(*(long *)(puVar17 + 2) + (long)(int)uVar5 * 10);
    *(undefined2 *)(puVar14 + 1) = 0;
    *puVar14 = 0;
    if (local_70 == (char *)0x0) goto LAB_01aba8b0;
    if (*local_70 == '\0') goto LAB_01aba8b0;
    lVar19 = 0;
    local_170 = puVar12 + 0x10;
    local_100 = 0x80;
    local_7d = 0;
    local_fc[0] = 0;
    local_168 = "|";
    do {
      local_110 = puVar2;
      local_108 = local_fc;
      local_78 = puVar1;
      if (local_70[lVar19] == '\0') {
LAB_01abaa68:
        if (0 < (int)lVar19) {
          lVar21 = 0;
          goto LAB_01abaa78;
        }
        break;
      }
      if (local_70[lVar19 + 1] == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_01abaa68;
      }
      if (local_70[lVar19 + 2] == '\0') {
        lVar19 = lVar19 + 2;
        goto LAB_01abaa68;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    puVar12 = puVar12 + 0x10;
    goto LAB_01abaad8;
  }
  goto LAB_01aba8b0;
  while (lVar21 = lVar21 + 1, lVar19 != lVar21) {
LAB_01abaa78:
    pcVar22 = local_70 + lVar21;
    (**(code **)(local_170 + 0x18))(&local_170);
    puVar13 = PTR_DAT_04bb2028;
    puVar12 = local_78;
    if ((pcVar22 == local_168) || (*pcVar22 == *local_168)) {
      if (lVar21 == 0xffffffff) goto LAB_01abaadc;
      (**(code **)(local_78 + 0x18))(&local_78);
      lVar19 = 0;
      goto LAB_01abac10;
    }
  }
LAB_01abaad8:
LAB_01abaadc:
  local_13d = 0;
  local_170 = puVar13 + 0x10;
  local_160 = 0x20;
  local_15c[0] = '\0';
  local_168 = local_15c;
  (**(code **)(puVar12 + 0x18))(&local_78);
  FUN_038d1270(&local_170,&DAT_04067cc6,local_70);
  uVar11 = FUN_038d2c30(&local_114,&local_170,0xffffffff);
  if ((uVar11 & 1) != 0) {
    FUN_01abaee0(puVar14,local_114);
  }
  puVar13 = PTR_DAT_04bb2028;
  puVar17 = (uint *)PTR_DAT_04bc0320;
  puVar12 = PTR_DAT_04bb2020;
LAB_01aba8b0:
  uVar23 = uVar23 + 1;
  if (uVar23 == uVar6) {
    return;
  }
  goto LAB_01aba8bc;
  while( true ) {
    if (local_70[lVar19 + 1] == '\0') {
      lVar19 = lVar19 + 1;
      goto LAB_01abac58;
    }
    if (local_70[lVar19 + 2] == '\0') {
      lVar19 = lVar19 + 2;
      goto LAB_01abac58;
    }
    lVar19 = lVar19 + 3;
    if (lVar19 == 0x80001) break;
LAB_01abac10:
    if (local_70[lVar19] == '\0') {
LAB_01abac58:
      local_19c = (int)lVar19 + 1;
      puVar13 = PTR_DAT_04bb2028;
      puVar17 = (uint *)PTR_DAT_04bc0320;
      puVar12 = PTR_DAT_04bb2020;
      if ((int)lVar19 == -1) goto LAB_01aba8b0;
      goto LAB_01abac64;
    }
  }
  local_19c = 1;
LAB_01abac64:
  local_128 = PTR_DAT_04bb2020 + 0x10;
  local_130 = 0;
  local_120 = &DAT_040b5e16;
  local_138 = &local_78;
  do {
    do {
      FUN_0076e020(&local_138,&local_110);
      local_13d = 0;
      local_160 = 0x20;
      local_15c[0] = '\0';
      local_170 = puVar3;
      local_168 = local_15c;
      (**(code **)(local_110 + 0x18))(&local_110);
      FUN_038d1270(&local_170,&DAT_04067cc6,local_108);
      uVar11 = FUN_038d2c30(&local_114,&local_170,0xffffffff);
      if ((uVar11 & 1) != 0) {
        FUN_01abaee0(puVar14,local_114);
      }
      uVar18 = local_130;
      ppuVar9 = local_138;
      uVar11 = (ulong)local_130;
      (**(code **)(*local_138 + 0x18))(local_138);
      puVar13 = ppuVar9[1];
      lVar19 = 0;
      do {
        if (puVar13[lVar19] == '\0') goto LAB_01abad7c;
        if (puVar13[lVar19 + 1] == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_01abad7c;
        }
        if (puVar13[lVar19 + 2] == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_01abad7c;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_01abad7c:
      if ((-1 < (int)uVar18) && ((int)uVar18 <= (int)lVar19)) {
        pcVar22 = local_138[1] + uVar11;
        if (*pcVar22 != '\0') {
          do {
            (**(code **)(local_128 + 0x18))();
            cVar7 = *pcVar22;
            uVar15 = 0;
            bVar10 = true;
            do {
              if (local_120[uVar15] == '\0') break;
              if (local_120[uVar15] == cVar7) {
                if (bVar10) goto LAB_01abae4c;
                break;
              }
              if (local_120[uVar15 + 1] == '\0') break;
              if (local_120[uVar15 + 1] == cVar7) goto LAB_01abae4c;
              if (local_120[uVar15 + 2] == '\0') break;
              if (local_120[uVar15 + 2] == cVar7) goto LAB_01abae4c;
              bVar10 = uVar15 < 0x7fffe;
              uVar15 = uVar15 + 3;
            } while (uVar15 != 0x80001);
            uVar11 = uVar11 + 1;
            pcVar22 = local_138[1] + uVar11;
          } while (*pcVar22 != '\0');
LAB_01abae4c:
          uVar18 = (uint)uVar11;
        }
        local_130 = uVar18 + 1;
      }
    } while (local_138 != &local_78);
    puVar13 = PTR_DAT_04bb2028;
    puVar17 = (uint *)PTR_DAT_04bc0320;
    puVar12 = PTR_DAT_04bb2020;
  } while (local_130 != local_19c);
  goto LAB_01aba8b0;
}

