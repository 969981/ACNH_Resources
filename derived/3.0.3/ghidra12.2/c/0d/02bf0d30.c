
void FUN_02bf0d30(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x3f0);
  if (0 < (int)uVar2) {
    uVar5 = 0;
    do {
      uVar1 = uVar5;
      if (*(uint *)(param_1 + 0x3f0) <= uVar5) {
        uVar1 = 0;
      }
      plVar4 = *(long **)(*(long *)(param_1 + 0x3f8) + (ulong)uVar1 * 8);
      if ((plVar4 != (long *)0x0) && ((long *)plVar4[0x36] != (long *)0x0)) {
        uVar3 = (**(code **)(*(long *)plVar4[0x36] + 0x50))();
        (**(code **)(*(long *)plVar4[0x36] + 0x20))((long *)plVar4[0x36],param_2 & 1);
        if (((uVar3 & 1) != 0) && ((param_2 & 1) != 0)) {
          (**(code **)(*plVar4 + 0xa8))(plVar4);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  return;
}

