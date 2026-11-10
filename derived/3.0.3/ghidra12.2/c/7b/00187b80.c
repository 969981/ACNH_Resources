
void FUN_00187b80(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_04838a90;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  return;
}

