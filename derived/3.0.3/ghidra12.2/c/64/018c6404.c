
undefined8 FUN_018c6404(undefined8 param_1,undefined4 *param_2,long param_3)

{
  long *plVar1;
  uint *puVar2;
  short sVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long local_108;
  undefined **ppuStack_100;
  undefined **local_f8;
  undefined **ppuStack_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined1 local_da;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined **local_90 [4];
  undefined8 local_70;
  undefined4 local_68;
  
  lVar4 = FUN_018c66ac(*(undefined8 *)PTR_DAT_04bb47e0,0xc,*param_2);
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    local_d8 = (undefined *)CONCAT44(local_d8._4_4_,0x1a);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar2 >> 0x1a & 1) != 0) &&
       (local_d8 = (undefined *)CONCAT44(local_d8._4_4_,1), (*puVar2 >> 1 & 1) != 0)) {
      plVar1 = (long *)(lVar4 + 0x1b8);
      local_a0 = PTR_DAT_04bb2018 + 0x10;
      uStack_98 = 0;
      local_b8 = 0;
      local_e4 = 0;
      puStack_d0 = PTR_DAT_04bb2010 + 0x10;
      local_d8 = PTR_DAT_04bbc1a0 + 0x10;
      uStack_a8 = 0;
      local_c8 = 0;
      puStack_c0 = puStack_d0;
      local_b0 = puStack_d0;
      puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x1b8) + 0xf0))(plVar1);
      local_e0 = *puVar5;
      local_f8 = &local_b0;
      local_da = 1;
      ppuStack_100 = &local_a0;
      ppuStack_f0 = &local_d8;
      local_70 = &PTR_LAB_049d07a8;
      local_dc = 0;
      local_90[0] = &PTR_LAB_049d07d0;
      local_108 = param_3;
      uVar6 = FUN_018bbd90(&local_108,&local_e4,&local_70,local_90);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      pfVar7 = (float *)(**(code **)(*plVar1 + 0xf0))(plVar1);
      fVar11 = *pfVar7;
      pfVar7 = (float *)(param_3 + 8);
      fVar8 = *pfVar7;
      fVar10 = *(float *)(param_3 + 0x10);
      fVar9 = (float)FUN_015cb8d4(pfVar7,1);
      local_70 = (undefined **)(((ulong)local_70 >> 8 & 0xffffff) << 8);
      uVar6 = FUN_01a193c0(fVar11 + fVar9,(int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0),
                           (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0),&local_70);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      local_68 = *(undefined4 *)(param_3 + 0x10);
      local_70._0_4_ = (undefined4)*(undefined8 *)pfVar7;
      local_70 = (undefined **)CONCAT44(fVar11 + fVar9,(undefined4)local_70);
    }
  }
  pfVar7 = (float *)(**(code **)(*(long *)(lVar4 + 0x1b8) + 0xf0))(lVar4 + 0x1b8);
  fVar8 = *pfVar7;
  uVar6 = FUN_01a12b00(*(undefined8 *)PTR_DAT_04bb4008,*param_2);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  uVar6 = FUN_01a1c7b0(&local_70,*param_2,0);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  fVar9 = (float)FUN_015cb8d4(&local_70,1);
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 8) = (undefined4)local_70;
  *(float *)(param_3 + 0xc) = fVar8 + fVar9;
  *(undefined4 *)(param_3 + 0x10) = local_68;
  return 1;
}

