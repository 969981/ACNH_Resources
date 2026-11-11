
void FUN_00482a90(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_0485b8e8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  return;
}

