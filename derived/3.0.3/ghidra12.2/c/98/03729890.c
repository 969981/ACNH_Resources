
void FUN_03729890(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0xe0);
  if (0 < (int)*(uint *)(param_1 + 0xe0)) {
    lVar9 = 0;
    do {
      uVar8 = (uint)lVar9;
      iVar1 = uVar8 + 1;
      while( true ) {
        if (*(int *)(param_1 + 0x1008) <= lVar9) {
          return;
        }
        if (((uint)uVar4 <= uVar8) ||
           (lVar5 = *(long *)(*(long *)(param_1 + 0xe8) + lVar9 * 8),
           (*(ushort *)(lVar5 + 0x114) >> 7 & 1) == 0)) break;
        iVar3 = *(int *)(lVar5 + 0xd0);
        if (iVar3 != -1) {
          iVar2 = *(int *)(param_1 + 0x10);
          if (iVar2 < *(int *)(param_1 + 0x14)) {
            if (iVar2 != 0) {
              puVar6 = *(undefined8 **)(param_1 + 0x18);
              lVar5 = (long)iVar2 << 3;
              do {
                if (*(int *)*puVar6 == iVar3) goto LAB_03729974;
                puVar6 = puVar6 + 1;
                lVar5 = lVar5 + -8;
              } while (lVar5 != 0);
            }
            piVar7 = *(int **)(param_1 + 0x20);
            if (piVar7 != (int *)0x0) {
              *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)piVar7;
            }
            *piVar7 = iVar3;
            if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
              *(int **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = piVar7;
              *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
            }
          }
        }
LAB_03729974:
        if (lVar9 < *(int *)(param_1 + 0xe0)) {
          puVar6 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + lVar9 * 8);
          (**(code **)*puVar6)(puVar6);
          *puVar6 = *(undefined8 *)(param_1 + 0xf0);
          *(undefined8 **)(param_1 + 0xf0) = puVar6;
        }
        if ((-1 < (int)uVar8) && (iVar3 = *(int *)(param_1 + 0xe0), (int)uVar8 < iVar3)) {
          if (iVar1 < iVar3) {
            memmove((void *)(*(long *)(param_1 + 0xe8) + lVar9 * 8),
                    (void *)(*(long *)(param_1 + 0xe8) + (long)iVar1 * 8),
                    -(ulong)((uint)(iVar3 - iVar1) >> 0x1f) & 0xfffffff800000000 |
                    (ulong)(uint)(iVar3 - iVar1) << 3);
            iVar3 = *(int *)(param_1 + 0xe0);
          }
          *(int *)(param_1 + 0xe0) = iVar3 + -1;
        }
        if (lVar9 < *(int *)(param_1 + 0x1008)) {
          puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x1010) + lVar9 * 8);
          *puVar6 = *(undefined8 *)(param_1 + 0x1018);
          *(undefined8 **)(param_1 + 0x1018) = puVar6;
        }
        if ((-1 < (int)uVar8) && (iVar3 = *(int *)(param_1 + 0x1008), (int)uVar8 < iVar3)) {
          if (iVar1 < iVar3) {
            memmove((void *)(*(long *)(param_1 + 0x1010) + lVar9 * 8),
                    (void *)(*(long *)(param_1 + 0x1010) + (long)iVar1 * 8),
                    -(ulong)((uint)(iVar3 - iVar1) >> 0x1f) & 0xfffffff800000000 |
                    (ulong)(uint)(iVar3 - iVar1) << 3);
            iVar3 = *(int *)(param_1 + 0x1008);
          }
          *(int *)(param_1 + 0x1008) = iVar3 + -1;
        }
        uVar4 = (ulong)*(int *)(param_1 + 0xe0);
        if ((long)uVar4 <= lVar9) {
          return;
        }
      }
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < (int)(uint)uVar4);
  }
  return;
}

