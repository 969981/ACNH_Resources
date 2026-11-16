
undefined8 FUN_02640ff0(void)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  uint *puVar12;
  long *plVar13;
  byte *pbVar14;
  byte bVar15;
  uint *puVar16;
  byte bVar17;
  long lVar18;
  undefined *local_40;
  char *pcStack_38;
  byte local_14 [4];
  
  puVar5 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "InPlayerBirthday";
  iVar8 = FUN_02743000(&local_40);
  if (iVar8 != 0) {
    return 0;
  }
  if ((((*(long *)PTR_DAT_04bb2118 != 0) && (*(long *)PTR_DAT_04bb2720 != 0)) &&
      (lVar11 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar11 != 0)) &&
     ((*(int *)(lVar11 + 8) == 4 && (uVar9 = FUN_0375f6e0(), (uVar9 & 1) != 0)))) {
    return 0;
  }
  puVar7 = PTR_DAT_04bb6298;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar12 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar12 >> 0x11 & 1) != 0) &&
        (uVar4 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428,
        uVar4 < DAT_0534f408)) &&
       ((puVar12 = *(uint **)(DAT_0534f410 + (long)(int)uVar4 * 8), puVar12 != (uint *)0x0 &&
        (uVar4 = *puVar12, uVar4 != 0 && puVar12 != (uint *)(ulong)uVar4)))) {
      puVar16 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
      if (((*puVar16 != 0) && (uVar4 = puVar16[1], uVar4 != 0)) && ((ulong)(ushort)puVar16[2] != 0))
      {
        lVar11 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar16 + lVar11 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar11 != 0) {
          uVar1 = 0;
          if ((ulong)uVar4 != 0) {
            uVar1 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar4);
          }
          if (*puVar16 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < *(uint *)PTR_DAT_04bc0e98) &&
             (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar1 * 2) == 1)) {
            return 0;
          }
        }
      }
    }
  }
  local_40 = puVar5 + 0x10;
  pcStack_38 = "JuneBrideCeremonyDemoAfterNow";
  iVar8 = FUN_02743000(&local_40);
  puVar6 = PTR_DAT_04bb27d0;
  if (((iVar8 != 0) && (*(long *)PTR_DAT_04bb5ce0 != 0)) &&
     (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5c) != '\0')) {
    return 0;
  }
  lVar11 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar11 != 0) && (*(long *)(lVar11 + 0x28) != 0)) && (*(int *)(lVar11 + 0x80) == 1)) {
    return 0;
  }
  uVar9 = FUN_0252cf54();
  if ((uVar9 & 1) == 0) goto LAB_026413d4;
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar11 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0264125c;
LAB_026412b4:
    bVar15 = *pbVar14;
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
  }
  else {
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar11 + 0x158);
    }
    if ((*pbVar14 < 8) ||
       (((*(int *)(lVar11 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar14 < 8)))) goto LAB_026412b4;
LAB_0264125c:
    plVar13 = *(long **)puVar6;
    if (plVar13 == (long *)0x0) {
LAB_026412ac:
      pbVar14 = PTR_DAT_04bb5038;
      goto LAB_026412b4;
    }
    lVar18 = *plVar13;
    bVar15 = *(byte *)(lVar18 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar15 != 0xffffffffffffffff) {
      puVar12 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
      if (7 < bVar15) {
        puVar12 = (uint *)(lVar18 + 0x48);
      }
      if ((*puVar12 & 8) != 0) {
        pbVar14 = (byte *)(lVar18 + 0x471);
      }
    }
    bVar15 = *pbVar14;
    if (7 < bVar15) goto LAB_026412ac;
  }
  if (7 < bVar15) {
    bVar15 = 0xff;
  }
  bVar2 = *PTR_DAT_04bb32e0;
  bVar17 = bVar2;
  if (7 < bVar2) {
    bVar17 = 0xff;
  }
  if (bVar15 == bVar17) goto LAB_026413d4;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar11 == 0) {
    if (7 < bVar2) goto LAB_0264133c;
LAB_026413a0:
    local_14[0] = *pbVar14;
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar11 + 0x158);
    }
    if ((*pbVar14 < 8) ||
       (((*(int *)(lVar11 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar14 < 8)))) goto LAB_026413a0;
LAB_0264133c:
    plVar13 = *(long **)puVar6;
    if (plVar13 == (long *)0x0) {
LAB_02641398:
      pbVar14 = PTR_DAT_04bb5038;
      goto LAB_026413a0;
    }
    lVar11 = *plVar13;
    bVar15 = *(byte *)(lVar11 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar15 != 0xffffffffffffffff) {
      puVar12 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
      if (7 < bVar15) {
        puVar12 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar12 & 8) != 0) {
        pbVar14 = (byte *)(lVar11 + 0x471);
      }
    }
    local_14[0] = *pbVar14;
    if (7 < local_14[0]) goto LAB_02641398;
  }
  local_40 = puVar5 + 0x10;
  pcStack_38 = "ValidatePlayerSaveFlag";
  uVar10 = FUN_0274bce0(local_14,&local_40);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
LAB_026413d4:
  sVar3 = *(short *)puVar7;
  if (sVar3 != -1) {
    puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar12 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar12 >> 0x19 & 1) != 0) {
      local_40 = puVar5 + 0x10;
      pcStack_38 = "OtgGetStartingSalary";
      uVar10 = FUN_02758850(&local_40);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
    }
  }
  lVar11 = *(long *)PTR_DAT_04bb27f8;
  if ((((lVar11 != 0) && (*(int *)(lVar11 + 0x18) == 1)) && (6 < *(int *)(lVar11 + 0x14))) &&
     (*(int *)(lVar11 + 0x14) < 9)) {
    return 0;
  }
  if (*(long *)PTR_DAT_04bb2800 != 0) {
    local_40 = puVar5 + 0x10;
    pcStack_38 = "NpcInteriorCoordinate";
    iVar8 = FUN_02743000(&local_40);
    if (iVar8 != 0) {
      return 0;
    }
  }
  return 1;
}

