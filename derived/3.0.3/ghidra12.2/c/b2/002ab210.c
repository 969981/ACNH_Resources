
void FUN_002ab210(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
    iVar1 = *(int *)(param_1 + 0x24);
    lVar2 = *(long *)(param_1 + 0x18) - (long)iVar1;
    do {
      FUN_002aaa5c(lVar2,0);
      FUN_002aaa6c(lVar2,0);
      lVar2 = *(long *)(lVar2 + *(int *)(param_1 + 0x24) + 8) - (long)*(int *)(param_1 + 0x24);
    } while (lVar2 != (param_1 + 0x10) - (long)iVar1);
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

