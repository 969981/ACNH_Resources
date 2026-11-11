
long FUN_003e2a08(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_18;
  
  iVar2 = *(int *)(param_1 + 8);
  local_18 = FUN_003cd670();
  lVar3 = FUN_003c0150(&local_18);
  lVar1 = 0x11d40;
  if (lVar3 != 0) {
    lVar1 = lVar3 * 2 + 0x11d70;
  }
  return (((long)param_2 + (long)*(int *)(param_1 + 8) * 0x3640) - 1U & -(long)param_2) +
         (lVar1 * iVar2 + 0xfffU & 0xfffffffffffff000);
}

