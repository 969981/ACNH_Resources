
undefined8 FUN_0095a160(long param_1,short param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  if (0 < (int)*(uint *)(param_1 + 0xde0)) {
    uVar6 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 0xde8) + uVar6 * 2) == param_2) {
        uVar5 = (uint)uVar6;
        if ((int)uVar5 < 0) {
          return 0;
        }
        uVar3 = *(uint *)(param_1 + 0xe20);
        if ((int)uVar3 <= (int)uVar5) {
          return 0;
        }
        if (param_3 == 3) {
          uVar2 = FUN_017c0620(DAT_05293a70);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          uVar3 = *(uint *)(param_1 + 0xe20);
        }
        if (uVar3 <= uVar5) {
          uVar6 = 0;
        }
        lVar4 = *(long *)(param_1 + 0xe28) + uVar6 * 0xf0;
        lVar1 = lVar4 + (ulong)param_3 * 0x28;
        if (5 < param_3) {
          lVar1 = lVar4;
        }
        return *(undefined8 *)(lVar1 + 0x20);
      }
      uVar6 = uVar6 + 1;
    } while (*(uint *)(param_1 + 0xde0) != uVar6);
  }
  return 0;
}

