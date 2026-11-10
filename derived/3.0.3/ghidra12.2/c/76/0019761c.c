
void FUN_0019761c(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (*(long *)(lVar1 + 0x18) == lVar2) {
    *(undefined1 *)(param_1 + 8) = 1;
    *param_2 = 0;
    return;
  }
  cVar3 = *(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
  *(long *)(param_1 + 0x18) = lVar2 + 1;
  *param_2 = cVar3 != '\0';
  return;
}

