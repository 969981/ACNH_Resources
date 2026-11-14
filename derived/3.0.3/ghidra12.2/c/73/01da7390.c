
void FUN_01da7390(void)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  short sVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  uint local_80;
  byte local_7c [4];
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  puVar1 = PTR_DAT_04bb27d0;
  iVar4 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) + 0xaa0);
  lVar13 = *(long *)PTR_DAT_04bb4df8;
  *(undefined1 *)(lVar13 + 0x48a8) = 0xff;
  sVar5 = *(short *)PTR_DAT_04bb3170;
  if (*(short *)(lVar13 + 0x4858) != sVar5) {
    *(short *)(lVar13 + 0x4858) = sVar5;
  }
  if (*(short *)(lVar13 + 0x485a) != sVar5) {
    *(short *)(lVar13 + 0x485a) = sVar5;
  }
  if (*(short *)(lVar13 + 0x485c) != sVar5) {
    *(short *)(lVar13 + 0x485c) = sVar5;
  }
  if (*(short *)(lVar13 + 0x485e) != sVar5) {
    *(short *)(lVar13 + 0x485e) = sVar5;
  }
  if (*(short *)(lVar13 + 0x4860) != sVar5) {
    *(short *)(lVar13 + 0x4860) = sVar5;
  }
  *(undefined8 *)(lVar13 + 0x4874) = 0;
  if (iVar4 == 3) {
    FUN_013d8a60(*(undefined8 *)PTR_DAT_04bb4798);
    FUN_013d6300(*(undefined8 *)PTR_DAT_04bb47a0);
    FUN_02971a60(*(undefined8 *)PTR_DAT_04bb47a8);
    FUN_029377c0(*(undefined8 *)PTR_DAT_04bb47b8);
    FUN_0142b16c(*(undefined8 *)PTR_DAT_04bb4208);
    if (*(long *)PTR_DAT_04bb4790 == 0) {
      return;
    }
    FUN_018dc540();
    return;
  }
  FUN_0265e2f0(0);
  FUN_013d8a60(*(undefined8 *)PTR_DAT_04bb4798);
  FUN_013d6300(*(undefined8 *)PTR_DAT_04bb47a0);
  FUN_02971a60(*(undefined8 *)PTR_DAT_04bb47a8);
  FUN_029377c0(*(undefined8 *)PTR_DAT_04bb47b8);
  FUN_0142b16c(*(undefined8 *)PTR_DAT_04bb4208);
  if (*(long *)PTR_DAT_04bb4790 != 0) {
    FUN_018dc540();
  }
  lVar13 = *(long *)PTR_DAT_04bb6c70;
  if ((((*(char *)(lVar13 + 0x13271) != '\0') || (*(char *)(lVar13 + 0x26509) != '\0')) ||
      (*(char *)(lVar13 + 0x397a1) != '\0')) ||
     ((((*(char *)(lVar13 + 0x4ca39) != '\0' || (*(char *)(lVar13 + 0x5fcd1) != '\0')) ||
       ((*(char *)(lVar13 + 0x72f69) != '\0' ||
        ((*(char *)(lVar13 + 0x86201) != '\0' || (*(char *)(lVar13 + 0x99499) != '\0')))))) ||
      (lVar13 = *(long *)PTR_DAT_04bb46b0, lVar13 == 0)))) goto LAB_01da75c0;
  puVar12 = *(undefined8 **)(lVar13 + 0x10);
  if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
    lVar13 = (**(code **)(*(long *)*puVar12 + 0x38))();
    if (lVar13 == 0) goto LAB_01da75c0;
    lVar13 = lVar13 + 0x70;
  }
  else if (((puVar12 == (undefined8 *)0x0) || ((long *)puVar12[0x26] == (long *)0x0)) ||
          (lVar13 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar13 == 0)) goto LAB_01da75c0;
  if ((*(long *)(lVar13 + 0xd0) == 0) ||
     (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0xd0) + 0x10), puVar12 == (undefined8 *)0x0)) {
    local_80 = 0;
  }
  else {
    local_80 = (**(code **)*puVar12)();
  }
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_01da76e0:
    if (*pbVar16 < 8) goto LAB_01da7750;
LAB_01da76ec:
    if (*(long **)puVar1 == (long *)0x0) {
LAB_01da7748:
      pbVar16 = PTR_DAT_04bb5038;
      goto LAB_01da7750;
    }
    lVar14 = **(long **)puVar1;
    bVar6 = *(byte *)(lVar14 + 0x473);
    pbVar16 = PTR_DAT_04bb5038;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar16 = (byte *)(lVar14 + 0x471);
      }
    }
    local_7c[0] = *pbVar16;
    if (7 < local_7c[0]) goto LAB_01da7748;
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01da76e0;
      }
      goto LAB_01da76ec;
    }
LAB_01da7750:
    local_7c[0] = *pbVar16;
    if (7 < local_7c[0]) {
      local_7c[0] = 0xff;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "InducedNpcNum";
  local_78 = puVar1;
  uVar9 = FUN_0274bce0(local_7c,&local_78);
  puVar8 = PTR_DAT_04bc2a20;
  puVar7 = PTR_DAT_04bc27f0;
  if (0 < (int)uVar9) {
    uVar17 = 0;
    pbVar16 = &DAT_05407648;
    do {
      if ((((uVar17 < 3) && (uVar15 = (ulong)*pbVar16, uVar15 < 0x23)) &&
          (pbVar16[1] <= (byte)puVar7[uVar15])) &&
         ((*(uint *)(puVar8 + uVar15 * 4) >> (ulong)(pbVar16[1] & 0x1f) & 1) != 0)) {
        if ((*(long *)(lVar13 + 0xd0) != 0) &&
           (plVar11 = *(long **)(*(long *)(lVar13 + 0xd0) + 0x20), plVar11 != (long *)0x0)) {
          local_78 = *(undefined **)(lVar13 + 0xb0);
          pcStack_70 = *(char **)(lVar13 + 0xb8);
          local_68 = 0x1e3388;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
        }
        lVar14 = *(long *)(lVar13 + 0xb8) + *(long *)(lVar13 + 0xb0);
        uVar10 = FUN_027dc5e8(lVar14);
        lVar14 = lVar14 + 0xbf670;
        lVar3 = lVar14 + (ulong)uVar10 * 0x13230;
        if (3 < uVar10) {
          lVar3 = lVar14;
        }
        FUN_026b1890(lVar3,pbVar16);
        FUN_02690d60(lVar3);
        FUN_026b0ab8(lVar3);
      }
      uVar17 = uVar17 + 1;
      pbVar16 = pbVar16 + 0x13230;
    } while (uVar9 != uVar17);
  }
  memset(&DAT_05407648,0,0x13230);
  FUN_0268abb0(&DAT_05407648);
  memset(&DAT_0541a878,0,0x13230);
  FUN_0268abb0(&DAT_0541a878);
  memset(&DAT_0542daa8,0,0x13230);
  FUN_0268abb0(&DAT_0542daa8);
  pcStack_70 = "InducedNpcNum";
  local_78 = puVar1;
  FUN_0274bfe8(local_7c,&local_78,0);
  uVar17 = (ulong)DAT_05440cd8;
  if (((uVar17 < 0x23) && (DAT_05440cd9 <= (byte)puVar7[uVar17])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(DAT_05440cd9 & 0x1f) & 1) != 0)) {
    if ((*(long *)(lVar13 + 0xd0) != 0) &&
       (plVar11 = *(long **)(*(long *)(lVar13 + 0xd0) + 0x20), plVar11 != (long *)0x0)) {
      local_78 = *(undefined **)(lVar13 + 0xb0);
      pcStack_70 = *(char **)(lVar13 + 0xb8);
      local_68 = 0x1e3388;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
    }
    lVar14 = *(long *)(lVar13 + 0xb8) + *(long *)(lVar13 + 0xb0);
    uVar9 = FUN_027dc5e8(lVar14);
    lVar14 = lVar14 + 0xbf670;
    lVar3 = lVar14 + (ulong)uVar9 * 0x13230;
    if (3 < uVar9) {
      lVar3 = lVar14;
    }
    FUN_026b1890(lVar3,&DAT_05440cd8);
    FUN_02690d60(lVar3);
    FUN_026b0ab8(lVar3);
    memset(&DAT_05440cd8,0,0x13230);
    FUN_0268abb0(&DAT_05440cd8);
  }
  if ((((local_80 & 1) != 0) && (*(long *)(lVar13 + 0xd0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0xd0) + 0x18), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
LAB_01da75c0:
  FUN_021a5c80(&DAT_053fe348,0,0);
  FUN_021c8fb8(&DAT_053fe348);
  return;
}

