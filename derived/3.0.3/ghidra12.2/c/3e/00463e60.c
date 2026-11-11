
uint * FUN_00463e60(long *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar2 = *param_2;
  lVar3 = param_2[1];
  uVar5 = (int)lVar2 * -0x61c8864f;
  uVar6 = (int)((ulong)lVar2 >> 0x20) * -0x61c8864f;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  uVar6 = uVar5 + 0x9e3779b9 + (uVar5 >> 2) + uVar6 * 0x40 ^ uVar6;
  uVar5 = (int)((ulong)lVar3 >> 0x20) * -0x61c8864f;
  uVar7 = (int)lVar3 * -0x61c8864f;
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = uVar7 + 0x9e3779b9 + (uVar7 >> 2) + uVar5 * 0x40 ^ uVar5;
  lVar8 = param_1[2];
  uVar6 = uVar5 + 0x9e3779b9 + uVar6 * 0x40 + (uVar5 >> 2) ^ uVar6;
  uVar9 = (ulong)(uVar6 & *(uint *)(param_1 + 3));
  iVar4 = *(int *)(lVar8 + uVar9 * 8 + 4);
  while( true ) {
    if (iVar4 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(lVar8 + uVar9 * 8);
    if (((*puVar1 == uVar6) && (*(long *)(*param_1 + (long)iVar4 * 0x18) == lVar2)) &&
       (*(long *)(*param_1 + (long)iVar4 * 0x18 + 8) == lVar3)) break;
    uVar9 = ((long)(uVar9 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
    iVar4 = *(int *)(lVar8 + uVar9 * 8 + 4);
  }
  return puVar1;
}

