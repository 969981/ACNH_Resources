
void FUN_0049b7f0(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  
  do {
    puVar6 = (uint *)(param_1 + (long)(param_2 + param_3 >> 1) * 8);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    iVar9 = param_2;
    iVar5 = param_3;
    do {
      puVar6 = (uint *)(param_1 + (long)iVar9 * 8);
      uVar3 = *puVar6;
      if (uVar1 <= uVar3) goto LAB_0049b844;
      do {
        do {
          iVar9 = iVar9 + 1;
          puVar6 = puVar6 + 2;
          uVar3 = *puVar6;
        } while (uVar3 < uVar1);
LAB_0049b844:
      } while ((uVar3 == uVar1) && (puVar6[1] < uVar2));
      puVar7 = (uint *)(param_1 + (long)iVar5 * 8);
      bVar4 = *puVar7 == uVar1;
      if (*puVar7 <= uVar1) goto LAB_0049b874;
      do {
        do {
          iVar5 = iVar5 + -1;
          puVar7 = puVar7 + -2;
          bVar4 = *puVar7 == uVar1;
        } while (uVar1 <= *puVar7 && !bVar4);
LAB_0049b874:
      } while ((bVar4) && (uVar2 < puVar7[1]));
      if (iVar9 <= iVar5) {
        if (iVar9 != iVar5) {
          uVar8 = *(undefined8 *)puVar7;
          *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
          *(undefined8 *)puVar6 = uVar8;
        }
        iVar5 = iVar5 + -1;
        iVar9 = iVar9 + 1;
      }
    } while (iVar9 <= iVar5);
    if (param_2 < iVar5) {
      FUN_0049b7f0(param_1);
    }
    param_2 = iVar9;
  } while (iVar9 < param_3);
  return;
}

