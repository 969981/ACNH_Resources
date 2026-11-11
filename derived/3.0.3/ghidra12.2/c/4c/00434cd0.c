
void FUN_00434cd0(long *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  FUN_0043d310(param_1 + 2);
  iVar2 = (int)param_1[1];
  if ((int)param_1[3] * 2 < iVar2 * 3) {
    FUN_0043d3c0(param_1 + 2);
    iVar2 = (int)param_1[1];
  }
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      uVar1 = *(int *)(*param_1 + lVar3 * 4) * -0x61c8864f;
      lVar4 = param_1[2];
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar5 = (ulong)(*(uint *)(param_1 + 3) & uVar1);
      piVar6 = (int *)(lVar4 + uVar5 * 8 + 4);
      iVar2 = *piVar6;
      while (-1 < iVar2) {
        uVar5 = ((long)(uVar5 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
        piVar6 = (int *)(lVar4 + uVar5 * 8 + 4);
        iVar2 = *piVar6;
      }
      *(uint *)(lVar4 + uVar5 * 8) = uVar1;
      *piVar6 = (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[1]);
  }
  return;
}

