
undefined8 FUN_0016b684(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
  if (*(undefined1 **)(*(long *)(param_1 + 8) + 0x10) == puVar2) {
    uVar1 = FUN_0016b58c();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    puVar2 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
  }
  *puVar2 = param_2;
  return 0;
}

