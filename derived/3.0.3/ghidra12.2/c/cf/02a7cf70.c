
/* WARNING: Removing unreachable block (ram,0x02a7d06c) */
/* WARNING: Removing unreachable block (ram,0x02a7d074) */

void FUN_02a7cf70(undefined8 *param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  int local_f0 [2];
  undefined **local_e8;
  undefined *puStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  byte local_bc;
  undefined2 uStack_bb;
  undefined8 local_b8;
  undefined **local_b0;
  undefined **ppuStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined1 local_80;
  int local_7c;
  undefined *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined2 local_64;
  undefined *local_60;
  int local_58;
  
  *(undefined4 *)(param_1 + 2) = 0;
  puVar8 = PTR_DAT_04bbc1a0;
  puVar5 = PTR_DAT_04bb2010;
  *param_1 = &PTR_FUN_04a9c918;
  param_1[1] = 0;
  puVar1 = puVar8 + 0x10;
  puVar2 = puVar5 + 0x10;
  puVar3 = PTR_DAT_04bbc5d8 + 0x10;
  param_1[3] = puVar1;
  param_1[4] = puVar2;
  param_1[5] = 0;
  param_1[6] = puVar2;
  param_1[7] = 0;
  param_1[8] = puVar3;
  puVar3 = PTR_DAT_04bb2018 + 0x10;
  param_1[0xd] = puVar1;
  param_1[0xe] = puVar2;
  param_1[0xf] = 0;
  param_1[0x10] = puVar2;
  param_1[0x11] = 0;
  param_1[0x12] = puVar1;
  param_1[0x13] = puVar2;
  param_1[0x14] = 0;
  param_1[9] = puVar3;
  param_1[10] = 0;
  param_1[0xb] = puVar3;
  param_1[0xc] = 0;
  param_1[0x15] = puVar2;
  param_1[0x16] = 0;
  FUN_02ad636c(param_1 + 0x17);
  local_60 = PTR_DAT_04bc43f8;
  *param_1 = &PTR_LAB_04a9c948;
  local_60 = local_60 + 0x10;
  uVar6 = param_2;
  if (9 < param_2) {
    uVar6 = 0;
  }
  local_58 = (&DAT_05636e30)[(int)uVar6];
  local_f0[0] = 1;
  local_88 = PTR_DAT_04bc4608 + 0x10;
  local_7c = *(int *)(PTR_DAT_04bbc570 + 0xc);
  local_80 = PTR_DAT_04bbc570[8];
  uStack_70 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
  local_78 = puVar5 + 0x10;
  local_68 = *(int *)(PTR_DAT_04bbc570 + 0x20);
  local_64 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (local_58 != 0) {
    ppuStack_a8 = &local_60;
    local_b0 = &PTR_FUN_04a9b150;
    local_a0 = &local_88;
    puVar7 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar7 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar7[1] != 0) {
      plVar11 = (long *)(*(code *)**(undefined8 **)(puVar7[1] + 0x10))();
      iVar10 = (**(code **)(*plVar11 + 0x18))();
      if (0 < iVar10) {
        iVar13 = 0;
        do {
          FUN_01360490(local_f0,puVar7[1],iVar13);
          uVar12 = (*(code *)*local_b0)(&local_b0,local_f0);
          if ((uVar12 & 1) != 0) break;
          bVar9 = iVar10 + -1 != iVar13;
          iVar13 = iVar13 + 1;
        } while (bVar9);
      }
    }
  }
  if (local_7c != 0) {
    ppuVar4 = (undefined **)(puVar8 + 0x10);
    puVar5 = puVar5 + 0x10;
    local_a0 = (undefined **)0x0;
    local_90 = 0;
    local_b0 = ppuVar4;
    ppuStack_a8 = (undefined **)puVar5;
    local_98 = puVar5;
    FUN_02a8f7b0(&local_88,&local_b0);
    local_b8 = 0;
    local_bc = 0;
    uStack_bb = 0;
    local_f0[0] = local_7c;
    local_d8 = (undefined4)local_a0;
    uStack_d4 = local_a0._4_4_;
    local_c8 = (undefined4)local_90;
    uStack_c4 = local_90._4_4_;
    local_c0 = (undefined4)(long)((float)local_68 * 90.0 * 11930465.0);
    local_e8 = ppuVar4;
    puStack_e0 = puVar5;
    local_d0 = puVar5;
    local_bc = FUN_02b5e1b0(param_2,0);
    local_bc = local_bc & 1;
    FUN_02a7bc88(param_1,local_f0);
  }
  return;
}

