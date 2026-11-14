
void FUN_01cb0000(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 uStack_21;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *(uint *)(param_1 + 0x26);
  if (uVar1 != 0xffffffff) {
    if (uVar1 == 0) {
      FUN_003fe964(param_2,param_3);
      return;
    }
    (*(code *)(&PTR_LAB_04a45520)[uVar1])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  FUN_01cb0230(param_1,param_3);
  *(undefined4 *)(param_1 + 0x26) = 0;
  *param_1 = &PTR_FUN_04a428f8;
  return;
}

