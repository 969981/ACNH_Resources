
void FUN_022f3db0(long param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ushort uVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ushort uVar14;
  uint uVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined *local_48;
  undefined8 local_40;
  uint local_38;
  int iStack_34;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  
  puVar5 = PTR_DAT_04bb6298;
  uVar9 = *(ushort *)PTR_DAT_04bb6298;
  if ((long)(short)uVar9 == 0xffffffffffffffff) {
LAB_022f3ebc:
    uVar4 = *(ushort *)(param_1 + 0x3a);
    bVar6 = DAT_055c1b60 == &DAT_055c1b58;
    puVar16 = DAT_055c1b60 + -8;
    if (uVar4 != 0) {
      puVar12 = DAT_055c1b60;
      uVar14 = uVar4;
      if (puVar16 != &DAT_055c1b18) {
        do {
          puVar12 = (undefined8 *)puVar12[1];
          uVar14 = uVar14 - 1;
          bVar6 = puVar12 == &DAT_055c1b58;
        } while (!bVar6 && uVar14 != 0);
        puVar16 = puVar12 + -8;
      }
    }
    puVar12 = &DAT_055c04a0;
    if (!bVar6) {
      puVar12 = puVar16;
    }
    uVar13 = 0;
    do {
      uVar11 = (uint)uVar13;
      piVar2 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar13 * 4);
      if (0x38 < uVar11) {
        piVar2 = (int *)(PTR_DAT_04bbbf90 + 8);
      }
      if (*piVar2 == *(int *)(puVar12 + 7)) goto LAB_022f3f6c;
      uVar15 = 0x39;
      if ((int)uVar11 < 0x39) {
        uVar15 = uVar11 + 1;
      }
      uVar13 = (ulong)uVar15;
    } while (uVar15 != 0x39);
    uVar11 = 0;
LAB_022f3f6c:
    local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar11);
    if (uVar11 != 0) {
      puVar3 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)uVar11 * 4);
      if (0x38 < uVar11) {
        puVar3 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
      }
      local_40 = (undefined *)CONCAT44(*puVar3,uVar11);
      uVar7 = FUN_017baf44();
      local_38 = CONCAT31(local_38._1_3_,uVar7) & 0xffffff01;
      local_48 = PTR_DAT_04bb6268 + 0x10;
      FUN_011f3520(&local_48,0,param_1 + 0x18);
      uVar4 = *(ushort *)(param_1 + 0x3a);
      uVar9 = *(ushort *)puVar5;
    }
    if (uVar4 != uVar9) {
      return;
    }
    if ((int)local_60 == 0) {
      local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
      lVar10 = *(long *)PTR_DAT_04bb2720;
      if (lVar10 == 0) {
        puVar16 = &DAT_055c04a0;
      }
      else {
        puVar16 = &DAT_055c04a0;
        if (*(long *)(lVar10 + 0x330) != 0) {
          puVar16 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
          iVar8 = FUN_006bd550(*puVar16,0);
          puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar8 != 0x758f7eaf) {
            puVar16 = &DAT_055c04a0;
          }
        }
      }
      local_40 = (undefined *)CONCAT44(*(undefined4 *)(puVar16 + 7),(undefined4)local_40);
      uVar7 = FUN_017baf44();
      local_38 = CONCAT31(local_38._1_3_,uVar7) & 0xffffff01;
      local_48 = PTR_DAT_04bb6268 + 0x10;
      FUN_011f3520(&local_48,0,param_1 + 0x18);
    }
  }
  else {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,0x11);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar9 * 8);
    if (0xff < uVar9) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x11 & 1) == 0) {
      local_48 = (undefined *)CONCAT44(local_48._4_4_,0xe);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar9 & 0xffffffffU) * 8);
      if (0xff < uVar9) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0xe & 1) == 0) goto LAB_022f3ebc;
    }
    local_58 = 0;
    lVar10 = *(long *)PTR_DAT_04bb2720;
    if (lVar10 == 0) {
      puVar16 = &DAT_055c04a0;
    }
    else {
      puVar16 = &DAT_055c04a0;
      if (*(long *)(lVar10 + 0x330) != 0) {
        puVar16 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
        iVar8 = FUN_006bd550(*puVar16,0);
        puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar16 = &DAT_055c04a0;
        }
      }
    }
    local_54 = *(undefined4 *)(puVar16 + 7);
    local_50 = FUN_017baf44();
    local_50 = local_50 & 1;
    local_60 = PTR_DAT_04bb6268 + 0x10;
    FUN_011f3520(&local_60,0,param_1 + 0x18);
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
    local_48 = PTR_DAT_04bbc5d8 + 0x10;
    local_40 = PTR_DAT_04bb2018 + 0x10;
    fVar17 = (float)*(int *)(param_1 + 0x20) * 0.5;
    fVar18 = (float)*(int *)(param_1 + 0x24) * 0.5;
    local_38 = 0;
    if (fVar17 != (float)(int)fVar17) {
      local_38 = (uint)(fVar17 < 0.0);
    }
    local_38 = (int)fVar17 - local_38;
    uVar11 = 0;
    if (fVar18 != (float)(int)fVar18) {
      uVar11 = (uint)(fVar18 < 0.0);
    }
    iStack_34 = (int)fVar18 - uVar11;
    local_30 = local_40;
    local_28 = local_38;
    iStack_24 = iStack_34;
    FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_48);
  }
  FUN_011dbc54(param_1 + 0x18,0);
  return;
}

