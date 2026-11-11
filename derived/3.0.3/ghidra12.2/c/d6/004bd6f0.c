
void FUN_004bd6f0(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  int iVar8;
  
  do {
    uVar3 = *(ulong *)(param_1 + (long)(param_2 + param_3 >> 1) * 8);
    iVar8 = param_2;
    iVar1 = param_3;
    do {
      puVar6 = (ulong *)(param_1 + (long)iVar8 * 8);
      do {
        iVar4 = iVar8;
        puVar5 = puVar6;
        puVar6 = puVar5 + 1;
        iVar8 = iVar4 + 1;
      } while (*puVar5 < uVar3);
      puVar6 = (ulong *)(param_1 + 8 + (long)iVar1 * 8);
      iVar1 = iVar1 + 1;
      do {
        iVar2 = iVar1;
        puVar6 = puVar6 + -1;
        uVar7 = *puVar6;
        iVar1 = iVar2 + -1;
      } while (uVar3 < uVar7);
      iVar8 = iVar4;
      if (iVar4 <= iVar1) {
        if (iVar4 != iVar1) {
          *puVar6 = *puVar5;
          *puVar5 = uVar7;
        }
        iVar1 = iVar2 + -2;
        iVar8 = iVar4 + 1;
      }
    } while (iVar8 <= iVar1);
    if (param_2 < iVar1) {
      FUN_004bd6f0(param_1);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}

