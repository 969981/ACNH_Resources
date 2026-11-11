
void FUN_00445180(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  long local_a0 [4];
  undefined1 auStack_80 [64];
  
  lVar1 = FUN_00424c90(param_2);
  if (*(int *)(lVar1 + 8) != 0) {
    *(undefined4 *)(lVar1 + 8) = 0;
  }
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  lVar1 = FUN_00445ff0(lVar1,*(undefined8 *)PTR_PTR_04bd4d28);
  if (lVar1 != 0) {
    FUN_004435a0(lVar1);
  }
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[1] = 0;
  local_a0[0] = lVar1;
  FUN_00446070(auStack_80,local_a0);
  if (local_a0[0] != 0) {
    FUN_004435c0();
  }
  FUN_004453e0(param_1,auStack_80,param_3,param_4 & 1);
  FUN_00446180(auStack_80);
  return;
}

