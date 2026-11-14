
undefined2 * FUN_016e7980(undefined8 param_1,undefined8 param_2,undefined4 param_3,short *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  short sVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined2 *puVar7;
  short sVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  short sVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined **local_70;
  uint local_68;
  undefined4 local_64;
  byte local_60;
  uint local_54;
  
  puVar4 = PTR_DAT_04bb2720;
  sVar3 = *param_4;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
      iVar6 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  bVar5 = DAT_055c1b60 == &DAT_055c1b58;
  puVar11 = DAT_055c1b60 + -8;
  if (!bVar5) {
    sVar8 = 0;
    puVar14 = DAT_055c1b60;
    puVar15 = puVar11;
    do {
      if (*(int *)(puVar15 + 7) == *(int *)(puVar16 + 7)) {
        if (sVar8 != -1) goto LAB_016e7a84;
        break;
      }
      puVar14 = (undefined8 *)puVar14[1];
      sVar8 = sVar8 + 1;
      puVar15 = puVar14 + -8;
    } while (puVar14 != &DAT_055c1b58);
  }
  sVar8 = 0;
LAB_016e7a84:
  if ((sVar3 != sVar8) || ((char)param_4[1] != '\0')) {
    if (puVar11 != &DAT_055c1b18) {
      sVar12 = *param_4;
      puVar16 = DAT_055c1b60;
      if (sVar12 != 0) {
        do {
          puVar16 = (undefined8 *)puVar16[1];
          sVar12 = sVar12 + -1;
          bVar5 = puVar16 == &DAT_055c1b58;
        } while (!bVar5 && sVar12 != 0);
        puVar11 = puVar16 + -8;
      }
    }
    puVar16 = &DAT_055c04a0;
    if (!bVar5) {
      puVar16 = puVar11;
    }
    uVar10 = 0;
    do {
      piVar1 = &DAT_0516b108 + uVar10;
      local_68 = (uint)uVar10;
      if (0x38 < local_68) {
        piVar1 = &DAT_0516b108;
      }
      if (*piVar1 == *(int *)(puVar16 + 7)) goto LAB_016e7b8c;
      uVar13 = 0x39;
      if ((int)local_68 < 0x39) {
        uVar13 = local_68 + 1;
      }
      uVar10 = (ulong)uVar13;
    } while (uVar13 != 0x39);
    local_68 = 0;
LAB_016e7b8c:
    local_54 = local_68;
    if (local_68 != 0) {
      local_70 = (undefined **)(PTR_DAT_04bbfe68 + 0x10);
      puVar2 = &DAT_0516b108 + local_68;
      if (0x38 < local_68) {
        puVar2 = &DAT_0516b108;
      }
      local_64 = *puVar2;
      goto LAB_016e7bd0;
    }
    if (sVar3 != sVar8) {
      return &DAT_05586008;
    }
  }
  local_68 = 0;
  local_70 = &PTR_LAB_049ffa38;
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
      iVar6 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  local_64 = *(undefined4 *)(puVar16 + 7);
LAB_016e7bd0:
  local_60 = FUN_017baf44();
  local_60 = local_60 & 1;
  puVar7 = (undefined2 *)FUN_01a5190c(&local_70,param_3,param_1,param_2);
  return puVar7;
}

