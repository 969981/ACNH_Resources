
byte FUN_00333cc0(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_2 < *(int *)(param_1 + 0x44)) {
    puVar6 = *(uint **)(*(long *)(param_1 + 0x58) + (long)param_2 * 8);
    puVar3 = (uint *)(*(long *)(param_1 + 0x50) + (long)param_2 * 0x38);
    if (puVar6 != (uint *)0x0) {
      puVar3 = puVar6;
    }
    if (puVar3 == (uint *)0x0) {
      return 0;
    }
    uVar4 = *puVar3;
    if (0 < (int)uVar4) {
      if (uVar4 == 1) {
        uVar7 = 0;
        bVar5 = 0;
      }
      else {
        uVar7 = 0;
        bVar5 = 0;
        lVar8 = *(long *)(puVar3 + 6);
        do {
          plVar1 = (long *)(lVar8 + 0x90);
          uVar7 = uVar7 + 2;
          plVar2 = (long *)(lVar8 + 0x4c0);
          lVar8 = lVar8 + 0x860;
          bVar5 = (*plVar2 != 0 || *plVar1 != 0) | bVar5;
        } while (((ulong)uVar4 & 0xfffffffe) != uVar7);
      }
      if ((uVar4 & 1) == 0) {
        return bVar5;
      }
      return *(long *)(*(long *)(puVar3 + 6) + uVar7 * 0x430 + 0x90) != 0 | bVar5;
    }
  }
  return 0;
}

