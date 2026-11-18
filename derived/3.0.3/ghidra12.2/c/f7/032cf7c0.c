
/* WARNING: Removing unreachable block (ram,0x032cf8b0) */
/* WARNING: Removing unreachable block (ram,0x032cf8d0) */

void FUN_032cf7c0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined4 local_d0 [2];
  long local_c8;
  undefined4 local_c0;
  long local_b8;
  long lStack_b0;
  code *local_a8;
  long lStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined2 local_63;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_0034fb74(&local_60);
  local_60 = CONCAT44(local_60._4_4_,0xa2);
  local_63 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_61 = 0;
  local_7b = 0;
  local_79 = 0;
  local_68 = (undefined4)*(undefined8 *)(param_3 + 0x20);
  local_64 = 1;
  local_80 = 1;
  local_7c = 1;
  local_90 = 0;
  uStack_88 = 0;
  lVar2 = FUN_003505f4(*(undefined8 *)(param_1 + 0x68),&local_78);
  lVar3 = FUN_003505f4(*(undefined8 *)(param_1 + 0x68),&local_90);
  lVar2 = lVar2 + *(long *)(param_3 + 0x28) * lVar3;
  lVar3 = FUN_0038cb40(*(undefined8 *)(param_1 + 0x68),0x10,*(undefined8 *)(param_3 + 0x18));
  lVar4 = FUN_003490ac(*(undefined8 *)(param_1 + 0x68),&local_60);
  uVar5 = FUN_003490a4(*(undefined8 *)(param_1 + 0x68),&local_60);
  uVar1 = (lVar2 + lVar3 + lVar4) - 1U & -lVar4;
  if (uVar1 != 0) {
    local_d0[0] = 0;
    lVar4 = uVar1 << 1;
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar5 = 0;
    }
    else {
      local_d0[0] = 0;
      plVar6 = *(long **)(param_1 + 0x20);
      uVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,lVar4,uVar5);
    }
    lVar7 = *(long *)(param_1 + 0x3d8);
    *(undefined8 *)(param_1 + 0x3d8) = uVar5;
    if (lVar7 != 0) {
      plVar6 = (long *)FUN_038cb610(*(undefined8 *)PTR_DAT_04bb2698,lVar7);
      (**(code **)(*plVar6 + 0x38))(plVar6,lVar7);
      uVar5 = *(undefined8 *)(param_1 + 0x3d8);
    }
    local_60 = CONCAT44((int)lVar4,(undefined4)local_60);
    local_58 = uVar5;
    local_50 = lVar4;
    FUN_003490c4(param_1 + 0x2b8,*(undefined8 *)(param_1 + 0x68),&local_60);
  }
  if (lVar3 == 0) {
    lStack_b0 = 0;
    *(undefined8 *)(param_2 + 200) = 0;
  }
  else {
    local_d0[0] = 0x10;
    local_c0 = 2;
    local_b8 = param_1 + 0x2b8;
    lStack_b0 = 0;
    lStack_a0 = param_1 + 0x20;
    local_98 = 0;
    local_a8 = FUN_032dd5f4;
    local_c8 = lVar3;
    FUN_00351f90(param_1 + 0x218,*(undefined8 *)(param_1 + 0x68),local_d0);
    lStack_b0 = lVar3 << 1;
    *(long *)(param_2 + 200) = param_1 + 0x218;
  }
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + 0x268;
    local_d0[0] = 0x10;
    local_c0 = 2;
    local_b8 = param_1 + 0x2b8;
    lStack_a0 = param_1 + 0x20;
    local_98 = 0;
    local_a8 = FUN_032dd5f4;
    local_c8 = lVar2;
    FUN_00351f90(lVar3,*(undefined8 *)(param_1 + 0x68),local_d0);
  }
  *(long *)(param_2 + 0xd0) = lVar3;
  return;
}

