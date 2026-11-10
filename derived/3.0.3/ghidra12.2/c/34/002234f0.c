
void FUN_002234f0(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_3 & 1) != 0) {
    FUN_00223a40(*(undefined8 *)(param_1 + 0x80));
    return;
  }
  lVar2 = (long)*(int *)(param_1 + 0x14);
  if (*(long *)(param_1 + 8) != param_1) {
    lVar1 = *(long *)(param_1 + 8) - lVar2;
    do {
      if (*(ulong *)(lVar1 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
        FUN_002236bc(param_1,lVar1 + lVar2,lVar2 + param_2);
        return;
      }
      lVar1 = *(long *)(lVar1 + lVar2 + 8) - lVar2;
    } while (lVar1 != param_1 - lVar2);
  }
  FUN_002236bc(param_1,param_1,lVar2 + param_2);
  return;
}

