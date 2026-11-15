
undefined8 FUN_022bf390(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  ulong uVar8;
  short sVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  undefined *local_58;
  undefined8 local_50;
  uint local_48;
  int iStack_44;
  undefined *local_40;
  uint local_38;
  int iStack_34;
  
  bVar3 = *(byte *)(param_1 + 0x10);
  bVar5 = 7 < bVar3;
  if (bVar5) {
    bVar3 = 0xff;
  }
  puVar14 = &DAT_0547b368 + ((long)(char)bVar3 & 0xffffffffU) * 2;
  if (bVar5) {
    puVar14 = &DAT_0547b368;
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(puVar14 + 1);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((long)puVar14 + 0xc);
  puVar4 = PTR_DAT_04bb6298;
  uVar8 = FUN_0122a4e0(*(undefined2 *)PTR_DAT_04bb6298);
  if ((uVar8 & 1) == 0) {
    sVar9 = *(short *)puVar4;
    bVar5 = DAT_055c1b60 == &DAT_055c1b58;
    puVar14 = DAT_055c1b60 + -8;
    if ((sVar9 != 0) && (puVar12 = DAT_055c1b60, puVar14 != &DAT_055c1b18)) {
      do {
        puVar12 = (undefined8 *)puVar12[1];
        sVar9 = sVar9 + -1;
        bVar5 = puVar12 == &DAT_055c1b58;
      } while (!bVar5 && sVar9 != 0);
      puVar14 = puVar12 + -8;
    }
    puVar12 = &DAT_055c04a0;
    if (!bVar5) {
      puVar12 = puVar14;
    }
    uVar8 = 0;
    do {
      uVar11 = (uint)uVar8;
      piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar8 * 4);
      if (0x38 < uVar11) {
        piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
      }
      if (*piVar1 == *(int *)(puVar12 + 7)) {
        if (uVar11 == 0x32) {
          uVar2 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xd0);
          local_50._0_4_ = 0x32;
          goto LAB_022bf528;
        }
        break;
      }
      uVar13 = 0x39;
      if ((int)uVar11 < 0x39) {
        uVar13 = uVar11 + 1;
      }
      uVar8 = (ulong)uVar13;
    } while (uVar13 != 0x39);
    uVar2 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
    local_50._0_4_ = 1;
  }
  else {
    local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
    lVar10 = *(long *)PTR_DAT_04bb2720;
    if (lVar10 == 0) {
      puVar14 = &DAT_055c04a0;
    }
    else {
      puVar14 = &DAT_055c04a0;
      if (*(long *)(lVar10 + 0x330) != 0) {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
        iVar7 = FUN_006bd550(*puVar14,0);
        puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar14 = &DAT_055c04a0;
        }
      }
    }
    uVar2 = *(undefined4 *)(puVar14 + 7);
  }
LAB_022bf528:
  local_50 = (undefined *)CONCAT44(uVar2,(undefined4)local_50);
  uVar6 = FUN_017baf44();
  local_48 = CONCAT31(local_48._1_3_,uVar6) & 0xffffff01;
  local_58 = PTR_DAT_04bb6268 + 0x10;
  FUN_011f3520(&local_58,0,param_1 + 0x40);
  if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
    local_58 = PTR_DAT_04bbc5d8 + 0x10;
    local_50 = PTR_DAT_04bb2018 + 0x10;
    fVar15 = (float)*(int *)(param_1 + 0x48) * 0.5;
    fVar16 = (float)*(int *)(param_1 + 0x4c) * 0.5;
    local_48 = 0;
    if (fVar15 != (float)(int)fVar15) {
      local_48 = (uint)(fVar15 < 0.0);
    }
    local_48 = (int)fVar15 - local_48;
    uVar11 = 0;
    if (fVar16 != (float)(int)fVar16) {
      uVar11 = (uint)(fVar16 < 0.0);
    }
    iStack_44 = (int)fVar16 - uVar11;
    local_40 = local_50;
    local_38 = local_48;
    iStack_34 = iStack_44;
    FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_58);
  }
  FUN_011dbc54(param_1 + 0x40,0);
  if (*(byte *)(param_1 + 0x10) < 8) {
    DAT_0547b4b4 = DAT_0547b4b4 | 1 << (ulong)(*(byte *)(param_1 + 0x10) & 0x1f);
  }
  *(undefined8 *)(param_1 + 0x14) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)(param_1 + 0x1c) = 0xfffe;
  FUN_0277d4ac((undefined8 *)(param_1 + 0x1c));
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0x2400000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return 1;
}

