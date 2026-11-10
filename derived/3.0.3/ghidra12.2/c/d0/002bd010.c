
int FUN_002bd010(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_002aaa54();
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 8) + -0x30;
  }
  return iVar1;
}

