
undefined8 FUN_0272f394(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_026eb860(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x18),param_1 + 0x20,param_1 + 0x30,0);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar1;
  }
  return 1;
}

