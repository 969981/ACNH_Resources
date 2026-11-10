
undefined8 FUN_0016b628(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  puVar3 = *(undefined1 **)(lVar2 + 0x20);
  if (*(undefined1 **)(lVar2 + 0x10) == puVar3) {
    uVar1 = FUN_0016b58c();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    lVar2 = *(long *)(param_1 + 8);
    puVar3 = *(undefined1 **)(lVar2 + 0x20);
  }
  *(undefined1 **)(lVar2 + 0x20) = puVar3 + 1;
  *puVar3 = param_2;
  return 0;
}

