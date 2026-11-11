
uint * FUN_004ca6b0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar2 = FUN_00446840(*param_2,param_2[1] - *param_2);
  uVar5 = *(uint *)(param_1 + 3);
  lVar4 = param_1[2];
  uVar1 = *(uint *)(lVar4 + (ulong)(uVar5 & uVar2) * 8 + 4);
  if (-1 < (int)uVar1) {
    puVar6 = (uint *)(lVar4 + (ulong)(uVar5 & uVar2) * 8);
    do {
      if (*puVar6 == uVar2) {
        uVar3 = FUN_0043a700(*param_2,param_2[1] - *param_2,
                             *(ulong *)(*param_1 +
                                       (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 |
                                       (ulong)uVar1 << 4)) & 0xfffffffffffffffe);
        if ((uVar3 & 1) != 0) {
          return puVar6;
        }
        lVar4 = param_1[2];
        uVar5 = *(uint *)(param_1 + 3);
      }
      puVar6 = (uint *)(lVar4 + (((ulong)((long)puVar6 - lVar4) >> 3) + 1 & (long)(int)uVar5) * 8);
      uVar1 = puVar6[1];
    } while (-1 < (int)uVar1);
  }
  return (uint *)0x0;
}

