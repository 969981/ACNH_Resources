
uint * FUN_00450730(long *param_1,long *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar6 = *param_2;
  uVar3 = (int)lVar6 * -0x61c8864f;
  uVar4 = (int)((ulong)lVar6 >> 0x20) * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar5 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  lVar7 = param_1[2];
  uVar3 = uVar5 + (uVar5 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3;
  uVar8 = (ulong)(uVar3 & *(uint *)(param_1 + 3));
  iVar2 = *(int *)(lVar7 + uVar8 * 8 + 4);
  while( true ) {
    if (iVar2 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(lVar7 + uVar8 * 8);
    if ((*puVar1 == uVar3) && (*(long *)(*param_1 + (long)iVar2 * 0x18) == lVar6)) break;
    uVar8 = ((long)(uVar8 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
    iVar2 = *(int *)(lVar7 + uVar8 * 8 + 4);
  }
  return puVar1;
}

