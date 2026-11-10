
long FUN_0036b420(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    plVar4 = (long *)(param_1 + 0x40);
    while (lVar2 = *plVar4, lVar2 != param_1 + 0x38) {
      lVar3 = *(long *)(lVar2 + -0x20);
      plVar4 = (long *)(lVar2 + 8);
      iVar1 = strcmp(param_2,*(char **)(lVar3 + 0x10));
      if (iVar1 == 0) {
        return lVar3;
      }
    }
  }
  return 0;
}

