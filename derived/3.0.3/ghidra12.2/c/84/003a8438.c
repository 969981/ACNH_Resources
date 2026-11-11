
bool FUN_003a8438(long *param_1,undefined2 *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  undefined2 uVar3;
  
  bVar1 = *(long *)(param_2 + 8) != 0 && *(ulong *)(param_2 + 4) <= param_4;
  if (bVar1) {
    param_1[2] = param_3;
    lVar2 = 0;
    if (*(long *)(param_2 + 0xc) != 0 && param_3 != 0) {
      lVar2 = param_3 + *(long *)(param_2 + 0x18);
    }
    *param_1 = lVar2;
    uVar3 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar3;
    *(undefined2 *)((long)param_1 + 10) = uVar3;
  }
  return bVar1;
}

