
undefined8 FUN_008287d8(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_b0;
  long *local_a8;
  undefined *local_a0;
  ulong local_98;
  undefined *local_90;
  undefined8 local_88;
  long local_80;
  uint local_78;
  ulong local_74;
  undefined4 local_6c;
  undefined4 local_64;
  
  puVar2 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    local_a8 = malloc(0x138);
  }
  else {
    plVar5 = (long *)*param_2;
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        local_a8 = (long *)0x0;
        goto LAB_00828868;
      }
    }
    local_a8 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x138,8);
  }
LAB_00828868:
  puVar3 = PTR_DAT_04bdf1d0;
  *(undefined2 *)(local_a8 + 1) = 0;
  puVar1 = PTR_DAT_04bd0e50;
  local_a8[6] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  *local_a8 = (long)(puVar3 + 0x10);
  local_a8[2] = 0;
  local_a8[3] = (long)(puVar1 + 0x10);
  nn::os::InitializeMutex((MutexType *)(local_a8 + 7),true,0);
  local_a8[0xd] = 0;
  local_a8[0xe] = 0;
  local_a8[0xb] = (long)(puVar1 + 0x10);
  local_a8[0xc] = 0;
  nn::os::InitializeMutex((MutexType *)(local_a8 + 0xf),true,0);
  local_a8[0x15] = 0;
  local_a8[0x16] = 0;
  puVar1 = PTR_DAT_04bd0e58 + 0x10;
  local_a8[0x13] = (long)puVar1;
  local_a8[0x14] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(local_a8 + 0x17),0,0);
  local_a8[0x1b] = 0;
  local_a8[0x1c] = 0;
  local_a8[0x19] = (long)puVar1;
  local_a8[0x1a] = 0;
  nn::os::InitializeLightEvent(local_a8 + 0x1d,0,0);
  *(undefined4 *)(local_a8 + 0x24) = 0;
  local_a8[0x21] = 0x4800000000;
  local_a8[0x1f] = (long)(local_a8 + 0x1f);
  local_a8[0x20] = (long)(local_a8 + 0x1f);
  local_a8[0x26] = 0;
  *(undefined8 *)((long)local_a8 + 0x124) = 0x48;
  local_a8[0x22] = (long)(local_a8 + 0x22);
  local_a8[0x23] = (long)(local_a8 + 0x22);
  nn::os::ClearLightEvent((LightEventType *)(local_a8 + 0x17));
  local_a0 = PTR_LAB_04bb5050;
  *param_1 = local_a8;
  local_b0 = &PTR_LAB_04917c70;
  local_98 = 0;
  FUN_03f45490(local_a8,(int)param_2[1],*param_2,&local_b0);
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    plVar5 = malloc(0xc0);
  }
  else {
    plVar5 = (long *)*param_2;
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_008289bc;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0xc0,8);
  }
LAB_008289bc:
  lVar8 = *param_2;
  FUN_03f41cf0(plVar5,lVar8);
  *plVar5 = (long)(PTR_DAT_04bdf178 + 0x10);
  FUN_038e19ac(plVar5 + 0x10,lVar8);
  param_1[1] = plVar5;
  puVar3 = PTR_DAT_04bb2120;
  puVar1 = PTR_DAT_04bb2020;
  uVar7 = (ulong)local_b0 >> 0x30;
  local_b0._0_4_ = (uint)local_b0 & 0xffffff00;
  local_a8 = (long *)*param_2;
  local_b0._0_6_ = CONCAT24(2,(uint)local_b0);
  local_a0 = (undefined *)param_2[2];
  local_98 = CONCAT44(local_98._4_4_,0xffffffff);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  local_88 = PTR_DAT_04bb2120;
  local_b0._4_4_ = (undefined4)(CONCAT26((short)uVar7,(undefined6)local_b0) >> 0x20);
  local_b0._0_4_ = CONCAT22(*(undefined2 *)((long)param_2 + 0xc),(undefined2)local_b0);
  local_90 = puVar2;
  FUN_03f41f00(plVar5,&local_b0);
  lVar8 = DAT_04cd1a68;
  puVar4 = PTR_DAT_04bb2630;
  local_74 = 0;
  lVar6 = *param_2;
  plVar5 = *(long **)PTR_DAT_04bb2630;
  if ((plVar5 == (long *)0x0) ||
     (uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,DAT_04cd1a68,&local_78), (uVar7 & 1) == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    local_a8 = *(long **)(lVar8 + 8);
    local_b0 = (undefined **)(puVar1 + 0x10);
    local_90 = (undefined *)0x7fffffff;
    local_98 = (ulong)local_78;
    local_88 = (undefined *)CONCAT44(0x20,local_6c);
    local_a0 = (undefined *)lVar6;
    local_80 = lVar6;
    plVar5 = (long *)FUN_007d3f04(&local_b0);
    local_64 = (undefined4)local_74;
    uVar7 = 1L << (local_74 & 0x3f);
    *(int *)(plVar5 + 0x1a) = (int)uVar7;
    nn::os::GetThreadAvailableCoreMask();
    nn::os::SetThreadCoreMask((ThreadType *)plVar5[0x1d],-1,uVar7);
  }
  local_a8 = (long *)*param_2;
  local_a0 = (undefined *)param_1[1];
  local_b0 = (undefined **)CONCAT62(local_b0._2_6_,1);
  local_98 = CONCAT44(local_98._4_4_,0xffffffff);
  local_88 = puVar3;
  local_b0._4_4_ = 1;
  local_90 = puVar2;
  FUN_03f4388c(plVar5,&local_b0);
  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,1);
  *(undefined4 *)(plVar5 + 0x1a) = 2;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)plVar5[0x1d],-1,2);
  param_1[2] = plVar5;
  (**(code **)(*plVar5 + 0x30))(plVar5);
  lVar8 = *param_2;
  local_74 = 0;
  plVar5 = *(long **)puVar4;
  if (plVar5 != (long *)0x0) {
    lVar6 = DAT_04cd1a68 + (ulong)(1 < DAT_04cd1a60) * 0x10;
    uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,lVar6,&local_78);
    if ((uVar7 & 1) != 0) {
      local_b0 = (undefined **)(puVar1 + 0x10);
      local_a8 = *(long **)(lVar6 + 8);
      local_90 = (undefined *)0x7fffffff;
      local_88 = (undefined *)CONCAT44(0x20,local_6c);
      local_98 = (ulong)local_78;
      local_a0 = (undefined *)lVar8;
      local_80 = lVar8;
      plVar5 = (long *)FUN_007d3f04(&local_b0);
      local_64 = (undefined4)local_74;
      uVar7 = 1L << (local_74 & 0x3f);
      *(int *)(plVar5 + 0x1a) = (int)uVar7;
      nn::os::GetThreadAvailableCoreMask();
      nn::os::SetThreadCoreMask((ThreadType *)plVar5[0x1d],-1,uVar7);
      goto LAB_00828bf8;
    }
  }
  plVar5 = (long *)0x0;
LAB_00828bf8:
  local_90 = puVar1 + 0x10;
  local_a0 = (undefined *)param_1[1];
  local_88 = puVar3;
  local_a8 = (long *)*param_2;
  local_b0 = (undefined **)CONCAT62(local_b0._2_6_,1);
  local_98 = CONCAT44(local_98._4_4_,0xffffffff);
  local_b0._4_4_ = 1;
  FUN_03f4388c(plVar5,&local_b0);
  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,2);
  *(undefined4 *)(plVar5 + 0x1a) = 4;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)plVar5[0x1d],-1,4);
  param_1[3] = plVar5;
  (**(code **)(*plVar5 + 0x30))(plVar5);
  return 1;
}

