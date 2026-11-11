
ulong FUN_004507d0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  
  uVar8 = *(uint *)(param_1 + 3);
  if ((int)(uVar8 * 2) < ((int)param_1[1] + 1) * 3) {
    FUN_0043d3c0(param_1 + 2);
    uVar8 = *(uint *)(param_1 + 3);
  }
  lVar5 = *param_2;
  uVar1 = (int)lVar5 * -0x61c8864f;
  uVar6 = (int)((ulong)lVar5 >> 0x20) * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar2 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  lVar4 = param_1[2];
  uVar1 = uVar2 + (uVar2 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^ uVar1;
  uVar7 = (ulong)(uVar1 & uVar8);
  puVar3 = (uint *)(lVar4 + uVar7 * 8);
  puVar9 = puVar3 + 1;
  uVar6 = *puVar9;
  if (-1 < (int)uVar6) {
    do {
      if ((*puVar3 == uVar1) && (*(long *)(*param_1 + (long)(int)uVar6 * 0x18) == lVar5))
      goto LAB_004508b4;
      uVar7 = ((long)(uVar7 << 3) >> 3) + 1U & (long)(int)uVar8;
      puVar3 = (uint *)(lVar4 + uVar7 * 8);
      puVar9 = puVar3 + 1;
      uVar6 = *puVar9;
    } while (-1 < (int)uVar6);
  }
  uVar8 = *(uint *)(param_1 + 1);
  *puVar3 = uVar1;
  *puVar9 = uVar8;
  uVar6 = *(uint *)(param_1 + 1);
  lVar4 = param_1[2];
LAB_004508b4:
  return (ulong)uVar6 | ((long)puVar3 - lVar4) * 0x20000000;
}

