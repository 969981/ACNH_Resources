
undefined8 FUN_00470980(long *param_1,long *param_2)

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
    uVar3 = (int)lVar5 * -0x61c8864f;
    uVar2 = (int)((ulong)lVar5 >> 0x20) * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar3 = (uVar3 + (uVar3 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) & uVar1;
    uVar4 = (ulong)uVar3;
    lVar6 = *(long *)(*param_1 + uVar4 * 0x10);
    while (lVar6 != -1) {
      if (lVar6 == lVar5) goto joined_r0x00470a24;
      uVar3 = (int)uVar4 + 1U & uVar1;
      uVar4 = (ulong)uVar3;
      lVar6 = *(long *)(*param_1 + uVar4 * 0x10);
    }
  }
  uVar3 = uVar1 + 1;
joined_r0x00470a24:
  if ((int)uVar1 < (int)uVar3) {
    return 0x80040200;
  }
  FUN_00470840();
  return 0;
}

