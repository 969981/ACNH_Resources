
uint * FUN_0047c1e0(long *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *param_2 * -0x61c8864f;
  lVar4 = param_1[2];
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar5 = (ulong)(*(uint *)(param_1 + 3) & uVar3);
  uVar2 = *(uint *)(lVar4 + uVar5 * 8 + 4);
  while( true ) {
    if ((int)uVar2 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(lVar4 + uVar5 * 8);
    if ((*puVar1 == uVar3) &&
       (*(int *)(*param_1 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3)) ==
        *param_2)) break;
    uVar5 = ((long)(uVar5 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
    uVar2 = *(uint *)(lVar4 + uVar5 * 8 + 4);
  }
  return puVar1;
}

