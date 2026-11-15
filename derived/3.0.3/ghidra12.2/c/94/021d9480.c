
/* WARNING: Removing unreachable block (ram,0x021d951c) */
/* WARNING: Removing unreachable block (ram,0x021d952c) */

undefined8 FUN_021d9480(float *param_1,undefined4 *param_2,ulong param_3)

{
  undefined2 uVar1;
  uint *puVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *local_d0;
  int local_c8;
  undefined *local_c0;
  undefined1 local_b8;
  int local_b4;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined **local_98;
  undefined1 *puStack_90;
  undefined **local_88;
  undefined8 local_78;
  float local_70;
  
  local_c8 = 0;
  local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
  local_d0 = PTR_DAT_04bc43f8 + 0x10;
  uVar6 = FUN_02b67a30(&local_c0,*param_2);
  if ((uVar6 & 1) != 0) {
    if (9 < (uint)local_c0) {
      local_c0._0_4_ = 0;
    }
    local_c8 = (&DAT_05636e30)[(int)(uint)local_c0];
  }
  local_78 = CONCAT44(local_78._4_4_,1);
  lVar11 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x150) == 0)) {
    local_c0 = PTR_DAT_04bc4608 + 0x10;
    local_b8 = PTR_DAT_04bbc570[8];
    local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
    uStack_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
    local_b0 = PTR_DAT_04bb2010 + 0x10;
    local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  }
  else {
    local_c0 = PTR_DAT_04bc4608 + 0x10;
    local_b8 = PTR_DAT_04bbc570[8];
    local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
    uStack_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
    local_b0 = PTR_DAT_04bb2010 + 0x10;
    local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    if (local_c8 != 0) {
      local_98 = &PTR_FUN_04a9b150;
      local_88 = &local_c0;
      puStack_90 = (undefined1 *)&local_d0;
      plVar7 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x150) + 0x10))();
      iVar5 = (**(code **)(*plVar7 + 0x18))();
      if (0 < iVar5) {
        iVar10 = 0;
        do {
          FUN_01360490(&local_78,*(undefined8 *)(lVar11 + 0x150),iVar10);
          uVar6 = (*(code *)*local_98)(&local_98,&local_78);
          if ((uVar6 & 1) != 0) break;
          bVar4 = iVar5 + -1 != iVar10;
          iVar10 = iVar10 + 1;
        } while (bVar4);
      }
    }
  }
  if (local_b4 == 0) {
LAB_021d97c4:
    uVar8 = 0;
  }
  else {
    if ((param_3 & 1) == 0) {
      uVar6 = FUN_02b684a0(&local_78);
      uVar1 = (undefined2)local_78;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      FUN_02b62bd0(&local_98,uVar1);
      local_70 = 0.0;
      local_78 = 0;
      uVar6 = FUN_02b630b0(&local_78,uVar1);
      if ((uVar6 & 1) == 0) goto LAB_021d97c4;
      fVar13 = (float)NEON_ucvtf(local_98._0_4_);
      fVar12 = sinf(fVar13 * 1.4629181e-09);
      fVar13 = cosf(fVar13 * 1.4629181e-09);
      fVar14 = fVar12 * 0.0;
      *param_1 = (float)local_78 + fVar14 * 0.0 + fVar13 * 0.0 + (fVar12 + 0.0) * 12.5;
      fVar12 = local_70 + (fVar13 * 0.0 * 0.0 - fVar12 * 0.0) + fVar13 * 12.5;
      param_1[1] = local_78._4_4_ + (fVar14 * 0.0 + 1.0) * 0.0 + fVar13 * 0.0 * 0.0 + fVar14 * 12.5;
    }
    else {
      uVar6 = FUN_02a8f1dc(&local_c0,param_1);
      if ((uVar6 & 1) == 0) goto LAB_021d97c4;
      fVar12 = param_1[2] + 7.5;
    }
    param_1[2] = fVar12;
    if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
       (lVar11 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar11 == 0)) {
      fVar13 = -500.0;
    }
    else {
      local_98 = (undefined **)((ulong)local_98 & 0xffffffffffffff00);
      sVar3 = *(short *)PTR_DAT_04bb6298;
      if (sVar3 == -1) {
        uVar9 = 7;
      }
      else {
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
        if (0xff < (uint)(int)sVar3) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar9 = 7;
        if ((*puVar2 & 2) != 0) {
          uVar9 = 5;
        }
      }
      local_78 = CONCAT44(local_78._4_4_,uVar9);
      fVar13 = (float)FUN_00962700(lVar11,param_1,&local_78,0,&local_98);
    }
    param_1[1] = fVar13;
    uVar8 = 1;
  }
  return uVar8;
}

