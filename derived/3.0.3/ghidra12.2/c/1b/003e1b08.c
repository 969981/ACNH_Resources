
ulong FUN_003e1b08(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_28;
  
  iVar2 = *(int *)(param_1 + 0x14);
  local_28 = FUN_003cd670();
  lVar3 = FUN_003c0150(&local_28);
  lVar1 = 0x9b0;
  if (lVar3 != 0) {
    lVar1 = lVar3 * 2 + 0x9e0;
  }
  return (param_2 + lVar1 * iVar2) - 1U & -param_2;
}

