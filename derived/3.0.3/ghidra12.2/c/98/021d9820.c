
/* WARNING: Removing unreachable block (ram,0x021d9874) */
/* WARNING: Removing unreachable block (ram,0x021d9884) */
/* WARNING: Removing unreachable block (ram,0x021d9890) */

undefined8 FUN_021d9820(float *param_1,ulong param_2)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *local_d0;
  undefined4 local_c8;
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
  
  local_c8 = 0x1f;
  local_d0 = PTR_DAT_04bc43f8 + 0x10;
  local_78 = local_78 & 0xffffffff00000000;
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x150) == 0)) {
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
    local_98 = &PTR_FUN_04a9b150;
    local_88 = &local_c0;
    puStack_90 = (undefined1 *)&local_d0;
    plVar4 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x150) + 0x10))();
    iVar3 = (**(code **)(*plVar4 + 0x18))();
    if (0 < iVar3) {
      iVar8 = 0;
      do {
        FUN_01360490(&local_78,*(undefined8 *)(lVar7 + 0x150),iVar8);
        uVar5 = (*(code *)*local_98)(&local_98,&local_78);
        if ((uVar5 & 1) != 0) break;
        bVar2 = iVar3 + -1 != iVar8;
        iVar8 = iVar8 + 1;
      } while (bVar2);
    }
  }
  if (local_b4 == 0) {
LAB_021d9aec:
    uVar6 = 0;
  }
  else {
    if ((param_2 & 1) == 0) {
      uVar5 = FUN_02b684a0(&local_78);
      uVar1 = (undefined2)local_78;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      FUN_02b62bd0(&local_98,uVar1);
      local_70 = 0.0;
      local_78 = 0;
      uVar5 = FUN_02b630b0(&local_78,uVar1);
      if ((uVar5 & 1) == 0) goto LAB_021d9aec;
      fVar10 = (float)NEON_ucvtf(local_98._0_4_);
      fVar9 = sinf(fVar10 * 1.4629181e-09);
      fVar10 = cosf(fVar10 * 1.4629181e-09);
      fVar11 = fVar9 * 0.0;
      *param_1 = (float)local_78 + fVar11 * 0.0 + fVar10 * 0.0 + (fVar9 + 0.0) * 12.5;
      fVar9 = local_70 + (fVar10 * 0.0 * 0.0 - fVar9 * 0.0) + fVar10 * 12.5;
      param_1[1] = local_78._4_4_ + (fVar11 * 0.0 + 1.0) * 0.0 + fVar10 * 0.0 * 0.0 + fVar11 * 12.5;
    }
    else {
      uVar5 = FUN_02a8f1dc(&local_c0,param_1);
      if ((uVar5 & 1) == 0) goto LAB_021d9aec;
      fVar9 = param_1[2] + 7.5;
    }
    param_1[2] = fVar9;
    lVar7 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar7 == 0) || (*(long *)(lVar7 + 0xa8) == 0)) || (*(char *)(lVar7 + 0x11c8) != '\0')) {
      fVar10 = -500.0;
    }
    else {
      fVar10 = (float)FUN_0093a950(lVar7 + 0x28,param_1,0);
    }
    param_1[1] = fVar10;
    uVar6 = 1;
  }
  return uVar6;
}

