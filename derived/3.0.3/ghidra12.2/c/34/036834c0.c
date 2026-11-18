
void FUN_036834c0(undefined8 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  
  FUN_03681cd0(*param_1);
  piVar8 = (int *)*param_1;
  iVar1 = *piVar8;
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = *(int *)(param_2 + 0x10) / iVar1;
  }
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(int *)(param_2 + 0x20) / iVar1;
  }
  if ((int)uVar9 <= (int)uVar2) {
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = *(int *)(param_2 + 0x14) / iVar1;
    }
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar4 = *(int *)(param_2 + 0x24) / iVar1;
    }
    if ((int)uVar3 <= iVar4) {
      do {
        uVar10 = uVar3;
        do {
          lVar6 = (long)(int)(uVar9 + piVar8[2] * uVar10);
          if ((uint)piVar8[3] <= uVar10 || (uint)piVar8[2] <= uVar9) {
            lVar6 = 0;
          }
          lVar7 = (long)(int)(uVar9 + piVar8[6] * uVar10);
          if ((uint)piVar8[7] <= uVar10 || (uint)piVar8[6] <= uVar9) {
            lVar7 = 0;
          }
          FUN_036817a0(*(long *)(piVar8 + 4) + lVar6 * 0x23c,*(long *)(piVar8 + 8) + lVar7 * 0x23c);
          uVar10 = uVar10 + 1;
        } while (iVar4 + 1U != uVar10);
        bVar5 = uVar9 != uVar2;
        uVar9 = uVar9 + 1;
      } while (bVar5);
    }
  }
  return;
}

