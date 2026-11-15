
/* WARNING: Removing unreachable block (ram,0x024cf1a8) */

void FUN_024cede8(long param_1)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  char *pcVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined **ppuVar10;
  uint *puVar11;
  ushort uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *local_80;
  char *local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  pcVar1 = (char *)(param_1 + 0x1900);
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_024cee1c;
  pcVar1[0] = '\0';
  puVar7 = PTR_DAT_04bb43c0;
  pcVar1[1] = '\0';
  if (*(long *)(param_1 + 0x298) == 0) {
LAB_024ceed0:
    puVar14 = (undefined8 *)PTR_DAT_04bb37e0;
  }
  else {
    lVar15 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    if (*(char *)(lVar15 + 0x1d5) != '\0') {
      lVar16 = *(long *)PTR_DAT_04bb43c0;
      puVar14 = (undefined8 *)(lVar15 + 0xcc);
      uVar8 = FUN_0277d6c4(puVar14);
      if (*(long *)puVar7 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar8) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_024ceebc;
        goto LAB_024cef44;
      }
LAB_024ceebc:
      iVar9 = FUN_0277d6c4(puVar14);
      if (iVar9 == 0xfffd) goto LAB_024ceed0;
    }
    puVar14 = (undefined8 *)(lVar15 + 0xd4);
  }
LAB_024cef44:
  local_68 = *(undefined2 *)puVar14;
  local_66 = *(undefined1 *)((long)puVar14 + 2);
  local_65 = *(undefined1 *)((long)puVar14 + 3);
  uVar4 = *(undefined4 *)((long)puVar14 + 4);
  pcVar6 = (char *)*puVar14;
  lVar16 = *(long *)puVar7;
  local_64 = uVar4;
  uVar8 = FUN_0277d6c4(&local_68);
  lVar15 = *(long *)puVar7;
  if (lVar15 == 0) goto LAB_024cee1c;
  lVar16 = *(long *)(lVar16 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
  if ((*(uint *)(lVar16 + 0x1d8) <= uVar8) ||
     (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_024cee1c;
  local_80 = PTR_DAT_04bc0510 + 0x10;
  local_70 = 0;
  local_78 = pcVar6;
  uVar8 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar7 == 0) goto LAB_024cee1c;
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
     (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_024cee1c;
  lVar15 = *(long *)PTR_DAT_04bc0428;
  uVar8 = FUN_0277d6c4(&local_68);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
     (puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8), puVar11 == (uint *)0x0
     )) goto LAB_024cee1c;
  uVar12 = 0;
  uVar8 = *puVar11;
  if ((uVar8 != 0) && (puVar11 != (uint *)(ulong)uVar8)) {
    puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar8);
    uVar12 = 0;
    if (*puVar13 != 0) {
      uVar8 = puVar13[1];
      if ((uVar8 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
        lVar15 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar15 != 0) {
          uVar3 = 0;
          if ((ulong)uVar8 != 0) {
            uVar3 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar8);
          }
          if (*puVar13 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
             uVar12 < 0xbd)) goto LAB_024cf0dc;
        }
      }
      uVar12 = 0;
    }
  }
LAB_024cf0dc:
  if (uVar12 != 0x2c) goto LAB_024cee1c;
  uVar12 = 0;
  *pcVar1 = '\x01';
  uVar8 = *puVar11;
  if ((uVar8 != 0) && (puVar11 != (uint *)(ulong)uVar8)) {
    puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar8);
    if ((*puVar13 == 0) || ((uVar8 = puVar13[1], uVar8 == 0 || ((ulong)(ushort)puVar13[2] == 0)))) {
LAB_024cf184:
      uVar12 = 0;
    }
    else {
      lVar15 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
      uVar12 = 0;
      if (lVar15 != 0) {
        uVar3 = 0;
        if ((ulong)uVar8 != 0) {
          uVar3 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar8);
        }
        if (*puVar13 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc00c8 <= uVar3) ||
           (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
           0xbc < uVar12)) goto LAB_024cf184;
      }
    }
  }
  bVar2 = (byte)uVar4 & 0xf;
  if (uVar12 != 0x2c) {
    bVar2 = 0;
  }
  *(byte *)(param_1 + 0x1901) = bVar2;
LAB_024cee1c:
  cVar5 = *pcVar1;
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar14 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar14 = &DAT_05240280;
    }
  }
  if (cVar5 == '\0') {
    ppuVar10 = &local_80;
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "CommonStickLightKeep";
  }
  else {
    ppuVar10 = (undefined **)FUN_016dcd74(*(undefined1 *)(param_1 + 0x1901));
  }
  FUN_017081d0(puVar14,ppuVar10,6,1,0);
  *(undefined8 *)(param_1 + 0x858) = 0;
  *(undefined2 *)(param_1 + 0x864) = 0x100;
  *(undefined4 *)(param_1 + 0x860) = 600;
  return;
}

