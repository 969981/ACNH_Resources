
void FUN_00977020(undefined8 param_1,long param_2)

{
  long lVar1;
  
  *(undefined1 *)(param_2 + 8) = 0;
  lVar1 = *(long *)PTR_DAT_04bb27c8;
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0xa8) == 0)) {
    return;
  }
  FUN_00974bc8(*(undefined8 *)(lVar1 + 0xa8),param_1,param_2);
  return;
}

