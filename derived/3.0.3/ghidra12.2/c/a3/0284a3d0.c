
ulong FUN_0284a3d0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  short *psVar16;
  short *psVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint local_98;
  undefined *local_80;
  char *local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  
  if ((*(long **)(param_2 + 0xd0) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(param_2 + 0xd0), puVar10 == (undefined8 *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar10)();
  }
  lVar19 = param_2 + 0x194b0;
  if (*(long *)(param_2 + 0x194b8) == 0) {
    lVar19 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  if ((*(long **)(lVar19 + 0x98) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar19 + 0x98), puVar10 == (undefined8 *)0x0)) {
    local_98 = 0;
  }
  else {
    local_98 = (**(code **)*puVar10)();
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "UpgradePocket40";
  local_80 = puVar1;
  iVar8 = FUN_0274b8d0(param_2,&local_80);
  if (iVar8 == 0) {
    local_78 = "UpgradePocket30";
    local_80 = puVar1;
    iVar8 = FUN_0274b8d0(param_2,&local_80);
    uVar9 = (uint)(iVar8 != 0);
  }
  else {
    uVar9 = 2;
  }
  puVar6 = PTR_DAT_04bb43c0;
  puVar5 = PTR_DAT_04bb37e0;
  local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar9);
  uVar15 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  uVar2 = 0x1e;
  if (uVar9 != 1) {
    uVar2 = 0x14;
  }
  uVar3 = 0x28;
  if (uVar9 != 2) {
    uVar3 = uVar2;
  }
  do {
    lVar14 = *(long *)(lVar19 + 0x80) + *(long *)(lVar19 + 0x78);
    uVar9 = *(uint *)(lVar14 + 0x158);
    if (0x13 < uVar9) {
      uVar9 = 0x14;
    }
    if ((uint)uVar15 < uVar9) {
      psVar17 = (short *)(lVar14 + (uVar15 & 0xffffffff) * 8 + 0xb8);
      sVar4 = *psVar17;
LAB_0284a580:
      psVar16 = psVar17;
      if (sVar4 != -2) {
        lVar14 = *(long *)puVar6;
        uVar9 = FUN_0277d6c4(psVar17);
        if (*(long *)puVar6 == 0) goto LAB_0284a5d4;
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        psVar16 = (short *)puVar5;
        if (uVar9 < *(uint *)(lVar14 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0) {
            psVar16 = psVar17;
          }
        }
      }
    }
    else {
      uVar11 = (uint)(uVar15 + -uVar9);
      if ((int)uVar11 < 0) {
LAB_0284a5d4:
        psVar16 = (short *)puVar5;
      }
      else {
        uVar20 = *(uint *)(lVar14 + 0xa0);
        if (0x13 < uVar20) {
          uVar20 = 0x14;
        }
        psVar16 = (short *)puVar5;
        if (uVar11 < uVar20) {
          psVar17 = (short *)(lVar14 + (uVar15 + -uVar9 & 0xffffffff) * 8);
          sVar4 = *psVar17;
          goto LAB_0284a580;
        }
      }
    }
    lVar14 = *(long *)puVar6;
    uVar9 = FUN_0277d6c4(psVar16);
    lVar18 = *(long *)puVar6;
    if (lVar18 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        local_78 = *(char **)psVar16;
        local_70 = 0;
        local_80 = puVar1;
        uVar9 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar6 == 0) {
LAB_0284a734:
          local_68 = 0xbc;
        }
        else {
          lVar14 = *(long *)(lVar18 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((*(uint *)(lVar14 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_0284a734;
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(psVar16);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((*(uint *)(lVar14 + 0x1d8) <= uVar9) ||
             (puVar12 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar12 == (uint *)0x0)) goto LAB_0284a734;
          local_68 = 0;
          uVar9 = *puVar12;
          if ((uVar9 != 0) && (puVar12 != (uint *)(ulong)uVar9)) {
            puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar9);
            local_68 = 0;
            if (*puVar13 != 0) {
              uVar9 = puVar13[1];
              if ((uVar9 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                lVar14 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar14 != 0) {
                  uVar11 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar11 = (uint)((ulong)((long)puVar12 - lVar14) / (ulong)uVar9);
                  }
                  if (*puVar13 <= uVar11) {
                    uVar11 = 0xffffffff;
                  }
                  if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_68 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2),
                     local_68 < 0xbd)) goto LAB_0284a740;
                }
              }
              local_68 = 0;
            }
          }
        }
LAB_0284a740:
        local_64 = 0x92;
        if (local_68 == 0x92) {
          if ((local_98 & 1) == 0) goto LAB_0284a790;
          goto LAB_0284a774;
        }
      }
    }
    uVar15 = uVar15 + 1;
    if (uVar3 == uVar15) {
      uVar15 = (ulong)*(uint *)PTR_DAT_04bb4e20;
      if ((local_98 & 1) != 0) {
LAB_0284a774:
        if ((*(long *)(lVar19 + 0x98) != 0) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar19 + 0x98) + 8), puVar10 != (undefined8 *)0x0))
        {
          (**(code **)*puVar10)();
        }
      }
LAB_0284a790:
      if ((((uVar7 & 1) != 0) && (*(long *)(param_2 + 0xd0) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(param_2 + 0xd0) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
      return uVar15 & 0xffffffff;
    }
  } while( true );
}

