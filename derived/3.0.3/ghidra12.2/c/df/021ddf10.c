
/* WARNING: Removing unreachable block (ram,0x021de0e8) */
/* WARNING: Removing unreachable block (ram,0x021de0f0) */

bool FUN_021ddf10(uint *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  ushort uVar12;
  long lVar13;
  undefined8 *puVar14;
  byte bVar15;
  uint uVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined1 local_98 [5];
  undefined1 uStack_93;
  undefined1 uStack_91;
  undefined **local_90;
  undefined1 *puStack_88;
  int local_80;
  undefined1 auStack_7c [31];
  undefined1 local_5d;
  undefined4 local_58;
  undefined *local_50;
  undefined4 local_48;
  uint local_24;
  
  uVar4 = *param_1;
  if (uVar4 == 0xffffffff) {
    return false;
  }
  local_24 = 0;
  lVar13 = *(long *)PTR_DAT_04bb4760 + (ulong)uVar4 * 0x15;
  if (0x6c < uVar4) {
    lVar13 = *(long *)PTR_DAT_04bb4760;
  }
  uVar12 = (ushort)*(byte *)(lVar13 + 4) | (*(byte *)(lVar13 + 5) & 3) << 8;
  if (0x1ff < uVar12) {
    uVar12 = uVar12 | 0xfc00;
  }
  bVar7 = DAT_055c1b60 == &DAT_055c1b58;
  plVar17 = DAT_055c1b60 + -8;
  if ((!bVar7) && (puVar14 = DAT_055c1b60, uVar12 != 0)) {
    do {
      puVar14 = (undefined8 *)puVar14[1];
      uVar12 = uVar12 - 1;
      bVar7 = puVar14 == &DAT_055c1b58;
    } while (!bVar7 && uVar12 != 0);
    plVar17 = puVar14 + -8;
  }
  plVar3 = &DAT_055c04a0;
  if (!bVar7) {
    plVar3 = plVar17;
  }
  local_80 = 0x20;
  local_5d = 0;
  local_90 = &PTR_LAB_048fa8f8;
  puStack_88 = auStack_7c;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  puVar18 = (undefined1 *)plVar3[1];
  if (auStack_7c != puVar18) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar13 = 0;
    do {
      if (*(char *)(plVar3[1] + lVar13) == '\0') goto LAB_021de06c;
      lVar9 = plVar3[1] + lVar13;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_021de06c;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_021de06c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_021de06c:
    iVar1 = (int)lVar13;
    if (local_80 <= (int)lVar13) {
      iVar1 = local_80 + -1;
    }
    memcpy(auStack_7c,puVar18,(long)iVar1);
    auStack_7c[iVar1] = 0;
  }
  local_58 = (undefined4)plVar3[7];
  local_90 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
  uVar8 = FUN_02b64e40(&local_24);
  if ((uVar8 & 1) == 0) {
    return false;
  }
  puVar14 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar14 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar14[1] == 0) {
    return false;
  }
  _local_98 = CONCAT44(stack0xffffffffffffff6c,local_24);
  local_50 = PTR_DAT_04bc43f8 + 0x10;
  uVar4 = local_24;
  if (9 < local_24) {
    uVar4 = 0;
  }
  local_48 = (&DAT_05636e30)[(int)uVar4];
  uVar8 = FUN_02a59140(puVar14,&local_50);
  if ((uVar8 & 1) == 0) {
    return false;
  }
  uVar8 = FUN_02917058(*param_1);
  puVar6 = PTR_DAT_04bb32e8;
  if (((uVar8 & 1) == 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x57d4aeba)) {
    return false;
  }
  uVar8 = FUN_02153104(*param_1,*(long *)PTR_DAT_04bb32e8 + 0x4060,1);
  if ((uVar8 & 1) != 0) {
    return true;
  }
  uVar4 = *param_1;
  if (uVar4 < 10) {
    if ((&DAT_053fee41)[(ulong)uVar4 * 0xba0] == '\0') {
      puVar18 = &LAB_01010000;
    }
    else {
      if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
        puVar14 = &DAT_053fe87c + (ulong)uVar4 * 0x174;
      }
      else {
        puVar14 = (undefined8 *)(*(long *)PTR_DAT_04bb3968 + (ulong)uVar4 * 0x28 + 0xe2e);
      }
      puVar18 = (undefined1 *)*puVar14;
    }
    if ((&DAT_053fee41)[(ulong)uVar4 * 0xba0] != '\0') {
      uVar16 = (uint)((ulong)puVar18 >> 0x20) & 0xff;
      bVar5 = (&DAT_053fee2a)[(ulong)uVar4 * 0xba0];
      uVar2 = uVar16 + 0x18;
      if (0x4ffffff < (int)((ulong)puVar18 >> 8)) {
        uVar2 = uVar16;
      }
      if ((uVar2 & 0xff) < (uint)bVar5) {
        return false;
      }
      bVar15 = bVar5 - 0x18;
      if (bVar5 < 0x18) {
        bVar15 = bVar5;
      }
      uVar11 = (&DAT_053fee2b)[(ulong)uVar4 * 0xba0];
      goto LAB_021de29c;
    }
  }
  uVar11 = 0;
  bVar15 = 0;
LAB_021de29c:
  lVar13 = *(long *)puVar6;
  uVar8 = *(ulong *)(lVar13 + 0x4060);
  uStack_91 = (undefined1)(uVar8 >> 0x38);
  _local_98 = (uint7)CONCAT15(uVar11,CONCAT14(bVar15,(int)uVar8));
  if ((uVar8 & 0xffff) != 0) {
    lVar13 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_98);
    local_50 = (undefined *)(lVar13 + -0x708);
    _local_98 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
    lVar13 = *(long *)puVar6;
  }
  lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_98);
  lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar13 + 0x4060));
  if (lVar10 < lVar9) {
    return false;
  }
  lVar13 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar13 + 0x4060));
  return lVar13 != lVar9;
}

