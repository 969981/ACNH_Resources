
undefined8 FUN_02135208(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *local_20;
  char *pcStack_18;
  
  lVar2 = FUN_021c9770(*(undefined4 *)(param_1 + 0x3c),1);
  if (lVar2 != 0) {
    local_20 = PTR_DAT_04bb2020 + 0x10;
    pcStack_18 = "FallPit";
    iVar1 = FUN_021ca500(lVar2,&local_20);
    if (0 < iVar1) {
      return 0;
    }
  }
  return 1;
}

