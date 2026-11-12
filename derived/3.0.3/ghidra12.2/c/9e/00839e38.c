
void FUN_00839e38(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 uint param_5,int param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  ulong local_f4;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bc3a80;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x10e0fba8) {
    return;
  }
  if (param_6 == 0) {
    local_108 = 0;
    local_104 = 0x3f800000;
    local_118 = 0x8800000000;
    local_110 = 0;
    puStack_e0 = local_d4;
    local_d8 = 0x80;
    local_55 = 0;
    local_d4[0] = 0;
    local_e8 = PTR_DAT_04bb2d88 + 0x10;
    local_48 = 0;
    local_4c = 0;
    local_fc = 0;
    local_f4 = 0;
    local_50 = 7;
    uVar5 = FUN_0083a084(param_4,param_5,0);
    uVar4 = 0;
    local_110 = CONCAT44(param_2,uVar5);
    local_fc = 0x100000000;
    if (*(int *)(puVar1 + 0x38) == -0x10e0fba8) {
      if ((int)param_5 < (int)*(uint *)(param_4 + 0x2e0)) {
        uVar4 = param_5;
        if (*(uint *)(param_4 + 0x2e0) <= param_5) {
          uVar4 = 0;
        }
        uVar4 = *(uint *)(*(long *)(param_4 + 0x2e8) + (long)(int)uVar4 * 4);
        if (10 < (int)uVar4) {
          uVar4 = 0xb;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    local_f4 = (ulong)uVar4;
    local_108 = param_3;
    uVar5 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_118,*(undefined4 *)(param_4 + 0x230)
                         ,0);
    uVar4 = *(uint *)(param_4 + 0x2a0);
    lVar2 = *(long *)(param_4 + 0x2a8);
    goto LAB_0083a060;
  }
  local_108 = 0;
  local_104 = 0x3f800000;
  local_118 = 0x8800000000;
  local_110 = 0;
  puStack_e0 = local_d4;
  local_d8 = 0x80;
  local_55 = 0;
  local_d4[0] = 0;
  local_e8 = PTR_DAT_04bb2d88 + 0x10;
  local_48 = 0;
  local_4c = 0;
  local_fc = 0;
  local_f4 = 0;
  local_50 = 7;
  uVar5 = FUN_0083a084(param_4,param_5,1);
  local_110 = CONCAT44(param_2,uVar5);
  local_fc = 0x100000001;
  local_108 = param_3;
  if (*(int *)(puVar1 + 0x38) == -0x10e0fba8) {
    if ((int)param_5 < (int)*(uint *)(param_4 + 0x2f0)) {
      uVar4 = param_5;
      if (*(uint *)(param_4 + 0x2f0) <= param_5) {
        uVar4 = 0;
      }
      uVar4 = *(uint *)(*(long *)(param_4 + 0x2f8) + (long)(int)uVar4 * 4);
      if (1 < (int)uVar4) {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 0;
    }
    local_f4 = (ulong)uVar4;
    if (2 < param_5) goto LAB_0083a004;
    lVar2 = FUN_00834d74(0x88);
    puVar3 = (undefined4 *)
             (**(code **)(**(long **)(*(long *)(lVar2 + 0x1930) + (ulong)param_5 * 8) + 0xf0))();
    uVar5 = *puVar3;
  }
  else {
    local_f4 = 0;
LAB_0083a004:
    uVar5 = 0x3f800000;
  }
  local_104 = CONCAT44(local_104._4_4_,uVar5);
  uVar5 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_118,*(undefined4 *)(param_4 + 0x230),0
                      );
  uVar4 = *(uint *)(param_4 + 0x2b0);
  lVar2 = *(long *)(param_4 + 0x2b8);
LAB_0083a060:
  if (uVar4 <= param_5) {
    param_5 = 0;
  }
  *(undefined4 *)(lVar2 + (long)(int)param_5 * 4) = uVar5;
  return;
}

