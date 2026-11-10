
undefined8 FUN_0015b298(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00171b00(param_1,*(undefined4 *)(param_2 + 8));
  if ((((lVar1 != 0) && (*(char *)(param_2 + 0xc) == '\x01')) &&
      (lVar1 = *(long *)(lVar1 + 0x1e8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x21c) != '\0' && (*(long *)(lVar1 + 0x230) == 0)))) {
    lVar2 = FUN_0015e0c4();
    *(long *)(lVar1 + 0x230) = lVar2;
    if (lVar2 == 0) {
      return 0xfffffdf7;
    }
  }
  return 0;
}

