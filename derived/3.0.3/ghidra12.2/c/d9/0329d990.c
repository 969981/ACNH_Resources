
/* WARNING: Removing unreachable block (ram,0x0329dadc) */
/* WARNING: Removing unreachable block (ram,0x0329da24) */
/* WARNING: Removing unreachable block (ram,0x0329dbc0) */

void FUN_0329d990(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *__ptr;
  long lVar7;
  ulong local_130;
  undefined *local_128;
  long local_120;
  undefined *local_118;
  long *local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined *local_e8;
  undefined ***local_e0;
  undefined **local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  long *local_b0;
  undefined *local_88;
  long *local_80;
  undefined1 auStack_58 [8];
  long local_50;
  undefined4 local_44;
  
  param_1[4] = param_3;
  local_118 = (undefined *)0x100000258;
  local_108 = 0;
  local_128 = PTR_DAT_04bc8e68 + 0x10;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = (undefined8 *)0x0;
  local_110 = (long *)((ulong)local_110 & 0xffffffffff000000);
  (**(code **)(*param_1 + 0x60))(auStack_58);
  local_120 = local_50;
  local_130 = (**(code **)(*param_1 + 0x68))(param_1);
  local_44 = 0;
  lVar2 = (**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0xf80,8);
  FUN_032d04c4(lVar2,param_2);
  __ptr = (void *)param_1[3];
  param_1[3] = lVar2;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    lVar2 = param_1[3];
  }
  FUN_032d0880(lVar2,&local_130);
  if (local_f0 != (undefined8 *)0x0) {
    (**(code **)*local_f0)();
  }
  uVar4 = (**(code **)(*param_1 + 0xb0))(param_1);
  if ((uVar4 & 1) != 0) {
    local_130 = local_130 & 0xffffffff00000000;
    plVar3 = (long *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x68,8);
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[0xc] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    puVar1 = PTR_DAT_04bc8ff8 + 0x10;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    *plVar3 = (long)puVar1;
    plVar3[1] = 0;
    local_e8 = PTR_DAT_04bc8e70 + 0x10;
    plVar3[6] = 0;
    plVar3[7] = (long)local_e8;
    *(undefined4 *)(plVar3 + 6) = 0;
    plVar5 = (long *)param_1[6];
    param_1[6] = (long)plVar3;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    puVar1 = PTR_DAT_04bb3350;
    local_110 = (long *)0x0;
    local_b0 = (long *)0x0;
    local_118 = PTR_DAT_04bc9010 + 0x10;
    local_88 = PTR_DAT_04bc8e60 + 0x10;
    local_130 = param_1[3];
    local_128 = (undefined *)(param_1[4] + 0x4d0);
    local_120 = param_1[4] + 0x300;
    local_80 = (long *)0x0;
    local_44 = 0;
    uStack_c8 = 0xb8;
    local_e0 = &local_d8;
    puStack_b8 = PTR_DAT_04bc8fe8 + 0x10;
    local_c0 = 1;
    local_d8 = &PTR_LAB_04b19488;
    lVar2 = *param_2;
    local_d0 = param_1;
    if (lVar2 == 0) {
      FUN_0328ce5c(param_1[6],&local_130);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)(lVar6 + 0xa8);
      *(long *)(lVar6 + 0xa8) = lVar2;
      FUN_0328ce5c(param_1[6],&local_130);
      if (lVar7 != 1) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
        *(long *)(lVar2 + 0xa8) = lVar7;
      }
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 8))();
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 8))();
    }
    if (local_e0 != (undefined ***)0x0) {
      (*(code *)(*local_e0)[1])();
    }
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 8))();
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2);
  return;
}

