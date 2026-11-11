
uint * FUN_004c4a20(long *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = *param_2 * -0x61c8864f;
  uVar4 = param_2[1] * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  lVar5 = param_1[2];
  uVar3 = uVar4 + uVar3 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar3;
  uVar6 = (ulong)(uVar3 & *(uint *)(param_1 + 3));
  iVar2 = *(int *)(lVar5 + uVar6 * 8 + 4);
  while( true ) {
    if (iVar2 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(lVar5 + uVar6 * 8);
    if (((*puVar1 == uVar3) && (*(int *)(*param_1 + (long)iVar2 * 0xc) == *param_2)) &&
       (*(int *)(*param_1 + (long)iVar2 * 0xc + 4) == param_2[1])) break;
    uVar6 = ((long)(uVar6 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
    iVar2 = *(int *)(lVar5 + uVar6 * 8 + 4);
  }
  return puVar1;
}

