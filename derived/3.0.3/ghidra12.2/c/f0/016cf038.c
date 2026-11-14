
undefined8 FUN_016cf038(undefined8 param_1,char *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((*(int *)(param_2 + 4) == -1) || (DAT_05574040 == 0)) {
    return 0;
  }
  puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = lVar2 + 0x70;
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar4[0x26] == (long *)0x0) {
      return 0;
    }
    lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
    if (lVar2 == 0) {
      return 0;
    }
  }
  puVar1 = &LAB_002057b0 + lVar2;
  if (*param_2 != '\0') {
    puVar1 = (undefined1 *)(lVar2 + 0x20b9e8);
  }
  uVar3 = FUN_016d4af0(param_1,param_2,puVar1 + (long)*(int *)(param_2 + 4) * 0xc40);
  return uVar3;
}

