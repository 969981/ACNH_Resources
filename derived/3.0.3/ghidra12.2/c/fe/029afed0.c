
/* WARNING: Removing unreachable block (ram,0x029aff24) */
/* WARNING: Removing unreachable block (ram,0x029aff2c) */

undefined8 FUN_029afed0(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_d0;
  undefined1 local_c8;
  int local_c4;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined **local_a8;
  long lStack_a0;
  undefined1 *local_98;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  
  puVar1 = PTR_DAT_04bb2010;
  local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
  local_d0 = PTR_DAT_04bc4608 + 0x10;
  local_c8 = PTR_DAT_04bbc570[8];
  local_c4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
  uStack_b8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
  local_c0 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_ac = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (*(int *)(param_2 + 8) != 0) {
    local_a8 = &PTR_FUN_04a9b150;
    puVar11 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar11 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    lStack_a0 = param_2;
    local_98 = (undefined1 *)&local_d0;
    if (puVar11[1] != 0) {
      local_98 = (undefined1 *)&local_d0;
      plVar7 = (long *)(*(code *)**(undefined8 **)(puVar11[1] + 0x10))();
      iVar5 = (**(code **)(*plVar7 + 0x18))();
      if (0 < iVar5) {
        iVar10 = 0;
        do {
          FUN_01360490(&local_88,puVar11[1],iVar10);
          uVar8 = (*(code *)*local_a8)(&local_a8,&local_88);
          if ((uVar8 & 1) != 0) break;
          bVar4 = iVar5 + -1 != iVar10;
          iVar10 = iVar10 + 1;
        } while (bVar4);
      }
    }
  }
  if (local_c4 != 0) {
    local_80 = puVar1 + 0x10;
    local_78 = 0;
    local_68 = 0;
    local_88 = PTR_DAT_04bbc1a0 + 0x10;
    local_70 = local_80;
    FUN_02a8f7b0(&local_d0,&local_88);
    local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
    fVar15 = *(float *)(param_1 + 0x8c);
    local_88 = (undefined *)0x0;
    iVar5 = (int)local_78;
    iVar10 = local_78._4_4_;
    iVar2 = (int)local_68;
    iVar3 = local_68._4_4_;
    lVar9 = *(long *)PTR_DAT_04bb2720;
    if (lVar9 == 0) {
      puVar11 = &DAT_055c04a0;
    }
    else {
      puVar11 = &DAT_055c04a0;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar11 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar6 = FUN_006bd550(*puVar11,0);
        puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar11 = &DAT_055c04a0;
        }
      }
    }
    uVar8 = FUN_02b61e80(&local_88,*(undefined4 *)(puVar11 + 7));
    if ((uVar8 & 1) != 0) {
      lVar9 = *(long *)PTR_DAT_04bb5ce0;
      if (lVar9 == 0) {
        fVar12 = 0.0;
        fVar13 = 40.0;
        fVar14 = 40.0;
      }
      else {
        fVar13 = *(float *)(lVar9 + 0xd74);
        fVar12 = *(float *)(lVar9 + 0xd78);
        fVar14 = *(float *)(lVar9 + 0xd7c);
      }
      *(undefined1 *)(param_1 + 0x9b) = 1;
      *(float *)(param_1 + 0x88) =
           (((float)iVar5 * 5.0 + (float)iVar2 * 5.0 + 5.0) * 0.5 - (float)local_88) + fVar13;
      *(float *)(param_1 + 0x8c) = (fVar15 - local_88._4_4_) + fVar12;
      *(float *)(param_1 + 0x90) =
           (((float)iVar10 * 5.0 + (float)iVar3 * 5.0 + 5.0) * 0.5 - local_80._0_4_) + fVar14;
      return 1;
    }
  }
  return 0;
}

