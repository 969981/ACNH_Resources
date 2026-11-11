
ulong FUN_00470530(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if (0 < (int)uVar1) {
    lVar5 = *param_2;
    uVar2 = (int)lVar5 * -0x61c8864f;
    uVar3 = (int)((ulong)lVar5 >> 0x20) * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar4 = (ulong)((uVar2 + (uVar2 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3) & uVar1);
    lVar6 = *(long *)(*param_1 + uVar4 * 0x10);
    if (lVar6 != -1) {
      if (lVar6 != lVar5) {
        do {
          uVar4 = (ulong)((int)uVar4 + 1U & uVar1);
          lVar6 = *(long *)(*param_1 + uVar4 * 0x10);
          if (lVar6 == -1) goto LAB_004705bc;
        } while (lVar6 != lVar5);
      }
      return uVar4;
    }
  }
LAB_004705bc:
  return (long)(int)uVar1 + 1;
}

