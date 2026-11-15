
undefined8 FUN_01dee39c(long param_1,uint param_2,byte param_3)

{
  uint uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04bb36f0;
  if (*(int *)(param_1 + 8) == 0) {
    if (*(char *)(param_1 + 0x48) != '\0') {
      uVar1 = *(uint *)(param_1 + 0x4c);
      if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= uVar1) {
        uVar1 = 0;
      }
      if (*(char *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) ==
          '\0') {
        return 0;
      }
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
    if (*(int *)(DAT_05358908 + 0x78) != 0) {
      uVar1 = param_2;
      if (*(uint *)(*(long *)puVar2 + 0x20) <= param_2) {
        uVar1 = 0;
      }
      if (*(char *)(*(long *)(*(long *)puVar2 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) != '\0') {
        if ((((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
            (*(int *)(DAT_0537d558 + 0x80) != 1)) &&
           (((*(long *)(DAT_0537d558 + 0x10) == 0 ||
             ((*(uint *)(DAT_0537d558 + 0x80) & 0xfffffffe) != 2)) ||
            (*(int *)(*(long *)(DAT_0537d558 + 0x10) + 0x3e4) == 1)))) {
          *(uint *)(param_1 + 0x4c) = param_2;
          puVar2 = PTR_DAT_04bb32e8;
          *(undefined1 *)(param_1 + 0x48) = 1;
          *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(long *)puVar2 + 0x4060);
          *(byte *)(param_1 + 0xa4) = param_3 & 1;
          FUN_03ebb160(param_1,2);
          return 1;
        }
        *(undefined1 *)(param_1 + 0x50) = 1;
        return 1;
      }
    }
  }
  return 0;
}

