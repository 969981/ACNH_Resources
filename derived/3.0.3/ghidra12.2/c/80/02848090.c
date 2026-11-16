
ulong FUN_02848090(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  short *psVar13;
  short *psVar14;
  uint uVar15;
  long lVar16;
  undefined *local_80;
  char *local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  
  if (param_1 == 0) {
    uVar7 = 0;
  }
  else {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "UpgradePocket40";
    local_80 = puVar1;
    iVar6 = FUN_0274b8d0(param_1,&local_80);
    if (iVar6 == 0) {
      local_78 = "UpgradePocket30";
      local_80 = puVar1;
      iVar6 = FUN_0274b8d0(param_1,&local_80);
      uVar7 = (uint)(iVar6 != 0);
    }
    else {
      uVar7 = 2;
    }
  }
  puVar5 = PTR_DAT_04bb43c0;
  puVar4 = PTR_DAT_04bb37e0;
  local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar7);
  uVar11 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  uVar2 = 0x1e;
  if (uVar7 != 1) {
    uVar2 = 0x14;
  }
  uVar3 = 0x28;
  if (uVar7 != 2) {
    uVar3 = uVar2;
  }
  do {
    uVar7 = *(uint *)(param_2 + 0x158);
    if (0x13 < uVar7) {
      uVar7 = 0x14;
    }
    if ((uint)uVar11 < uVar7) {
      psVar14 = (short *)(param_2 + 0xb8 + (uVar11 & 0xffffffff) * 8);
LAB_028481c8:
      psVar13 = psVar14;
      if (*psVar14 != -2) {
        lVar12 = *(long *)puVar5;
        uVar7 = FUN_0277d6c4(psVar14);
        if (*(long *)puVar5 == 0) goto LAB_02848230;
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        psVar13 = (short *)puVar4;
        if (uVar7 < *(uint *)(lVar12 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0) {
            psVar13 = psVar14;
          }
        }
      }
    }
    else {
      uVar8 = (uint)(uVar11 + -uVar7);
      if ((int)uVar8 < 0) {
LAB_02848230:
        psVar13 = (short *)puVar4;
      }
      else {
        uVar15 = *(uint *)(param_2 + 0xa0);
        if (0x13 < uVar15) {
          uVar15 = 0x14;
        }
        psVar13 = (short *)puVar4;
        if (uVar8 < uVar15) {
          psVar14 = (short *)(param_2 + (uVar11 + -uVar7 & 0xffffffff) * 8);
          goto LAB_028481c8;
        }
      }
    }
    lVar16 = *(long *)puVar5;
    uVar7 = FUN_0277d6c4(psVar13);
    lVar12 = *(long *)puVar5;
    if (lVar12 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_70 = 0;
        local_78 = *(char **)psVar13;
        local_80 = puVar1;
        uVar7 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar5 == 0) {
LAB_02848398:
          local_68 = 0xbc;
        }
        else {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_02848398;
          lVar12 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(psVar13);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
             (puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar9 == (uint *)0x0)) goto LAB_02848398;
          local_68 = 0;
          uVar7 = *puVar9;
          if ((uVar7 != 0) && (puVar9 != (uint *)(ulong)uVar7)) {
            puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar7);
            local_68 = 0;
            if (*puVar10 != 0) {
              uVar7 = puVar10[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar10 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
                if (lVar12 != 0) {
                  uVar8 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar8 = (uint)((ulong)((long)puVar9 - lVar12) / (ulong)uVar7);
                  }
                  if (*puVar10 <= uVar8) {
                    uVar8 = 0xffffffff;
                  }
                  if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_68 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2),
                     local_68 < 0xbd)) goto LAB_028483a4;
                }
              }
              local_68 = 0;
            }
          }
        }
LAB_028483a4:
        local_64 = 0x8f;
        if (local_68 == 0x8f) goto LAB_028483c8;
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar3 != uVar11);
  uVar11 = (ulong)*(uint *)PTR_DAT_04bb4e20;
LAB_028483c8:
  return uVar11 & 0xffffffff;
}

