
long FUN_0066b490(long param_1,char *param_2)

{
  char *__s1;
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  plVar2 = *(long **)(param_1 + 0x18);
  lVar3 = (long)*(int *)(param_1 + 0x20) << 3;
  while ((__s1 = (char *)(*(ulong *)(*plVar2 + 0x18) & 0xfffffffffffffffe), __s1 == (char *)0x0 ||
         (iVar1 = strcmp(__s1,param_2), iVar1 != 0))) {
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -8;
    if (lVar3 == 0) {
      return 0;
    }
  }
  return *plVar2;
}

