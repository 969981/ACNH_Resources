
bool FUN_03c90ae4(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  if (param_1[1] == param_2) {
    return true;
  }
  lVar2 = (**(code **)(*param_1 + 0x18))();
  if (*(long *)(lVar2 + 0x18) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc9) + 8) == param_2;
  }
  return bVar1;
}

