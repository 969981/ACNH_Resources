
uint * FUN_004ba320(long *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar5 = *param_2;
  uVar2 = (int)lVar5 * -0x61c8864f;
  uVar3 = (int)((ulong)lVar5 >> 0x20) * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar4 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  lVar6 = param_1[2];
  uVar2 = uVar4 + (uVar4 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2;
  uVar7 = (ulong)(uVar2 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar6 + uVar7 * 8 + 4);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(lVar6 + uVar7 * 8);
    if ((*puVar1 == uVar2) &&
       (*(long *)(*param_1 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4)) ==
        lVar5)) break;
    uVar7 = ((long)(uVar7 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar6 + uVar7 * 8 + 4);
  }
  return puVar1;
}

