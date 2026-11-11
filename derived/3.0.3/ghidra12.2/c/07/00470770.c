
undefined8 FUN_00470770(long *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if (0 < (int)uVar1) {
    lVar4 = *param_2;
    uVar2 = (int)lVar4 * -0x61c8864f;
    uVar3 = (int)((ulong)lVar4 >> 0x20) * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar6 = (ulong)((uVar2 + (uVar2 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3) & uVar1);
    lVar7 = *(long *)(*param_1 + uVar6 * 0x10);
    if (lVar7 != -1) {
      if (lVar7 != lVar4) {
        do {
          uVar6 = (ulong)((int)uVar6 + 1U & uVar1);
          lVar7 = *(long *)(*param_1 + uVar6 * 0x10);
          if (lVar7 == -1) goto LAB_00470810;
        } while (lVar7 != lVar4);
      }
      iVar5 = (int)uVar6;
      goto joined_r0x00470818;
    }
  }
LAB_00470810:
  uVar6 = (long)(int)uVar1 + 1;
  iVar5 = (int)uVar6;
joined_r0x00470818:
  if ((int)uVar1 < iVar5) {
    return 0x80040200;
  }
  *param_3 = *(undefined8 *)(*param_1 + ((long)(uVar6 << 0x20) >> 0x1c) + 8);
  return 0;
}

