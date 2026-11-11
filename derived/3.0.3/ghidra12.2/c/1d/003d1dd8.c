
void FUN_003d1dd8(long *param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 auStack_48 [24];
  undefined4 local_14;
  
  local_64 = 0;
  local_50 = 0;
  local_4c = 0;
  local_60 = 0xffffffffffffffff;
  local_58 = 0xffffffffffffffff;
  uVar1 = FUN_003b8544(param_1[1],&local_64,param_2);
  if ((uVar1 & 1) != 0) {
    if ((int)local_60 != -1) {
      local_14 = 0xffffffff;
      uVar1 = FUN_003b87e4(param_1[1],&local_14);
      if (((uVar1 & 1) != 0) &&
         (lVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_14), lVar2 != 0)) {
        FUN_003c91bc(auStack_48,lVar2);
        piVar3 = (int *)FUN_003c94ac(auStack_48);
        if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
          FUN_003d20a0(param_1,piVar3[1],param_3);
        }
      }
    }
    if (local_60._4_4_ != -1) {
      local_14 = 0xffffffff;
      uVar1 = FUN_003b87e4(param_1[1],&local_14);
      if (((uVar1 & 1) != 0) &&
         (lVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_14), lVar2 != 0)) {
        FUN_003c91bc(auStack_48,lVar2);
        piVar3 = (int *)FUN_003c94ac(auStack_48);
        if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
          FUN_003d20a0(param_1,piVar3[1],param_3);
        }
      }
    }
    if ((int)local_58 != -1) {
      local_14 = 0xffffffff;
      uVar1 = FUN_003b87e4(param_1[1],&local_14);
      if (((uVar1 & 1) != 0) &&
         (lVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_14), lVar2 != 0)) {
        FUN_003c91bc(auStack_48,lVar2);
        piVar3 = (int *)FUN_003c94ac(auStack_48);
        if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
          FUN_003d20a0(param_1,piVar3[1],param_3);
        }
      }
    }
    if (local_58._4_4_ != -1) {
      local_14 = 0xffffffff;
      uVar1 = FUN_003b87e4(param_1[1],&local_14);
      if (((uVar1 & 1) != 0) &&
         (lVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_14), lVar2 != 0)) {
        FUN_003c91bc(auStack_48,lVar2);
        piVar3 = (int *)FUN_003c94ac(auStack_48);
        if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
          FUN_003d20a0(param_1,piVar3[1],param_3);
        }
      }
    }
  }
  return;
}

