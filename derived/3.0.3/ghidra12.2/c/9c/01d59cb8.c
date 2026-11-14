
undefined8 FUN_01d59cb8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xab2) == '\0') {
    if (*(long *)(param_1 + 0x958) != -1) {
      FUN_01d53428(param_1,param_1 + 0x272);
      goto LAB_01d59d28;
    }
    if ((*(uint *)(param_1 + 0x250) & 0xff) != 0x29) goto LAB_01d59d28;
    uVar2 = 1;
    puVar1 = PTR_DAT_04bb50d0;
  }
  else {
    uVar2 = 0;
    puVar1 = PTR_DAT_04bb50b0;
  }
  FUN_01d52c00(param_1,puVar1,uVar2);
LAB_01d59d28:
  if (*(int *)(param_1 + 0x244) == 1) {
    return 1;
  }
  if (*(char *)(param_1 + 0xab2) == '\0') {
    if (299 < *(ushort *)(param_1 + 0x3de)) {
      return 2;
    }
  }
  else if ((*(long *)(param_1 + 0x958) != -1) && (*(int *)(DAT_05382a08 + 0x14) < 1)) {
    return 2;
  }
  return 0;
}

