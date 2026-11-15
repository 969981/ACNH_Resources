
/* WARNING: Removing unreachable block (ram,0x024cc6a8) */

void FUN_024cc190(long param_1)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char *pcVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  uint *puVar12;
  byte bVar13;
  byte bVar14;
  ushort uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined8 local_80;
  char *local_78;
  uint *local_70;
  
  pcVar1 = (char *)(param_1 + 0x1900);
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_024cc1c4;
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar11 == 0) || (*(int *)(lVar11 + 0x15c) == 0)) {
LAB_024cc2c0:
    local_80 = (undefined **)
               (CONCAT44(local_80._4_4_,(uint)(**(byte **)PTR_DAT_04bb38d0 >> 2)) &
               0xffffffff0000000f);
    if (((int)local_80 == 6) && (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2)) {
      local_80 = &PTR_FUN_04a73260;
      iVar9 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
      if (iVar9 != 0) {
        lVar11 = (long)iVar9 << 3;
        puVar17 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
        do {
          (*(code *)*local_80)(&local_80,*puVar17);
          lVar11 = lVar11 + -8;
          puVar17 = puVar17 + 1;
        } while (lVar11 != 0);
      }
    }
  }
  else {
    pbVar2 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar2 = (byte *)(lVar11 + 0x158);
    }
    bVar14 = *(byte *)(param_1 + 0x1ee8);
    bVar13 = *pbVar2;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (bVar13 == bVar14) goto LAB_024cc2c0;
  }
  pcVar1[0] = '\0';
  puVar7 = PTR_DAT_04bb43c0;
  pcVar1[1] = '\0';
  if (*(long *)(param_1 + 0x298) == 0) {
LAB_024cc3c8:
    puVar17 = (undefined8 *)PTR_DAT_04bb37e0;
  }
  else {
    lVar11 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    if (*(char *)(lVar11 + 0x1d5) != '\0') {
      lVar18 = *(long *)PTR_DAT_04bb43c0;
      puVar17 = (undefined8 *)(lVar11 + 0xcc);
      uVar8 = FUN_0277d6c4(puVar17);
      if (*(long *)puVar7 != 0) {
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if ((*(uint *)(lVar18 + 0x1d8) <= uVar8) ||
           (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_024cc3b4;
        goto LAB_024cc448;
      }
LAB_024cc3b4:
      iVar9 = FUN_0277d6c4(puVar17);
      if (iVar9 == 0xfffd) goto LAB_024cc3c8;
    }
    puVar17 = (undefined8 *)(lVar11 + 0xd4);
  }
LAB_024cc448:
  local_88 = *(undefined2 *)puVar17;
  local_86 = *(undefined1 *)((long)puVar17 + 2);
  local_85 = *(undefined1 *)((long)puVar17 + 3);
  uVar4 = *(undefined4 *)((long)puVar17 + 4);
  pcVar6 = (char *)*puVar17;
  lVar18 = *(long *)puVar7;
  local_84 = uVar4;
  uVar8 = FUN_0277d6c4(&local_88);
  lVar11 = *(long *)puVar7;
  if (lVar11 == 0) goto LAB_024cc1c4;
  lVar18 = *(long *)(lVar18 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
  if ((*(uint *)(lVar18 + 0x1d8) <= uVar8) ||
     (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_024cc1c4;
  local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_70 = (uint *)0x0;
  local_78 = pcVar6;
  uVar8 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar7 == 0) goto LAB_024cc1c4;
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_024cc1c4;
  lVar11 = *(long *)PTR_DAT_04bc0428;
  uVar8 = FUN_0277d6c4(&local_88);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
     (puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8), puVar12 == (uint *)0x0
     )) goto LAB_024cc1c4;
  uVar15 = 0;
  uVar8 = *puVar12;
  if ((uVar8 != 0) && (puVar12 != (uint *)(ulong)uVar8)) {
    puVar16 = (uint *)((long)puVar12 - (long)(ulong)uVar8);
    uVar15 = 0;
    if (*puVar16 != 0) {
      uVar8 = puVar16[1];
      if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
        lVar11 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar16 + lVar11 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar11 != 0) {
          uVar3 = 0;
          if ((ulong)uVar8 != 0) {
            uVar3 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar8);
          }
          if (*puVar16 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar15 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
             uVar15 < 0xbd)) goto LAB_024cc5e4;
        }
      }
      uVar15 = 0;
    }
  }
LAB_024cc5e4:
  local_70 = puVar12;
  if (uVar15 != 0x2c) goto LAB_024cc1c4;
  uVar15 = 0;
  uVar8 = *puVar12;
  if ((uVar8 != 0) && (puVar12 != (uint *)(ulong)uVar8)) {
    puVar16 = (uint *)((long)puVar12 - (long)(ulong)uVar8);
    if ((*puVar16 == 0) || ((uVar8 = puVar16[1], uVar8 == 0 || ((ulong)(ushort)puVar16[2] == 0)))) {
LAB_024cc684:
      uVar15 = 0;
    }
    else {
      lVar11 = 0xc;
      if (*(char *)((long)puVar16 + 10) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar16 + lVar11 + (ulong)(ushort)puVar16[2] * 8;
      uVar15 = 0;
      if (lVar11 != 0) {
        uVar3 = 0;
        if ((ulong)uVar8 != 0) {
          uVar3 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar8);
        }
        if (*puVar16 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc00c8 <= uVar3) ||
           (uVar15 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
           0xbc < uVar15)) goto LAB_024cc684;
      }
    }
  }
  bVar13 = (byte)uVar4 & 0xf;
  *pcVar1 = '\x01';
  if (uVar15 != 0x2c) {
    bVar13 = 0;
  }
  *(byte *)(param_1 + 0x1901) = bVar13;
LAB_024cc1c4:
  if (*pcVar1 == '\0') {
    puVar17 = *(undefined8 **)(param_1 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    local_80 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_78 = "CommonStickLightUp";
    FUN_017081d0(puVar17,&local_80,6,1,0);
  }
  else {
    uVar5 = *(undefined1 *)(param_1 + 0x1901);
    puVar17 = *(undefined8 **)(param_1 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    uVar10 = FUN_016dc9cc(uVar5);
    FUN_017081d0(puVar17,uVar10,6,1,0);
    uVar4 = *(undefined4 *)(param_1 + 0x230);
    puVar17 = *(undefined8 **)(param_1 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0,uVar4);
        puVar17 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    lVar11 = FUN_017067d4(puVar17,uVar4,0);
    if (lVar11 != 0) {
      uVar10 = FUN_016dc47c(uVar5);
      FUN_01751d60(lVar11,uVar10,6,0,0);
    }
  }
  return;
}

