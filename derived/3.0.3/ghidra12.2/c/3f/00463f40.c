
ulong FUN_00463f40(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  
  uVar8 = *(uint *)(param_1 + 3);
  if ((int)(uVar8 * 2) < ((int)param_1[1] + 1) * 3) {
    FUN_0043d3c0(param_1 + 2);
    uVar8 = *(uint *)(param_1 + 3);
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar7 = (int)lVar1 * -0x61c8864f;
  uVar3 = (int)((ulong)lVar1 >> 0x20) * -0x61c8864f;
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = uVar7 + 0x9e3779b9 + (uVar7 >> 2) + uVar3 * 0x40 ^ uVar3;
  uVar7 = (int)((ulong)lVar2 >> 0x20) * -0x61c8864f;
  uVar4 = (int)lVar2 * -0x61c8864f;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar7 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar7 * 0x40 ^ uVar7;
  lVar6 = param_1[2];
  uVar3 = uVar7 + 0x9e3779b9 + uVar3 * 0x40 + (uVar7 >> 2) ^ uVar3;
  uVar9 = (ulong)(uVar3 & uVar8);
  puVar5 = (uint *)(lVar6 + uVar9 * 8);
  puVar10 = puVar5 + 1;
  uVar7 = *puVar10;
  if (-1 < (int)uVar7) {
    do {
      if (((*puVar5 == uVar3) && (*(long *)(*param_1 + (long)(int)uVar7 * 0x18) == lVar1)) &&
         (*(long *)(*param_1 + (long)(int)uVar7 * 0x18 + 8) == lVar2)) goto LAB_0046406c;
      uVar9 = ((long)(uVar9 << 3) >> 3) + 1U & (long)(int)uVar8;
      puVar5 = (uint *)(lVar6 + uVar9 * 8);
      puVar10 = puVar5 + 1;
      uVar7 = *puVar10;
    } while (-1 < (int)uVar7);
  }
  uVar8 = *(uint *)(param_1 + 1);
  *puVar5 = uVar3;
  *puVar10 = uVar8;
  uVar7 = *(uint *)(param_1 + 1);
  lVar6 = param_1[2];
LAB_0046406c:
  return (ulong)uVar7 | ((long)puVar5 - lVar6) * 0x20000000;
}

