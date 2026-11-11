
void FUN_0054a860(byte *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  *param_1 = 1;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x20) == 0) {
      bVar3 = 1;
    }
    else {
      plVar4 = *(long **)(param_2 + 0x18);
      uVar2 = (long)*(int *)(param_2 + 0x20) * 8 - 8;
      uVar1 = (uVar2 >> 3) + 1;
      bVar3 = 1;
      uVar6 = uVar1 & 1;
      if (uVar2 != 0) {
        lVar7 = uVar6 - uVar1;
        plVar5 = plVar4;
        do {
          plVar4 = plVar5 + 2;
          lVar7 = lVar7 + 2;
          bVar3 = bVar3 & *(char *)(*plVar5 + 0x138) != '\0' & *(char *)(plVar5[1] + 0x138) != '\0';
          plVar5 = plVar4;
        } while (lVar7 != 0);
      }
      if (uVar6 != 0) {
        bVar3 = bVar3 & *(char *)(*plVar4 + 0x138) != '\0';
      }
    }
    *param_1 = bVar3;
  }
  return;
}

