
undefined8
FUN_022b9360(long param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined8 param_5,
            undefined4 param_6,byte param_7)

{
  byte *pbVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  byte bVar6;
  short sVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  short local_b0;
  undefined2 local_ae;
  undefined4 local_ac;
  short local_a8;
  undefined2 local_a6;
  undefined4 local_a4;
  undefined *local_a0;
  uint local_98;
  undefined4 local_94;
  byte local_90;
  undefined7 uStack_8f;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *local_70;
  char *pcStack_68;
  byte local_48 [4];
  uint local_44;
  
  puVar8 = PTR_DAT_04bbbf90;
  sVar7 = *(short *)PTR_DAT_04bb6298;
  if (sVar7 == -1) {
LAB_022b9474:
    bVar9 = DAT_055c1b60 == &DAT_055c1b58;
    puVar16 = DAT_055c1b60 + -8;
    if (((param_4 & 0xffff) != 0) && (puVar16 != &DAT_055c1b18)) {
      puVar16 = DAT_055c1b60;
      uVar11 = param_4;
      do {
        puVar16 = (undefined8 *)puVar16[1];
        uVar11 = uVar11 - 1;
        bVar9 = puVar16 == &DAT_055c1b58;
      } while (!bVar9 && (uVar11 & 0xffff) != 0);
      puVar16 = puVar16 + -8;
    }
    puVar3 = &DAT_055c04a0;
    if (!bVar9) {
      puVar3 = puVar16;
    }
    uVar12 = 0;
    do {
      uVar11 = (uint)uVar12;
      piVar4 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar12 * 4);
      if (0x38 < uVar11) {
        piVar4 = (int *)(PTR_DAT_04bbbf90 + 8);
      }
      if (*piVar4 == *(int *)(puVar3 + 7)) goto LAB_022b951c;
      uVar15 = 0x39;
      if ((int)uVar11 < 0x39) {
        uVar15 = uVar11 + 1;
      }
      uVar12 = (ulong)uVar15;
    } while (uVar15 != 0x39);
    uVar11 = 0;
LAB_022b951c:
    local_78 = 0xfffe;
    FUN_0277d4ac(&local_78);
    local_88 = PTR_DAT_04bb2010 + 0x10;
    uStack_80 = 0;
    puVar5 = (undefined4 *)((long)(puVar8 + 8) + (ulong)uVar11 * 4);
    if (0x38 < uVar11) {
      puVar5 = (undefined4 *)(puVar8 + 8);
    }
    local_94 = *puVar5;
    local_98 = uVar11;
  }
  else {
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x11);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
    if (0xff < (uint)(int)sVar7) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x11 & 1) == 0) goto LAB_022b9474;
    local_78 = 0xfffe;
    FUN_0277d4ac(&local_78);
    local_98 = 0;
    local_88 = PTR_DAT_04bb2010 + 0x10;
    uStack_80 = 0;
    lVar14 = *(long *)PTR_DAT_04bb2720;
    if (lVar14 == 0) {
      puVar16 = &DAT_055c04a0;
    }
    else {
      puVar16 = &DAT_055c04a0;
      if (*(long *)(lVar14 + 0x330) != 0) {
        puVar16 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
        iVar10 = FUN_006bd550(*puVar16,0);
        puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar10 != 0x758f7eaf) {
          puVar16 = &DAT_055c04a0;
        }
      }
    }
    local_94 = *(undefined4 *)(puVar16 + 7);
  }
  local_90 = FUN_017baf44();
  local_90 = local_90 & 1;
  local_a0 = PTR_DAT_04bb6268 + 0x10;
  FUN_01a5033c(&local_70,&local_a0,0,param_5,&local_88);
  lVar14 = *(long *)PTR_DAT_04bbbc68;
  if ((((lVar14 == 0) || (*(long *)(lVar14 + 0xb0) == 0)) ||
      (*(long *)(*(long *)(lVar14 + 0xb0) + 8) == 0)) ||
     (((*(long *)(lVar14 + 0x488) == 0 || (*(long *)(*(long *)(lVar14 + 0x488) + 8) == 0)) ||
      ((*(long *)(lVar14 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar14 + 0x2b0) + 8) == 0)))))) {
    return 0;
  }
  uVar11 = FUN_0277d6c4(&local_78);
  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (*(uint *)(lVar14 + 0x1d8) <= uVar11) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8) == 0) {
    return 0;
  }
  FUN_0124c030(&local_a0,&local_78);
  iVar10 = FUN_0123db50(&local_98,CONCAT71(uStack_8f,local_90));
  if (iVar10 != 0x2e) {
    return 0;
  }
  pbVar1 = (byte *)(param_1 + 0x10);
  FUN_01251a38(&local_a8,&local_a0,pbVar1,&local_88);
  if (local_a8 == -2) {
    return 0;
  }
  local_b0 = local_a8;
  local_ae = local_a6;
  local_ac = local_a4;
  lVar14 = FUN_0251b3b0(pbVar1,0);
  if (lVar14 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined4 *)(lVar14 + 4);
  }
  uVar12 = FUN_022b8d90(uVar17,param_1,param_2,param_3,&local_b0,param_4,param_5,param_6,0,
                        param_7 & 1);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
    return 1;
  }
  bVar6 = *pbVar1;
  iVar10 = FUN_0123db50(&local_98,CONCAT71(uStack_8f,local_90));
  if (iVar10 == 0x2e) {
    local_48[0] = bVar6;
    if (7 < bVar6) {
      local_48[0] = 0xff;
    }
    local_44 = FUN_02582fe0(local_48);
    if (local_44 != 0xffffffff) {
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "TodayFortune";
      iVar10 = FUN_0274ce10(&local_44,&local_70);
      if (iVar10 != 2) {
        uVar13 = *(undefined8 *)PTR_DAT_04bb4778;
        if (((byte)local_94 >> (ulong)(local_44 & 0x1f) & 1) != 0) {
          FUN_012292c8(uVar13,pbVar1,&local_88);
          return 1;
        }
        goto LAB_022b977c;
      }
    }
  }
  uVar13 = *(undefined8 *)PTR_DAT_04bb4778;
LAB_022b977c:
  FUN_012291bc(uVar13,pbVar1,&local_88);
  return 1;
}

