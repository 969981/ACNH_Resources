
void FUN_02c34fe0(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((param_1 != 0) && (uVar6 = (ulong)*(uint *)(param_1 + 8), 0 < (int)*(uint *)(param_1 + 8))) {
    do {
      uVar7 = uVar6 - 1;
      if (*(int *)(param_2 + 8) != 0) {
        lVar9 = (long)*(int *)(param_2 + 8) << 3;
        puVar8 = *(undefined8 **)(param_2 + 0x10);
        iVar5 = **(int **)(*(long *)(param_1 + 0x10) + uVar7 * 8);
        do {
          iVar4 = (**(code **)(*(long *)*puVar8 + 0x68))();
          if (iVar4 == iVar5) goto LAB_02c3501c;
          puVar8 = puVar8 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      if ((long)uVar6 <= (long)*(int *)(param_1 + 8)) {
        puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x10) + uVar7 * 8);
        *puVar8 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 **)(param_1 + 0x18) = puVar8;
      }
      iVar5 = (int)uVar7;
      if ((-1 < iVar5) && (iVar4 = *(int *)(param_1 + 8), iVar5 < iVar4)) {
        uVar2 = iVar5 + 1;
        uVar3 = iVar4 - uVar2;
        if (uVar3 != 0 && (int)uVar2 <= iVar4) {
          memmove((void *)(*(long *)(param_1 + 0x10) + uVar7 * 8),
                  (void *)(*(long *)(param_1 + 0x10) + (ulong)uVar2 * 8),
                  -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
          iVar4 = *(int *)(param_1 + 8);
        }
        *(int *)(param_1 + 8) = iVar4 + -1;
      }
LAB_02c3501c:
      bVar1 = 1 < (long)uVar6;
      uVar6 = uVar7;
    } while (bVar1);
  }
  return;
}

