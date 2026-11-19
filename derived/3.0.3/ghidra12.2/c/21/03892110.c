
void FUN_03892110(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  
  puVar4 = PTR_DAT_04bcb7d8;
  if (-1 < param_3) {
    if (0 < *(int *)(param_1 + 0x540)) {
      lVar12 = 0;
      plVar10 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68);
      do {
        while( true ) {
          uVar5 = (**(code **)(*plVar10 + 0x100))
                            (plVar10,*(undefined8 *)(*(long *)(param_1 + 0x548) + lVar12 * 8));
          uVar1 = *(uint *)(param_1 + 0x540);
          if ((uVar5 & 1) != 0) break;
          iVar11 = (int)lVar12;
          if (iVar11 < (int)uVar1) {
            puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x548) + lVar12 * 8);
            *puVar7 = *(undefined8 *)(param_1 + 0x550);
            *(undefined8 **)(param_1 + 0x550) = puVar7;
          }
          if (iVar11 < 0) {
            iVar6 = *(int *)(param_1 + 0x540);
          }
          else {
            iVar6 = *(int *)(param_1 + 0x540);
            if (iVar11 < iVar6) {
              uVar1 = iVar11 + 1;
              uVar3 = iVar6 - uVar1;
              if (uVar3 != 0 && (int)uVar1 <= iVar6) {
                memmove((void *)(*(long *)(param_1 + 0x548) + lVar12 * 8),
                        (void *)(*(long *)(param_1 + 0x548) + (ulong)uVar1 * 8),
                        -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
                iVar6 = *(int *)(param_1 + 0x540);
              }
              iVar6 = iVar6 + -1;
              *(int *)(param_1 + 0x540) = iVar6;
            }
          }
          lVar12 = 0;
          if (iVar6 < 1) goto LAB_0389229c;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)uVar1);
      if (0 < (int)uVar1) {
        plVar10 = *(long **)(param_1 + 0x548);
        uVar5 = (ulong)uVar1;
        do {
          plVar9 = (long *)*plVar10;
          if (((*plVar9 == *param_2) && ((char)plVar9[1] == (char)param_2[1])) &&
             (*(char *)((long)plVar9 + 9) == *(char *)((long)param_2 + 9))) {
            lVar12 = *plVar10;
            if (lVar12 != 0) {
              if (*(long *)(lVar12 + 0x10) == param_3) {
                return;
              }
              cVar2 = *(char *)(lVar12 + 0x18) + -1;
              *(char *)(lVar12 + 0x18) = cVar2;
              if (cVar2 == '\0') {
                *(undefined1 *)(*(long *)(*(long *)puVar4 + 0x68) + 0x8a) = 1;
                *(long *)(lVar12 + 0x10) = param_3;
                *(undefined1 *)(lVar12 + 0x18) = 5;
                return;
              }
              return;
            }
            break;
          }
          plVar10 = plVar10 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
LAB_0389229c:
    plVar10 = *(long **)(param_1 + 0x550);
    if (plVar10 != (long *)0x0) {
      *(long *)(param_1 + 0x550) = *plVar10;
    }
    *plVar10 = 0;
    *(undefined2 *)(plVar10 + 1) = 0;
    plVar10[2] = 0;
    *(undefined1 *)(plVar10 + 3) = 5;
    if (*(int *)(param_1 + 0x540) < *(int *)(param_1 + 0x544)) {
      *(long **)(*(long *)(param_1 + 0x548) + (long)*(int *)(param_1 + 0x540) * 8) = plVar10;
      *(int *)(param_1 + 0x540) = *(int *)(param_1 + 0x540) + 1;
    }
    lVar8 = *param_2;
    lVar12 = param_2[1];
    plVar10[2] = param_3;
    *(undefined1 *)(plVar10 + 3) = 5;
    *(short *)(plVar10 + 1) = (short)lVar12;
    *plVar10 = lVar8;
    *(undefined1 *)(*(long *)(*(long *)puVar4 + 0x68) + 0x8a) = 1;
  }
  return;
}

