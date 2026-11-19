
bool FUN_03c90b40(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (*(long *)(lVar1 + 0x18) != 0) {
    param_1 = *(long **)(*(long *)(lVar1 + 0x18) + 0xc9);
  }
  return param_1[1] == param_2;
}

