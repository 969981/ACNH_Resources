
undefined8 FUN_00166b34(undefined8 *param_1,long param_2)

{
  char *__s;
  size_t sVar1;
  long lVar2;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_00143b8c(param_2,0);
  }
  if (param_1 != (undefined8 *)0x0) {
    FUN_00143a84(param_2,&LAB_00166be8);
    __s = (char *)*param_1;
    while (__s != (char *)0x0) {
      sVar1 = strlen(__s);
      lVar2 = FUN_001432f0(sVar1 + 0x20);
      if (lVar2 == 0) {
        FUN_00143b8c(param_2,0);
        return 3;
      }
      strcpy((char *)(lVar2 + 0x18),(char *)*param_1);
      FUN_00143a90(param_2,*(undefined8 *)(param_2 + 8),lVar2,lVar2);
      __s = (char *)param_1[1];
      param_1 = param_1 + 1;
    }
  }
  return 0;
}

