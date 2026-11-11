
long FUN_003b69f0(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined1 uStack_21;
  
  if (*(char *)(param_1 + 0x951) == '\0') {
    FUN_003b4ea8(&uStack_21);
    lVar1 = *(long *)(param_1 + 0x898);
    if (lVar1 != param_1 + 0x890) {
      iVar2 = param_2 + 1;
      do {
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) {
          FUN_003b4ec0(&uStack_21);
          return lVar1 + -0x40;
        }
        lVar1 = *(long *)(lVar1 + 8);
      } while (lVar1 != param_1 + 0x890);
    }
    FUN_003b4ec0(&uStack_21);
  }
  return param_1 + (long)param_2 * 0xf8 + 0x5a8;
}

