
long FUN_002870b0(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0xe0) != param_1 + 0xd8) {
    lVar3 = (long)*(int *)(param_1 + 0xec);
    lVar4 = -lVar3;
    lVar6 = *(long *)(param_1 + 0xe0) - lVar3;
    lVar5 = (param_1 + 0xd8) - lVar3;
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar2 = 0;
        do {
          if ((param_2 <= *(ulong *)(lVar6 + 0x18)) &&
             ((lVar2 == 0 || (*(ulong *)(lVar6 + 0x18) < *(ulong *)(lVar2 + 0x18))))) {
            lVar2 = lVar6;
          }
          lVar6 = *(long *)(lVar6 + lVar3 + 8) + lVar4;
        } while (lVar6 != lVar5);
      }
      else if (param_3 == 2) {
        lVar2 = 0;
        do {
          if ((param_2 <= *(ulong *)(lVar6 + 0x18)) &&
             ((lVar2 == 0 || (*(ulong *)(lVar2 + 0x18) < *(ulong *)(lVar6 + 0x18))))) {
            lVar2 = lVar6;
          }
          lVar6 = *(long *)(lVar6 + lVar3 + 8) + lVar4;
        } while (lVar6 != lVar5);
      }
      else {
        lVar2 = 0;
        do {
          lVar1 = lVar6;
          if (lVar2 != 0) {
            lVar1 = lVar2;
          }
          if (param_2 <= *(ulong *)(lVar6 + 0x18)) {
            lVar2 = lVar1;
          }
          lVar6 = *(long *)(lVar6 + lVar3 + 8) + lVar4;
        } while (lVar6 != lVar5);
      }
      return lVar2;
    }
    do {
      if (param_2 <= *(ulong *)(lVar6 + 0x18)) {
        return lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar3 + 8) + lVar4;
    } while (lVar6 != lVar5);
  }
  return 0;
}

