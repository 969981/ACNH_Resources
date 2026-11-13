
undefined8 FUN_0149cfe0(long param_1)

{
  void *__s;
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined4 auStack_c0098 [2];
  long alStack_c0090 [2];
  undefined2 auStack_c0080 [4];
  long alStack_c0078 [2];
  undefined2 auStack_c0068 [4];
  long alStack_c0060 [2];
  undefined2 auStack_c0050 [4];
  long alStack_c0048 [2];
  undefined2 auStack_c0038 [4];
  long alStack_c0030 [2];
  undefined2 auStack_c0020 [4];
  long alStack_c0018 [2];
  undefined2 auStack_c0008 [4];
  long alStack_c0000 [2];
  undefined2 auStack_bfff0 [4];
  long alStack_bffe8 [98282];
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  byte local_88;
  undefined *local_80;
  uint local_78;
  uint local_74;
  byte local_70;
  
  __s = (void *)(param_1 + 8);
  memset(__s,0,0x2400);
  puVar6 = PTR_DAT_04bb2720;
  local_90 = 0;
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar18 = &DAT_055c04a0;
  }
  else {
    puVar18 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar18 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar8 = FUN_006bd550(*puVar18,0);
      puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar18 = &DAT_055c04a0;
      }
    }
  }
  local_8c = *(undefined4 *)(puVar18 + 7);
  local_88 = FUN_017baf44();
  puVar7 = PTR_DAT_04bb3140;
  local_88 = local_88 & 1;
  local_98 = PTR_DAT_04bb3140 + 0x10;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    auStack_c0098[0] = 7;
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 7 & 1) != 0) {
      uVar9 = FUN_014ffb14(&local_98);
      puVar5 = PTR_DAT_04bb2010;
      if ((uVar9 & 1) != 0) {
        lVar12 = 0;
        lVar11 = 0;
        puVar1 = PTR_DAT_04bb2010 + 0x10;
        do {
          lVar17 = 0x40;
          lVar16 = lVar12;
          do {
            lVar17 = lVar17 + -1;
            *(undefined2 *)((long)auStack_c0098 + lVar16) = 0;
            *(undefined **)((long)alStack_c0090 + lVar16) = puVar1;
            *(undefined8 *)((long)alStack_c0090 + lVar16 + 8) = 0;
            *(undefined2 *)((long)auStack_c0080 + lVar16) = 0;
            *(undefined2 *)((long)auStack_c0068 + lVar16) = 0;
            *(undefined2 *)((long)auStack_c0050 + lVar16) = 0;
            *(undefined2 *)((long)auStack_c0038 + lVar16) = 0;
            *(undefined2 *)((long)auStack_c0020 + lVar16) = 0;
            *(undefined2 *)((long)auStack_c0008 + lVar16) = 0;
            *(undefined2 *)((long)auStack_bfff0 + lVar16) = 0;
            *(undefined **)((long)alStack_c0078 + lVar16) = puVar1;
            *(undefined8 *)((long)alStack_c0078 + lVar16 + 8) = 0;
            *(undefined **)((long)alStack_c0060 + lVar16) = puVar1;
            *(undefined8 *)((long)alStack_c0060 + lVar16 + 8) = 0;
            *(undefined **)((long)alStack_c0048 + lVar16) = puVar1;
            *(undefined8 *)((long)alStack_c0048 + lVar16 + 8) = 0;
            *(undefined **)((long)alStack_c0030 + lVar16) = puVar1;
            *(undefined8 *)((long)alStack_c0030 + lVar16 + 8) = 0;
            *(undefined **)((long)alStack_c0018 + lVar16) = puVar1;
            *(undefined8 *)((long)alStack_c0018 + lVar16 + 8) = 0;
            *(undefined **)((long)alStack_c0000 + lVar16) = puVar1;
            *(undefined8 *)((long)alStack_c0000 + lVar16 + 8) = 0;
            *(undefined **)((long)alStack_bffe8 + lVar16) = puVar1;
            *(undefined8 *)((long)alStack_bffe8 + lVar16 + 8) = 0;
            lVar16 = lVar16 + 0xc0;
          } while (lVar17 != 0);
          lVar11 = lVar11 + 1;
          lVar12 = lVar12 + 0x3000;
        } while (lVar11 != 0x40);
        lVar11 = *(long *)puVar6;
        local_78 = 0;
        if (lVar11 == 0) {
          puVar18 = &DAT_055c04a0;
        }
        else {
          puVar18 = &DAT_055c04a0;
          if (*(long *)(lVar11 + 0x330) != 0) {
            puVar18 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
            iVar8 = FUN_006bd550(*puVar18,0);
            puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar8 != 0x758f7eaf) {
              puVar18 = &DAT_055c04a0;
            }
          }
        }
        local_74 = *(uint *)(puVar18 + 7);
        local_70 = FUN_017baf44();
        local_70 = local_70 & 1;
        local_80 = puVar7 + 0x10;
        FUN_01499d00(auStack_c0098,0,&local_80);
        lVar11 = *(long *)PTR_DAT_04bb5ce0;
        if (lVar11 == 0) {
          uVar13 = 0;
          uVar10 = 0;
          uVar14 = 0x10;
          uVar15 = 0x10;
        }
        else {
          uVar13 = *(uint *)(lVar11 + 0xd88);
          uVar10 = *(uint *)(lVar11 + 0xd8c);
          uVar15 = *(uint *)(lVar11 + 0xd98);
          uVar14 = *(uint *)(lVar11 + 0xd9c);
        }
        uVar2 = uVar13;
        if ((int)uVar15 <= (int)uVar13) {
          uVar2 = uVar15;
        }
        if ((int)uVar13 <= (int)uVar15) {
          uVar13 = uVar15;
        }
        uVar15 = uVar10;
        if ((int)uVar14 <= (int)uVar10) {
          uVar15 = uVar14;
        }
        if ((int)uVar10 <= (int)uVar14) {
          uVar10 = uVar14;
        }
        if (uVar10 + 1 != uVar15) {
          uVar14 = uVar2;
          do {
            local_80 = puVar5 + 0x10;
            local_78 = uVar14;
            local_74 = uVar15;
            uVar9 = FUN_0149cd20(auStack_c0098,&local_80);
            if ((((uVar9 & 1) != 0) && (uVar14 < 0x120)) && (uVar15 < 0x100)) {
              lVar11 = (ulong)(uVar14 + uVar15 * 0x120 >> 5) * 4;
              *(uint *)((long)__s + lVar11) =
                   *(uint *)((long)__s + lVar11) | 1 << (ulong)(uVar14 & 0x1f);
            }
            if ((int)uVar14 < (int)uVar13) {
              uVar14 = uVar14 + 1;
            }
            else {
              uVar15 = uVar15 + 1;
              uVar14 = uVar2;
            }
          } while ((uVar2 != uVar14) || (uVar10 + 1 != uVar15));
        }
        return 1;
      }
    }
  }
  return 0;
}

