
void FUN_0054e5e0(long param_1)

{
  undefined8 local_20;
  int local_18;
  undefined4 uStack_14;
  
  local_18 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (local_18 != 3) {
    local_20 = *(undefined8 *)(param_1 + 0x30);
    uStack_14 = 3;
    *(undefined4 *)(param_1 + 0x40) = 3;
    FUN_0054e510(*(long *)(*(long *)(param_1 + 0x38) + 0x270) + 0x128,*(long *)(param_1 + 0x38),
                 &local_20);
  }
  return;
}

