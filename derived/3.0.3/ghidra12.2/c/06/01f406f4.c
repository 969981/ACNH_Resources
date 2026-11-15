
bool FUN_01f406f4(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x3a0))();
  return *(int *)(lVar1 + 0x164) <= *(int *)(lVar1 + 0x15c);
}

