
/* WARNING: Removing unreachable block (ram,0x0138b558) */
/* WARNING: Removing unreachable block (ram,0x0138b568) */
/* WARNING: Removing unreachable block (ram,0x0138b574) */

void FUN_0138b510(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined1 local_97;
  undefined *local_90;
  undefined *puStack_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  int local_70;
  int iStack_6c;
  undefined1 local_68;
  
  uVar7 = FUN_0375f6e0();
  if ((uVar7 & 1) != 0) {
    local_d0 = (ulong)local_d0._4_4_ << 0x20;
    lVar16 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    if (lVar16 != 0) {
      lVar8 = *(long *)PTR_DAT_04bb2720;
      if (lVar8 == 0) {
        puVar15 = &DAT_055c04a0;
      }
      else {
        puVar15 = &DAT_055c04a0;
        if (*(long *)(lVar8 + 0x330) != 0) {
          puVar15 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
          iVar6 = FUN_006bd550(*puVar15,0);
          puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar6 != 0x758f7eaf) {
            puVar15 = &DAT_055c04a0;
          }
        }
      }
      iVar6 = *(int *)(puVar15 + 7);
      bVar5 = iVar6 != -0x17df00c3;
      *(int *)(param_1 + 0x90) = iVar6;
      lVar10 = *(long *)PTR_DAT_04bb59d8;
      lVar8 = lVar10 + 0x18;
      if (bVar5) {
        lVar8 = lVar16 + 0x38;
      }
      uVar1 = *(undefined4 *)(lVar8 + 0x10);
      uVar3 = *(undefined4 *)(lVar8 + 0x14);
      uVar2 = *(undefined4 *)(lVar8 + 0x20);
      uVar4 = *(undefined4 *)(lVar8 + 0x24);
      if (bVar5) {
        iVar17 = 0;
        iVar18 = 0;
        iVar19 = 0;
        iVar14 = 0;
      }
      else {
        fVar20 = (float)*(int *)(lVar10 + 0x28) * 0.5;
        uVar11 = 0;
        if (fVar20 != (float)(int)fVar20) {
          uVar11 = (uint)(fVar20 < 0.0);
        }
        fVar21 = (float)*(int *)(lVar10 + 0x2c) * 0.5;
        uVar13 = 0;
        if (fVar21 != (float)(int)fVar21) {
          uVar13 = (uint)(fVar21 < 0.0);
        }
        fVar22 = (float)*(int *)(lVar10 + 0x38) * 0.5;
        uVar9 = 0;
        if (fVar22 != (float)(int)fVar22) {
          uVar9 = (uint)(fVar22 < 0.0);
        }
        fVar23 = (float)*(int *)(lVar10 + 0x3c) * 0.5;
        uVar12 = 0;
        if (fVar23 != (float)(int)fVar23) {
          uVar12 = (uint)(fVar23 < 0.0);
        }
        iVar19 = (int)fVar20 - uVar11;
        if ((int)((int)fVar22 - uVar9) <= (int)((int)fVar20 - uVar11)) {
          iVar19 = (int)fVar22 - uVar9;
        }
        iVar17 = iVar19 + -1;
        iVar19 = iVar19 + 0xe;
        iVar14 = (int)fVar21 - uVar13;
        if ((int)((int)fVar23 - uVar12) <= (int)((int)fVar21 - uVar13)) {
          iVar14 = (int)fVar23 - uVar12;
        }
        iVar18 = iVar14 + -3;
        iVar14 = iVar14 + 0xc;
      }
      local_b8 = PTR_DAT_04bb2010 + 0x10;
      puStack_88 = PTR_DAT_04bb2018 + 0x10;
      local_90 = PTR_DAT_04bbc5d8 + 0x10;
      local_c0 = PTR_DAT_04bbc1a0 + 0x10;
      local_d0 = param_2;
      local_a8 = local_b8;
      local_78 = puStack_88;
      local_c8 = FUN_0375f800();
      local_68 = 1;
      local_b0 = uVar1;
      uStack_ac = uVar3;
      local_a0 = uVar2;
      uStack_9c = uVar4;
      local_98 = bVar5;
      local_97 = iVar6 == -0x17df00c3;
      local_80 = iVar17;
      iStack_7c = iVar18;
      local_70 = iVar19;
      iStack_6c = iVar14;
      FUN_01389860(param_1,&local_d0);
    }
  }
  return;
}

