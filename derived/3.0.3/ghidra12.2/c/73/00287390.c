
long FUN_00287390(long param_1,ulong param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar3 = (long *)(param_1 + 0xd8);
  lVar6 = *plVar3;
  lVar4 = 0;
  lVar5 = (long)*(int *)(param_1 + 0xec);
  if (*(int *)(param_1 + 0xe8) < 1) {
    lVar6 = 0;
  }
  lVar7 = lVar6 - lVar5;
  if (lVar6 != 0 && lVar7 != 0) {
    lVar6 = -lVar5;
    if (param_3 == 0) {
      do {
        if (param_2 <= *(ulong *)(lVar7 + 0x18)) {
          return lVar7;
        }
        lVar4 = 0;
      } while ((*(long **)(lVar7 + lVar5) != plVar3) &&
              (lVar7 = (long)*(long **)(lVar7 + lVar5) + lVar6, lVar7 != 0));
    }
    else if (param_3 == 1) {
      lVar4 = 0;
      do {
        if ((param_2 <= *(ulong *)(lVar7 + 0x18)) &&
           ((lVar4 == 0 || (*(ulong *)(lVar7 + 0x18) < *(ulong *)(lVar4 + 0x18))))) {
          lVar4 = lVar7;
        }
      } while ((*(long **)(lVar7 + lVar5) != plVar3) &&
              (lVar7 = (long)*(long **)(lVar7 + lVar5) + lVar6, lVar7 != 0));
    }
    else if (param_3 == 2) {
      lVar4 = 0;
      do {
        if ((param_2 <= *(ulong *)(lVar7 + 0x18)) &&
           ((lVar4 == 0 || (*(ulong *)(lVar4 + 0x18) < *(ulong *)(lVar7 + 0x18))))) {
          lVar4 = lVar7;
        }
      } while ((*(long **)(lVar7 + lVar5) != plVar3) &&
              (lVar7 = (long)*(long **)(lVar7 + lVar5) + lVar6, lVar7 != 0));
    }
    else {
      lVar4 = 0;
      do {
        lVar2 = lVar7;
        if (lVar4 != 0) {
          lVar2 = lVar4;
        }
        puVar1 = (undefined8 *)(lVar7 + lVar5);
        if (param_2 <= *(ulong *)(lVar7 + 0x18)) {
          lVar4 = lVar2;
        }
        lVar7 = (long)*puVar1 + lVar6;
      } while ((long *)*puVar1 != plVar3 && lVar7 != 0);
    }
  }
  return lVar4;
}

