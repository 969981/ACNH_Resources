
undefined8 FUN_0041ee70(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_2 + 0x14) != 1) && (*(long *)(param_1 + 0x10) != 0)) {
    puVar1 = (undefined *)0x0;
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
      puVar1 = PTR_LAB_04bd2c90;
    }
    if (puVar1 != (undefined *)0x0) {
      FUN_0041e170(param_1);
      uVar2 = FUN_0041ef10(*(undefined8 *)(param_1 + 0x28),param_2,param_1 + 8,param_3,0,
                           param_1 + 0x18,*(undefined4 *)(param_1 + 0x30));
      return uVar2;
    }
  }
  return 0;
}

