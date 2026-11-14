
bool FUN_01cf6220(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(char *)((long)param_1 + 0x29) != *(char *)((long)param_2 + 0x29)) {
    return false;
  }
  if (((((*(char *)((long)param_1 + 0x29) == '\0') || ((char)param_1[10] == (char)param_2[10])) &&
       ((char)param_1[2] == (char)param_2[2])) &&
      (((char)param_1[2] == '\0' || (param_1[1] == param_2[1])))) && (*param_1 == *param_2)) {
    iVar2 = FUN_00a7f6d4((long)param_2 + 9);
    uVar5 = 0;
    if (iVar2 != -1) {
      uVar5 = (long)iVar2;
    }
    iVar2 = FUN_00a7f6d4((long)param_1 + 9);
    uVar3 = 0;
    if (iVar2 != -1) {
      uVar3 = (long)iVar2;
    }
    if (uVar3 == uVar5) {
      if (uVar5 != 0) {
        uVar3 = 0;
        uVar4 = 1;
        do {
          if (*(char *)((long)param_1 + 9 + uVar3) != *(char *)((long)param_2 + 9 + uVar3)) {
            return false;
          }
          bVar1 = uVar4 < uVar5;
          uVar3 = uVar4;
          uVar4 = (ulong)((int)uVar4 + 1);
        } while (bVar1);
      }
      uVar3 = FUN_01cf63c0((long)param_2 + 0x2a);
      uVar5 = 0;
      if ((int)uVar3 != -1) {
        uVar5 = uVar3;
      }
      uVar4 = FUN_01cf63c0((long)param_1 + 0x2a);
      uVar3 = 0;
      if ((int)uVar4 != -1) {
        uVar3 = uVar4;
      }
      if (uVar3 == uVar5) {
        if (uVar5 != 0) {
          uVar3 = 0;
          uVar4 = 1;
          do {
            if (*(char *)((long)param_1 + 0x2a + uVar3) != *(char *)((long)param_2 + 0x2a + uVar3))
            {
              return false;
            }
            bVar1 = uVar4 < uVar5;
            uVar3 = uVar4;
            uVar4 = (ulong)((int)uVar4 + 1);
          } while (bVar1);
        }
        if ((((char)param_1[0x1d] == (char)param_2[0x1d]) &&
            (*(long *)(param_1 + 0x1e) == *(long *)(param_2 + 0x1e))) &&
           (uVar5 = FUN_01ce5a60(param_1 + 0x20,param_2 + 0x20), (uVar5 & 1) != 0)) {
          return *(long *)(param_1 + 0x22) == *(long *)(param_2 + 0x22);
        }
      }
    }
  }
  return false;
}

