
void FUN_0047cf80(long param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  
  do {
    uVar2 = *(uint *)(param_1 + (long)(param_2 + param_3 >> 1) * 8 + 4);
    iVar9 = param_2;
    iVar3 = param_3;
    do {
      puVar5 = (undefined8 *)(param_1 + -8 + (long)iVar9 * 8);
      do {
        iVar6 = iVar9;
        puVar1 = (uint *)((long)puVar5 + 0xc);
        puVar5 = puVar5 + 1;
        iVar9 = iVar6 + 1;
      } while (*puVar1 < uVar2);
      puVar8 = (undefined8 *)(param_1 + 8 + (long)iVar3 * 8);
      iVar3 = iVar3 + 1;
      do {
        iVar4 = iVar3;
        puVar1 = (uint *)((long)puVar8 + -4);
        puVar8 = puVar8 + -1;
        iVar3 = iVar4 + -1;
      } while (uVar2 < *puVar1);
      iVar9 = iVar6;
      if (iVar6 <= iVar3) {
        if (iVar6 != iVar3) {
          uVar7 = *puVar8;
          *puVar8 = *puVar5;
          *puVar5 = uVar7;
        }
        iVar3 = iVar4 + -2;
        iVar9 = iVar6 + 1;
      }
    } while (iVar9 <= iVar3);
    if (param_2 < iVar3) {
      FUN_0047cf80(param_1);
    }
    param_2 = iVar9;
  } while (iVar9 < param_3);
  return;
}

