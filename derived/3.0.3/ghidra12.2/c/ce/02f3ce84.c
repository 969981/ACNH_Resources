
bool FUN_02f3ce84(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_1[0x42] + 0xa0);
  if (lVar1 == lVar2) {
    (**(code **)(*param_1 + 0xb0))();
  }
  return lVar1 == lVar2;
}

